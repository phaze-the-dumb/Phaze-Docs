// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.IChannelInfo
#include "System/Runtime/Remoting/IChannelInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ChannelInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ChannelInfo : public ::Il2CppObject/*, public System::Runtime::Remoting::IChannelInfo*/ {
    public:
    // private System.Object[] channelData
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* channelData;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: ChannelInfo
    ChannelInfo(::Array<::Il2CppObject*>* channelData_ = {}) noexcept : channelData{channelData_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::IChannelInfo
    operator System::Runtime::Remoting::IChannelInfo() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::IChannelInfo*>(this);
    }
    // Creating conversion operator: operator ::Array<::Il2CppObject*>*
    constexpr operator ::Array<::Il2CppObject*>*() const noexcept {
      return channelData;
    }
    // Get instance field reference: private System.Object[] channelData
    ::Array<::Il2CppObject*>*& dyn_channelData();
    // public System.Object[] get_ChannelData()
    // Offset: 0x1495830
    ::Array<::Il2CppObject*>* get_ChannelData();
    // public System.Void .ctor(System.Object remoteChannelData)
    // Offset: 0x1495778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelInfo* New_ctor(::Il2CppObject* remoteChannelData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ChannelInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelInfo*, creationType>(remoteChannelData)));
    }
    // public System.Void .ctor()
    // Offset: 0x1495348
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ChannelInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelInfo*, creationType>()));
    }
  }; // System.Runtime.Remoting.ChannelInfo
  #pragma pack(pop)
  static check_size<sizeof(ChannelInfo), 16 + sizeof(::Array<::Il2CppObject*>*)> __System_Runtime_Remoting_ChannelInfoSizeCheck;
  static_assert(sizeof(ChannelInfo) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelInfo*, "System.Runtime.Remoting", "ChannelInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelInfo::get_ChannelData
// Il2CppName: get_ChannelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Remoting::ChannelInfo::*)()>(&System::Runtime::Remoting::ChannelInfo::get_ChannelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ChannelInfo*), "get_ChannelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ChannelInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!