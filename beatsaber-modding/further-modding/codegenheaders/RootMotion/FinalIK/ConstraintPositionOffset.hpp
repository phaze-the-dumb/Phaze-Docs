// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.ConstraintPositionOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintPositionOffset : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 defaultLocalPosition
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 defaultLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastLocalPosition
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 lastLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x40
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ConstraintPositionOffset
    ConstraintPositionOffset(UnityEngine::Vector3 offset_ = {}, UnityEngine::Vector3 defaultLocalPosition_ = {}, UnityEngine::Vector3 lastLocalPosition_ = {}, bool initiated_ = {}) noexcept : offset{offset_}, defaultLocalPosition{defaultLocalPosition_}, lastLocalPosition{lastLocalPosition_}, initiated{initiated_} {}
    // Get instance field reference: public UnityEngine.Vector3 offset
    UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: private UnityEngine.Vector3 defaultLocalPosition
    UnityEngine::Vector3& dyn_defaultLocalPosition();
    // Get instance field reference: private UnityEngine.Vector3 lastLocalPosition
    UnityEngine::Vector3& dyn_lastLocalPosition();
    // Get instance field reference: private System.Boolean initiated
    bool& dyn_initiated();
    // private System.Boolean get_positionChanged()
    // Offset: 0x1D343CC
    bool get_positionChanged();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1D34490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintPositionOffset* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintPositionOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintPositionOffset*, creationType>(transform)));
    }
    // public System.Void .ctor()
    // Offset: 0x1D34488
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintPositionOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintPositionOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintPositionOffset*, creationType>()));
    }
    // public override System.Void UpdateConstraint()
    // Offset: 0x1D34230
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
  }; // RootMotion.FinalIK.ConstraintPositionOffset
  #pragma pack(pop)
  static check_size<sizeof(ConstraintPositionOffset), 64 + sizeof(bool)> __RootMotion_FinalIK_ConstraintPositionOffsetSizeCheck;
  static_assert(sizeof(ConstraintPositionOffset) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintPositionOffset*, "RootMotion.FinalIK", "ConstraintPositionOffset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintPositionOffset::get_positionChanged
// Il2CppName: get_positionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::ConstraintPositionOffset::*)()>(&RootMotion::FinalIK::ConstraintPositionOffset::get_positionChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ConstraintPositionOffset*), "get_positionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintPositionOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintPositionOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintPositionOffset::UpdateConstraint
// Il2CppName: UpdateConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintPositionOffset::*)()>(&RootMotion::FinalIK::ConstraintPositionOffset::UpdateConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ConstraintPositionOffset*), "UpdateConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};