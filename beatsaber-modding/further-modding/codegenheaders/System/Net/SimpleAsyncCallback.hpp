// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SimpleAsyncCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleAsyncCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SimpleAsyncCallback
    SimpleAsyncCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14AB04C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.SimpleAsyncResult result)
    // Offset: 0x14AB05C
    void Invoke(System::Net::SimpleAsyncResult* result);
    // public System.IAsyncResult BeginInvoke(System.Net.SimpleAsyncResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14AB3F0
    System::IAsyncResult* BeginInvoke(System::Net::SimpleAsyncResult* result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14AB414
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Net.SimpleAsyncCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SimpleAsyncCallback*, "System.Net", "SimpleAsyncCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SimpleAsyncCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SimpleAsyncCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncCallback::*)(System::Net::SimpleAsyncResult*)>(&System::Net::SimpleAsyncCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::SimpleAsyncCallback::*)(System::Net::SimpleAsyncResult*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::SimpleAsyncCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncCallback::*)(System::IAsyncResult*)>(&System::Net::SimpleAsyncCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};