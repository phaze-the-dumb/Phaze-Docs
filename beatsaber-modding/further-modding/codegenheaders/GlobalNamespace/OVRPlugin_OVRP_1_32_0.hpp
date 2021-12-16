// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_32_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_32_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_32_0
    OVRP_1_32_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1636368
    static void _cctor();
    // static public OVRPlugin/Result ovrp_AddCustomMetadata(System.String name, System.String param)
    // Offset: 0x16362A8
    static GlobalNamespace::OVRPlugin::Result ovrp_AddCustomMetadata(::Il2CppString* name, ::Il2CppString* param);
  }; // OVRPlugin/OVRP_1_32_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_32_0*, "", "OVRPlugin/OVRP_1_32_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_32_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_32_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_32_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_32_0::ovrp_AddCustomMetadata
// Il2CppName: ovrp_AddCustomMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::OVRPlugin::OVRP_1_32_0::ovrp_AddCustomMetadata)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* param = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_32_0*), "ovrp_AddCustomMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, param});
  }
};