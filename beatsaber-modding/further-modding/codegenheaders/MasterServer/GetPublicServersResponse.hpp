// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: PublicServerInfo
#include "GlobalNamespace/PublicServerInfo.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.GetPublicServersResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPublicServersResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::GetPublicServersResponse::Result
    struct Result;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.GetPublicServersResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.GetPublicServersResponse/MasterServer.Result Success
      static constexpr const uint8_t Success = 0u;
      // Get static field: static public MasterServer.GetPublicServersResponse/MasterServer.Result Success
      static MasterServer::GetPublicServersResponse::Result _get_Success();
      // Set static field: static public MasterServer.GetPublicServersResponse/MasterServer.Result Success
      static void _set_Success(MasterServer::GetPublicServersResponse::Result value);
      // static field const value: static public MasterServer.GetPublicServersResponse/MasterServer.Result UnknownError
      static constexpr const uint8_t UnknownError = 1u;
      // Get static field: static public MasterServer.GetPublicServersResponse/MasterServer.Result UnknownError
      static MasterServer::GetPublicServersResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.GetPublicServersResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(MasterServer::GetPublicServersResponse::Result value);
      // Get instance field reference: public System.Byte value__
      uint8_t& dyn_value__();
    }; // MasterServer.GetPublicServersResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(GetPublicServersResponse::Result), 0 + sizeof(uint8_t)> __MasterServer_GetPublicServersResponse_ResultSizeCheck;
    static_assert(sizeof(GetPublicServersResponse::Result) == 0x1);
    // public MasterServer.GetPublicServersResponse/MasterServer.Result result
    // Size: 0x1
    // Offset: 0x18
    MasterServer::GetPublicServersResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::GetPublicServersResponse::Result) == 0x1);
    // Padding between fields: result and: publicServers
    char __padding0[0x7] = {};
    // public readonly System.Collections.Generic.List`1<PublicServerInfo> publicServers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>* publicServers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>*) == 0x8);
    // Creating value type constructor for type: GetPublicServersResponse
    GetPublicServersResponse(MasterServer::GetPublicServersResponse::Result result_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>* publicServers_ = {}) noexcept : result{result_}, publicServers{publicServers_} {}
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // Get instance field reference: public MasterServer.GetPublicServersResponse/MasterServer.Result result
    MasterServer::GetPublicServersResponse::Result& dyn_result();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<PublicServerInfo> publicServers
    System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>*& dyn_publicServers();
    // static public IPacketPool`1<MasterServer.GetPublicServersResponse> get_pool()
    // Offset: 0x121D068
    static GlobalNamespace::IPacketPool_1<MasterServer::GetPublicServersResponse*>* get_pool();
    // protected System.UInt32 get_version()
    // Offset: 0x121D0B0
    uint get_version();
    // public MasterServer.GetPublicServersResponse InitForFailure(MasterServer.GetPublicServersResponse/MasterServer.Result result)
    // Offset: 0x121D150
    MasterServer::GetPublicServersResponse* InitForFailure(MasterServer::GetPublicServersResponse::Result result);
    // public MasterServer.GetPublicServersResponse InitForSuccess(System.Collections.Generic.IEnumerable`1<PublicServerInfo> publicServers)
    // Offset: 0x121D1E8
    MasterServer::GetPublicServersResponse* InitForSuccess(System::Collections::Generic::IEnumerable_1<GlobalNamespace::PublicServerInfo>* publicServers);
    // public override System.Byte get_resultCode()
    // Offset: 0x121D0B8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x121D0C0
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x121D580
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPublicServersResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetPublicServersResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPublicServersResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x121D2B4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x121D3AC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x121D4AC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
  }; // MasterServer.GetPublicServersResponse
  #pragma pack(pop)
  static check_size<sizeof(GetPublicServersResponse), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>*)> __MasterServer_GetPublicServersResponseSizeCheck;
  static_assert(sizeof(GetPublicServersResponse) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetPublicServersResponse*, "MasterServer", "GetPublicServersResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetPublicServersResponse::Result, "MasterServer", "GetPublicServersResponse/Result");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IPacketPool_1<MasterServer::GetPublicServersResponse*>* (*)()>(&MasterServer::GetPublicServersResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::GetPublicServersResponse::*)()>(&MasterServer::GetPublicServersResponse::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::InitForFailure
// Il2CppName: InitForFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::GetPublicServersResponse* (MasterServer::GetPublicServersResponse::*)(MasterServer::GetPublicServersResponse::Result)>(&MasterServer::GetPublicServersResponse::InitForFailure)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "GetPublicServersResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "InitForFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::InitForSuccess
// Il2CppName: InitForSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::GetPublicServersResponse* (MasterServer::GetPublicServersResponse::*)(System::Collections::Generic::IEnumerable_1<GlobalNamespace::PublicServerInfo>*)>(&MasterServer::GetPublicServersResponse::InitForSuccess)> {
  static const MethodInfo* get() {
    static auto* publicServers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PublicServerInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "InitForSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{publicServers});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::GetPublicServersResponse::*)()>(&MasterServer::GetPublicServersResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::GetPublicServersResponse::*)()>(&MasterServer::GetPublicServersResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersResponse::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::GetPublicServersResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersResponse::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::GetPublicServersResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::GetPublicServersResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::GetPublicServersResponse::*)()>(&MasterServer::GetPublicServersResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::GetPublicServersResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};