// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: DlcPromoExperimentModel
#include "GlobalNamespace/DlcPromoExperimentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: DlcPromoExperimentDataSO
#include "GlobalNamespace/DlcPromoExperimentDataSO.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DlcPromoExperimentModel/<UpdateNotOwnedPacksAsync>d__18
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public DlcPromoExperimentModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::DlcPromoExperimentModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentModel*) == 0x8);
    // private System.Collections.Generic.List`1<DlcPromoExperimentDataSO/MusicPackPromoInfo> <newNotOwnedMusicPackPromoInfos>5__2
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* $newNotOwnedMusicPackPromoInfos$5__2;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*) == 0x8);
    // private DlcPromoExperimentDataSO/MusicPackPromoInfo[] <>7__wrap2
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* $$7__wrap2;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*) == 0x8);
    // private System.Int32 <>7__wrap3
    // Size: 0x4
    // Offset: 0x40
    int $$7__wrap3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private DlcPromoExperimentDataSO/MusicPackPromoInfo <packData>5__5
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* $packData$5__5;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // Creating value type constructor for type: $UpdateNotOwnedPacksAsync$d__18
    constexpr $UpdateNotOwnedPacksAsync$d__18(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::DlcPromoExperimentModel* $$4__this_ = {}, System::Collections::Generic::List_1<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* $newNotOwnedMusicPackPromoInfos$5__2_ = {}, ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* $$7__wrap2_ = {}, int $$7__wrap3_ = {}, GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* $packData$5__5_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $newNotOwnedMusicPackPromoInfos$5__2{$newNotOwnedMusicPackPromoInfos$5__2_}, $$7__wrap2{$$7__wrap2_}, $$7__wrap3{$$7__wrap3_}, $packData$5__5{$packData$5__5_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public DlcPromoExperimentModel <>4__this
    GlobalNamespace::DlcPromoExperimentModel*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.List`1<DlcPromoExperimentDataSO/MusicPackPromoInfo> <newNotOwnedMusicPackPromoInfos>5__2
    System::Collections::Generic::List_1<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*& dyn_$newNotOwnedMusicPackPromoInfos$5__2();
    // Get instance field reference: private DlcPromoExperimentDataSO/MusicPackPromoInfo[] <>7__wrap2
    ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*& dyn_$$7__wrap2();
    // Get instance field reference: private System.Int32 <>7__wrap3
    int& dyn_$$7__wrap3();
    // Get instance field reference: private DlcPromoExperimentDataSO/MusicPackPromoInfo <packData>5__5
    GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*& dyn_$packData$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1051190
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x10514D4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // DlcPromoExperimentModel/<UpdateNotOwnedPacksAsync>d__18
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18, "", "DlcPromoExperimentModel/<UpdateNotOwnedPacksAsync>d__18");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18::*)()>(&GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__18), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
