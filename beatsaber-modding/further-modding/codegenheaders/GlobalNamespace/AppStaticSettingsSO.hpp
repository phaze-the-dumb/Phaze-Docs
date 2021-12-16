// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: AppStaticSettingsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AppStaticSettingsSO : public UnityEngine::ScriptableObject {
    public:
    // public System.Boolean requirePrivacyPolicy
    // Size: 0x1
    // Offset: 0x18
    bool requirePrivacyPolicy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enable360DegreeLevels
    // Size: 0x1
    // Offset: 0x19
    bool enable360DegreeLevels;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableCustomLevels
    // Size: 0x1
    // Offset: 0x1A
    bool enableCustomLevels;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean disableMultiplayer
    // Size: 0x1
    // Offset: 0x1B
    bool disableMultiplayer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AppStaticSettingsSO
    AppStaticSettingsSO(bool requirePrivacyPolicy_ = {}, bool enable360DegreeLevels_ = {}, bool enableCustomLevels_ = {}, bool disableMultiplayer_ = {}) noexcept : requirePrivacyPolicy{requirePrivacyPolicy_}, enable360DegreeLevels{enable360DegreeLevels_}, enableCustomLevels{enableCustomLevels_}, disableMultiplayer{disableMultiplayer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean requirePrivacyPolicy
    bool& dyn_requirePrivacyPolicy();
    // Get instance field reference: public System.Boolean enable360DegreeLevels
    bool& dyn_enable360DegreeLevels();
    // Get instance field reference: public System.Boolean enableCustomLevels
    bool& dyn_enableCustomLevels();
    // Get instance field reference: public System.Boolean disableMultiplayer
    bool& dyn_disableMultiplayer();
    // public System.Void .ctor()
    // Offset: 0x1175EDC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppStaticSettingsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AppStaticSettingsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppStaticSettingsSO*, creationType>()));
    }
  }; // AppStaticSettingsSO
  #pragma pack(pop)
  static check_size<sizeof(AppStaticSettingsSO), 27 + sizeof(bool)> __GlobalNamespace_AppStaticSettingsSOSizeCheck;
  static_assert(sizeof(AppStaticSettingsSO) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppStaticSettingsSO*, "", "AppStaticSettingsSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AppStaticSettingsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!