// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/ScenePresentType
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameScenesManager::ScenePresentType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ScenePresentType
    constexpr ScenePresentType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GameScenesManager/ScenePresentType Load
    static constexpr const int Load = 0;
    // Get static field: static public GameScenesManager/ScenePresentType Load
    static GlobalNamespace::GameScenesManager::ScenePresentType _get_Load();
    // Set static field: static public GameScenesManager/ScenePresentType Load
    static void _set_Load(GlobalNamespace::GameScenesManager::ScenePresentType value);
    // static field const value: static public GameScenesManager/ScenePresentType Activate
    static constexpr const int Activate = 1;
    // Get static field: static public GameScenesManager/ScenePresentType Activate
    static GlobalNamespace::GameScenesManager::ScenePresentType _get_Activate();
    // Set static field: static public GameScenesManager/ScenePresentType Activate
    static void _set_Activate(GlobalNamespace::GameScenesManager::ScenePresentType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // GameScenesManager/ScenePresentType
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::ScenePresentType), 0 + sizeof(int)> __GlobalNamespace_GameScenesManager_ScenePresentTypeSizeCheck;
  static_assert(sizeof(GameScenesManager::ScenePresentType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::ScenePresentType, "", "GameScenesManager/ScenePresentType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"