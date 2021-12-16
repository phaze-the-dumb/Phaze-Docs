// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CampaignProgressModel
  // [TokenAttribute] Offset: FFFFFFFF
  class CampaignProgressModel : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE3A2A8
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _missionIds
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::HashSet_1<::Il2CppString*>* missionIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.String _finalMissionId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* finalMissionId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _numberOfClearedMissionsDirty
    // Size: 0x1
    // Offset: 0x30
    bool numberOfClearedMissionsDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: numberOfClearedMissionsDirty and: numberOfClearedMissions
    char __padding3[0x3] = {};
    // private System.Int32 _numberOfClearedMissions
    // Size: 0x4
    // Offset: 0x34
    int numberOfClearedMissions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CampaignProgressModel
    CampaignProgressModel(GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* missionIds_ = {}, ::Il2CppString* finalMissionId_ = {}, bool numberOfClearedMissionsDirty_ = {}, int numberOfClearedMissions_ = {}) noexcept : playerDataModel{playerDataModel_}, missionIds{missionIds_}, finalMissionId{finalMissionId_}, numberOfClearedMissionsDirty{numberOfClearedMissionsDirty_}, numberOfClearedMissions{numberOfClearedMissions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> _missionIds
    System::Collections::Generic::HashSet_1<::Il2CppString*>*& dyn__missionIds();
    // Get instance field reference: private System.String _finalMissionId
    ::Il2CppString*& dyn__finalMissionId();
    // Get instance field reference: private System.Boolean _numberOfClearedMissionsDirty
    bool& dyn__numberOfClearedMissionsDirty();
    // Get instance field reference: private System.Int32 _numberOfClearedMissions
    int& dyn__numberOfClearedMissions();
    // public System.Int32 get_numberOfClearedMissions()
    // Offset: 0x10DD940
    int get_numberOfClearedMissions();
    // protected System.Void Awake()
    // Offset: 0x10DDAA8
    void Awake();
    // public System.Boolean IsMissionRegistered(System.String missionId)
    // Offset: 0x10DDB10
    bool IsMissionRegistered(::Il2CppString* missionId);
    // public System.Void RegisterMissionId(System.String missionId)
    // Offset: 0x10DDB78
    void RegisterMissionId(::Il2CppString* missionId);
    // public System.Boolean IsMissionCleared(System.String missionId)
    // Offset: 0x10DDBEC
    bool IsMissionCleared(::Il2CppString* missionId);
    // public System.Boolean IsMissionFinal(System.String missionId)
    // Offset: 0x10DDC20
    bool IsMissionFinal(::Il2CppString* missionId);
    // public System.Void SetFinalMissionId(System.String missionId)
    // Offset: 0x10DDC2C
    void SetFinalMissionId(::Il2CppString* missionId);
    // public System.Boolean WillFinishGameAfterThisMission(System.String missionId)
    // Offset: 0x10DDC34
    bool WillFinishGameAfterThisMission(::Il2CppString* missionId);
    // public System.Void SetMissionCleared(System.String missionId)
    // Offset: 0x10DDC80
    void SetMissionCleared(::Il2CppString* missionId);
    // public System.Void __SetMissionCleared(System.String missionId, System.Boolean cleared)
    // Offset: 0x10DDC88
    void __SetMissionCleared(::Il2CppString* missionId, bool cleared);
    // private System.Int32 UpdateNumberOfClearedMissions()
    // Offset: 0x10DD974
    int UpdateNumberOfClearedMissions();
    // public System.Void .ctor()
    // Offset: 0x10DDCD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CampaignProgressModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CampaignProgressModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CampaignProgressModel*, creationType>()));
    }
  }; // CampaignProgressModel
  #pragma pack(pop)
  static check_size<sizeof(CampaignProgressModel), 52 + sizeof(int)> __GlobalNamespace_CampaignProgressModelSizeCheck;
  static_assert(sizeof(CampaignProgressModel) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignProgressModel*, "", "CampaignProgressModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::get_numberOfClearedMissions
// Il2CppName: get_numberOfClearedMissions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CampaignProgressModel::*)()>(&GlobalNamespace::CampaignProgressModel::get_numberOfClearedMissions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "get_numberOfClearedMissions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignProgressModel::*)()>(&GlobalNamespace::CampaignProgressModel::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::IsMissionRegistered
// Il2CppName: IsMissionRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*)>(&GlobalNamespace::CampaignProgressModel::IsMissionRegistered)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "IsMissionRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::RegisterMissionId
// Il2CppName: RegisterMissionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*)>(&GlobalNamespace::CampaignProgressModel::RegisterMissionId)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "RegisterMissionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::IsMissionCleared
// Il2CppName: IsMissionCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*)>(&GlobalNamespace::CampaignProgressModel::IsMissionCleared)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "IsMissionCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::IsMissionFinal
// Il2CppName: IsMissionFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*)>(&GlobalNamespace::CampaignProgressModel::IsMissionFinal)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "IsMissionFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::SetFinalMissionId
// Il2CppName: SetFinalMissionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*)>(&GlobalNamespace::CampaignProgressModel::SetFinalMissionId)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "SetFinalMissionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::WillFinishGameAfterThisMission
// Il2CppName: WillFinishGameAfterThisMission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*)>(&GlobalNamespace::CampaignProgressModel::WillFinishGameAfterThisMission)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "WillFinishGameAfterThisMission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::SetMissionCleared
// Il2CppName: SetMissionCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*)>(&GlobalNamespace::CampaignProgressModel::SetMissionCleared)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "SetMissionCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::__SetMissionCleared
// Il2CppName: __SetMissionCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignProgressModel::*)(::Il2CppString*, bool)>(&GlobalNamespace::CampaignProgressModel::__SetMissionCleared)> {
  static const MethodInfo* get() {
    static auto* missionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cleared = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "__SetMissionCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionId, cleared});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::UpdateNumberOfClearedMissions
// Il2CppName: UpdateNumberOfClearedMissions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CampaignProgressModel::*)()>(&GlobalNamespace::CampaignProgressModel::UpdateNumberOfClearedMissions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignProgressModel*), "UpdateNumberOfClearedMissions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignProgressModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!