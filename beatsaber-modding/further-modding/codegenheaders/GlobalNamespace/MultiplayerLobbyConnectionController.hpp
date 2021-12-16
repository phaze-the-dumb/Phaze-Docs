// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LobbyConnectionState because it is already included!
  // Skipping declaration: LobbyConnectionType because it is already included!
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Skipping declaration: IUnifiedNetworkPlayerModel because it is already included!
  // Forward declaring type: CreateServerFormData
  struct CreateServerFormData;
  // Forward declaring type: SelectMultiplayerLobbyDestination
  class SelectMultiplayerLobbyDestination;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Skipping declaration: BeatmapDifficultyMask because it is already included!
  // Skipping declaration: SongPackMask because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyConnectionController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyConnectionController : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState
    struct LobbyConnectionState;
    // Nested type: GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType
    struct LobbyConnectionType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerLobbyConnectionController/LobbyConnectionState
    // [TokenAttribute] Offset: FFFFFFFF
    struct LobbyConnectionState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LobbyConnectionState
      constexpr LobbyConnectionState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState None
      static constexpr const int None = 0;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState None
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_None();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState None
      static void _set_None(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connecting
      static constexpr const int Connecting = 1;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connecting
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_Connecting();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connecting
      static void _set_Connecting(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connected
      static constexpr const int Connected = 2;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connected
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_Connected();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connected
      static void _set_Connected(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState ConnectionFailed
      static constexpr const int ConnectionFailed = 3;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState ConnectionFailed
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_ConnectionFailed();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState ConnectionFailed
      static void _set_ConnectionFailed(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MultiplayerLobbyConnectionController/LobbyConnectionState
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerLobbyConnectionController::LobbyConnectionState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLobbyConnectionController_LobbyConnectionStateSizeCheck;
    static_assert(sizeof(MultiplayerLobbyConnectionController::LobbyConnectionState) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerLobbyConnectionController/LobbyConnectionType
    // [TokenAttribute] Offset: FFFFFFFF
    struct LobbyConnectionType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LobbyConnectionType
      constexpr LobbyConnectionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType None
      static constexpr const int None = 0;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType None
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_None();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType None
      static void _set_None(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyHost
      static constexpr const int PartyHost = 1;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyHost
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_PartyHost();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyHost
      static void _set_PartyHost(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyClient
      static constexpr const int PartyClient = 2;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyClient
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_PartyClient();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyClient
      static void _set_PartyClient(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType QuickPlay
      static constexpr const int QuickPlay = 3;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType QuickPlay
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_QuickPlay();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType QuickPlay
      static void _set_QuickPlay(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MultiplayerLobbyConnectionController/LobbyConnectionType
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerLobbyConnectionController::LobbyConnectionType), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLobbyConnectionController_LobbyConnectionTypeSizeCheck;
    static_assert(sizeof(MultiplayerLobbyConnectionController::LobbyConnectionType) == 0x4);
    // [InjectAttribute] Offset: 0xE3A9A8
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A9B8
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IUnifiedNetworkPlayerModel*) == 0x8);
    // private System.Action connectionSuccessEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* connectionSuccessEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action`2<MultiplayerLobbyConnectionController/LobbyConnectionType,ConnectionFailedReason> connectionFailedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // private MultiplayerLobbyConnectionController/LobbyConnectionState <connectionState>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState connectionState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState) == 0x4);
    // private MultiplayerLobbyConnectionController/LobbyConnectionType <connectionType>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType connectionType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType) == 0x4);
    // private ConnectionFailedReason <connectionFailedReason>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::ConnectionFailedReason connectionFailedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectionFailedReason) == 0x4);
    // Padding between fields: connectionFailedReason and: partyConfig
    char __padding6[0x4] = {};
    // private UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig _partyConfig
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig* partyConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig*) == 0x8);
    // private System.Int32 _retryAttemptsLeft
    // Size: 0x4
    // Offset: 0x48
    int retryAttemptsLeft;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerLobbyConnectionController
    MultiplayerLobbyConnectionController(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel_ = {}, System::Action* connectionSuccessEvent_ = {}, System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent_ = {}, GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState connectionState_ = {}, GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType connectionType_ = {}, GlobalNamespace::ConnectionFailedReason connectionFailedReason_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig* partyConfig_ = {}, int retryAttemptsLeft_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, unifiedNetworkPlayerModel{unifiedNetworkPlayerModel_}, connectionSuccessEvent{connectionSuccessEvent_}, connectionFailedEvent{connectionFailedEvent_}, connectionState{connectionState_}, connectionType{connectionType_}, connectionFailedReason{connectionFailedReason_}, partyConfig{partyConfig_}, retryAttemptsLeft{retryAttemptsLeft_} {}
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    GlobalNamespace::IUnifiedNetworkPlayerModel*& dyn__unifiedNetworkPlayerModel();
    // Get instance field reference: private System.Action connectionSuccessEvent
    System::Action*& dyn_connectionSuccessEvent();
    // Get instance field reference: private System.Action`2<MultiplayerLobbyConnectionController/LobbyConnectionType,ConnectionFailedReason> connectionFailedEvent
    System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>*& dyn_connectionFailedEvent();
    // Get instance field reference: private MultiplayerLobbyConnectionController/LobbyConnectionState <connectionState>k__BackingField
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState& dyn_$connectionState$k__BackingField();
    // Get instance field reference: private MultiplayerLobbyConnectionController/LobbyConnectionType <connectionType>k__BackingField
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType& dyn_$connectionType$k__BackingField();
    // Get instance field reference: private ConnectionFailedReason <connectionFailedReason>k__BackingField
    GlobalNamespace::ConnectionFailedReason& dyn_$connectionFailedReason$k__BackingField();
    // Get instance field reference: private UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig _partyConfig
    GlobalNamespace::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig*& dyn__partyConfig();
    // Get instance field reference: private System.Int32 _retryAttemptsLeft
    int& dyn__retryAttemptsLeft();
    // public MultiplayerLobbyConnectionController/LobbyConnectionState get_connectionState()
    // Offset: 0x107F43C
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState get_connectionState();
    // private System.Void set_connectionState(MultiplayerLobbyConnectionController/LobbyConnectionState value)
    // Offset: 0x107F444
    void set_connectionState(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
    // public MultiplayerLobbyConnectionController/LobbyConnectionType get_connectionType()
    // Offset: 0x107F44C
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType get_connectionType();
    // private System.Void set_connectionType(MultiplayerLobbyConnectionController/LobbyConnectionType value)
    // Offset: 0x107F454
    void set_connectionType(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
    // public ConnectionFailedReason get_connectionFailedReason()
    // Offset: 0x107F45C
    GlobalNamespace::ConnectionFailedReason get_connectionFailedReason();
    // private System.Void set_connectionFailedReason(ConnectionFailedReason value)
    // Offset: 0x107F464
    void set_connectionFailedReason(GlobalNamespace::ConnectionFailedReason value);
    // public System.Void add_connectionSuccessEvent(System.Action value)
    // Offset: 0x107F1AC
    void add_connectionSuccessEvent(System::Action* value);
    // public System.Void remove_connectionSuccessEvent(System.Action value)
    // Offset: 0x107F250
    void remove_connectionSuccessEvent(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`2<MultiplayerLobbyConnectionController/LobbyConnectionType,ConnectionFailedReason> value)
    // Offset: 0x107F2F4
    void add_connectionFailedEvent(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`2<MultiplayerLobbyConnectionController/LobbyConnectionType,ConnectionFailedReason> value)
    // Offset: 0x107F398
    void remove_connectionFailedEvent(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void CreateParty(CreateServerFormData data)
    // Offset: 0x107F46C
    void CreateParty(GlobalNamespace::CreateServerFormData data);
    // public System.Void ConnectToParty(System.String serverCode)
    // Offset: 0x107F860
    void ConnectToParty(::Il2CppString* serverCode);
    // public System.Void CreateOrConnectToDestinationParty(SelectMultiplayerLobbyDestination lobbyDestination)
    // Offset: 0x107FB40
    void CreateOrConnectToDestinationParty(GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination);
    // public System.Void ConnectToServer(INetworkPlayer server, System.String password)
    // Offset: 0x107FF20
    void ConnectToServer(GlobalNamespace::INetworkPlayer* server, ::Il2CppString* password);
    // public System.Void ConnectToMatchmaking(BeatmapDifficultyMask beatmapDifficultyMask, SongPackMask songPackMask, System.Boolean allowSongSelection)
    // Offset: 0x1080140
    void ConnectToMatchmaking(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask, bool allowSongSelection);
    // public System.Void LeaveLobby()
    // Offset: 0x1080440
    void LeaveLobby();
    // public System.Void ClearCurrentConnection()
    // Offset: 0x10804F8
    void ClearCurrentConnection();
    // private System.Void HandleMultiplayerSessionManagerConnected()
    // Offset: 0x1080500
    void HandleMultiplayerSessionManagerConnected();
    // private System.Void HandleMultiplayerSessionManagerConnectionFailed(ConnectionFailedReason reason)
    // Offset: 0x1080758
    void HandleMultiplayerSessionManagerConnectionFailed(GlobalNamespace::ConnectionFailedReason reason);
    // private System.Void HandleMultiplayerSessionManagerConnectionFailedWithRetry(ConnectionFailedReason reason)
    // Offset: 0x10809D4
    void HandleMultiplayerSessionManagerConnectionFailedWithRetry(GlobalNamespace::ConnectionFailedReason reason);
    // public System.Void .ctor()
    // Offset: 0x1080B0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyConnectionController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyConnectionController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyConnectionController*, creationType>()));
    }
  }; // MultiplayerLobbyConnectionController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyConnectionController), 72 + sizeof(int)> __GlobalNamespace_MultiplayerLobbyConnectionControllerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyConnectionController) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyConnectionController*, "", "MultiplayerLobbyConnectionController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState, "", "MultiplayerLobbyConnectionController/LobbyConnectionState");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, "", "MultiplayerLobbyConnectionController/LobbyConnectionType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState
// Il2CppName: get_connectionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "get_connectionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState
// Il2CppName: set_connectionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState)>(&GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyConnectionController/LobbyConnectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "set_connectionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType
// Il2CppName: get_connectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "get_connectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType
// Il2CppName: set_connectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType)>(&GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyConnectionController/LobbyConnectionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "set_connectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason
// Il2CppName: get_connectionFailedReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectionFailedReason (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "get_connectionFailedReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason
// Il2CppName: set_connectionFailedReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "set_connectionFailedReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent
// Il2CppName: add_connectionSuccessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action*)>(&GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "add_connectionSuccessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent
// Il2CppName: remove_connectionSuccessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action*)>(&GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "remove_connectionSuccessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent
// Il2CppName: add_connectionFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>*)>(&GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyConnectionController/LobbyConnectionType"), ::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "add_connectionFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent
// Il2CppName: remove_connectionFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>*)>(&GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyConnectionController/LobbyConnectionType"), ::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "remove_connectionFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty
// Il2CppName: CreateParty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::CreateServerFormData)>(&GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "CreateServerFormData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "CreateParty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty
// Il2CppName: ConnectToParty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty)> {
  static const MethodInfo* get() {
    static auto* serverCode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "ConnectToParty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverCode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty
// Il2CppName: CreateOrConnectToDestinationParty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::SelectMultiplayerLobbyDestination*)>(&GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty)> {
  static const MethodInfo* get() {
    static auto* lobbyDestination = &::il2cpp_utils::GetClassFromName("", "SelectMultiplayerLobbyDestination")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "CreateOrConnectToDestinationParty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyDestination});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer
// Il2CppName: ConnectToServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::INetworkPlayer*, ::Il2CppString*)>(&GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("", "INetworkPlayer")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "ConnectToServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server, password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking
// Il2CppName: ConnectToMatchmaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::BeatmapDifficultyMask, GlobalNamespace::SongPackMask, bool)>(&GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking)> {
  static const MethodInfo* get() {
    static auto* beatmapDifficultyMask = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    static auto* allowSongSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "ConnectToMatchmaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapDifficultyMask, songPackMask, allowSongSelection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby
// Il2CppName: LeaveLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "LeaveLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection
// Il2CppName: ClearCurrentConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "ClearCurrentConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected
// Il2CppName: HandleMultiplayerSessionManagerConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "HandleMultiplayerSessionManagerConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed
// Il2CppName: HandleMultiplayerSessionManagerConnectionFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed)> {
  static const MethodInfo* get() {
    static auto* reason = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "HandleMultiplayerSessionManagerConnectionFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry
// Il2CppName: HandleMultiplayerSessionManagerConnectionFailedWithRetry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyConnectionController::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry)> {
  static const MethodInfo* get() {
    static auto* reason = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyConnectionController*), "HandleMultiplayerSessionManagerConnectionFailedWithRetry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyConnectionController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!