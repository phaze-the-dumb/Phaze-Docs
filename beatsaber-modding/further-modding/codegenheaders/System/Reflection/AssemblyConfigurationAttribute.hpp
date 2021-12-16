// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyConfigurationAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0A74
  // [AttributeUsageAttribute] Offset: DA0A74
  class AssemblyConfigurationAttribute : public System::Attribute {
    public:
    // private System.String m_configuration
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_configuration;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyConfigurationAttribute
    AssemblyConfigurationAttribute(::Il2CppString* m_configuration_ = {}) noexcept : m_configuration{m_configuration_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_configuration;
    }
    // Get instance field reference: private System.String m_configuration
    ::Il2CppString*& dyn_m_configuration();
    // public System.Void .ctor(System.String configuration)
    // Offset: 0x1D14F08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyConfigurationAttribute* New_ctor(::Il2CppString* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyConfigurationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyConfigurationAttribute*, creationType>(configuration)));
    }
  }; // System.Reflection.AssemblyConfigurationAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyConfigurationAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyConfigurationAttributeSizeCheck;
  static_assert(sizeof(AssemblyConfigurationAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyConfigurationAttribute*, "System.Reflection", "AssemblyConfigurationAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyConfigurationAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!