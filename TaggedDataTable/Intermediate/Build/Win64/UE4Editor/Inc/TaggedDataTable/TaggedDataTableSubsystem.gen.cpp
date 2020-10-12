// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaggedDataTable/Public/TaggedDataTableSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaggedDataTableSubsystem() {}
// Cross Module References
	TAGGEDDATATABLE_API UClass* Z_Construct_UClass_UTaggedDataTableSubsystem_NoRegister();
	TAGGEDDATATABLE_API UClass* Z_Construct_UClass_UTaggedDataTableSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_TaggedDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UTaggedDataTableSubsystem::StaticRegisterNativesUTaggedDataTableSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UTaggedDataTableSubsystem_NoRegister()
	{
		return UTaggedDataTableSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTaggedDataTableSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TaggedDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TaggedDataTableSubsystem.h" },
		{ "ModuleRelativePath", "Public/TaggedDataTableSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::NewProp_MasterDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaggedDataTableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::NewProp_MasterDataTable = { "MasterDataTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaggedDataTableSubsystem, MasterDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::NewProp_MasterDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::NewProp_MasterDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::NewProp_MasterDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaggedDataTableSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::ClassParams = {
		&UTaggedDataTableSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaggedDataTableSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaggedDataTableSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaggedDataTableSubsystem, 4272887857);
	template<> TAGGEDDATATABLE_API UClass* StaticClass<UTaggedDataTableSubsystem>()
	{
		return UTaggedDataTableSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaggedDataTableSubsystem(Z_Construct_UClass_UTaggedDataTableSubsystem, &UTaggedDataTableSubsystem::StaticClass, TEXT("/Script/TaggedDataTable"), TEXT("UTaggedDataTableSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaggedDataTableSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
