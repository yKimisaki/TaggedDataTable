#include "TaggedDataTableSubsystem.h"
#include "Engine/DataTable.h"
#include "UObject/SoftObjectPtr.h"
#include "TaggedDataTable/Public/HasTaggedDataTableInterface.h"
#include "TaggedDataTable/Public/TaggedDataTableRow.h"

void UTaggedDataTableSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	IHasTaggedDataTableInterface* HasTaggedDataTable = Cast<IHasTaggedDataTableInterface>(GetGameInstance());
	if (HasTaggedDataTable != nullptr)
	{
		TSoftObjectPtr<UDataTable> TaggedDataTablePtr = HasTaggedDataTable->GetTaggedDataTable();
		if (TaggedDataTablePtr.IsValid())
		{
			MasterDataTable = TaggedDataTablePtr.Get();
		}
		else
		{
			MasterDataTable = HasTaggedDataTable->GetTaggedDataTable().LoadSynchronous();
		}
	}

	Super::Initialize(Collection);
}

void UTaggedDataTableSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

int UTaggedDataTableSubsystem::SelectDataTablesByTag(const FString& ContextString, const FGameplayTag& GameplayTag, TArray<UDataTable*>& OutDataTables)
{
	if (!IsValid(MasterDataTable))
	{
		return 0;
	}

	TArray<FTaggedDataTableRow*> TaggedDataTables;
	MasterDataTable->GetAllRows<FTaggedDataTableRow>(ContextString, TaggedDataTables);
	
	int32 Count = 0;
	for (auto TaggedDataTable : TaggedDataTables)
	{
		if (TaggedDataTable->GameplayTagContainer.HasTag(GameplayTag))
		{
			TSoftObjectPtr<UDataTable> DataTablePtr = TaggedDataTable->DataTable;
			if (DataTablePtr.IsValid())
			{
				OutDataTables.Add(DataTablePtr.Get());
			}
			else
			{
				OutDataTables.Add(DataTablePtr.LoadSynchronous());
			}
		}
	}

	return OutDataTables.Num();
}