// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaggedDataTable/Public/TaggedDataTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaggedDataTableRow() {}
// Cross Module References
	TAGGEDDATATABLE_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedDataTableRow();
	UPackage* Z_Construct_UPackage__Script_TaggedDataTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FTaggedDataTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TAGGEDDATATABLE_API uint32 Get_Z_Construct_UScriptStruct_FTaggedDataTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedDataTableRow, Z_Construct_UPackage__Script_TaggedDataTable(), TEXT("TaggedDataTableRow"), sizeof(FTaggedDataTableRow), Get_Z_Construct_UScriptStruct_FTaggedDataTableRow_Hash());
	}
	return Singleton;
}
template<> TAGGEDDATATABLE_API UScriptStruct* StaticStruct<FTaggedDataTableRow>()
{
	return FTaggedDataTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaggedDataTableRow(FTaggedDataTableRow::StaticStruct, TEXT("/Script/TaggedDataTable"), TEXT("TaggedDataTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_TaggedDataTable_StaticRegisterNativesFTaggedDataTableRow
{
	FScriptStruct_TaggedDataTable_StaticRegisterNativesFTaggedDataTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TaggedDataTableRow")),new UScriptStruct::TCppStructOps<FTaggedDataTableRow>);
	}
} ScriptStruct_TaggedDataTable_StaticRegisterNativesFTaggedDataTableRow;
	struct Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaggedDataTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedDataTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "TaggedDataTableRow" },
		{ "ModuleRelativePath", "Public/TaggedDataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedDataTableRow, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_GameplayTagContainer_MetaData[] = {
		{ "Category", "TaggedDataTableRow" },
		{ "ModuleRelativePath", "Public/TaggedDataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedDataTableRow, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_GameplayTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_GameplayTagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::NewProp_GameplayTagContainer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TaggedDataTable,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TaggedDataTableRow",
		sizeof(FTaggedDataTableRow),
		alignof(FTaggedDataTableRow),
		Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaggedDataTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaggedDataTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TaggedDataTable();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaggedDataTableRow"), sizeof(FTaggedDataTableRow), Get_Z_Construct_UScriptStruct_FTaggedDataTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaggedDataTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaggedDataTableRow_Hash() { return 3546750723U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
