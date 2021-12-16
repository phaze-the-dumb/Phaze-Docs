// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA2724
  class SecurityManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecurityManager
    SecurityManager() noexcept {}
    // static System.Boolean CheckElevatedPermissions()
    // Offset: 0x1B50CC4
    static bool CheckElevatedPermissions();
    // static System.Void EnsureElevatedPermissions()
    // Offset: 0x1B50CCC
    static void EnsureElevatedPermissions();
  }; // System.Security.SecurityManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityManager*, "System.Security", "SecurityManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecurityManager::CheckElevatedPermissions
// Il2CppName: CheckElevatedPermissions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::SecurityManager::CheckElevatedPermissions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityManager*), "CheckElevatedPermissions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityManager::EnsureElevatedPermissions
// Il2CppName: EnsureElevatedPermissions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::SecurityManager::EnsureElevatedPermissions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityManager*), "EnsureElevatedPermissions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};