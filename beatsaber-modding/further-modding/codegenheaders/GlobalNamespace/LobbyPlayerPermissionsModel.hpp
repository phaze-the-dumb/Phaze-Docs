// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: PlayersLobbyPermissionConfigurationNetSerializable
  class PlayersLobbyPermissionConfigurationNetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LobbyPlayerPermissionsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class LobbyPlayerPermissionsModel : public ::Il2CppObject {
    public:
    // [InjectAttribute] Offset: 0xE3A868
    // private readonly IMenuRpcManager _menuRpcManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A878
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private System.Boolean <isPartyOwner>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool isPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <hasRecommendBeatmapPermission>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool hasRecommendBeatmapPermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <hasRecommendModifiersPermission>k__BackingField
    // Size: 0x1
    // Offset: 0x22
    bool hasRecommendModifiersPermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <hasKickVotePermission>k__BackingField
    // Size: 0x1
    // Offset: 0x23
    bool hasKickVotePermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <hasInvitePermission>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool hasInvitePermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasInvitePermission and: permissionsChangedEvent
    char __padding6[0x3] = {};
    // private System.Action permissionsChangedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* permissionsChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: LobbyPlayerPermissionsModel
    LobbyPlayerPermissionsModel(GlobalNamespace::IMenuRpcManager* menuRpcManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, bool isPartyOwner_ = {}, bool hasRecommendBeatmapPermission_ = {}, bool hasRecommendModifiersPermission_ = {}, bool hasKickVotePermission_ = {}, bool hasInvitePermission_ = {}, System::Action* permissionsChangedEvent_ = {}) noexcept : menuRpcManager{menuRpcManager_}, multiplayerSessionManager{multiplayerSessionManager_}, isPartyOwner{isPartyOwner_}, hasRecommendBeatmapPermission{hasRecommendBeatmapPermission_}, hasRecommendModifiersPermission{hasRecommendModifiersPermission_}, hasKickVotePermission{hasKickVotePermission_}, hasInvitePermission{hasInvitePermission_}, permissionsChangedEvent{permissionsChangedEvent_} {}
    // Get instance field reference: private readonly IMenuRpcManager _menuRpcManager
    GlobalNamespace::IMenuRpcManager*& dyn__menuRpcManager();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private System.Boolean <isPartyOwner>k__BackingField
    bool& dyn_$isPartyOwner$k__BackingField();
    // Get instance field reference: private System.Boolean <hasRecommendBeatmapPermission>k__BackingField
    bool& dyn_$hasRecommendBeatmapPermission$k__BackingField();
    // Get instance field reference: private System.Boolean <hasRecommendModifiersPermission>k__BackingField
    bool& dyn_$hasRecommendModifiersPermission$k__BackingField();
    // Get instance field reference: private System.Boolean <hasKickVotePermission>k__BackingField
    bool& dyn_$hasKickVotePermission$k__BackingField();
    // Get instance field reference: private System.Boolean <hasInvitePermission>k__BackingField
    bool& dyn_$hasInvitePermission$k__BackingField();
    // Get instance field reference: private System.Action permissionsChangedEvent
    System::Action*& dyn_permissionsChangedEvent();
    // public System.Boolean get_isPartyOwner()
    // Offset: 0x120DDFC
    bool get_isPartyOwner();
    // private System.Void set_isPartyOwner(System.Boolean value)
    // Offset: 0x120DE04
    void set_isPartyOwner(bool value);
    // public System.Boolean get_hasRecommendBeatmapPermission()
    // Offset: 0x120DE10
    bool get_hasRecommendBeatmapPermission();
    // private System.Void set_hasRecommendBeatmapPermission(System.Boolean value)
    // Offset: 0x120DE18
    void set_hasRecommendBeatmapPermission(bool value);
    // public System.Boolean get_hasRecommendModifiersPermission()
    // Offset: 0x120DE24
    bool get_hasRecommendModifiersPermission();
    // private System.Void set_hasRecommendModifiersPermission(System.Boolean value)
    // Offset: 0x120DE2C
    void set_hasRecommendModifiersPermission(bool value);
    // public System.Boolean get_hasKickVotePermission()
    // Offset: 0x120DE38
    bool get_hasKickVotePermission();
    // private System.Void set_hasKickVotePermission(System.Boolean value)
    // Offset: 0x120DE40
    void set_hasKickVotePermission(bool value);
    // public System.Boolean get_hasInvitePermission()
    // Offset: 0x120DE4C
    bool get_hasInvitePermission();
    // private System.Void set_hasInvitePermission(System.Boolean value)
    // Offset: 0x120DE54
    void set_hasInvitePermission(bool value);
    // public System.Void add_permissionsChangedEvent(System.Action value)
    // Offset: 0x120DE60
    void add_permissionsChangedEvent(System::Action* value);
    // public System.Void remove_permissionsChangedEvent(System.Action value)
    // Offset: 0x120DF04
    void remove_permissionsChangedEvent(System::Action* value);
    // public System.Void Activate()
    // Offset: 0x12091B4
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x1209450
    void Deactivate();
    // public System.Void SetPlayerPermissions(System.Boolean isPartyOwner, System.Boolean hasRecommendBeatmapPermission, System.Boolean hasRecommendModifiersPermission, System.Boolean hasKickVotePermission, System.Boolean hasInvitePermission)
    // Offset: 0x120D93C
    void SetPlayerPermissions(bool isPartyOwner, bool hasRecommendBeatmapPermission, bool hasRecommendModifiersPermission, bool hasKickVotePermission, bool hasInvitePermission);
    // private System.Void HandleMenuRpcManagerSetPlayersPermissionConfiguration(System.String userId, PlayersLobbyPermissionConfigurationNetSerializable playersLobbyPermissionConfiguration)
    // Offset: 0x120DFA8
    void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::Il2CppString* userId, GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration);
    // public System.Void .ctor()
    // Offset: 0x120E200
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyPlayerPermissionsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyPlayerPermissionsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyPlayerPermissionsModel*, creationType>()));
    }
  }; // LobbyPlayerPermissionsModel
  #pragma pack(pop)
  static check_size<sizeof(LobbyPlayerPermissionsModel), 40 + sizeof(System::Action*)> __GlobalNamespace_LobbyPlayerPermissionsModelSizeCheck;
  static_assert(sizeof(LobbyPlayerPermissionsModel) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayerPermissionsModel*, "", "LobbyPlayerPermissionsModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::get_isPartyOwner
// Il2CppName: get_isPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&GlobalNamespace::LobbyPlayerPermissionsModel::get_isPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "get_isPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::set_isPartyOwner
// Il2CppName: set_isPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&GlobalNamespace::LobbyPlayerPermissionsModel::set_isPartyOwner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "set_isPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendBeatmapPermission
// Il2CppName: get_hasRecommendBeatmapPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendBeatmapPermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "get_hasRecommendBeatmapPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendBeatmapPermission
// Il2CppName: set_hasRecommendBeatmapPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendBeatmapPermission)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "set_hasRecommendBeatmapPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendModifiersPermission
// Il2CppName: get_hasRecommendModifiersPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendModifiersPermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "get_hasRecommendModifiersPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendModifiersPermission
// Il2CppName: set_hasRecommendModifiersPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendModifiersPermission)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "set_hasRecommendModifiersPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::get_hasKickVotePermission
// Il2CppName: get_hasKickVotePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&GlobalNamespace::LobbyPlayerPermissionsModel::get_hasKickVotePermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "get_hasKickVotePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::set_hasKickVotePermission
// Il2CppName: set_hasKickVotePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&GlobalNamespace::LobbyPlayerPermissionsModel::set_hasKickVotePermission)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "set_hasKickVotePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::get_hasInvitePermission
// Il2CppName: get_hasInvitePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&GlobalNamespace::LobbyPlayerPermissionsModel::get_hasInvitePermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "get_hasInvitePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::set_hasInvitePermission
// Il2CppName: set_hasInvitePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&GlobalNamespace::LobbyPlayerPermissionsModel::set_hasInvitePermission)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "set_hasInvitePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::add_permissionsChangedEvent
// Il2CppName: add_permissionsChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(System::Action*)>(&GlobalNamespace::LobbyPlayerPermissionsModel::add_permissionsChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "add_permissionsChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::remove_permissionsChangedEvent
// Il2CppName: remove_permissionsChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(System::Action*)>(&GlobalNamespace::LobbyPlayerPermissionsModel::remove_permissionsChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "remove_permissionsChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&GlobalNamespace::LobbyPlayerPermissionsModel::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&GlobalNamespace::LobbyPlayerPermissionsModel::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::SetPlayerPermissions
// Il2CppName: SetPlayerPermissions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool, bool, bool, bool, bool)>(&GlobalNamespace::LobbyPlayerPermissionsModel::SetPlayerPermissions)> {
  static const MethodInfo* get() {
    static auto* isPartyOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasRecommendBeatmapPermission = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasRecommendModifiersPermission = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasKickVotePermission = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasInvitePermission = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "SetPlayerPermissions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isPartyOwner, hasRecommendBeatmapPermission, hasRecommendModifiersPermission, hasKickVotePermission, hasInvitePermission});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::HandleMenuRpcManagerSetPlayersPermissionConfiguration
// Il2CppName: HandleMenuRpcManagerSetPlayersPermissionConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyPlayerPermissionsModel::*)(::Il2CppString*, GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(&GlobalNamespace::LobbyPlayerPermissionsModel::HandleMenuRpcManagerSetPlayersPermissionConfiguration)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playersLobbyPermissionConfiguration = &::il2cpp_utils::GetClassFromName("", "PlayersLobbyPermissionConfigurationNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayerPermissionsModel*), "HandleMenuRpcManagerSetPlayersPermissionConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, playersLobbyPermissionConfiguration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayerPermissionsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
