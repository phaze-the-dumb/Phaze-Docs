// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PS4AchievementIdsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4AchievementIdsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData
    class AchievementIdData;
    // private System.Collections.Generic.List`1<PS4AchievementIdsModelSO/AchievementIdData> _achievementsIds
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData*>* achievementsIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> _achievementIdToTrophyId
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* achievementIdToTrophyId;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> _trophyIdToAchievementId
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* trophyIdToAchievementId;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: PS4AchievementIdsModelSO
    PS4AchievementIdsModelSO(System::Collections::Generic::List_1<GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData*>* achievementsIds_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* achievementIdToTrophyId_ = {}, System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* trophyIdToAchievementId_ = {}) noexcept : achievementsIds{achievementsIds_}, achievementIdToTrophyId{achievementIdToTrophyId_}, trophyIdToAchievementId{trophyIdToAchievementId_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<PS4AchievementIdsModelSO/AchievementIdData> _achievementsIds
    System::Collections::Generic::List_1<GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData*>*& dyn__achievementsIds();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Int32> _achievementIdToTrophyId
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*& dyn__achievementIdToTrophyId();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.String> _trophyIdToAchievementId
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>*& dyn__trophyIdToAchievementId();
    // public System.Collections.Generic.List`1<PS4AchievementIdsModelSO/AchievementIdData> get_achievementsIds()
    // Offset: 0x10346CC
    System::Collections::Generic::List_1<GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData*>* get_achievementsIds();
    // public System.Boolean GetTrophyId(System.String achievementId, out System.Int32 trophyId)
    // Offset: 0x1034894
    bool GetTrophyId(::Il2CppString* achievementId, ByRef<int> trophyId);
    // public System.Boolean GetAchievementId(System.Int32 trophyId, out System.String achievementId)
    // Offset: 0x1034908
    bool GetAchievementId(int trophyId, ByRef<::Il2CppString*> achievementId);
    // public System.Void .ctor()
    // Offset: 0x1034988
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4AchievementIdsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4AchievementIdsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4AchievementIdsModelSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x10346D4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // PS4AchievementIdsModelSO
  #pragma pack(pop)
  static check_size<sizeof(PS4AchievementIdsModelSO), 40 + sizeof(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>*)> __GlobalNamespace_PS4AchievementIdsModelSOSizeCheck;
  static_assert(sizeof(PS4AchievementIdsModelSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4AchievementIdsModelSO*, "", "PS4AchievementIdsModelSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4AchievementIdsModelSO::get_achievementsIds
// Il2CppName: get_achievementsIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData*>* (GlobalNamespace::PS4AchievementIdsModelSO::*)()>(&GlobalNamespace::PS4AchievementIdsModelSO::get_achievementsIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AchievementIdsModelSO*), "get_achievementsIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4AchievementIdsModelSO::GetTrophyId
// Il2CppName: GetTrophyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PS4AchievementIdsModelSO::*)(::Il2CppString*, ByRef<int>)>(&GlobalNamespace::PS4AchievementIdsModelSO::GetTrophyId)> {
  static const MethodInfo* get() {
    static auto* achievementId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* trophyId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AchievementIdsModelSO*), "GetTrophyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{achievementId, trophyId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4AchievementIdsModelSO::GetAchievementId
// Il2CppName: GetAchievementId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PS4AchievementIdsModelSO::*)(int, ByRef<::Il2CppString*>)>(&GlobalNamespace::PS4AchievementIdsModelSO::GetAchievementId)> {
  static const MethodInfo* get() {
    static auto* trophyId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* achievementId = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AchievementIdsModelSO*), "GetAchievementId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trophyId, achievementId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4AchievementIdsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PS4AchievementIdsModelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4AchievementIdsModelSO::*)()>(&GlobalNamespace::PS4AchievementIdsModelSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AchievementIdsModelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};