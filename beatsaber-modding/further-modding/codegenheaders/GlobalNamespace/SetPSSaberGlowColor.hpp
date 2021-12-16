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
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SetPSSaberGlowColor
  // [TokenAttribute] Offset: FFFFFFFF
  class SetPSSaberGlowColor : public UnityEngine::MonoBehaviour {
    public:
    // private SaberTypeObject _saber
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberTypeObject* saber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // Creating value type constructor for type: SetPSSaberGlowColor
    SetPSSaberGlowColor(GlobalNamespace::SaberTypeObject* saber_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, UnityEngine::ParticleSystem* particleSystem_ = {}) noexcept : saber{saber_}, colorManager{colorManager_}, particleSystem{particleSystem_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SaberTypeObject _saber
    GlobalNamespace::SaberTypeObject*& dyn__saber();
    // Get instance field reference: private ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    UnityEngine::ParticleSystem*& dyn__particleSystem();
    // protected System.Void Start()
    // Offset: 0x1094234
    void Start();
    // public System.Void .ctor()
    // Offset: 0x10942C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetPSSaberGlowColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetPSSaberGlowColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetPSSaberGlowColor*, creationType>()));
    }
  }; // SetPSSaberGlowColor
  #pragma pack(pop)
  static check_size<sizeof(SetPSSaberGlowColor), 40 + sizeof(UnityEngine::ParticleSystem*)> __GlobalNamespace_SetPSSaberGlowColorSizeCheck;
  static_assert(sizeof(SetPSSaberGlowColor) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetPSSaberGlowColor*, "", "SetPSSaberGlowColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetPSSaberGlowColor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetPSSaberGlowColor::*)()>(&GlobalNamespace::SetPSSaberGlowColor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetPSSaberGlowColor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetPSSaberGlowColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!