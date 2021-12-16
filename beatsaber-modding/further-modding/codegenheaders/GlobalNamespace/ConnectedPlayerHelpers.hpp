// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ConnectedPlayerHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConnectedPlayerHelpers
    ConnectedPlayerHelpers() noexcept {}
    // static public System.Boolean WantsToPlayNextLevel(IConnectedPlayer connectedPlayer)
    // Offset: 0x133683C
    static bool WantsToPlayNextLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean WasActiveAtLevelStart(IConnectedPlayer connectedPlayer)
    // Offset: 0x13368FC
    static bool WasActiveAtLevelStart(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActive(IConnectedPlayer connectedPlayer)
    // Offset: 0x13369BC
    static bool IsActive(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean HasFinishedLevel(IConnectedPlayer connectedPlayer)
    // Offset: 0x1336A7C
    static bool HasFinishedLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActiveOrFinished(IConnectedPlayer connectedPlayer)
    // Offset: 0x1336B3C
    static bool IsActiveOrFinished(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsFailed(IConnectedPlayer connectedPlayer)
    // Offset: 0x1336B74
    static bool IsFailed(GlobalNamespace::IConnectedPlayer* connectedPlayer);
  }; // ConnectedPlayerHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerHelpers*, "", "ConnectedPlayerHelpers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerHelpers::WantsToPlayNextLevel
// Il2CppName: WantsToPlayNextLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::ConnectedPlayerHelpers::WantsToPlayNextLevel)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerHelpers*), "WantsToPlayNextLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerHelpers::WasActiveAtLevelStart
// Il2CppName: WasActiveAtLevelStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::ConnectedPlayerHelpers::WasActiveAtLevelStart)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerHelpers*), "WasActiveAtLevelStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerHelpers::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::ConnectedPlayerHelpers::IsActive)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerHelpers*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerHelpers::HasFinishedLevel
// Il2CppName: HasFinishedLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::ConnectedPlayerHelpers::HasFinishedLevel)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerHelpers*), "HasFinishedLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerHelpers::IsActiveOrFinished
// Il2CppName: IsActiveOrFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::ConnectedPlayerHelpers::IsActiveOrFinished)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerHelpers*), "IsActiveOrFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerHelpers::IsFailed
// Il2CppName: IsFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::ConnectedPlayerHelpers::IsFailed)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerHelpers*), "IsFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};