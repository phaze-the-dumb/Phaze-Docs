// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CubicBezierHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class CubicBezierHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CubicBezierHelper
    CubicBezierHelper() noexcept {}
    // static public UnityEngine.Vector3 EvaluateCurve(UnityEngine.Vector3[] points, System.Single t)
    // Offset: 0x125DFC8
    static UnityEngine::Vector3 EvaluateCurve(::Array<UnityEngine::Vector3>* points, float t);
    // static public UnityEngine.Vector3 EvaluateCurve(UnityEngine.Vector3 a1, UnityEngine.Vector3 c1, UnityEngine.Vector3 c2, UnityEngine.Vector3 a2, System.Single t)
    // Offset: 0x125E04C
    static UnityEngine::Vector3 EvaluateCurve(UnityEngine::Vector3 a1, UnityEngine::Vector3 c1, UnityEngine::Vector3 c2, UnityEngine::Vector3 a2, float t);
    // static public UnityEngine.Vector3 EvaluateCurveDerivative(UnityEngine.Vector3[] points, System.Single t)
    // Offset: 0x125E244
    static UnityEngine::Vector3 EvaluateCurveDerivative(::Array<UnityEngine::Vector3>* points, float t);
    // static public UnityEngine.Vector3 EvaluateCurveDerivative(UnityEngine.Vector3 a1, UnityEngine.Vector3 c1, UnityEngine.Vector3 c2, UnityEngine.Vector3 a2, System.Single t)
    // Offset: 0x125E2C8
    static UnityEngine::Vector3 EvaluateCurveDerivative(UnityEngine::Vector3 a1, UnityEngine::Vector3 c1, UnityEngine::Vector3 c2, UnityEngine::Vector3 a2, float t);
    // static public UnityEngine.Vector3 EvaluateCurveSecondDerivative(UnityEngine.Vector3[] points, System.Single t)
    // Offset: 0x125E508
    static UnityEngine::Vector3 EvaluateCurveSecondDerivative(::Array<UnityEngine::Vector3>* points, float t);
    // static public UnityEngine.Vector3 EvaluateCurveSecondDerivative(UnityEngine.Vector3 a1, UnityEngine.Vector3 c1, UnityEngine.Vector3 c2, UnityEngine.Vector3 a2, System.Single t)
    // Offset: 0x125E58C
    static UnityEngine::Vector3 EvaluateCurveSecondDerivative(UnityEngine::Vector3 a1, UnityEngine::Vector3 c1, UnityEngine::Vector3 c2, UnityEngine::Vector3 a2, float t);
    // static public UnityEngine.Vector3 Normal(UnityEngine.Vector3[] points, System.Single t)
    // Offset: 0x125E78C
    static UnityEngine::Vector3 Normal(::Array<UnityEngine::Vector3>* points, float t);
    // static public UnityEngine.Vector3 Normal(UnityEngine.Vector3 a1, UnityEngine.Vector3 c1, UnityEngine.Vector3 c2, UnityEngine.Vector3 a2, System.Single t)
    // Offset: 0x125E810
    static UnityEngine::Vector3 Normal(UnityEngine::Vector3 a1, UnityEngine::Vector3 c1, UnityEngine::Vector3 c2, UnityEngine::Vector3 a2, float t);
    // static public System.Collections.Generic.List`1<UnityEngine.Vector3> SplitCurve(System.Collections.Generic.List`1<UnityEngine.Vector3> points, System.Single t)
    // Offset: 0x125E9A0
    static System::Collections::Generic::List_1<UnityEngine::Vector3>* SplitCurve(System::Collections::Generic::List_1<UnityEngine::Vector3>* points, float t);
    // static public System.Single EstimateCurveLength(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, UnityEngine.Vector3 p3)
    // Offset: 0x125ED04
    static float EstimateCurveLength(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Vector3 p3);
  }; // CubicBezierHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CubicBezierHelper*, "", "CubicBezierHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::EvaluateCurve
// Il2CppName: EvaluateCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(::Array<UnityEngine::Vector3>*, float)>(&GlobalNamespace::CubicBezierHelper::EvaluateCurve)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "EvaluateCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::EvaluateCurve
// Il2CppName: EvaluateCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::CubicBezierHelper::EvaluateCurve)> {
  static const MethodInfo* get() {
    static auto* a1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* a2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "EvaluateCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a1, c1, c2, a2, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::EvaluateCurveDerivative
// Il2CppName: EvaluateCurveDerivative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(::Array<UnityEngine::Vector3>*, float)>(&GlobalNamespace::CubicBezierHelper::EvaluateCurveDerivative)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "EvaluateCurveDerivative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::EvaluateCurveDerivative
// Il2CppName: EvaluateCurveDerivative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::CubicBezierHelper::EvaluateCurveDerivative)> {
  static const MethodInfo* get() {
    static auto* a1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* a2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "EvaluateCurveDerivative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a1, c1, c2, a2, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::EvaluateCurveSecondDerivative
// Il2CppName: EvaluateCurveSecondDerivative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(::Array<UnityEngine::Vector3>*, float)>(&GlobalNamespace::CubicBezierHelper::EvaluateCurveSecondDerivative)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "EvaluateCurveSecondDerivative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::EvaluateCurveSecondDerivative
// Il2CppName: EvaluateCurveSecondDerivative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::CubicBezierHelper::EvaluateCurveSecondDerivative)> {
  static const MethodInfo* get() {
    static auto* a1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* a2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "EvaluateCurveSecondDerivative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a1, c1, c2, a2, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::Normal
// Il2CppName: Normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(::Array<UnityEngine::Vector3>*, float)>(&GlobalNamespace::CubicBezierHelper::Normal)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "Normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::Normal
// Il2CppName: Normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::CubicBezierHelper::Normal)> {
  static const MethodInfo* get() {
    static auto* a1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* a2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "Normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a1, c1, c2, a2, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::SplitCurve
// Il2CppName: SplitCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Vector3>* (*)(System::Collections::Generic::List_1<UnityEngine::Vector3>*, float)>(&GlobalNamespace::CubicBezierHelper::SplitCurve)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "SplitCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubicBezierHelper::EstimateCurveLength
// Il2CppName: EstimateCurveLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::CubicBezierHelper::EstimateCurveLength)> {
  static const MethodInfo* get() {
    static auto* p0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubicBezierHelper*), "EstimateCurveLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p0, p1, p2, p3});
  }
};
