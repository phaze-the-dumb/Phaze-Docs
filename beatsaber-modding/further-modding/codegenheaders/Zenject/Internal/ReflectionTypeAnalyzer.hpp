// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionTypeAnalyzer : public ::Il2CppObject {
    public:
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c
    class $$c;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_1
    class $$c__DisplayClass7_1;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Creating value type constructor for type: ReflectionTypeAnalyzer
    ReflectionTypeAnalyzer() noexcept {}
    // Get static field: static private readonly System.Collections.Generic.HashSet`1<System.Type> _injectAttributeTypes
    static System::Collections::Generic::HashSet_1<System::Type*>* _get__injectAttributeTypes();
    // Set static field: static private readonly System.Collections.Generic.HashSet`1<System.Type> _injectAttributeTypes
    static void _set__injectAttributeTypes(System::Collections::Generic::HashSet_1<System::Type*>* value);
    // static private System.Void .cctor()
    // Offset: 0x166BD14
    static void _cctor();
    // static public System.Void AddCustomInjectAttribute()
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AddCustomInjectAttribute() {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ReflectionTypeAnalyzer", "AddCustomInjectAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public System.Void AddCustomInjectAttribute(System.Type type)
    // Offset: 0x166BDE8
    static void AddCustomInjectAttribute(System::Type* type);
    // static public Zenject.Internal.ReflectionTypeInfo GetReflectionInfo(System.Type type)
    // Offset: 0x166BEAC
    static Zenject::Internal::ReflectionTypeInfo* GetReflectionInfo(System::Type* type);
    // static private System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectPropertyInfo> GetPropertyInfos(System.Type type)
    // Offset: 0x166C708
    static System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* GetPropertyInfos(System::Type* type);
    // static private System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectFieldInfo> GetFieldInfos(System.Type type)
    // Offset: 0x166C550
    static System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* GetFieldInfos(System::Type* type);
    // static private System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectMethodInfo> GetMethodInfos(System.Type type)
    // Offset: 0x166C21C
    static System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* GetMethodInfos(System::Type* type);
    // static private Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectConstructorInfo GetConstructorInfo(System.Type type)
    // Offset: 0x166C06C
    static Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* GetConstructorInfo(System::Type* type);
    // static private Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo CreateInjectableInfoForParam(System.Type parentType, System.Reflection.ParameterInfo paramInfo)
    // Offset: 0x166CD74
    static Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* CreateInjectableInfoForParam(System::Type* parentType, System::Reflection::ParameterInfo* paramInfo);
    // static private Zenject.InjectableInfo GetInjectableInfoForMember(System.Type parentType, System.Reflection.MemberInfo memInfo)
    // Offset: 0x166CF8C
    static Zenject::InjectableInfo* GetInjectableInfoForMember(System::Type* parentType, System::Reflection::MemberInfo* memInfo);
    // static private System.Reflection.ConstructorInfo TryGetInjectConstructor(System.Type type)
    // Offset: 0x166C978
    static System::Reflection::ConstructorInfo* TryGetInjectConstructor(System::Type* type);
  }; // Zenject.Internal.ReflectionTypeAnalyzer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer*, "Zenject.Internal", "ReflectionTypeAnalyzer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::Internal::ReflectionTypeAnalyzer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute
// Il2CppName: AddCustomInjectAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute
// Il2CppName: AddCustomInjectAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "AddCustomInjectAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo
// Il2CppName: GetReflectionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Internal::ReflectionTypeInfo* (*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "GetReflectionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos
// Il2CppName: GetPropertyInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* (*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "GetPropertyInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos
// Il2CppName: GetFieldInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* (*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "GetFieldInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos
// Il2CppName: GetMethodInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* (*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "GetMethodInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo
// Il2CppName: GetConstructorInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* (*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "GetConstructorInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam
// Il2CppName: CreateInjectableInfoForParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* (*)(System::Type*, System::Reflection::ParameterInfo*)>(&Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam)> {
  static const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* paramInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "CreateInjectableInfoForParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, paramInfo});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember
// Il2CppName: GetInjectableInfoForMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectableInfo* (*)(System::Type*, System::Reflection::MemberInfo*)>(&Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember)> {
  static const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* memInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "GetInjectableInfoForMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, memInfo});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor
// Il2CppName: TryGetInjectConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo* (*)(System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer*), "TryGetInjectConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};