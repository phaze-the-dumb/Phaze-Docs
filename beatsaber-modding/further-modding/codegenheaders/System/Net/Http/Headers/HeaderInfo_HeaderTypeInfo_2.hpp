// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.HeaderInfo
#include "System/Net/Http/Headers/HeaderInfo.hpp"
// Including type: System.Net.Http.Headers.HttpHeaderKind
#include "System/Net/Http/Headers/HttpHeaderKind.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: TryParseDelegate`1<T>
  template<typename T>
  class TryParseDelegate_1;
  // Forward declaring type: HttpHeaders
  class HttpHeaders;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HeaderInfo/System.Net.Http.Headers.HeaderTypeInfo`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T, typename U>
  class HeaderInfo::HeaderTypeInfo_2 : public System::Net::Http::Headers::HeaderInfo {
    public:
    // private readonly System.Net.Http.Headers.TryParseDelegate`1<T> parser
    // Size: 0x8
    // Offset: 0x0
    System::Net::Http::Headers::TryParseDelegate_1<T>* parser;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::TryParseDelegate_1<T>*) == 0x8);
    // Creating value type constructor for type: HeaderTypeInfo_2
    HeaderTypeInfo_2(System::Net::Http::Headers::TryParseDelegate_1<T>* parser_ = {}) noexcept : parser{parser_} {}
    // Creating conversion operator: operator System::Net::Http::Headers::TryParseDelegate_1<T>*
    constexpr operator System::Net::Http::Headers::TryParseDelegate_1<T>*() const noexcept {
      return parser;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Net.Http.Headers.TryParseDelegate`1<T> parser
    System::Net::Http::Headers::TryParseDelegate_1<T>*& dyn_parser() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2::dyn_parser");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "parser"))->offset;
      return *reinterpret_cast<System::Net::Http::Headers::TryParseDelegate_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.String name, System.Net.Http.Headers.TryParseDelegate`1<T> parser, System.Net.Http.Headers.HttpHeaderKind headerKind)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderInfo::HeaderTypeInfo_2<T, U>* New_ctor(::Il2CppString* name, System::Net::Http::Headers::TryParseDelegate_1<T>* parser, System::Net::Http::Headers::HttpHeaderKind headerKind) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderInfo::HeaderTypeInfo_2<T, U>*, creationType>(name, parser, headerKind)));
    }
    // public override System.Void AddToCollection(System.Object collection, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo
    // Base method: System.Void HeaderInfo::AddToCollection(System.Object collection, System.Object value)
    void AddToCollection(::Il2CppObject* collection, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2::AddToCollection");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddToCollection", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collection), ::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, collection, value);
    }
    // protected override System.Object CreateCollection(System.Net.Http.Headers.HttpHeaders headers, System.Net.Http.Headers.HeaderInfo headerInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo
    // Base method: System.Object HeaderInfo::CreateCollection(System.Net.Http.Headers.HttpHeaders headers, System.Net.Http.Headers.HeaderInfo headerInfo)
    ::Il2CppObject* CreateCollection(System::Net::Http::Headers::HttpHeaders* headers, System::Net::Http::Headers::HeaderInfo* headerInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2::CreateCollection");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateCollection", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(headers), ::il2cpp_utils::ExtractType(headerInfo)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(___instance_arg, ___internal__method, headers, headerInfo);
    }
    // public override System.Collections.Generic.List`1<System.String> ToStringCollection(System.Object collection)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo
    // Base method: System.Collections.Generic.List`1<System.String> HeaderInfo::ToStringCollection(System.Object collection)
    System::Collections::Generic::List_1<::Il2CppString*>* ToStringCollection(::Il2CppObject* collection) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2::ToStringCollection");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToStringCollection", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collection)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<::Il2CppString*>*, false>(___instance_arg, ___internal__method, collection);
    }
    // public override System.Boolean TryParse(System.String value, out System.Object result)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo
    // Base method: System.Boolean HeaderInfo::TryParse(System.String value, out System.Object result)
    bool TryParse(::Il2CppString* value, ByRef<::Il2CppObject*> result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2::TryParse");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryParse", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*&>()})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, value, byref(result));
    }
  }; // System.Net.Http.Headers.HeaderInfo/System.Net.Http.Headers.HeaderTypeInfo`2
  // Could not write size check! Type: System.Net.Http.Headers.HeaderInfo/System.Net.Http.Headers.HeaderTypeInfo`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/HeaderTypeInfo`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"