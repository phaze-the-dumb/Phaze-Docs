// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Threading.ExecutionContext/System.Threading.Reader
#include "System/Threading/ExecutionContext_Reader.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.ExecutionContextSwitcher
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExecutionContextSwitcher/*, public System::ValueType*/ {
    public:
    // System.Threading.ExecutionContext/System.Threading.Reader outerEC
    // Size: 0x8
    // Offset: 0x0
    System::Threading::ExecutionContext::Reader outerEC;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext::Reader) == 0x8);
    // System.Boolean outerECBelongsToScope
    // Size: 0x1
    // Offset: 0x8
    bool outerECBelongsToScope;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: outerECBelongsToScope and: hecsw
    char __padding1[0x7] = {};
    // System.Object hecsw
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* hecsw;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Threading.Thread thread
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Thread* thread;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // Creating value type constructor for type: ExecutionContextSwitcher
    constexpr ExecutionContextSwitcher(System::Threading::ExecutionContext::Reader outerEC_ = {}, bool outerECBelongsToScope_ = {}, ::Il2CppObject* hecsw_ = {}, System::Threading::Thread* thread_ = {}) noexcept : outerEC{outerEC_}, outerECBelongsToScope{outerECBelongsToScope_}, hecsw{hecsw_}, thread{thread_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.Threading.ExecutionContext/System.Threading.Reader outerEC
    System::Threading::ExecutionContext::Reader& dyn_outerEC();
    // Get instance field reference: System.Boolean outerECBelongsToScope
    bool& dyn_outerECBelongsToScope();
    // Get instance field reference: System.Object hecsw
    ::Il2CppObject*& dyn_hecsw();
    // Get instance field reference: System.Threading.Thread thread
    System::Threading::Thread*& dyn_thread();
    // System.Boolean UndoNoThrow()
    // Offset: 0x18FDCF4
    bool UndoNoThrow();
    // System.Void Undo()
    // Offset: 0x18FDB94
    void Undo();
  }; // System.Threading.ExecutionContextSwitcher
  #pragma pack(pop)
  static check_size<sizeof(ExecutionContextSwitcher), 24 + sizeof(System::Threading::Thread*)> __System_Threading_ExecutionContextSwitcherSizeCheck;
  static_assert(sizeof(ExecutionContextSwitcher) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContextSwitcher, "System.Threading", "ExecutionContextSwitcher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ExecutionContextSwitcher::UndoNoThrow
// Il2CppName: UndoNoThrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContextSwitcher::*)()>(&System::Threading::ExecutionContextSwitcher::UndoNoThrow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContextSwitcher), "UndoNoThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContextSwitcher::Undo
// Il2CppName: Undo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ExecutionContextSwitcher::*)()>(&System::Threading::ExecutionContextSwitcher::Undo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContextSwitcher), "Undo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};