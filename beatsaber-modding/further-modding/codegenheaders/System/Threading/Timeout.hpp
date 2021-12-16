// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Timeout
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA2358
  class Timeout : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Timeout
    Timeout() noexcept {}
    // [ComVisibleAttribute] Offset: 0xDA70EC
    // Get static field: static public readonly System.TimeSpan InfiniteTimeSpan
    static System::TimeSpan _get_InfiniteTimeSpan();
    // Set static field: static public readonly System.TimeSpan InfiniteTimeSpan
    static void _set_InfiniteTimeSpan(System::TimeSpan value);
    // static private System.Void .cctor()
    // Offset: 0x1882AD0
    static void _cctor();
  }; // System.Threading.Timeout
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timeout*, "System.Threading", "Timeout");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Timeout::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Timeout::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timeout*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};