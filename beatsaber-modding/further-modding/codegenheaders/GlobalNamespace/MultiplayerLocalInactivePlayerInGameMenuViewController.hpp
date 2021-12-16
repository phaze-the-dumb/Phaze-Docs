// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedTextMeshProUGUI
  class LocalizedTextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectPromptView
  class DisconnectPromptView;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: LocalPlayerInGameMenuInitData
  class LocalPlayerInGameMenuInitData;
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween
  class Tween;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerInGameMenuViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerInGameMenuViewController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _disconnectButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* disconnectButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private Polyglot.LocalizedTextMeshProUGUI _disconnectButtonLocalizedText
    // Size: 0x8
    // Offset: 0x20
    Polyglot::LocalizedTextMeshProUGUI* disconnectButtonLocalizedText;
    // Field size check
    static_assert(sizeof(Polyglot::LocalizedTextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Toggle _detailsToggle
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Toggle* detailsToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.CanvasGroup _globalCanvasGroup
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::CanvasGroup* globalCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3F16C
    // private UnityEngine.GameObject _mainBar
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* mainBar;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private DisconnectPromptView _disconnectPromptView
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::DisconnectPromptView* disconnectPromptView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectPromptView*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3F1B4
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3F1EC
    // private UnityEngine.GameObject _dontOwnSongGameObject
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* dontOwnSongGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3F224
    // private UnityEngine.GameObject _detailsGameObject
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* detailsGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F25C
    // private readonly LocalPlayerInGameMenuInitData _localPlayerInGameMenuInitData
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::LocalPlayerInGameMenuInitData* localPlayerInGameMenuInitData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalPlayerInGameMenuInitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F26C
    // private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F27C
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F28C
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x78
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x80
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x88
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private Tweening.Tween _fadeOutTween
    // Size: 0x8
    // Offset: 0x90
    Tweening::Tween* fadeOutTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalInactivePlayerInGameMenuViewController
    MultiplayerLocalInactivePlayerInGameMenuViewController(UnityEngine::UI::Button* disconnectButton_ = {}, Polyglot::LocalizedTextMeshProUGUI* disconnectButtonLocalizedText_ = {}, UnityEngine::UI::Toggle* detailsToggle_ = {}, UnityEngine::CanvasGroup* globalCanvasGroup_ = {}, UnityEngine::GameObject* mainBar_ = {}, GlobalNamespace::DisconnectPromptView* disconnectPromptView_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, UnityEngine::GameObject* dontOwnSongGameObject_ = {}, UnityEngine::GameObject* detailsGameObject_ = {}, GlobalNamespace::LocalPlayerInGameMenuInitData* localPlayerInGameMenuInitData_ = {}, GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper_ = {}, GlobalNamespace::MultiplayerController* multiplayerController_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, Tweening::Tween* fadeOutTween_ = {}) noexcept : disconnectButton{disconnectButton_}, disconnectButtonLocalizedText{disconnectButtonLocalizedText_}, detailsToggle{detailsToggle_}, globalCanvasGroup{globalCanvasGroup_}, mainBar{mainBar_}, disconnectPromptView{disconnectPromptView_}, levelBar{levelBar_}, dontOwnSongGameObject{dontOwnSongGameObject_}, detailsGameObject{detailsGameObject_}, localPlayerInGameMenuInitData{localPlayerInGameMenuInitData_}, disconnectHelper{disconnectHelper_}, multiplayerController{multiplayerController_}, tweeningManager{tweeningManager_}, buttonBinder{buttonBinder_}, toggleBinder{toggleBinder_}, fadeOutTween{fadeOutTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Button _disconnectButton
    UnityEngine::UI::Button*& dyn__disconnectButton();
    // Get instance field reference: private Polyglot.LocalizedTextMeshProUGUI _disconnectButtonLocalizedText
    Polyglot::LocalizedTextMeshProUGUI*& dyn__disconnectButtonLocalizedText();
    // Get instance field reference: private UnityEngine.UI.Toggle _detailsToggle
    UnityEngine::UI::Toggle*& dyn__detailsToggle();
    // Get instance field reference: private UnityEngine.CanvasGroup _globalCanvasGroup
    UnityEngine::CanvasGroup*& dyn__globalCanvasGroup();
    // Get instance field reference: private UnityEngine.GameObject _mainBar
    UnityEngine::GameObject*& dyn__mainBar();
    // Get instance field reference: private DisconnectPromptView _disconnectPromptView
    GlobalNamespace::DisconnectPromptView*& dyn__disconnectPromptView();
    // Get instance field reference: private LevelBar _levelBar
    GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private UnityEngine.GameObject _dontOwnSongGameObject
    UnityEngine::GameObject*& dyn__dontOwnSongGameObject();
    // Get instance field reference: private UnityEngine.GameObject _detailsGameObject
    UnityEngine::GameObject*& dyn__detailsGameObject();
    // Get instance field reference: private readonly LocalPlayerInGameMenuInitData _localPlayerInGameMenuInitData
    GlobalNamespace::LocalPlayerInGameMenuInitData*& dyn__localPlayerInGameMenuInitData();
    // Get instance field reference: private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& dyn__disconnectHelper();
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // Get instance field reference: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private readonly HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private readonly HMUI.ToggleBinder _toggleBinder
    HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private Tweening.Tween _fadeOutTween
    Tweening::Tween*& dyn__fadeOutTween();
    // protected System.Void OnEnable()
    // Offset: 0x1086B24
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1086C50
    void OnDisable();
    // protected System.Void Start()
    // Offset: 0x1086D04
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1086E4C
    void OnDestroy();
    // private System.Void DisconnectButtonPressed()
    // Offset: 0x1086F7C
    void DisconnectButtonPressed();
    // private System.Void DetailsToggleValueChanged(System.Boolean isOn)
    // Offset: 0x1086FBC
    void DetailsToggleValueChanged(bool isOn);
    // private System.Void HandleDisconnectPromptViewDidViewFinish(System.Boolean disconnect)
    // Offset: 0x1086FDC
    void HandleDisconnectPromptViewDidViewFinish(bool disconnect);
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x1087098
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // private System.Void <HandleDisconnectPromptViewDidViewFinish>b__22_0()
    // Offset: 0x10872A8
    void $HandleDisconnectPromptViewDidViewFinish$b__22_0();
    // private System.Void <HandleStateChanged>b__23_0(System.Single val)
    // Offset: 0x10872C8
    void $HandleStateChanged$b__23_0(float val);
    // private System.Void <HandleStateChanged>b__23_1()
    // Offset: 0x10872E4
    void $HandleStateChanged$b__23_1();
    // public System.Void .ctor()
    // Offset: 0x1087220
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerInGameMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerInGameMenuViewController*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerInGameMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerInGameMenuViewController), 144 + sizeof(Tweening::Tween*)> __GlobalNamespace_MultiplayerLocalInactivePlayerInGameMenuViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerInGameMenuViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*, "", "MultiplayerLocalInactivePlayerInGameMenuViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DisconnectButtonPressed
// Il2CppName: DisconnectButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DisconnectButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "DisconnectButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DetailsToggleValueChanged
// Il2CppName: DetailsToggleValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(bool)>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DetailsToggleValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "DetailsToggleValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleDisconnectPromptViewDidViewFinish
// Il2CppName: HandleDisconnectPromptViewDidViewFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(bool)>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleDisconnectPromptViewDidViewFinish)> {
  static const MethodInfo* get() {
    static auto* disconnect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "HandleDisconnectPromptViewDidViewFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disconnect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::$HandleDisconnectPromptViewDidViewFinish$b__22_0
// Il2CppName: <HandleDisconnectPromptViewDidViewFinish>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::$HandleDisconnectPromptViewDidViewFinish$b__22_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "<HandleDisconnectPromptViewDidViewFinish>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::$HandleStateChanged$b__23_0
// Il2CppName: <HandleStateChanged>b__23_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(float)>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::$HandleStateChanged$b__23_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "<HandleStateChanged>b__23_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::$HandleStateChanged$b__23_1
// Il2CppName: <HandleStateChanged>b__23_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::$HandleStateChanged$b__23_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*), "<HandleStateChanged>b__23_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!