// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/EventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::EventType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventType
    constexpr EventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/EventType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public OVRPlugin/EventType Unknown
    static GlobalNamespace::OVRPlugin::EventType _get_Unknown();
    // Set static field: static public OVRPlugin/EventType Unknown
    static void _set_Unknown(GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType DisplayRefreshRateChanged
    static constexpr const int DisplayRefreshRateChanged = 1;
    // Get static field: static public OVRPlugin/EventType DisplayRefreshRateChanged
    static GlobalNamespace::OVRPlugin::EventType _get_DisplayRefreshRateChanged();
    // Set static field: static public OVRPlugin/EventType DisplayRefreshRateChanged
    static void _set_DisplayRefreshRateChanged(GlobalNamespace::OVRPlugin::EventType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/EventType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::EventType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_EventTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::EventType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::EventType, "", "OVRPlugin/EventType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"