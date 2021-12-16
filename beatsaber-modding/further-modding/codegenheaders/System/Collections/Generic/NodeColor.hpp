// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.NodeColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct NodeColor/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: NodeColor
    constexpr NodeColor(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Collections.Generic.NodeColor Black
    static constexpr const uint8_t Black = 0u;
    // Get static field: static public System.Collections.Generic.NodeColor Black
    static System::Collections::Generic::NodeColor _get_Black();
    // Set static field: static public System.Collections.Generic.NodeColor Black
    static void _set_Black(System::Collections::Generic::NodeColor value);
    // static field const value: static public System.Collections.Generic.NodeColor Red
    static constexpr const uint8_t Red = 1u;
    // Get static field: static public System.Collections.Generic.NodeColor Red
    static System::Collections::Generic::NodeColor _get_Red();
    // Set static field: static public System.Collections.Generic.NodeColor Red
    static void _set_Red(System::Collections::Generic::NodeColor value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // System.Collections.Generic.NodeColor
  #pragma pack(pop)
  static check_size<sizeof(NodeColor), 0 + sizeof(uint8_t)> __System_Collections_Generic_NodeColorSizeCheck;
  static_assert(sizeof(NodeColor) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::NodeColor, "System.Collections.Generic", "NodeColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"