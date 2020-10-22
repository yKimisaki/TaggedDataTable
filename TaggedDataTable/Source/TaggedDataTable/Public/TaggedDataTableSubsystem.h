#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TaggedDataTableSubsystem.generated.h"

class UDataTable;

UCLASS()
class TAGGEDDATATABLE_API UTaggedDataTableSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:

	UPROPERTY()
		UDataTable* MasterDataTable;

	int SelectDataTablesByTag(const FString& ContextString, const FGameplayTag& GameplayTag, TArray<UDataTable*>& OutDataTables);
	
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable)
		int GetAllDataTables(const FString& ContextString, const FGameplayTag& GameplayTag, TArray<UDataTable*>& OutTableArray);

	template<class T>
	int GetAllRows(const FString& ContextString, const FGameplayTag& GameplayTag, TArray<T*>& OutRowArray)
	{
		TArray<UDataTable*> MatchedDataTables;
		if (SelectDataTablesByTag(ContextString, GameplayTag, MatchedDataTables) == 0)
		{
			return 0;
		}

		for (auto MatchedDataTable : MatchedDataTables)
		{
			MatchedDataTable->GetAllRows<T>(ContextString, OutRowArray);
		}

		return OutRowArray.Num();
	}

	template<class TKey, class TElement>
	int GetAsMap(const FString& ContextString, const FGameplayTag& GameplayTag, const TFunction<TKey(const FName&, const TElement&)>& KeySelector, TMap<TKey, TElement>& OutMap)
	{
		TArray<UDataTable*> MatchedDataTables;
		if (SelectDataTablesByTag(ContextString, GameplayTag, MatchedDataTables) == 0)
		{
			return 0;
		}

		for (auto MatchedDataTable : MatchedDataTables)
		{
			MatchedDataTable->ForeachRow<TElement>(ContextString, [&OutMap, &KeySelector](const FName& RowId, const TElement& Value)
				{
					OutMap.Add(KeySelector(RowId, Value), Value);
				});
		}

		return OutMap.Num();
	}

	template<class TKey, class TElement>
	int GetAsMap(const FString& ContextString, const FGameplayTag& GameplayTag, const TFunction<TKey(const FName&, const TElement&)>& KeySelector, TMap<TKey, TArray<TElement>>& OutMap)
	{
		TArray<UDataTable*> MatchedDataTables;
		if (SelectDataTablesByTag(ContextString, GameplayTag, MatchedDataTables) == 0)
		{
			return 0;
		}

		for (auto MatchedDataTable : MatchedDataTables)
		{
			MatchedDataTable->ForeachRow<TElement>(ContextString, [&OutMap, &KeySelector](const FName& RowId, const TElement& Value)
				{
					const TKey& Key = KeySelector(RowId, Value);
					if (!OutMap.Contains(Key))
						OutMap.Add(Key, TArray<TElement>());
					OutMap[Key].Add(Value);
				});
		}

		return OutMap.Num();
	}
};