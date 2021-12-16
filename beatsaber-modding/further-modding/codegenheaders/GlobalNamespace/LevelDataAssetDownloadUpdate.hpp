// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LevelDataAssetDownloadUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  struct LevelDataAssetDownloadUpdate/*, public System::ValueType*/ {
    public:
    // Nested type: GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState
    struct AssetDownloadingState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LevelDataAssetDownloadUpdate/AssetDownloadingState
    // [TokenAttribute] Offset: FFFFFFFF
    struct AssetDownloadingState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: AssetDownloadingState
      constexpr AssetDownloadingState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LevelDataAssetDownloadUpdate/AssetDownloadingState PreparingToDownload
      static constexpr const int PreparingToDownload = 0;
      // Get static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState PreparingToDownload
      static GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState _get_PreparingToDownload();
      // Set static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState PreparingToDownload
      static void _set_PreparingToDownload(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState value);
      // static field const value: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Downloading
      static constexpr const int Downloading = 1;
      // Get static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Downloading
      static GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState _get_Downloading();
      // Set static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Downloading
      static void _set_Downloading(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState value);
      // static field const value: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Completed
      static constexpr const int Completed = 2;
      // Get static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Completed
      static GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState _get_Completed();
      // Set static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Completed
      static void _set_Completed(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // LevelDataAssetDownloadUpdate/AssetDownloadingState
    #pragma pack(pop)
    static check_size<sizeof(LevelDataAssetDownloadUpdate::AssetDownloadingState), 0 + sizeof(int)> __GlobalNamespace_LevelDataAssetDownloadUpdate_AssetDownloadingStateSizeCheck;
    static_assert(sizeof(LevelDataAssetDownloadUpdate::AssetDownloadingState) == 0x4);
    // public readonly System.String levelID
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.UInt32 bytesTotal
    // Size: 0x4
    // Offset: 0x8
    uint bytesTotal;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 bytesTransferred
    // Size: 0x4
    // Offset: 0xC
    uint bytesTransferred;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly LevelDataAssetDownloadUpdate/AssetDownloadingState assetDownloadingState
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState assetDownloadingState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState) == 0x4);
    // Creating value type constructor for type: LevelDataAssetDownloadUpdate
    constexpr LevelDataAssetDownloadUpdate(::Il2CppString* levelID_ = {}, uint bytesTotal_ = {}, uint bytesTransferred_ = {}, GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState assetDownloadingState_ = {}) noexcept : levelID{levelID_}, bytesTotal{bytesTotal_}, bytesTransferred{bytesTransferred_}, assetDownloadingState{assetDownloadingState_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.String levelID
    ::Il2CppString*& dyn_levelID();
    // Get instance field reference: public readonly System.UInt32 bytesTotal
    uint& dyn_bytesTotal();
    // Get instance field reference: public readonly System.UInt32 bytesTransferred
    uint& dyn_bytesTransferred();
    // Get instance field reference: public readonly LevelDataAssetDownloadUpdate/AssetDownloadingState assetDownloadingState
    GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState& dyn_assetDownloadingState();
    // public System.Void .ctor(System.String levelID, System.UInt32 bytesTotal, System.UInt32 bytesTransferred, LevelDataAssetDownloadUpdate/AssetDownloadingState assetDownloadingState)
    // Offset: 0x11930BC
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  LevelDataAssetDownloadUpdate(::Il2CppString* levelID, uint bytesTotal, uint bytesTransferred, GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState assetDownloadingState)
  }; // LevelDataAssetDownloadUpdate
  #pragma pack(pop)
  static check_size<sizeof(LevelDataAssetDownloadUpdate), 16 + sizeof(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState)> __GlobalNamespace_LevelDataAssetDownloadUpdateSizeCheck;
  static_assert(sizeof(LevelDataAssetDownloadUpdate) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelDataAssetDownloadUpdate, "", "LevelDataAssetDownloadUpdate");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState, "", "LevelDataAssetDownloadUpdate/AssetDownloadingState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelDataAssetDownloadUpdate::LevelDataAssetDownloadUpdate
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!