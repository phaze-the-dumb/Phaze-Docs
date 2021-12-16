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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRRenderModelError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRRenderModelError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRRenderModelError
    constexpr EVRRenderModelError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRRenderModelError None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRRenderModelError None
    static Valve::VR::EVRRenderModelError _get_None();
    // Set static field: static public Valve.VR.EVRRenderModelError None
    static void _set_None(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError Loading
    static constexpr const int Loading = 100;
    // Get static field: static public Valve.VR.EVRRenderModelError Loading
    static Valve::VR::EVRRenderModelError _get_Loading();
    // Set static field: static public Valve.VR.EVRRenderModelError Loading
    static void _set_Loading(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError NotSupported
    static constexpr const int NotSupported = 200;
    // Get static field: static public Valve.VR.EVRRenderModelError NotSupported
    static Valve::VR::EVRRenderModelError _get_NotSupported();
    // Set static field: static public Valve.VR.EVRRenderModelError NotSupported
    static void _set_NotSupported(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError InvalidArg
    static constexpr const int InvalidArg = 300;
    // Get static field: static public Valve.VR.EVRRenderModelError InvalidArg
    static Valve::VR::EVRRenderModelError _get_InvalidArg();
    // Set static field: static public Valve.VR.EVRRenderModelError InvalidArg
    static void _set_InvalidArg(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError InvalidModel
    static constexpr const int InvalidModel = 301;
    // Get static field: static public Valve.VR.EVRRenderModelError InvalidModel
    static Valve::VR::EVRRenderModelError _get_InvalidModel();
    // Set static field: static public Valve.VR.EVRRenderModelError InvalidModel
    static void _set_InvalidModel(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError NoShapes
    static constexpr const int NoShapes = 302;
    // Get static field: static public Valve.VR.EVRRenderModelError NoShapes
    static Valve::VR::EVRRenderModelError _get_NoShapes();
    // Set static field: static public Valve.VR.EVRRenderModelError NoShapes
    static void _set_NoShapes(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError MultipleShapes
    static constexpr const int MultipleShapes = 303;
    // Get static field: static public Valve.VR.EVRRenderModelError MultipleShapes
    static Valve::VR::EVRRenderModelError _get_MultipleShapes();
    // Set static field: static public Valve.VR.EVRRenderModelError MultipleShapes
    static void _set_MultipleShapes(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError TooManyVertices
    static constexpr const int TooManyVertices = 304;
    // Get static field: static public Valve.VR.EVRRenderModelError TooManyVertices
    static Valve::VR::EVRRenderModelError _get_TooManyVertices();
    // Set static field: static public Valve.VR.EVRRenderModelError TooManyVertices
    static void _set_TooManyVertices(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError MultipleTextures
    static constexpr const int MultipleTextures = 305;
    // Get static field: static public Valve.VR.EVRRenderModelError MultipleTextures
    static Valve::VR::EVRRenderModelError _get_MultipleTextures();
    // Set static field: static public Valve.VR.EVRRenderModelError MultipleTextures
    static void _set_MultipleTextures(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError BufferTooSmall
    static constexpr const int BufferTooSmall = 306;
    // Get static field: static public Valve.VR.EVRRenderModelError BufferTooSmall
    static Valve::VR::EVRRenderModelError _get_BufferTooSmall();
    // Set static field: static public Valve.VR.EVRRenderModelError BufferTooSmall
    static void _set_BufferTooSmall(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError NotEnoughNormals
    static constexpr const int NotEnoughNormals = 307;
    // Get static field: static public Valve.VR.EVRRenderModelError NotEnoughNormals
    static Valve::VR::EVRRenderModelError _get_NotEnoughNormals();
    // Set static field: static public Valve.VR.EVRRenderModelError NotEnoughNormals
    static void _set_NotEnoughNormals(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError NotEnoughTexCoords
    static constexpr const int NotEnoughTexCoords = 308;
    // Get static field: static public Valve.VR.EVRRenderModelError NotEnoughTexCoords
    static Valve::VR::EVRRenderModelError _get_NotEnoughTexCoords();
    // Set static field: static public Valve.VR.EVRRenderModelError NotEnoughTexCoords
    static void _set_NotEnoughTexCoords(Valve::VR::EVRRenderModelError value);
    // static field const value: static public Valve.VR.EVRRenderModelError InvalidTexture
    static constexpr const int InvalidTexture = 400;
    // Get static field: static public Valve.VR.EVRRenderModelError InvalidTexture
    static Valve::VR::EVRRenderModelError _get_InvalidTexture();
    // Set static field: static public Valve.VR.EVRRenderModelError InvalidTexture
    static void _set_InvalidTexture(Valve::VR::EVRRenderModelError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRRenderModelError
  #pragma pack(pop)
  static check_size<sizeof(EVRRenderModelError), 0 + sizeof(int)> __Valve_VR_EVRRenderModelErrorSizeCheck;
  static_assert(sizeof(EVRRenderModelError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRRenderModelError, "Valve.VR", "EVRRenderModelError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"