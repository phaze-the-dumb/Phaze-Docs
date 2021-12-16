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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ColorChangeUIEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColorChangeUIEventType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ColorChangeUIEventType
    constexpr ColorChangeUIEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ColorChangeUIEventType Drag
    static constexpr const int Drag = 0;
    // Get static field: static public ColorChangeUIEventType Drag
    static GlobalNamespace::ColorChangeUIEventType _get_Drag();
    // Set static field: static public ColorChangeUIEventType Drag
    static void _set_Drag(GlobalNamespace::ColorChangeUIEventType value);
    // static field const value: static public ColorChangeUIEventType PointerUp
    static constexpr const int PointerUp = 1;
    // Get static field: static public ColorChangeUIEventType PointerUp
    static GlobalNamespace::ColorChangeUIEventType _get_PointerUp();
    // Set static field: static public ColorChangeUIEventType PointerUp
    static void _set_PointerUp(GlobalNamespace::ColorChangeUIEventType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // ColorChangeUIEventType
  #pragma pack(pop)
  static check_size<sizeof(ColorChangeUIEventType), 0 + sizeof(int)> __GlobalNamespace_ColorChangeUIEventTypeSizeCheck;
  static_assert(sizeof(ColorChangeUIEventType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorChangeUIEventType, "", "ColorChangeUIEventType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"