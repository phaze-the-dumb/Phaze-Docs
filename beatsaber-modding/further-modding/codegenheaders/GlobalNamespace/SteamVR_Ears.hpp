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
  // Forward declaring type: SteamVR_Camera
  class SteamVR_Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Ears
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DF78E4
  class SteamVR_Ears : public UnityEngine::MonoBehaviour {
    public:
    // public SteamVR_Camera vrcam
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SteamVR_Camera* vrcam;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Camera*) == 0x8);
    // private System.Boolean usingSpeakers
    // Size: 0x1
    // Offset: 0x20
    bool usingSpeakers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingSpeakers and: offset
    char __padding1[0x3] = {};
    // private UnityEngine.Quaternion offset
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Quaternion offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: SteamVR_Ears
    SteamVR_Ears(GlobalNamespace::SteamVR_Camera* vrcam_ = {}, bool usingSpeakers_ = {}, UnityEngine::Quaternion offset_ = {}) noexcept : vrcam{vrcam_}, usingSpeakers{usingSpeakers_}, offset{offset_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SteamVR_Camera vrcam
    GlobalNamespace::SteamVR_Camera*& dyn_vrcam();
    // Get instance field reference: private System.Boolean usingSpeakers
    bool& dyn_usingSpeakers();
    // Get instance field reference: private UnityEngine.Quaternion offset
    UnityEngine::Quaternion& dyn_offset();
    // private System.Void OnNewPosesApplied()
    // Offset: 0x1428CA4
    void OnNewPosesApplied();
    // private System.Void OnEnable()
    // Offset: 0x1428E18
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1428FBC
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1429090
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Ears* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Ears::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Ears*, creationType>()));
    }
  }; // SteamVR_Ears
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Ears), 36 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_SteamVR_EarsSizeCheck;
  static_assert(sizeof(SteamVR_Ears) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Ears*, "", "SteamVR_Ears");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::OnNewPosesApplied
// Il2CppName: OnNewPosesApplied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Ears::*)()>(&GlobalNamespace::SteamVR_Ears::OnNewPosesApplied)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Ears*), "OnNewPosesApplied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Ears::*)()>(&GlobalNamespace::SteamVR_Ears::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Ears*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Ears::*)()>(&GlobalNamespace::SteamVR_Ears::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Ears*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!