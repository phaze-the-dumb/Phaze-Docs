// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA5
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverTrigonometric
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverTrigonometric : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone
    class TrigonometricBone;
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xE2CB3C
    // public System.Single IKRotationWeight
    // Size: 0x4
    // Offset: 0x60
    float IKRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0x64
    UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 bendNormal
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 bendNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone bone1
    // Size: 0x8
    // Offset: 0x80
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone1;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*) == 0x8);
    // public RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone bone2
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone2;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*) == 0x8);
    // public RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone bone3
    // Size: 0x8
    // Offset: 0x90
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone3;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*) == 0x8);
    // protected UnityEngine.Vector3 weightIKPosition
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 weightIKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected System.Boolean directHierarchy
    // Size: 0x1
    // Offset: 0xA4
    bool directHierarchy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IKSolverTrigonometric
    IKSolverTrigonometric(UnityEngine::Transform* target_ = {}, float IKRotationWeight_ = {}, UnityEngine::Quaternion IKRotation_ = {}, UnityEngine::Vector3 bendNormal_ = {}, RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone1_ = {}, RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone2_ = {}, RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone3_ = {}, UnityEngine::Vector3 weightIKPosition_ = {}, bool directHierarchy_ = {}) noexcept : target{target_}, IKRotationWeight{IKRotationWeight_}, IKRotation{IKRotation_}, bendNormal{bendNormal_}, bone1{bone1_}, bone2{bone2_}, bone3{bone3_}, weightIKPosition{weightIKPosition_}, directHierarchy{directHierarchy_} {}
    // Get instance field reference: public UnityEngine.Transform target
    UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public System.Single IKRotationWeight
    float& dyn_IKRotationWeight();
    // Get instance field reference: public UnityEngine.Quaternion IKRotation
    UnityEngine::Quaternion& dyn_IKRotation();
    // Get instance field reference: public UnityEngine.Vector3 bendNormal
    UnityEngine::Vector3& dyn_bendNormal();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone bone1
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*& dyn_bone1();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone bone2
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*& dyn_bone2();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone bone3
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*& dyn_bone3();
    // Get instance field reference: protected UnityEngine.Vector3 weightIKPosition
    UnityEngine::Vector3& dyn_weightIKPosition();
    // Get instance field reference: protected System.Boolean directHierarchy
    bool& dyn_directHierarchy();
    // public System.Void SetBendGoalPosition(UnityEngine.Vector3 goalPosition, System.Single weight)
    // Offset: 0x1CBAD40
    void SetBendGoalPosition(UnityEngine::Vector3 goalPosition, float weight);
    // public System.Void SetBendPlaneToCurrent()
    // Offset: 0x1CBAF30
    void SetBendPlaneToCurrent();
    // public System.Void SetIKRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1CBB0E4
    void SetIKRotation(UnityEngine::Quaternion rotation);
    // public System.Void SetIKRotationWeight(System.Single weight)
    // Offset: 0x1CBB0F0
    void SetIKRotationWeight(float weight);
    // public UnityEngine.Quaternion GetIKRotation()
    // Offset: 0x1CBB174
    UnityEngine::Quaternion GetIKRotation();
    // public System.Single GetIKRotationWeight()
    // Offset: 0x1CBB180
    float GetIKRotationWeight();
    // public System.Boolean SetChain(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, UnityEngine.Transform root)
    // Offset: 0x1CBB834
    bool SetChain(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, UnityEngine::Transform* root);
    // static public System.Void Solve(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, UnityEngine.Vector3 targetPosition, UnityEngine.Vector3 bendNormal, System.Single weight)
    // Offset: 0x1CBB88C
    static void Solve(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float weight);
    // static private UnityEngine.Vector3 GetDirectionToBendPoint(UnityEngine.Vector3 direction, System.Single directionMag, UnityEngine.Vector3 bendDirection, System.Single sqrMag1, System.Single sqrMag2)
    // Offset: 0x1CBBE34
    static UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine::Vector3 direction, float directionMag, UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2);
    // private System.Boolean IsDirectHierarchy()
    // Offset: 0x1CBC208
    bool IsDirectHierarchy();
    // private System.Void InitiateBones()
    // Offset: 0x1CBC184
    void InitiateBones();
    // protected System.Void OnInitiateVirtual()
    // Offset: 0x1CBCF84
    void OnInitiateVirtual();
    // protected System.Void OnUpdateVirtual()
    // Offset: 0x1CBCF88
    void OnUpdateVirtual();
    // protected System.Void OnPostSolveVirtual()
    // Offset: 0x1CBCF8C
    void OnPostSolveVirtual();
    // protected UnityEngine.Vector3 GetBendDirection(UnityEngine.Vector3 IKPosition, UnityEngine.Vector3 bendNormal)
    // Offset: 0x1CBCBBC
    UnityEngine::Vector3 GetBendDirection(UnityEngine::Vector3 IKPosition, UnityEngine::Vector3 bendNormal);
    // public System.Void .ctor()
    // Offset: 0x1CB8398
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverTrigonometric* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverTrigonometric::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverTrigonometric*, creationType>()));
    }
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0x1CBB188
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1CBB28C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1CBB3AC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1CBB3F8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1CBB458
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(ByRef<::Il2CppString*> message);
    // protected override System.Void OnInitiate()
    // Offset: 0x1CBC04C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1CBC4B0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverTrigonometric
  #pragma pack(pop)
  static check_size<sizeof(IKSolverTrigonometric), 164 + sizeof(bool)> __RootMotion_FinalIK_IKSolverTrigonometricSizeCheck;
  static_assert(sizeof(IKSolverTrigonometric) == 0xA5);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverTrigonometric*, "RootMotion.FinalIK", "IKSolverTrigonometric");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition
// Il2CppName: SetBendGoalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition)> {
  static const MethodInfo* get() {
    static auto* goalPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "SetBendGoalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goalPosition, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent
// Il2CppName: SetBendPlaneToCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "SetBendPlaneToCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation
// Il2CppName: SetIKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "SetIKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight
// Il2CppName: SetIKRotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)(float)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "SetIKRotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation
// Il2CppName: GetIKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "GetIKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight
// Il2CppName: GetIKRotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "GetIKRotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetChain
// Il2CppName: SetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetChain)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "SetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3, root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverTrigonometric::Solve)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bendNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3, targetPosition, bendNormal, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint
// Il2CppName: GetDirectionToBendPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, float, UnityEngine::Vector3, float, float)>(&RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* directionMag = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bendDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sqrMag1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sqrMag2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "GetDirectionToBendPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction, directionMag, bendDirection, sqrMag1, sqrMag2});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy
// Il2CppName: IsDirectHierarchy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "IsDirectHierarchy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones
// Il2CppName: InitiateBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "InitiateBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual
// Il2CppName: OnInitiateVirtual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "OnInitiateVirtual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual
// Il2CppName: OnUpdateVirtual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "OnUpdateVirtual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual
// Il2CppName: OnPostSolveVirtual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "OnPostSolveVirtual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection
// Il2CppName: GetBendDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection)> {
  static const MethodInfo* get() {
    static auto* IKPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bendNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "GetBendDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{IKPosition, bendNormal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver::Point*>* (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverTrigonometric::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverTrigonometric::*)(ByRef<::Il2CppString*>)>(&RootMotion::FinalIK::IKSolverTrigonometric::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};