// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x120
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelSelectionFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLevelSelectionFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
    public:
    // private BeatmapCharacteristicSO[] _notAllowedCharacteristics
    // Size: 0x8
    // Offset: 0xD0
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE45908
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyGameStateController*) == 0x8);
    // private System.Action`1<LevelSelectionFlowCoordinator/State> didSelectLevelEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* didSelectLevelEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>*) == 0x8);
    // private System.Action didFinishedEvent
    // Size: 0x8
    // Offset: 0xE8
    System::Action* didFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.String _actionButtonText
    // Size: 0x8
    // Offset: 0xF0
    ::Il2CppString* actionButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _titleText
    // Size: 0x8
    // Offset: 0xF8
    ::Il2CppString* titleText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private SongPackMask _songPackMask
    // Size: 0x10
    // Offset: 0x100
    GlobalNamespace::SongPackMask songPackMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // private BeatmapDifficultyMask _allowedBeatmapDifficultyMask
    // Size: 0x1
    // Offset: 0x110
    GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: allowedBeatmapDifficultyMask and: state
    char __padding7[0x7] = {};
    // private LevelSelectionFlowCoordinator/State _state
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::LevelSelectionFlowCoordinator::State* state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelSelectionFlowCoordinator::State*) == 0x8);
    // Creating value type constructor for type: MultiplayerLevelSelectionFlowCoordinator
    MultiplayerLevelSelectionFlowCoordinator(::Array<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics_ = {}, GlobalNamespace::ILobbyGameStateController* lobbyGameStateController_ = {}, System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* didSelectLevelEvent_ = {}, System::Action* didFinishedEvent_ = {}, ::Il2CppString* actionButtonText_ = {}, ::Il2CppString* titleText_ = {}, GlobalNamespace::SongPackMask songPackMask_ = {}, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask_ = {}, GlobalNamespace::LevelSelectionFlowCoordinator::State* state_ = {}) noexcept : notAllowedCharacteristics{notAllowedCharacteristics_}, lobbyGameStateController{lobbyGameStateController_}, didSelectLevelEvent{didSelectLevelEvent_}, didFinishedEvent{didFinishedEvent_}, actionButtonText{actionButtonText_}, titleText{titleText_}, songPackMask{songPackMask_}, allowedBeatmapDifficultyMask{allowedBeatmapDifficultyMask_}, state{state_} {}
    // Get instance field reference: private BeatmapCharacteristicSO[] _notAllowedCharacteristics
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>*& dyn__notAllowedCharacteristics();
    // Get instance field reference: private readonly ILobbyGameStateController _lobbyGameStateController
    GlobalNamespace::ILobbyGameStateController*& dyn__lobbyGameStateController();
    // Get instance field reference: private System.Action`1<LevelSelectionFlowCoordinator/State> didSelectLevelEvent
    System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>*& dyn_didSelectLevelEvent();
    // Get instance field reference: private System.Action didFinishedEvent
    System::Action*& dyn_didFinishedEvent();
    // Get instance field reference: private System.String _actionButtonText
    ::Il2CppString*& dyn__actionButtonText();
    // Get instance field reference: private System.String _titleText
    ::Il2CppString*& dyn__titleText();
    // Get instance field reference: private SongPackMask _songPackMask
    GlobalNamespace::SongPackMask& dyn__songPackMask();
    // Get instance field reference: private BeatmapDifficultyMask _allowedBeatmapDifficultyMask
    GlobalNamespace::BeatmapDifficultyMask& dyn__allowedBeatmapDifficultyMask();
    // Get instance field reference: private LevelSelectionFlowCoordinator/State _state
    GlobalNamespace::LevelSelectionFlowCoordinator::State*& dyn__state();
    // public System.Void add_didSelectLevelEvent(System.Action`1<LevelSelectionFlowCoordinator/State> value)
    // Offset: 0x107BF68
    void add_didSelectLevelEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`1<LevelSelectionFlowCoordinator/State> value)
    // Offset: 0x107C00C
    void remove_didSelectLevelEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* value);
    // public System.Void add_didFinishedEvent(System.Action value)
    // Offset: 0x107C0B0
    void add_didFinishedEvent(System::Action* value);
    // public System.Void remove_didFinishedEvent(System.Action value)
    // Offset: 0x107C154
    void remove_didFinishedEvent(System::Action* value);
    // public System.Void Setup(LevelSelectionFlowCoordinator/State state, SongPackMask songPackMask, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.String actionText, System.String titleText)
    // Offset: 0x107C7C8
    void Setup(GlobalNamespace::LevelSelectionFlowCoordinator::State* state, GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::Il2CppString* actionText, ::Il2CppString* titleText);
    // private System.Void HandleLobbyGameStateControllerGameStarted()
    // Offset: 0x107C7E4
    void HandleLobbyGameStateControllerGameStarted();
    // protected override System.Boolean get_hidePracticeButton()
    // Offset: 0x107C1F8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePracticeButton()
    bool get_hidePracticeButton();
    // protected override System.Boolean get_hidePacksIfOneOrNone()
    // Offset: 0x107C200
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone()
    bool get_hidePacksIfOneOrNone();
    // protected override System.String get_actionButtonText()
    // Offset: 0x107C208
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_actionButtonText()
    ::Il2CppString* get_actionButtonText();
    // protected override System.Boolean get_showBackButtonForMainViewController()
    // Offset: 0x107C210
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController()
    bool get_showBackButtonForMainViewController();
    // protected override SongPackMask get_songPackMask()
    // Offset: 0x107C218
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: SongPackMask LevelSelectionFlowCoordinator::get_songPackMask()
    GlobalNamespace::SongPackMask get_songPackMask();
    // protected override System.Boolean get_enableCustomLevels()
    // Offset: 0x107C224
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_enableCustomLevels()
    bool get_enableCustomLevels();
    // protected override BeatmapDifficultyMask get_allowedBeatmapDifficultyMask()
    // Offset: 0x107C22C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: BeatmapDifficultyMask LevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask()
    GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask();
    // protected override BeatmapCharacteristicSO[] get_notAllowedCharacteristics()
    // Offset: 0x107C234
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: BeatmapCharacteristicSO[] LevelSelectionFlowCoordinator::get_notAllowedCharacteristics()
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* get_notAllowedCharacteristics();
    // protected override System.String get_mainTitle()
    // Offset: 0x107C23C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_mainTitle()
    ::Il2CppString* get_mainTitle();
    // public System.Void .ctor()
    // Offset: 0x107C7F8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelSelectionFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelSelectionFlowCoordinator*, creationType>()));
    }
    // protected override System.Void ActionButtonWasPressed()
    // Offset: 0x107C244
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::ActionButtonWasPressed()
    void ActionButtonWasPressed();
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x107C320
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // protected override System.Void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    // Offset: 0x107C37C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void TransitionDidStart()
    // Offset: 0x107C490
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TransitionDidStart()
    void TransitionDidStart();
    // protected override System.Void TransitionDidFinish()
    // Offset: 0x107C5AC
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TransitionDidFinish()
    void TransitionDidFinish();
  }; // MultiplayerLevelSelectionFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelSelectionFlowCoordinator), 280 + sizeof(GlobalNamespace::LevelSelectionFlowCoordinator::State*)> __GlobalNamespace_MultiplayerLevelSelectionFlowCoordinatorSizeCheck;
  static_assert(sizeof(MultiplayerLevelSelectionFlowCoordinator) == 0x120);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*, "", "MultiplayerLevelSelectionFlowCoordinator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didSelectLevelEvent
// Il2CppName: add_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>*)>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didSelectLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelSelectionFlowCoordinator/State")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "add_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didSelectLevelEvent
// Il2CppName: remove_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>*)>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didSelectLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelSelectionFlowCoordinator/State")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "remove_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didFinishedEvent
// Il2CppName: add_didFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(System::Action*)>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "add_didFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didFinishedEvent
// Il2CppName: remove_didFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(System::Action*)>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "remove_didFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(GlobalNamespace::LevelSelectionFlowCoordinator::State*, GlobalNamespace::SongPackMask, GlobalNamespace::BeatmapDifficultyMask, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::Setup)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "LevelSelectionFlowCoordinator/State")->byval_arg;
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    static auto* allowedBeatmapDifficultyMask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    static auto* actionText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* titleText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, songPackMask, allowedBeatmapDifficultyMask, actionText, titleText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::HandleLobbyGameStateControllerGameStarted
// Il2CppName: HandleLobbyGameStateControllerGameStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::HandleLobbyGameStateControllerGameStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "HandleLobbyGameStateControllerGameStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePracticeButton
// Il2CppName: get_hidePracticeButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePracticeButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_hidePracticeButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone
// Il2CppName: get_hidePacksIfOneOrNone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_hidePacksIfOneOrNone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_actionButtonText
// Il2CppName: get_actionButtonText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_actionButtonText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_actionButtonText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_showBackButtonForMainViewController
// Il2CppName: get_showBackButtonForMainViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_showBackButtonForMainViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_showBackButtonForMainViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_songPackMask
// Il2CppName: get_songPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_songPackMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_songPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_enableCustomLevels
// Il2CppName: get_enableCustomLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_enableCustomLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_enableCustomLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask
// Il2CppName: get_allowedBeatmapDifficultyMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficultyMask (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_allowedBeatmapDifficultyMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_notAllowedCharacteristics
// Il2CppName: get_notAllowedCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::BeatmapCharacteristicSO*>* (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_notAllowedCharacteristics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_notAllowedCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_mainTitle
// Il2CppName: get_mainTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_mainTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "get_mainTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::ActionButtonWasPressed
// Il2CppName: ActionButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::ActionButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "ActionButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::BackButtonWasPressed
// Il2CppName: BackButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(HMUI::ViewController*)>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::BackButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* topViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "BackButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange
// Il2CppName: LevelSelectionFlowCoordinatorTopViewControllerWillChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(HMUI::ViewController*, HMUI::ViewController*, HMUI::ViewController::AnimationType)>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange)> {
  static const MethodInfo* get() {
    static auto* oldViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* newViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationType = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "LevelSelectionFlowCoordinatorTopViewControllerWillChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldViewController, newViewController, animationType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidStart
// Il2CppName: TransitionDidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "TransitionDidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidFinish
// Il2CppName: TransitionDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*), "TransitionDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};