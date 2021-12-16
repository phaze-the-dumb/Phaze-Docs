// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IMasterServerResponse
#include "MasterServer/IMasterServerResponse.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServerAcknowledgeMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IMasterServerAcknowledgeMessage/*, public MasterServer::IMasterServerResponse*/ {
    public:
    // Creating value type constructor for type: IMasterServerAcknowledgeMessage
    IMasterServerAcknowledgeMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerResponse
    operator MasterServer::IMasterServerResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerResponse*>(this);
    }
    // public System.Boolean get_messageHandled()
    // Offset: 0xFFFFFFFF
    bool get_messageHandled();
  }; // MasterServer.IMasterServerAcknowledgeMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServerAcknowledgeMessage*, "MasterServer", "IMasterServerAcknowledgeMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IMasterServerAcknowledgeMessage::get_messageHandled
// Il2CppName: get_messageHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::IMasterServerAcknowledgeMessage::*)()>(&MasterServer::IMasterServerAcknowledgeMessage::get_messageHandled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerAcknowledgeMessage*), "get_messageHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};