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
  // Forward declaring type: SaberTrail
  class SaberTrail;
  // Forward declaring type: SetSaberGlowColor
  class SetSaberGlowColor;
  // Forward declaring type: SetSaberFakeGlowColor
  class SetSaberFakeGlowColor;
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: SaberModelController
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberModelController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SaberModelController::InitData
    class InitData;
    // private SaberTrail _saberTrail
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberTrail* saberTrail;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTrail*) == 0x8);
    // private SetSaberGlowColor[] _setSaberGlowColors
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::SetSaberGlowColor*>* setSaberGlowColors;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SetSaberGlowColor*>*) == 0x8);
    // private SetSaberFakeGlowColor[] _setSaberFakeGlowColors
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::SetSaberFakeGlowColor*>* setSaberFakeGlowColors;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SetSaberFakeGlowColor*>*) == 0x8);
    // [NullAllowed] Offset: 0xE42188
    // private TubeBloomPrePassLight _saberLight
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* saberLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xE421C0
    // private readonly SaberModelController/InitData _initData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SaberModelController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberModelController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE421D0
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // Creating value type constructor for type: SaberModelController
    SaberModelController(GlobalNamespace::SaberTrail* saberTrail_ = {}, ::Array<GlobalNamespace::SetSaberGlowColor*>* setSaberGlowColors_ = {}, ::Array<GlobalNamespace::SetSaberFakeGlowColor*>* setSaberFakeGlowColors_ = {}, GlobalNamespace::TubeBloomPrePassLight* saberLight_ = {}, GlobalNamespace::SaberModelController::InitData* initData_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}) noexcept : saberTrail{saberTrail_}, setSaberGlowColors{setSaberGlowColors_}, setSaberFakeGlowColors{setSaberFakeGlowColors_}, saberLight{saberLight_}, initData{initData_}, colorManager{colorManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SaberTrail _saberTrail
    GlobalNamespace::SaberTrail*& dyn__saberTrail();
    // Get instance field reference: private SetSaberGlowColor[] _setSaberGlowColors
    ::Array<GlobalNamespace::SetSaberGlowColor*>*& dyn__setSaberGlowColors();
    // Get instance field reference: private SetSaberFakeGlowColor[] _setSaberFakeGlowColors
    ::Array<GlobalNamespace::SetSaberFakeGlowColor*>*& dyn__setSaberFakeGlowColors();
    // Get instance field reference: private TubeBloomPrePassLight _saberLight
    GlobalNamespace::TubeBloomPrePassLight*& dyn__saberLight();
    // Get instance field reference: private readonly SaberModelController/InitData _initData
    GlobalNamespace::SaberModelController::InitData*& dyn__initData();
    // Get instance field reference: private readonly ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // public System.Void Init(UnityEngine.Transform parent, Saber saber)
    // Offset: 0x1130B90
    void Init(UnityEngine::Transform* parent, GlobalNamespace::Saber* saber);
    // public System.Void .ctor()
    // Offset: 0x1130E68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberModelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelController*, creationType>()));
    }
  }; // SaberModelController
  #pragma pack(pop)
  static check_size<sizeof(SaberModelController), 64 + sizeof(GlobalNamespace::ColorManager*)> __GlobalNamespace_SaberModelControllerSizeCheck;
  static_assert(sizeof(SaberModelController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberModelController*, "", "SaberModelController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberModelController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelController::*)(UnityEngine::Transform*, GlobalNamespace::Saber*)>(&GlobalNamespace::SaberModelController::Init)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberModelController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, saber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberModelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!