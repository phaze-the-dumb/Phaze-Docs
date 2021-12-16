// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ImageEffectController
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [RequireComponent] Offset: E18D50
  class ImageEffectController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ImageEffectController::RenderImageCallback
    class RenderImageCallback;
    // private ImageEffectController/RenderImageCallback _renderImageCallback
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ImageEffectController::RenderImageCallback* renderImageCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ImageEffectController::RenderImageCallback*) == 0x8);
    // Creating value type constructor for type: ImageEffectController
    ImageEffectController(GlobalNamespace::ImageEffectController::RenderImageCallback* renderImageCallback_ = {}) noexcept : renderImageCallback{renderImageCallback_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ImageEffectController/RenderImageCallback _renderImageCallback
    GlobalNamespace::ImageEffectController::RenderImageCallback*& dyn__renderImageCallback();
    // public System.Void SetCallback(ImageEffectController/RenderImageCallback renderImageCallback)
    // Offset: 0x1E16BAC
    void SetCallback(GlobalNamespace::ImageEffectController::RenderImageCallback* renderImageCallback);
    // protected System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1E16BB4
    void OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x1E16FAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageEffectController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ImageEffectController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageEffectController*, creationType>()));
    }
  }; // ImageEffectController
  #pragma pack(pop)
  static check_size<sizeof(ImageEffectController), 24 + sizeof(GlobalNamespace::ImageEffectController::RenderImageCallback*)> __GlobalNamespace_ImageEffectControllerSizeCheck;
  static_assert(sizeof(ImageEffectController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImageEffectController*, "", "ImageEffectController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ImageEffectController::SetCallback
// Il2CppName: SetCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ImageEffectController::*)(GlobalNamespace::ImageEffectController::RenderImageCallback*)>(&GlobalNamespace::ImageEffectController::SetCallback)> {
  static const MethodInfo* get() {
    static auto* renderImageCallback = &::il2cpp_utils::GetClassFromName("", "ImageEffectController/RenderImageCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ImageEffectController*), "SetCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderImageCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ImageEffectController::OnRenderImage
// Il2CppName: OnRenderImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ImageEffectController::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*)>(&GlobalNamespace::ImageEffectController::OnRenderImage)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ImageEffectController*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ImageEffectController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!