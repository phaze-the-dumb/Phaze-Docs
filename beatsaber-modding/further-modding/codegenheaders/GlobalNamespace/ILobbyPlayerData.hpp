// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ILevelGameplaySetupData
#include "GlobalNamespace/ILevelGameplaySetupData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ILobbyPlayerData
  // [TokenAttribute] Offset: FFFFFFFF
  class ILobbyPlayerData/*, public GlobalNamespace::ILevelGameplaySetupData*/ {
    public:
    // Creating value type constructor for type: ILobbyPlayerData
    ILobbyPlayerData() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelGameplaySetupData
    operator GlobalNamespace::ILevelGameplaySetupData() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelGameplaySetupData*>(this);
    }
    // public System.Boolean get_isPartyOwner()
    // Offset: 0xFFFFFFFF
    bool get_isPartyOwner();
    // public System.Void set_isPartyOwner(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isPartyOwner(bool value);
    // public System.Boolean get_isActive()
    // Offset: 0xFFFFFFFF
    bool get_isActive();
    // public System.Void set_isActive(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isActive(bool value);
    // public System.Boolean get_isReady()
    // Offset: 0xFFFFFFFF
    bool get_isReady();
    // public System.Void set_isReady(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isReady(bool value);
    // public System.Boolean get_isInLobby()
    // Offset: 0xFFFFFFFF
    bool get_isInLobby();
    // public System.Void set_isInLobby(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isInLobby(bool value);
  }; // ILobbyPlayerData
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyPlayerData*, "", "ILobbyPlayerData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::get_isPartyOwner
// Il2CppName: get_isPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayerData::*)()>(&GlobalNamespace::ILobbyPlayerData::get_isPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "get_isPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::set_isPartyOwner
// Il2CppName: set_isPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayerData::*)(bool)>(&GlobalNamespace::ILobbyPlayerData::set_isPartyOwner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "set_isPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayerData::*)()>(&GlobalNamespace::ILobbyPlayerData::get_isActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::set_isActive
// Il2CppName: set_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayerData::*)(bool)>(&GlobalNamespace::ILobbyPlayerData::set_isActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "set_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayerData::*)()>(&GlobalNamespace::ILobbyPlayerData::get_isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::set_isReady
// Il2CppName: set_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayerData::*)(bool)>(&GlobalNamespace::ILobbyPlayerData::set_isReady)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "set_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::get_isInLobby
// Il2CppName: get_isInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayerData::*)()>(&GlobalNamespace::ILobbyPlayerData::get_isInLobby)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "get_isInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerData::set_isInLobby
// Il2CppName: set_isInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayerData::*)(bool)>(&GlobalNamespace::ILobbyPlayerData::set_isInLobby)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerData*), "set_isInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};