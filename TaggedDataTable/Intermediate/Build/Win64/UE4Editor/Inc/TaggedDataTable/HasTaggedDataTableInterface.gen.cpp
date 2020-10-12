// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaggedDataTable/Public/HasTaggedDataTableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasTaggedDataTableInterface() {}
// Cross Module References
	TAGGEDDATATABLE_API UClass* Z_Construct_UClass_UHasTaggedDataTableInterface_NoRegister();
	TAGGEDDATATABLE_API UClass* Z_Construct_UClass_UHasTaggedDataTableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TaggedDataTable();
// End Cross Module References
	void UHasTaggedDataTableInterface::StaticRegisterNativesUHasTaggedDataTableInterface()
	{
	}
	UClass* Z_Construct_UClass_UHasTaggedDataTableInterface_NoRegister()
	{
		return UHasTaggedDataTableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHasTaggedDataTableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasTaggedDataTableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TaggedDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasTaggedDataTableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HasTaggedDataTableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasTaggedDataTableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHasTaggedDataTableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHasTaggedDataTableInterface_Statics::ClassParams = {
		&UHasTaggedDataTableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHasTaggedDataTableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasTaggedDataTableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasTaggedDataTableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHasTaggedDataTableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHasTaggedDataTableInterface, 3245040005);
	template<> TAGGEDDATATABLE_API UClass* StaticClass<UHasTaggedDataTableInterface>()
	{
		return UHasTaggedDataTableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHasTaggedDataTableInterface(Z_Construct_UClass_UHasTaggedDataTableInterface, &UHasTaggedDataTableInterface::StaticClass, TEXT("/Script/TaggedDataTable"), TEXT("UHasTaggedDataTableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasTaggedDataTableInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
