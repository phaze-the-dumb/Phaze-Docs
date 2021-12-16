// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass116_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c__DisplayClass116_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Boolean autoReleaseHandle
    // Size: 0x1
    // Offset: 0x18
    bool autoReleaseHandle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass116_0
    $$c__DisplayClass116_0(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, bool autoReleaseHandle_ = {}) noexcept : $$4__this{$$4__this_}, autoReleaseHandle{autoReleaseHandle_} {}
    // Get instance field reference: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    UnityEngine::AddressableAssets::AddressablesImpl*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean autoReleaseHandle
    bool& dyn_autoReleaseHandle();
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> <CreateUnloadSceneWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle completedHandle)
    // Offset: 0x144A414
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> $CreateUnloadSceneWithChain$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle completedHandle);
    // public System.Void .ctor()
    // Offset: 0x1448B24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass116_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass116_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass116_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass116_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass116_0), 24 + sizeof(bool)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass116_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass116_0) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass116_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass116_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass116_0::$CreateUnloadSceneWithChain$b__0
// Il2CppName: <CreateUnloadSceneWithChain>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass116_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass116_0::$CreateUnloadSceneWithChain$b__0)> {
  static const MethodInfo* get() {
    static auto* completedHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass116_0*), "<CreateUnloadSceneWithChain>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completedHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass116_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!