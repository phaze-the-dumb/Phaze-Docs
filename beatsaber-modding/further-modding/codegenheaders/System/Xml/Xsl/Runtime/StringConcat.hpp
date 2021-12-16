// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Xml.Xsl.Runtime
namespace System::Xml::Xsl::Runtime {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.Xsl.Runtime.StringConcat
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: DABF24
  struct StringConcat/*, public System::ValueType*/ {
    public:
    // private System.String s1
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* s1;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String s2
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* s2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String s3
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* s3;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String s4
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* s4;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String delimiter
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* delimiter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> strList
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<::Il2CppString*>* strList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Int32 idxStr
    // Size: 0x4
    // Offset: 0x30
    int idxStr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StringConcat
    constexpr StringConcat(::Il2CppString* s1_ = {}, ::Il2CppString* s2_ = {}, ::Il2CppString* s3_ = {}, ::Il2CppString* s4_ = {}, ::Il2CppString* delimiter_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* strList_ = {}, int idxStr_ = {}) noexcept : s1{s1_}, s2{s2_}, s3{s3_}, s4{s4_}, delimiter{delimiter_}, strList{strList_}, idxStr{idxStr_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.String s1
    ::Il2CppString*& dyn_s1();
    // Get instance field reference: private System.String s2
    ::Il2CppString*& dyn_s2();
    // Get instance field reference: private System.String s3
    ::Il2CppString*& dyn_s3();
    // Get instance field reference: private System.String s4
    ::Il2CppString*& dyn_s4();
    // Get instance field reference: private System.String delimiter
    ::Il2CppString*& dyn_delimiter();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> strList
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_strList();
    // Get instance field reference: private System.Int32 idxStr
    int& dyn_idxStr();
    // System.Int32 get_Count()
    // Offset: 0x23ED318
    int get_Count();
    // public System.Void Clear()
    // Offset: 0x23ED30C
    void Clear();
    // public System.String GetResult()
    // Offset: 0x23ED320
    ::Il2CppString* GetResult();
    // System.Void ConcatNoDelimiter(System.String s)
    // Offset: 0x23ED40C
    void ConcatNoDelimiter(::Il2CppString* s);
  }; // System.Xml.Xsl.Runtime.StringConcat
  #pragma pack(pop)
  static check_size<sizeof(StringConcat), 48 + sizeof(int)> __System_Xml_Xsl_Runtime_StringConcatSizeCheck;
  static_assert(sizeof(StringConcat) == 0x34);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Xsl::Runtime::StringConcat, "System.Xml.Xsl.Runtime", "StringConcat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::GetResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter
// Il2CppName: ConcatNoDelimiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Xsl::Runtime::StringConcat::*)(::Il2CppString*)>(&System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "ConcatNoDelimiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};