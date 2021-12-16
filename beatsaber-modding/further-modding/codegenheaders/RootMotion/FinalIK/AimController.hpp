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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: AimIK
  class AimIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.AimController
  // [TokenAttribute] Offset: FFFFFFFF
  class AimController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::AimController::$TurnToTarget$d__33
    class $TurnToTarget$d__33;
    // [TooltipAttribute] Offset: 0xE2D830
    // public RootMotion.FinalIK.AimIK ik
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::AimIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::AimIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2D868
    // [RangeAttribute] Offset: 0xE2D868
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x20
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: weight and: target
    char __padding1[0x4] = {};
    // [HeaderAttribute] Offset: 0xE2D8BC
    // [TooltipAttribute] Offset: 0xE2D8BC
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2D91C
    // public System.Single targetSwitchSmoothTime
    // Size: 0x4
    // Offset: 0x30
    float targetSwitchSmoothTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2D954
    // public System.Single weightSmoothTime
    // Size: 0x4
    // Offset: 0x34
    float weightSmoothTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE2D98C
    // [TooltipAttribute] Offset: 0xE2D98C
    // public System.Boolean smoothTurnTowardsTarget
    // Size: 0x1
    // Offset: 0x38
    bool smoothTurnTowardsTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: smoothTurnTowardsTarget and: maxRadiansDelta
    char __padding5[0x3] = {};
    // [TooltipAttribute] Offset: 0xE2D9EC
    // public System.Single maxRadiansDelta
    // Size: 0x4
    // Offset: 0x3C
    float maxRadiansDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2DA24
    // public System.Single maxMagnitudeDelta
    // Size: 0x4
    // Offset: 0x40
    float maxMagnitudeDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2DA5C
    // public System.Single slerpSpeed
    // Size: 0x4
    // Offset: 0x44
    float slerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2DA94
    // public UnityEngine.Vector3 pivotOffsetFromRoot
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 pivotOffsetFromRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xE2DACC
    // public System.Single minDistance
    // Size: 0x4
    // Offset: 0x54
    float minDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2DB04
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x58
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0xE2DB3C
    // [TooltipAttribute] Offset: 0xE2DB3C
    // [RangeAttribute] Offset: 0xE2DB3C
    // public System.Single maxRootAngle
    // Size: 0x4
    // Offset: 0x64
    float maxRootAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2DBB8
    // public System.Boolean turnToTarget
    // Size: 0x1
    // Offset: 0x68
    bool turnToTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: turnToTarget and: turnToTargetTime
    char __padding13[0x3] = {};
    // [TooltipAttribute] Offset: 0xE2DBF0
    // public System.Single turnToTargetTime
    // Size: 0x4
    // Offset: 0x6C
    float turnToTargetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE2DC28
    // [TooltipAttribute] Offset: 0xE2DC28
    // public System.Boolean useAnimatedAimDirection
    // Size: 0x1
    // Offset: 0x70
    bool useAnimatedAimDirection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAnimatedAimDirection and: animatedAimDirection
    char __padding15[0x3] = {};
    // [TooltipAttribute] Offset: 0xE2DC88
    // public UnityEngine.Vector3 animatedAimDirection
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 animatedAimDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Transform lastTarget
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* lastTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Single switchWeight
    // Size: 0x4
    // Offset: 0x88
    float switchWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single switchWeightV
    // Size: 0x4
    // Offset: 0x8C
    float switchWeightV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single weightV
    // Size: 0x4
    // Offset: 0x90
    float weightV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x94
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 dir
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 dir;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean lastSmoothTowardsTarget
    // Size: 0x1
    // Offset: 0xAC
    bool lastSmoothTowardsTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean turningToTarget
    // Size: 0x1
    // Offset: 0xAD
    bool turningToTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: turningToTarget and: turnToTargetMlp
    char __padding24[0x2] = {};
    // private System.Single turnToTargetMlp
    // Size: 0x4
    // Offset: 0xB0
    float turnToTargetMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single turnToTargetMlpV
    // Size: 0x4
    // Offset: 0xB4
    float turnToTargetMlpV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AimController
    AimController(RootMotion::FinalIK::AimIK* ik_ = {}, float weight_ = {}, UnityEngine::Transform* target_ = {}, float targetSwitchSmoothTime_ = {}, float weightSmoothTime_ = {}, bool smoothTurnTowardsTarget_ = {}, float maxRadiansDelta_ = {}, float maxMagnitudeDelta_ = {}, float slerpSpeed_ = {}, UnityEngine::Vector3 pivotOffsetFromRoot_ = {}, float minDistance_ = {}, UnityEngine::Vector3 offset_ = {}, float maxRootAngle_ = {}, bool turnToTarget_ = {}, float turnToTargetTime_ = {}, bool useAnimatedAimDirection_ = {}, UnityEngine::Vector3 animatedAimDirection_ = {}, UnityEngine::Transform* lastTarget_ = {}, float switchWeight_ = {}, float switchWeightV_ = {}, float weightV_ = {}, UnityEngine::Vector3 lastPosition_ = {}, UnityEngine::Vector3 dir_ = {}, bool lastSmoothTowardsTarget_ = {}, bool turningToTarget_ = {}, float turnToTargetMlp_ = {}, float turnToTargetMlpV_ = {}) noexcept : ik{ik_}, weight{weight_}, target{target_}, targetSwitchSmoothTime{targetSwitchSmoothTime_}, weightSmoothTime{weightSmoothTime_}, smoothTurnTowardsTarget{smoothTurnTowardsTarget_}, maxRadiansDelta{maxRadiansDelta_}, maxMagnitudeDelta{maxMagnitudeDelta_}, slerpSpeed{slerpSpeed_}, pivotOffsetFromRoot{pivotOffsetFromRoot_}, minDistance{minDistance_}, offset{offset_}, maxRootAngle{maxRootAngle_}, turnToTarget{turnToTarget_}, turnToTargetTime{turnToTargetTime_}, useAnimatedAimDirection{useAnimatedAimDirection_}, animatedAimDirection{animatedAimDirection_}, lastTarget{lastTarget_}, switchWeight{switchWeight_}, switchWeightV{switchWeightV_}, weightV{weightV_}, lastPosition{lastPosition_}, dir{dir_}, lastSmoothTowardsTarget{lastSmoothTowardsTarget_}, turningToTarget{turningToTarget_}, turnToTargetMlp{turnToTargetMlp_}, turnToTargetMlpV{turnToTargetMlpV_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.AimIK ik
    RootMotion::FinalIK::AimIK*& dyn_ik();
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // Get instance field reference: public UnityEngine.Transform target
    UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public System.Single targetSwitchSmoothTime
    float& dyn_targetSwitchSmoothTime();
    // Get instance field reference: public System.Single weightSmoothTime
    float& dyn_weightSmoothTime();
    // Get instance field reference: public System.Boolean smoothTurnTowardsTarget
    bool& dyn_smoothTurnTowardsTarget();
    // Get instance field reference: public System.Single maxRadiansDelta
    float& dyn_maxRadiansDelta();
    // Get instance field reference: public System.Single maxMagnitudeDelta
    float& dyn_maxMagnitudeDelta();
    // Get instance field reference: public System.Single slerpSpeed
    float& dyn_slerpSpeed();
    // Get instance field reference: public UnityEngine.Vector3 pivotOffsetFromRoot
    UnityEngine::Vector3& dyn_pivotOffsetFromRoot();
    // Get instance field reference: public System.Single minDistance
    float& dyn_minDistance();
    // Get instance field reference: public UnityEngine.Vector3 offset
    UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: public System.Single maxRootAngle
    float& dyn_maxRootAngle();
    // Get instance field reference: public System.Boolean turnToTarget
    bool& dyn_turnToTarget();
    // Get instance field reference: public System.Single turnToTargetTime
    float& dyn_turnToTargetTime();
    // Get instance field reference: public System.Boolean useAnimatedAimDirection
    bool& dyn_useAnimatedAimDirection();
    // Get instance field reference: public UnityEngine.Vector3 animatedAimDirection
    UnityEngine::Vector3& dyn_animatedAimDirection();
    // Get instance field reference: private UnityEngine.Transform lastTarget
    UnityEngine::Transform*& dyn_lastTarget();
    // Get instance field reference: private System.Single switchWeight
    float& dyn_switchWeight();
    // Get instance field reference: private System.Single switchWeightV
    float& dyn_switchWeightV();
    // Get instance field reference: private System.Single weightV
    float& dyn_weightV();
    // Get instance field reference: private UnityEngine.Vector3 lastPosition
    UnityEngine::Vector3& dyn_lastPosition();
    // Get instance field reference: private UnityEngine.Vector3 dir
    UnityEngine::Vector3& dyn_dir();
    // Get instance field reference: private System.Boolean lastSmoothTowardsTarget
    bool& dyn_lastSmoothTowardsTarget();
    // Get instance field reference: private System.Boolean turningToTarget
    bool& dyn_turningToTarget();
    // Get instance field reference: private System.Single turnToTargetMlp
    float& dyn_turnToTargetMlp();
    // Get instance field reference: private System.Single turnToTargetMlpV
    float& dyn_turnToTargetMlpV();
    // private UnityEngine.Vector3 get_pivot()
    // Offset: 0x1D30A80
    UnityEngine::Vector3 get_pivot();
    // private System.Void Start()
    // Offset: 0x1D30984
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x1D30BCC
    void LateUpdate();
    // private System.Void ApplyMinDistance()
    // Offset: 0x1D31304
    void ApplyMinDistance();
    // private System.Void RootRotation()
    // Offset: 0x1D314A0
    void RootRotation();
    // private System.Collections.IEnumerator TurnToTarget()
    // Offset: 0x1D31810
    System::Collections::IEnumerator* TurnToTarget();
    // public System.Void .ctor()
    // Offset: 0x1D318AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AimController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::AimController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AimController*, creationType>()));
    }
  }; // RootMotion.FinalIK.AimController
  #pragma pack(pop)
  static check_size<sizeof(AimController), 180 + sizeof(float)> __RootMotion_FinalIK_AimControllerSizeCheck;
  static_assert(sizeof(AimController) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::AimController*, "RootMotion.FinalIK", "AimController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::get_pivot
// Il2CppName: get_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::AimController::*)()>(&RootMotion::FinalIK::AimController::get_pivot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController*), "get_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimController::*)()>(&RootMotion::FinalIK::AimController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimController::*)()>(&RootMotion::FinalIK::AimController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::ApplyMinDistance
// Il2CppName: ApplyMinDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimController::*)()>(&RootMotion::FinalIK::AimController::ApplyMinDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController*), "ApplyMinDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::RootRotation
// Il2CppName: RootRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimController::*)()>(&RootMotion::FinalIK::AimController::RootRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController*), "RootRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::TurnToTarget
// Il2CppName: TurnToTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (RootMotion::FinalIK::AimController::*)()>(&RootMotion::FinalIK::AimController::TurnToTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController*), "TurnToTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!