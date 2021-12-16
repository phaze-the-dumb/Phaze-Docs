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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCD
  #pragma pack(push, 1)
  // Autogenerated type: OVRDebugInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRDebugInfo : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.GameObject debugUIManager
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* debugUIManager;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject debugUIObject
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* debugUIObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject riftPresent
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* riftPresent;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject fps
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* fps;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject ipd
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* ipd;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject fov
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* fov;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject height
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::GameObject* height;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject depth
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* depth;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject resolutionEyeTexture
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* resolutionEyeTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject latencies
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::GameObject* latencies;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject texts
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::GameObject* texts;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.String strRiftPresent
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* strRiftPresent;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String strFPS
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* strFPS;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String strIPD
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* strIPD;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String strFOV
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* strFOV;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String strHeight
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* strHeight;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String strDepth
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* strDepth;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String strResolutionEyeTexture
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* strResolutionEyeTexture;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String strLatencies
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* strLatencies;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single updateInterval
    // Size: 0x4
    // Offset: 0xB0
    float updateInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single accum
    // Size: 0x4
    // Offset: 0xB4
    float accum;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 frames
    // Size: 0x4
    // Offset: 0xB8
    int frames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single timeLeft
    // Size: 0x4
    // Offset: 0xBC
    float timeLeft;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean initUIComponent
    // Size: 0x1
    // Offset: 0xC0
    bool initUIComponent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isInited
    // Size: 0x1
    // Offset: 0xC1
    bool isInited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInited and: offsetY
    char __padding24[0x2] = {};
    // private System.Single offsetY
    // Size: 0x4
    // Offset: 0xC4
    float offsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single riftPresentTimeout
    // Size: 0x4
    // Offset: 0xC8
    float riftPresentTimeout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean showVRVars
    // Size: 0x1
    // Offset: 0xCC
    bool showVRVars;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRDebugInfo
    OVRDebugInfo(UnityEngine::GameObject* debugUIManager_ = {}, UnityEngine::GameObject* debugUIObject_ = {}, UnityEngine::GameObject* riftPresent_ = {}, UnityEngine::GameObject* fps_ = {}, UnityEngine::GameObject* ipd_ = {}, UnityEngine::GameObject* fov_ = {}, UnityEngine::GameObject* height_ = {}, UnityEngine::GameObject* depth_ = {}, UnityEngine::GameObject* resolutionEyeTexture_ = {}, UnityEngine::GameObject* latencies_ = {}, UnityEngine::GameObject* texts_ = {}, ::Il2CppString* strRiftPresent_ = {}, ::Il2CppString* strFPS_ = {}, ::Il2CppString* strIPD_ = {}, ::Il2CppString* strFOV_ = {}, ::Il2CppString* strHeight_ = {}, ::Il2CppString* strDepth_ = {}, ::Il2CppString* strResolutionEyeTexture_ = {}, ::Il2CppString* strLatencies_ = {}, float updateInterval_ = {}, float accum_ = {}, int frames_ = {}, float timeLeft_ = {}, bool initUIComponent_ = {}, bool isInited_ = {}, float offsetY_ = {}, float riftPresentTimeout_ = {}, bool showVRVars_ = {}) noexcept : debugUIManager{debugUIManager_}, debugUIObject{debugUIObject_}, riftPresent{riftPresent_}, fps{fps_}, ipd{ipd_}, fov{fov_}, height{height_}, depth{depth_}, resolutionEyeTexture{resolutionEyeTexture_}, latencies{latencies_}, texts{texts_}, strRiftPresent{strRiftPresent_}, strFPS{strFPS_}, strIPD{strIPD_}, strFOV{strFOV_}, strHeight{strHeight_}, strDepth{strDepth_}, strResolutionEyeTexture{strResolutionEyeTexture_}, strLatencies{strLatencies_}, updateInterval{updateInterval_}, accum{accum_}, frames{frames_}, timeLeft{timeLeft_}, initUIComponent{initUIComponent_}, isInited{isInited_}, offsetY{offsetY_}, riftPresentTimeout{riftPresentTimeout_}, showVRVars{showVRVars_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject debugUIManager
    UnityEngine::GameObject*& dyn_debugUIManager();
    // Get instance field reference: private UnityEngine.GameObject debugUIObject
    UnityEngine::GameObject*& dyn_debugUIObject();
    // Get instance field reference: private UnityEngine.GameObject riftPresent
    UnityEngine::GameObject*& dyn_riftPresent();
    // Get instance field reference: private UnityEngine.GameObject fps
    UnityEngine::GameObject*& dyn_fps();
    // Get instance field reference: private UnityEngine.GameObject ipd
    UnityEngine::GameObject*& dyn_ipd();
    // Get instance field reference: private UnityEngine.GameObject fov
    UnityEngine::GameObject*& dyn_fov();
    // Get instance field reference: private UnityEngine.GameObject height
    UnityEngine::GameObject*& dyn_height();
    // Get instance field reference: private UnityEngine.GameObject depth
    UnityEngine::GameObject*& dyn_depth();
    // Get instance field reference: private UnityEngine.GameObject resolutionEyeTexture
    UnityEngine::GameObject*& dyn_resolutionEyeTexture();
    // Get instance field reference: private UnityEngine.GameObject latencies
    UnityEngine::GameObject*& dyn_latencies();
    // Get instance field reference: private UnityEngine.GameObject texts
    UnityEngine::GameObject*& dyn_texts();
    // Get instance field reference: private System.String strRiftPresent
    ::Il2CppString*& dyn_strRiftPresent();
    // Get instance field reference: private System.String strFPS
    ::Il2CppString*& dyn_strFPS();
    // Get instance field reference: private System.String strIPD
    ::Il2CppString*& dyn_strIPD();
    // Get instance field reference: private System.String strFOV
    ::Il2CppString*& dyn_strFOV();
    // Get instance field reference: private System.String strHeight
    ::Il2CppString*& dyn_strHeight();
    // Get instance field reference: private System.String strDepth
    ::Il2CppString*& dyn_strDepth();
    // Get instance field reference: private System.String strResolutionEyeTexture
    ::Il2CppString*& dyn_strResolutionEyeTexture();
    // Get instance field reference: private System.String strLatencies
    ::Il2CppString*& dyn_strLatencies();
    // Get instance field reference: private System.Single updateInterval
    float& dyn_updateInterval();
    // Get instance field reference: private System.Single accum
    float& dyn_accum();
    // Get instance field reference: private System.Int32 frames
    int& dyn_frames();
    // Get instance field reference: private System.Single timeLeft
    float& dyn_timeLeft();
    // Get instance field reference: private System.Boolean initUIComponent
    bool& dyn_initUIComponent();
    // Get instance field reference: private System.Boolean isInited
    bool& dyn_isInited();
    // Get instance field reference: private System.Single offsetY
    float& dyn_offsetY();
    // Get instance field reference: private System.Single riftPresentTimeout
    float& dyn_riftPresentTimeout();
    // Get instance field reference: private System.Boolean showVRVars
    bool& dyn_showVRVars();
    // private System.Void Awake()
    // Offset: 0x12B5284
    void Awake();
    // private System.Void Update()
    // Offset: 0x12B548C
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x12B5BD0
    void OnDestroy();
    // private System.Void InitUIComponents()
    // Offset: 0x12B5554
    void InitUIComponents();
    // private System.Void UpdateVariable()
    // Offset: 0x12B5928
    void UpdateVariable();
    // private System.Void UpdateStrings()
    // Offset: 0x12B596C
    void UpdateStrings();
    // private System.Void RiftPresentGUI(UnityEngine.GameObject guiMainOBj)
    // Offset: 0x12B63EC
    void RiftPresentGUI(UnityEngine::GameObject* guiMainOBj);
    // private System.Void UpdateDeviceDetection()
    // Offset: 0x12B58E8
    void UpdateDeviceDetection();
    // private UnityEngine.GameObject VariableObjectManager(UnityEngine.GameObject gameObject, System.String name, System.Single posY, System.String str, System.Int32 fontSize)
    // Offset: 0x12B5BD8
    UnityEngine::GameObject* VariableObjectManager(UnityEngine::GameObject* gameObject, ::Il2CppString* name, float posY, ::Il2CppString* str, int fontSize);
    // private UnityEngine.GameObject ComponentComposition(UnityEngine.GameObject GO)
    // Offset: 0x12B65A0
    UnityEngine::GameObject* ComponentComposition(UnityEngine::GameObject* GO);
    // private System.Void UpdateIPD()
    // Offset: 0x12B5DB8
    void UpdateIPD();
    // private System.Void UpdateEyeHeightOffset()
    // Offset: 0x12B5E7C
    void UpdateEyeHeightOffset();
    // private System.Void UpdateEyeDepthOffset()
    // Offset: 0x12B5F34
    void UpdateEyeDepthOffset();
    // private System.Void UpdateFOV()
    // Offset: 0x12B5FEC
    void UpdateFOV();
    // private System.Void UpdateResolutionEyeTexture()
    // Offset: 0x12B60F4
    void UpdateResolutionEyeTexture();
    // private System.Void UpdateLatencyValues()
    // Offset: 0x12B6304
    void UpdateLatencyValues();
    // private System.Void UpdateFPS()
    // Offset: 0x12B6308
    void UpdateFPS();
    // public System.Void .ctor()
    // Offset: 0x12B690C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRDebugInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRDebugInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRDebugInfo*, creationType>()));
    }
  }; // OVRDebugInfo
  #pragma pack(pop)
  static check_size<sizeof(OVRDebugInfo), 204 + sizeof(bool)> __GlobalNamespace_OVRDebugInfoSizeCheck;
  static_assert(sizeof(OVRDebugInfo) == 0xCD);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDebugInfo*, "", "OVRDebugInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::InitUIComponents
