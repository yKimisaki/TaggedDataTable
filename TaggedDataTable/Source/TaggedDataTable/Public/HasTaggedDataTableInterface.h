#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "HasTaggedDataTableInterface.generated.h"

UINTERFACE()
class TAGGEDDATATABLE_API UHasTaggedDataTableInterface : public UInterface
{
	GENERATED_BODY()
};

class TAGGEDDATATABLE_API IHasTaggedDataTableInterface
{
	GENERATED_BODY()

public:

	virtual TSoftObjectPtr<class UDataTable> GetTaggedDataTable() = 0;

};