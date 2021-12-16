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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Action`6
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Action_6
    Action_6() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Action_6<T1, T2, T3, T4, T5, T6>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Action_6<T1, T2, T3, T4, T5, T6>*, creationType>(object, method)));
    }
    // public System.Void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
    // Offset: 0xFFFFFFFF
    void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_6::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(arg3), ::il2cpp_utils::ExtractType(arg4), ::il2cpp_utils::ExtractType(arg5), ::il2cpp_utils::ExtractType(arg6)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, arg1, arg2, arg3, arg4, arg5, arg6);
    }
    // public System.IAsyncResult BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_6::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(arg3), ::il2cpp_utils::ExtractType(arg4), ::il2cpp_utils::ExtractType(arg5), ::il2cpp_utils::ExtractType(arg6), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(___instance_arg, ___internal__method, arg1, arg2, arg3, arg4, arg5, arg6, callback, object);
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_6::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, result);
    }
  }; // System.Action`6
  // Could not write size check! Type: System.Action`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Action_6, "System", "Action`6");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"