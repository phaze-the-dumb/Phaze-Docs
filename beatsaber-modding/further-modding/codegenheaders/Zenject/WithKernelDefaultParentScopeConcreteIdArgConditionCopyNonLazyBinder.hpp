// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: Kernel
  class Kernel;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // Creating value type constructor for type: WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
    WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0x23E2CD4
    Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();
    // public Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0xFFFFFFFF
    template<class TKernel>
    Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() {
      static_assert(std::is_convertible_v<TKernel, Zenject::Kernel*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithKernel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___generic__method);
    }
    // public System.Void .ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    // Offset: 0x23E2CCC
    // Implemented from: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(subContainerBindInfo, bindInfo)));
    }
  }; // Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel
// Il2CppName: WithKernel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*), "WithKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel
// Il2CppName: WithKernel
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!