// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IBindingFinalizer
  // [TokenAttribute] Offset: FFFFFFFF
  class IBindingFinalizer {
    public:
    // Creating value type constructor for type: IBindingFinalizer
    IBindingFinalizer() noexcept {}
    // public Zenject.BindingInheritanceMethods get_BindingInheritanceMethod()
    // Offset: 0xFFFFFFFF
    Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();
    // public System.Void FinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    void FinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.IBindingFinalizer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IBindingFinalizer*, "Zenject", "IBindingFinalizer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IBindingFinalizer::get_BindingInheritanceMethod
// Il2CppName: get_BindingInheritanceMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindingInheritanceMethods (Zenject::IBindingFinalizer::*)()>(&Zenject::IBindingFinalizer::get_BindingInheritanceMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IBindingFinalizer*), "get_BindingInheritanceMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IBindingFinalizer::FinalizeBinding
// Il2CppName: FinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::IBindingFinalizer::FinalizeBinding)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IBindingFinalizer*), "FinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};