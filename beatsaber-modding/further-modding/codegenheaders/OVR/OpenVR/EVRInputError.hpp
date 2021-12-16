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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRInputError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRInputError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRInputError
    constexpr EVRInputError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRInputError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRInputError None
    static OVR::OpenVR::EVRInputError _get_None();
    // Set static field: static public OVR.OpenVR.EVRInputError None
    static void _set_None(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError NameNotFound
    static constexpr const int NameNotFound = 1;
    // Get static field: static public OVR.OpenVR.EVRInputError NameNotFound
    static OVR::OpenVR::EVRInputError _get_NameNotFound();
    // Set static field: static public OVR.OpenVR.EVRInputError NameNotFound
    static void _set_NameNotFound(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError WrongType
    static constexpr const int WrongType = 2;
    // Get static field: static public OVR.OpenVR.EVRInputError WrongType
    static OVR::OpenVR::EVRInputError _get_WrongType();
    // Set static field: static public OVR.OpenVR.EVRInputError WrongType
    static void _set_WrongType(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError InvalidHandle
    static constexpr const int InvalidHandle = 3;
    // Get static field: static public OVR.OpenVR.EVRInputError InvalidHandle
    static OVR::OpenVR::EVRInputError _get_InvalidHandle();
    // Set static field: static public OVR.OpenVR.EVRInputError InvalidHandle
    static void _set_InvalidHandle(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError InvalidParam
    static constexpr const int InvalidParam = 4;
    // Get static field: static public OVR.OpenVR.EVRInputError InvalidParam
    static OVR::OpenVR::EVRInputError _get_InvalidParam();
    // Set static field: static public OVR.OpenVR.EVRInputError InvalidParam
    static void _set_InvalidParam(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError NoSteam
    static constexpr const int NoSteam = 5;
    // Get static field: static public OVR.OpenVR.EVRInputError NoSteam
    static OVR::OpenVR::EVRInputError _get_NoSteam();
    // Set static field: static public OVR.OpenVR.EVRInputError NoSteam
    static void _set_NoSteam(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError MaxCapacityReached
    static constexpr const int MaxCapacityReached = 6;
    // Get static field: static public OVR.OpenVR.EVRInputError MaxCapacityReached
    static OVR::OpenVR::EVRInputError _get_MaxCapacityReached();
    // Set static field: static public OVR.OpenVR.EVRInputError MaxCapacityReached
    static void _set_MaxCapacityReached(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError IPCError
    static constexpr const int IPCError = 7;
    // Get static field: static public OVR.OpenVR.EVRInputError IPCError
    static OVR::OpenVR::EVRInputError _get_IPCError();
    // Set static field: static public OVR.OpenVR.EVRInputError IPCError
    static void _set_IPCError(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError NoActiveActionSet
    static constexpr const int NoActiveActionSet = 8;
    // Get static field: static public OVR.OpenVR.EVRInputError NoActiveActionSet
    static OVR::OpenVR::EVRInputError _get_NoActiveActionSet();
    // Set static field: static public OVR.OpenVR.EVRInputError NoActiveActionSet
    static void _set_NoActiveActionSet(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError InvalidDevice
    static constexpr const int InvalidDevice = 9;
    // Get static field: static public OVR.OpenVR.EVRInputError InvalidDevice
    static OVR::OpenVR::EVRInputError _get_InvalidDevice();
    // Set static field: static public OVR.OpenVR.EVRInputError InvalidDevice
    static void _set_InvalidDevice(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError InvalidSkeleton
    static constexpr const int InvalidSkeleton = 10;
    // Get static field: static public OVR.OpenVR.EVRInputError InvalidSkeleton
    static OVR::OpenVR::EVRInputError _get_InvalidSkeleton();
    // Set static field: static public OVR.OpenVR.EVRInputError InvalidSkeleton
    static void _set_InvalidSkeleton(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError InvalidBoneCount
    static constexpr const int InvalidBoneCount = 11;
    // Get static field: static public OVR.OpenVR.EVRInputError InvalidBoneCount
    static OVR::OpenVR::EVRInputError _get_InvalidBoneCount();
    // Set static field: static public OVR.OpenVR.EVRInputError InvalidBoneCount
    static void _set_InvalidBoneCount(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError InvalidCompressedData
    static constexpr const int InvalidCompressedData = 12;
    // Get static field: static public OVR.OpenVR.EVRInputError InvalidCompressedData
    static OVR::OpenVR::EVRInputError _get_InvalidCompressedData();
    // Set static field: static public OVR.OpenVR.EVRInputError InvalidCompressedData
    static void _set_InvalidCompressedData(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError NoData
    static constexpr const int NoData = 13;
    // Get static field: static public OVR.OpenVR.EVRInputError NoData
    static OVR::OpenVR::EVRInputError _get_NoData();
    // Set static field: static public OVR.OpenVR.EVRInputError NoData
    static void _set_NoData(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError BufferTooSmall
    static constexpr const int BufferTooSmall = 14;
    // Get static field: static public OVR.OpenVR.EVRInputError BufferTooSmall
    static OVR::OpenVR::EVRInputError _get_BufferTooSmall();
    // Set static field: static public OVR.OpenVR.EVRInputError BufferTooSmall
    static void _set_BufferTooSmall(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError MismatchedActionManifest
    static constexpr const int MismatchedActionManifest = 15;
    // Get static field: static public OVR.OpenVR.EVRInputError MismatchedActionManifest
    static OVR::OpenVR::EVRInputError _get_MismatchedActionManifest();
    // Set static field: static public OVR.OpenVR.EVRInputError MismatchedActionManifest
    static void _set_MismatchedActionManifest(OVR::OpenVR::EVRInputError value);
    // static field const value: static public OVR.OpenVR.EVRInputError MissingSkeletonData
    static constexpr const int MissingSkeletonData = 16;
    // Get static field: static public OVR.OpenVR.EVRInputError MissingSkeletonData
    static OVR::OpenVR::EVRInputError _get_MissingSkeletonData();
    // Set static field: static public OVR.OpenVR.EVRInputError MissingSkeletonData
    static void _set_MissingSkeletonData(OVR::OpenVR::EVRInputError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRInputError
  #pragma pack(pop)
  static check_size<sizeof(EVRInputError), 0 + sizeof(int)> __OVR_OpenVR_EVRInputErrorSizeCheck;
  static_assert(sizeof(EVRInputError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRInputError, "OVR.OpenVR", "EVRInputError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"