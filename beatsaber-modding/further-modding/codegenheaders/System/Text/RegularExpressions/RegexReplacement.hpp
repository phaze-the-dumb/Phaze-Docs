// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexReplacement
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexReplacement : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RegexReplacement
    RegexReplacement() noexcept {}
    // static System.String Replace(System.Text.RegularExpressions.MatchEvaluator evaluator, System.Text.RegularExpressions.Regex regex, System.String input, System.Int32 count, System.Int32 startat)
    // Offset: 0x19A6054
    static ::Il2CppString* Replace(System::Text::RegularExpressions::MatchEvaluator* evaluator, System::Text::RegularExpressions::Regex* regex, ::Il2CppString* input, int count, int startat);
  }; // System.Text.RegularExpressions.RegexReplacement
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexReplacement*, "System.Text.RegularExpressions", "RegexReplacement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexReplacement::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Text::RegularExpressions::MatchEvaluator*, System::Text::RegularExpressions::Regex*, ::Il2CppString*, int, int)>(&System::Text::RegularExpressions::RegexReplacement::Replace)> {
  static const MethodInfo* get() {
    static auto* evaluator = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "MatchEvaluator")->byval_arg;
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexReplacement*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evaluator, regex, input, count, startat});
  }
};