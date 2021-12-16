// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.RegexCharClass
#include "System/Text/RegularExpressions/RegexCharClass.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexCharClass/System.Text.RegularExpressions.SingleRangeComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexCharClass::SingleRangeComparer : public ::Il2CppObject/*, public System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>*/ {
    public:
    // Creating value type constructor for type: SingleRangeComparer
    SingleRangeComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>
    operator System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>*>(this);
    }
    // public System.Int32 Compare(System.Text.RegularExpressions.RegexCharClass/System.Text.RegularExpressions.SingleRange x, System.Text.RegularExpressions.RegexCharClass/System.Text.RegularExpressions.SingleRange y)
    // Offset: 0x199BAF8
    int Compare(System::Text::RegularExpressions::RegexCharClass::SingleRange* x, System::Text::RegularExpressions::RegexCharClass::SingleRange* y);
    // public System.Void .ctor()
    // Offset: 0x199BB34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexCharClass::SingleRangeComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexCharClass::SingleRangeComparer*, creationType>()));
    }
  }; // System.Text.RegularExpressions.RegexCharClass/System.Text.RegularExpressions.SingleRangeComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer*, "System.Text.RegularExpressions", "RegexCharClass/SingleRangeComparer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer::*)(System::Text::RegularExpressions::RegexCharClass::SingleRange*, System::Text::RegularExpressions::RegexCharClass::SingleRange*)>(&System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexCharClass/SingleRange")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexCharClass/SingleRange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!