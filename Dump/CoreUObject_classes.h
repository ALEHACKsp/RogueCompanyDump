// Class CoreUObject.Object
// Size: 0x28 (Inherited: 0x00)
struct UObject {
	char UnknownData_0[0x28]; // 0x00(0x28)

	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x70 (Inherited: 0x28)
struct UGCObjectReferencer : public UObject {
	char UnknownData_28[0x48]; // 0x28(0x48)
};

// Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : public UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
};

// Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.Struct
// Size: 0xb0 (Inherited: 0x30)
struct UStruct : public UField {
	char UnknownData_30[0x80]; // 0x30(0x80)
};

// Class CoreUObject.ScriptStruct
// Size: 0xc0 (Inherited: 0xb0)
struct UScriptStruct : public UStruct {
	char UnknownData_B0[0x10]; // 0xb0(0x10)
};

// Class CoreUObject.Package
// Size: 0xa0 (Inherited: 0x28)
struct UPackage : public UObject {
	char UnknownData_28[0x78]; // 0x28(0x78)
};

// Class CoreUObject.Class
// Size: 0x230 (Inherited: 0xb0)
struct UClass : public UStruct {
	char UnknownData_B0[0x180]; // 0xb0(0x180)
};

// Class CoreUObject.Function
// Size: 0xe0 (Inherited: 0xb0)
struct UFunction : public UStruct {
	char UnknownData_B0[0x30]; // 0xb0(0x30)
};

// Class CoreUObject.SparseDelegateFunction
// Size: 0xf0 (Inherited: 0xe0)
struct USparseDelegateFunction : public UDelegateFunction {
	char UnknownData_E0[0x10]; // 0xe0(0x10)
};

// Class CoreUObject.DynamicClass
// Size: 0x2b0 (Inherited: 0x230)
struct UDynamicClass : public UClass {
	char UnknownData_230[0x80]; // 0x230(0x80)
};

// Class CoreUObject.PackageMap
// Size: 0xe0 (Inherited: 0x28)
struct UPackageMap : public UObject {
	char UnknownData_28[0xb8]; // 0x28(0xb8)
};

// Class CoreUObject.Enum
// Size: 0x60 (Inherited: 0x30)
struct UEnum : public UField {
	char UnknownData_30[0x30]; // 0x30(0x30)
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x3e8 (Inherited: 0x230)
struct ULinkerPlaceholderClass : public UClass {
	char UnknownData_230[0x1b8]; // 0x230(0x1b8)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xf0 (Inherited: 0x28)
struct ULinkerPlaceholderExportObject : public UObject {
	char UnknownData_28[0xc8]; // 0x28(0xc8)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x298 (Inherited: 0xe0)
struct ULinkerPlaceholderFunction : public UFunction {
	char UnknownData_E0[0x1b8]; // 0xe0(0x1b8)
};

// Class CoreUObject.MetaData
// Size: 0xc8 (Inherited: 0x28)
struct UMetaData : public UObject {
	char UnknownData_28[0xa0]; // 0x28(0xa0)
};

// Class CoreUObject.ObjectRedirector
// Size: 0x30 (Inherited: 0x28)
struct UObjectRedirector : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.Property
// Size: 0x70 (Inherited: 0x30)
struct UProperty : public UField {
	char UnknownData_30[0x40]; // 0x30(0x40)
};

// Class CoreUObject.EnumProperty
// Size: 0x80 (Inherited: 0x70)
struct UEnumProperty : public UProperty {
	char UnknownData_70[0x10]; // 0x70(0x10)
};

// Class CoreUObject.ArrayProperty
// Size: 0x78 (Inherited: 0x70)
struct UArrayProperty : public UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x78 (Inherited: 0x70)
struct UObjectPropertyBase : public UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.BoolProperty
// Size: 0x78 (Inherited: 0x70)
struct UBoolProperty : public UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ByteProperty
// Size: 0x78 (Inherited: 0x70)
struct UByteProperty : public UNumericProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ClassProperty
// Size: 0x80 (Inherited: 0x78)
struct UClassProperty : public UObjectProperty {
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.DelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UDelegateProperty : public UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.InterfaceProperty
// Size: 0x78 (Inherited: 0x70)
struct UInterfaceProperty : public UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.MapProperty
// Size: 0x98 (Inherited: 0x70)
struct UMapProperty : public UProperty {
	char UnknownData_70[0x28]; // 0x70(0x28)
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UMulticastDelegateProperty : public UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.SetProperty
// Size: 0x90 (Inherited: 0x70)
struct USetProperty : public UProperty {
	char UnknownData_70[0x20]; // 0x70(0x20)
};

// Class CoreUObject.SoftClassProperty
// Size: 0x80 (Inherited: 0x78)
struct USoftClassProperty : public USoftObjectProperty {
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.StructProperty
// Size: 0x78 (Inherited: 0x70)
struct UStructProperty : public UProperty {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.PropertyWrapper
// Size: 0x30 (Inherited: 0x28)
struct UPropertyWrapper : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

