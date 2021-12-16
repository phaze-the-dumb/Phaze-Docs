// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass53_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c__DisplayClass53_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator loc
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass53_0
    $$c__DisplayClass53_0(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc_ = {}) noexcept : loc{loc_} {}
    // Creating conversion operator: operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*
    constexpr operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() const noexcept {
      return loc;
    }
    // Get instance field reference: public UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator loc
    UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& dyn_loc();
    // System.Boolean <RemoveResourceLocator>b__0(UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo l)
    // Offset: 0x144A63C
    bool $RemoveResourceLocator$b__0(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo* l);
    // public System.Void .ctor()
    // Offset: 0x14445E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass53_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass53_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass53_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass53_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass53_0), 16 + sizeof(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass53_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass53_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass53_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass53_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass53_0::$RemoveResourceLocator$b__0
// Il2CppName: <RemoveResourceLocator>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass53_0::*)(UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass53_0::$RemoveResourceLocator$b__0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl/ResourceLocatorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass53_0*), "<RemoveResourceLocator>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass53_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!