// Il2CppName: InitUIComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::InitUIComponents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "InitUIComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateVariable
// Il2CppName: UpdateVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateVariable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateStrings
// Il2CppName: UpdateStrings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateStrings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateStrings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::RiftPresentGUI
// Il2CppName: RiftPresentGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)(UnityEngine::GameObject*)>(&GlobalNamespace::OVRDebugInfo::RiftPresentGUI)> {
  static const MethodInfo* get() {
    static auto* guiMainOBj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "RiftPresentGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{guiMainOBj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateDeviceDetection
// Il2CppName: UpdateDeviceDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateDeviceDetection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateDeviceDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::VariableObjectManager
// Il2CppName: VariableObjectManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::OVRDebugInfo::*)(UnityEngine::GameObject*, ::Il2CppString*, float, ::Il2CppString*, int)>(&GlobalNamespace::OVRDebugInfo::VariableObjectManager)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* posY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fontSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "VariableObjectManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject, name, posY, str, fontSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::ComponentComposition
// Il2CppName: ComponentComposition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::OVRDebugInfo::*)(UnityEngine::GameObject*)>(&GlobalNamespace::OVRDebugInfo::ComponentComposition)> {
  static const MethodInfo* get() {
    static auto* GO = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "ComponentComposition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{GO});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateIPD
// Il2CppName: UpdateIPD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateIPD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateIPD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateEyeHeightOffset
// Il2CppName: UpdateEyeHeightOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateEyeHeightOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateEyeHeightOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateEyeDepthOffset
// Il2CppName: UpdateEyeDepthOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateEyeDepthOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateEyeDepthOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateFOV
// Il2CppName: UpdateFOV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateFOV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateFOV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateResolutionEyeTexture
// Il2CppName: UpdateResolutionEyeTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateResolutionEyeTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateResolutionEyeTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateLatencyValues
// Il2CppName: UpdateLatencyValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateLatencyValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateLatencyValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::UpdateFPS
// Il2CppName: UpdateFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugInfo::*)()>(&GlobalNamespace::OVRDebugInfo::UpdateFPS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugInfo*), "UpdateFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!