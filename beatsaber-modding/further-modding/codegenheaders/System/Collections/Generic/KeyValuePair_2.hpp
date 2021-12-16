// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Collections.Generic.KeyValuePair`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  struct KeyValuePair_2/*, public System::ValueType*/ {
    public:
    // private TKey key
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TKey key;
    // private TValue value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TValue value;
    // Creating value type constructor for type: KeyValuePair_2
    constexpr KeyValuePair_2(TKey key_ = {}, TValue value_ = {}) noexcept : key{key_}, value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private TKey key
    TKey& dyn_key() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::KeyValuePair_2::dyn_key");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "key"))->offset;
      return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TValue value
    TValue& dyn_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::KeyValuePair_2::dyn_value");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
      return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TKey get_Key()
    // Offset: 0xFFFFFFFF
    TKey get_Key() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::KeyValuePair_2::get_Key");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TKey, false>(*this, ___internal__method);
    }
    // public TValue get_Value()
    // Offset: 0xFFFFFFFF
    TValue get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::KeyValuePair_2::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(*this, ___internal__method);
    }
    // public System.Void .ctor(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  KeyValuePair_2(TKey key, TValue value)
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::KeyValuePair_2::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
    }
  }; // System.Collections.Generic.KeyValuePair`2
  // Could not write size check! Type: System.Collections.Generic.KeyValuePair`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::KeyValuePair_2, "System.Collections.Generic", "KeyValuePair`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"