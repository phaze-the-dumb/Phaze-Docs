// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerOverallStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerOverallStatsData : public ::Il2CppObject {
    public:
    // public System.Int32 goodCutsCount
    // Size: 0x4
    // Offset: 0x10
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 badCutsCount
    // Size: 0x4
    // Offset: 0x14
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 missedCutsCount
    // Size: 0x4
    // Offset: 0x18
    int missedCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: missedCutsCount and: totalScore
    char __padding2[0x4] = {};
    // public System.Int64 totalScore
    // Size: 0x8
    // Offset: 0x20
    int64_t totalScore;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int32 playedLevelsCount
    // Size: 0x4
    // Offset: 0x28
    int playedLevelsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 cleardLevelsCount
    // Size: 0x4
    // Offset: 0x2C
    int cleardLevelsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 failedLevelsCount
    // Size: 0x4
    // Offset: 0x30
    int failedLevelsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 fullComboCount
    // Size: 0x4
    // Offset: 0x34
    int fullComboCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single timePlayed
    // Size: 0x4
    // Offset: 0x38
    float timePlayed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 handDistanceTravelled
    // Size: 0x4
    // Offset: 0x3C
    int handDistanceTravelled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int64 cummulativeCutScoreWithoutMultiplier
    // Size: 0x8
    // Offset: 0x40
    int64_t cummulativeCutScoreWithoutMultiplier;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: PlayerOverallStatsData
    PlayerOverallStatsData(int goodCutsCount_ = {}, int badCutsCount_ = {}, int missedCutsCount_ = {}, int64_t totalScore_ = {}, int playedLevelsCount_ = {}, int cleardLevelsCount_ = {}, int failedLevelsCount_ = {}, int fullComboCount_ = {}, float timePlayed_ = {}, int handDistanceTravelled_ = {}, int64_t cummulativeCutScoreWithoutMultiplier_ = {}) noexcept : goodCutsCount{goodCutsCount_}, badCutsCount{badCutsCount_}, missedCutsCount{missedCutsCount_}, totalScore{totalScore_}, playedLevelsCount{playedLevelsCount_}, cleardLevelsCount{cleardLevelsCount_}, failedLevelsCount{failedLevelsCount_}, fullComboCount{fullComboCount_}, timePlayed{timePlayed_}, handDistanceTravelled{handDistanceTravelled_}, cummulativeCutScoreWithoutMultiplier{cummulativeCutScoreWithoutMultiplier_} {}
    // Get instance field reference: public System.Int32 goodCutsCount
    int& dyn_goodCutsCount();
    // Get instance field reference: public System.Int32 badCutsCount
    int& dyn_badCutsCount();
    // Get instance field reference: public System.Int32 missedCutsCount
    int& dyn_missedCutsCount();
    // Get instance field reference: public System.Int64 totalScore
    int64_t& dyn_totalScore();
    // Get instance field reference: public System.Int32 playedLevelsCount
    int& dyn_playedLevelsCount();
    // Get instance field reference: public System.Int32 cleardLevelsCount
    int& dyn_cleardLevelsCount();
    // Get instance field reference: public System.Int32 failedLevelsCount
    int& dyn_failedLevelsCount();
    // Get instance field reference: public System.Int32 fullComboCount
    int& dyn_fullComboCount();
    // Get instance field reference: public System.Single timePlayed
    float& dyn_timePlayed();
    // Get instance field reference: public System.Int32 handDistanceTravelled
    int& dyn_handDistanceTravelled();
    // Get instance field reference: public System.Int64 cummulativeCutScoreWithoutMultiplier
    int64_t& dyn_cummulativeCutScoreWithoutMultiplier();
    // public System.Void .ctor(System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCutsCount, System.Int64 totalScore, System.Int32 playedLevelsCount, System.Int32 cleardLevelsCount, System.Int32 failedLevelsCount, System.Int32 fullComboCount, System.Single timePlayed, System.Int32 handDistanceTravelled, System.Int64 cummulativeCutScoreWithoutMultiplier)
    // Offset: 0x11FAC50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerOverallStatsData* New_ctor(int goodCutsCount, int badCutsCount, int missedCutsCount, int64_t totalScore, int playedLevelsCount, int cleardLevelsCount, int failedLevelsCount, int fullComboCount, float timePlayed, int handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerOverallStatsData*, creationType>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier)));
    }
    // public System.Void .ctor()
    // Offset: 0x11FABF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerOverallStatsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerOverallStatsData), 64 + sizeof(int64_t)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerOverallStatsData) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerOverallStatsData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!