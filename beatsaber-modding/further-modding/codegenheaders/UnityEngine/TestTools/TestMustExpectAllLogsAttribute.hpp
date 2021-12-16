// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestMustExpectAllLogsAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E5EEB4
  class TestMustExpectAllLogsAttribute : public System::Attribute {
    public:
    // private readonly System.Boolean <MustExpect>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool MustExpect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TestMustExpectAllLogsAttribute
    TestMustExpectAllLogsAttribute(bool MustExpect_ = {}) noexcept : MustExpect{MustExpect_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return MustExpect;
    }
    // Get instance field reference: private readonly System.Boolean <MustExpect>k__BackingField
    bool& dyn_$MustExpect$k__BackingField();
    // public System.Boolean get_MustExpect()
    // Offset: 0x14CC684
    bool get_MustExpect();
  }; // UnityEngine.TestTools.TestMustExpectAllLogsAttribute
  #pragma pack(pop)
  static check_size<sizeof(TestMustExpectAllLogsAttribute), 16 + sizeof(bool)> __UnityEngine_TestTools_TestMustExpectAllLogsAttributeSizeCheck;
  static_assert(sizeof(TestMustExpectAllLogsAttribute) == 0x11);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestMustExpectAllLogsAttribute*, "UnityEngine.TestTools", "TestMustExpectAllLogsAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestMustExpectAllLogsAttribute::get_MustExpect
// Il2CppName: get_MustExpect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::TestMustExpectAllLogsAttribute::*)()>(&UnityEngine::TestTools::TestMustExpectAllLogsAttribute::get_MustExpect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestMustExpectAllLogsAttribute*), "get_MustExpect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};