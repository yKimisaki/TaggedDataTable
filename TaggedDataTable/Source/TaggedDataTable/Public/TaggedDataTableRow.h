#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "TaggedDataTableRow.generated.h"

USTRUCT()
struct TAGGEDDATATABLE_API FTaggedDataTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
		FGameplayTagContainer GameplayTagContainer;
	
	UPROPERTY(EditDefaultsOnly)
		TSoftObjectPtr<UDataTable> DataTable;
};