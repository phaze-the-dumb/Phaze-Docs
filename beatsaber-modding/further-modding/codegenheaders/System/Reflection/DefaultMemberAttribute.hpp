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
  // Autogenerated type: System.Reflection.DefaultMemberAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA0D48
  // [ComVisibleAttribute] Offset: DA0D48
  class DefaultMemberAttribute : public System::Attribute {
    public:
    // private System.String m_memberName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_memberName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DefaultMemberAttribute
    DefaultMemberAttribute(::Il2CppString* m_memberName_ = {}) noexcept : m_memberName{m_memberName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_memberName;
    }
    // Get instance field reference: private System.String m_memberName
    ::Il2CppString*& dyn_m_memberName();
    // public System.String get_MemberName()
    // Offset: 0x1D18340
    ::Il2CppString* get_MemberName();
    // public System.Void .ctor(System.String memberName)
    // Offset: 0x1D18314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultMemberAttribute* New_ctor(::Il2CppString* memberName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::DefaultMemberAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultMemberAttribute*, creationType>(memberName)));
    }
  }; // System.Reflection.DefaultMemberAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultMemberAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_DefaultMemberAttributeSizeCheck;
  static_assert(sizeof(DefaultMemberAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::DefaultMemberAttribute*, "System.Reflection", "DefaultMemberAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::DefaultMemberAttribute::get_MemberName
// Il2CppName: get_MemberName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::DefaultMemberAttribute::*)()>(&System::Reflection::DefaultMemberAttribute::get_MemberName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::DefaultMemberAttribute*), "get_MemberName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::DefaultMemberAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!