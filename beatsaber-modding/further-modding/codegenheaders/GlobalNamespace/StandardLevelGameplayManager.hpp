// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: PauseController
  class PauseController;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelGameplayManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ILevelEndActions*/ {
    public:
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::InitData
    class InitData;
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::GameState
    struct GameState;
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::$Start$d__15
    class $Start$d__15;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: StandardLevelGameplayManager/GameState
    // [TokenAttribute] Offset: FFFFFFFF
    struct GameState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GameState
      constexpr GameState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public StandardLevelGameplayManager/GameState Intro
      static constexpr const int Intro = 0;
      // Get static field: static public StandardLevelGameplayManager/GameState Intro
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Intro();
      // Set static field: static public StandardLevelGameplayManager/GameState Intro
      static void _set_Intro(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Playing
      static constexpr const int Playing = 1;
      // Get static field: static public StandardLevelGameplayManager/GameState Playing
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Playing();
      // Set static field: static public StandardLevelGameplayManager/GameState Playing
      static void _set_Playing(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Paused
      static constexpr const int Paused = 2;
      // Get static field: static public StandardLevelGameplayManager/GameState Paused
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Paused();
      // Set static field: static public StandardLevelGameplayManager/GameState Paused
      static void _set_Paused(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Finished
      static constexpr const int Finished = 3;
      // Get static field: static public StandardLevelGameplayManager/GameState Finished
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Finished();
      // Set static field: static public StandardLevelGameplayManager/GameState Finished
      static void _set_Finished(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Failed
      static constexpr const int Failed = 4;
      // Get static field: static public StandardLevelGameplayManager/GameState Failed
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Failed();
      // Set static field: static public StandardLevelGameplayManager/GameState Failed
      static void _set_Failed(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // StandardLevelGameplayManager/GameState
    #pragma pack(pop)
    static check_size<sizeof(StandardLevelGameplayManager::GameState), 0 + sizeof(int)> __GlobalNamespace_StandardLevelGameplayManager_GameStateSizeCheck;
    static_assert(sizeof(StandardLevelGameplayManager::GameState) == 0x4);
    // [InjectAttribute] Offset: 0xE3EC74
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3EC84
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3EC94
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xE3ECA4
    // private readonly PauseController _pauseController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PauseController* pauseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3ECB4
    // private readonly StandardLevelGameplayManager/InitData _initData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::StandardLevelGameplayManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelGameplayManager::InitData*) == 0x8);
    // private System.Action levelFailedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* levelFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action levelFinishedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private StandardLevelGameplayManager/GameState _gameState
    // Size: 0x4
    // Offset: 0x50
    GlobalNamespace::StandardLevelGameplayManager::GameState gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelGameplayManager::GameState) == 0x4);
    // Creating value type constructor for type: StandardLevelGameplayManager
    StandardLevelGameplayManager(GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::GameEnergyCounter* gameEnergyCounter_ = {}, GlobalNamespace::PauseController* pauseController_ = {}, GlobalNamespace::StandardLevelGameplayManager::InitData* initData_ = {}, System::Action* levelFailedEvent_ = {}, System::Action* levelFinishedEvent_ = {}, GlobalNamespace::StandardLevelGameplayManager::GameState gameState_ = {}) noexcept : gameScenesManager{gameScenesManager_}, gameSongController{gameSongController_}, gameEnergyCounter{gameEnergyCounter_}, pauseController{pauseController_}, initData{initData_}, levelFailedEvent{levelFailedEvent_}, levelFinishedEvent{levelFinishedEvent_}, gameState{gameState_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelEndActions
    operator GlobalNamespace::ILevelEndActions() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelEndActions*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private readonly GameSongController _gameSongController
    GlobalNamespace::GameSongController*& dyn__gameSongController();
    // Get instance field reference: private readonly GameEnergyCounter _gameEnergyCounter
    GlobalNamespace::GameEnergyCounter*& dyn__gameEnergyCounter();
    // Get instance field reference: private readonly PauseController _pauseController
    GlobalNamespace::PauseController*& dyn__pauseController();
    // Get instance field reference: private readonly StandardLevelGameplayManager/InitData _initData
    GlobalNamespace::StandardLevelGameplayManager::InitData*& dyn__initData();
    // Get instance field reference: private System.Action levelFailedEvent
    System::Action*& dyn_levelFailedEvent();
    // Get instance field reference: private System.Action levelFinishedEvent
    System::Action*& dyn_levelFinishedEvent();
    // Get instance field reference: private StandardLevelGameplayManager/GameState _gameState
    GlobalNamespace::StandardLevelGameplayManager::GameState& dyn__gameState();
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0x1068074
    void add_levelFailedEvent(System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0x1068118
    void remove_levelFailedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0x10681BC
    void add_levelFinishedEvent(System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0x1068260
    void remove_levelFinishedEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x1068304
    void Awake();
    // private System.Collections.IEnumerator Start()
    // Offset: 0x106830C
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10683A8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x10685EC
    void Update();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0x1068634
    void HandleGameEnergyDidReach0();
    // private System.Void HandleSongDidFinish()
    // Offset: 0x1068680
    void HandleSongDidFinish();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0x10686B0
    void HandlePauseControllerCanPause(System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0x106872C
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0x1068744
    void HandlePauseControllerDidResume();
    // public System.Void .ctor()
    // Offset: 0x106875C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelGameplayManager*, creationType>()));
    }
  }; // StandardLevelGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelGameplayManager), 80 + sizeof(GlobalNamespace::StandardLevelGameplayManager::GameState)> __GlobalNamespace_StandardLevelGameplayManagerSizeCheck;
  static_assert(sizeof(StandardLevelGameplayManager) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelGameplayManager*, "", "StandardLevelGameplayManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelGameplayManager::GameState, "", "StandardLevelGameplayManager/GameState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::add_levelFailedEvent
// Il2CppName: add_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::StandardLevelGameplayManager::add_levelFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "add_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::remove_levelFailedEvent
// Il2CppName: remove_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::StandardLevelGameplayManager::remove_levelFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "remove_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::add_levelFinishedEvent
// Il2CppName: add_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::StandardLevelGameplayManager::add_levelFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "add_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::remove_levelFinishedEvent
// Il2CppName: remove_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::StandardLevelGameplayManager::remove_levelFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "remove_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::HandleGameEnergyDidReach0
// Il2CppName: HandleGameEnergyDidReach0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::HandleGameEnergyDidReach0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "HandleGameEnergyDidReach0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::HandleSongDidFinish
// Il2CppName: HandleSongDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::HandleSongDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "HandleSongDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerCanPause
// Il2CppName: HandlePauseControllerCanPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)(System::Action_1<bool>*)>(&GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerCanPause)> {
  static const MethodInfo* get() {
    static auto* canPause = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "HandlePauseControllerCanPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canPause});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidPause
// Il2CppName: HandlePauseControllerDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "HandlePauseControllerDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidResume
// Il2CppName: HandlePauseControllerDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelGameplayManager::*)()>(&GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelGameplayManager*), "HandlePauseControllerDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!