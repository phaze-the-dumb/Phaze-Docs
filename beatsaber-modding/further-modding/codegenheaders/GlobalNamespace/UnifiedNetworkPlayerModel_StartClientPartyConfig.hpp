// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: BaseNetworkPlayerModel/PartyConfig
#include "GlobalNamespace/BaseNetworkPlayerModel_PartyConfig.hpp"
// Including type: INetworkPlayerModelPartyConfig`1
#include "GlobalNamespace/INetworkPlayerModelPartyConfig_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/StartClientPartyConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::StartClientPartyConfig : public GlobalNamespace::BaseNetworkPlayerModel::PartyConfig/*, public GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>*/ {
    public:
    // Creating value type constructor for type: StartClientPartyConfig
    StartClientPartyConfig() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>
    operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1298210
    // Implemented from: BaseNetworkPlayerModel/PartyConfig
    // Base method: System.Void PartyConfig::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::StartClientPartyConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::StartClientPartyConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::StartClientPartyConfig*, creationType>()));
    }
  }; // UnifiedNetworkPlayerModel/StartClientPartyConfig
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::StartClientPartyConfig*, "", "UnifiedNetworkPlayerModel/StartClientPartyConfig");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::StartClientPartyConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
