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
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyDelaySignAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA0BE4
  // [ComVisibleAttribute] Offset: DA0BE4
  class AssemblyDelaySignAttribute : public System::Attribute {
    public:
    // private System.Boolean m_delaySign
    // Size: 0x1
    // Offset: 0x10
    bool m_delaySign;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AssemblyDelaySignAttribute
    AssemblyDelaySignAttribute(bool m_delaySign_ = {}) noexcept : m_delaySign{m_delaySign_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_delaySign;
    }
    // Get instance field reference: private System.Boolean m_delaySign
    bool& dyn_m_delaySign();
    // public System.Void .ctor(System.Boolean delaySign)
    // Offset: 0x1D14F8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyDelaySignAttribute* New_ctor(bool delaySign) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyDelaySignAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyDelaySignAttribute*, creationType>(delaySign)));
    }
  }; // System.Reflection.AssemblyDelaySignAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyDelaySignAttribute), 16 + sizeof(bool)> __System_Reflection_AssemblyDelaySignAttributeSizeCheck;
  static_assert(sizeof(AssemblyDelaySignAttribute) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDelaySignAttribute*, "System.Reflection", "AssemblyDelaySignAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyDelaySignAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!