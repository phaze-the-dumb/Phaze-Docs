// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: OVROverlay/OverlayShape
#include "GlobalNamespace/OVROverlay.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: OVROverlay because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MeshCollider
  class MeshCollider;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD1
  #pragma pack(push, 1)
  // Autogenerated type: OVROverlayMeshGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DF2414
  // [RequireComponent] Offset: DF2414
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class OVROverlayMeshGenerator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVROverlayMeshGenerator::CubeFace
    struct CubeFace;
    // private UnityEngine.Mesh _Mesh
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Mesh* Mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> _Verts
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Vector3>* Verts;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> _UV
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::Vector2>* UV;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> _Tris
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<int>* Tris;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private OVROverlay _Overlay
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::OVROverlay* Overlay;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVROverlay*) == 0x8);
    // private UnityEngine.MeshFilter _MeshFilter
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::MeshFilter* MeshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshCollider _MeshCollider
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::MeshCollider* MeshCollider;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshCollider*) == 0x8);
    // private UnityEngine.MeshRenderer _MeshRenderer
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::MeshRenderer* MeshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Transform _CameraRoot
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* CameraRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _Transform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* Transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private OVROverlay/OverlayShape _LastShape
    // Size: 0x4
    // Offset: 0x68
    GlobalNamespace::OVROverlay::OverlayShape LastShape;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVROverlay::OverlayShape) == 0x4);
    // private UnityEngine.Vector3 _LastPosition
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 LastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _LastRotation
    // Size: 0x10
    // Offset: 0x78
    UnityEngine::Quaternion LastRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _LastScale
    // Size: 0xC
    // Offset: 0x88
    UnityEngine::Vector3 LastScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Rect _LastDestRectLeft
    // Size: 0x10
    // Offset: 0x94
    UnityEngine::Rect LastDestRectLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private UnityEngine.Rect _LastDestRectRight
    // Size: 0x10
    // Offset: 0xA4
    UnityEngine::Rect LastDestRectRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private UnityEngine.Rect _LastSrcRectLeft
    // Size: 0x10
    // Offset: 0xB4
    UnityEngine::Rect LastSrcRectLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // Padding between fields: LastSrcRectLeft and: LastTexture
    char __padding16[0x4] = {};
    // private UnityEngine.Texture _LastTexture
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::Texture* LastTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // private System.Boolean _Awake
    // Size: 0x1
    // Offset: 0xD0
    bool Awake_;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVROverlayMeshGenerator
    OVROverlayMeshGenerator(UnityEngine::Mesh* Mesh_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector3>* Verts_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* UV_ = {}, System::Collections::Generic::List_1<int>* Tris_ = {}, GlobalNamespace::OVROverlay* Overlay_ = {}, UnityEngine::MeshFilter* MeshFilter_ = {}, UnityEngine::MeshCollider* MeshCollider_ = {}, UnityEngine::MeshRenderer* MeshRenderer_ = {}, UnityEngine::Transform* CameraRoot_ = {}, UnityEngine::Transform* Transform_ = {}, GlobalNamespace::OVROverlay::OverlayShape LastShape_ = {}, UnityEngine::Vector3 LastPosition_ = {}, UnityEngine::Quaternion LastRotation_ = {}, UnityEngine::Vector3 LastScale_ = {}, UnityEngine::Rect LastDestRectLeft_ = {}, UnityEngine::Rect LastDestRectRight_ = {}, UnityEngine::Rect LastSrcRectLeft_ = {}, UnityEngine::Texture* LastTexture_ = {}, bool Awake__ = {}) noexcept : Mesh{Mesh_}, Verts{Verts_}, UV{UV_}, Tris{Tris_}, Overlay{Overlay_}, MeshFilter{MeshFilter_}, MeshCollider{MeshCollider_}, MeshRenderer{MeshRenderer_}, CameraRoot{CameraRoot_}, Transform{Transform_}, LastShape{LastShape_}, LastPosition{LastPosition_}, LastRotation{LastRotation_}, LastScale{LastScale_}, LastDestRectLeft{LastDestRectLeft_}, LastDestRectRight{LastDestRectRight_}, LastSrcRectLeft{LastSrcRectLeft_}, LastTexture{LastTexture_}, Awake_{Awake__} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly UnityEngine.Vector3[] BottomLeft
    static ::Array<UnityEngine::Vector3>* _get_BottomLeft();
    // Set static field: static private readonly UnityEngine.Vector3[] BottomLeft
    static void _set_BottomLeft(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] RightVector
    static ::Array<UnityEngine::Vector3>* _get_RightVector();
    // Set static field: static private readonly UnityEngine.Vector3[] RightVector
    static void _set_RightVector(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] UpVector
    static ::Array<UnityEngine::Vector3>* _get_UpVector();
    // Set static field: static private readonly UnityEngine.Vector3[] UpVector
    static void _set_UpVector(::Array<UnityEngine::Vector3>* value);
    // Get instance field reference: private UnityEngine.Mesh _Mesh
    UnityEngine::Mesh*& dyn__Mesh();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3> _Verts
    System::Collections::Generic::List_1<UnityEngine::Vector3>*& dyn__Verts();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector2> _UV
    System::Collections::Generic::List_1<UnityEngine::Vector2>*& dyn__UV();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> _Tris
    System::Collections::Generic::List_1<int>*& dyn__Tris();
    // Get instance field reference: private OVROverlay _Overlay
    GlobalNamespace::OVROverlay*& dyn__Overlay();
    // Get instance field reference: private UnityEngine.MeshFilter _MeshFilter
    UnityEngine::MeshFilter*& dyn__MeshFilter();
    // Get instance field reference: private UnityEngine.MeshCollider _MeshCollider
    UnityEngine::MeshCollider*& dyn__MeshCollider();
    // Get instance field reference: private UnityEngine.MeshRenderer _MeshRenderer
    UnityEngine::MeshRenderer*& dyn__MeshRenderer();
    // Get instance field reference: private UnityEngine.Transform _CameraRoot
    UnityEngine::Transform*& dyn__CameraRoot();
    // Get instance field reference: private UnityEngine.Transform _Transform
    UnityEngine::Transform*& dyn__Transform();
    // Get instance field reference: private OVROverlay/OverlayShape _LastShape
    GlobalNamespace::OVROverlay::OverlayShape& dyn__LastShape();
    // Get instance field reference: private UnityEngine.Vector3 _LastPosition
    UnityEngine::Vector3& dyn__LastPosition();
    // Get instance field reference: private UnityEngine.Quaternion _LastRotation
    UnityEngine::Quaternion& dyn__LastRotation();
    // Get instance field reference: private UnityEngine.Vector3 _LastScale
    UnityEngine::Vector3& dyn__LastScale();
    // Get instance field reference: private UnityEngine.Rect _LastDestRectLeft
    UnityEngine::Rect& dyn__LastDestRectLeft();
    // Get instance field reference: private UnityEngine.Rect _LastDestRectRight
    UnityEngine::Rect& dyn__LastDestRectRight();
    // Get instance field reference: private UnityEngine.Rect _LastSrcRectLeft
    UnityEngine::Rect& dyn__LastSrcRectLeft();
    // Get instance field reference: private UnityEngine.Texture _LastTexture
    UnityEngine::Texture*& dyn__LastTexture();
    // Get instance field reference: private System.Boolean _Awake
    bool& dyn__Awake();
    // protected System.Void Awake()
    // Offset: 0x1358EF4
    void Awake();
    // public System.Void SetOverlay(OVROverlay overlay)
    // Offset: 0x1359054
    void SetOverlay(GlobalNamespace::OVROverlay* overlay);
    // private UnityEngine.Rect GetBoundingRect(UnityEngine.Rect a, UnityEngine.Rect b)
    // Offset: 0x135905C
    UnityEngine::Rect GetBoundingRect(UnityEngine::Rect a, UnityEngine::Rect b);
    // protected System.Void OnEnable()
    // Offset: 0x1359218
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x135921C
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x1359220
    void Update();
    // private System.Void UpdateMesh(OVROverlay/OverlayShape shape, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale, UnityEngine.Rect rect)
    // Offset: 0x1359910
    void UpdateMesh(GlobalNamespace::OVROverlay::OverlayShape shape, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 scale, UnityEngine::Rect rect);
    // static public System.Void GenerateMesh(System.Collections.Generic.List`1<UnityEngine.Vector3> verts, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Collections.Generic.List`1<System.Int32> tris, OVROverlay/OverlayShape shape, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale, UnityEngine.Rect rect)
    // Offset: 0x1359BE4
    static void GenerateMesh(System::Collections::Generic::List_1<UnityEngine::Vector3>* verts, System::Collections::Generic::List_1<UnityEngine::Vector2>* uvs, System::Collections::Generic::List_1<int>* tris, GlobalNamespace::OVROverlay::OverlayShape shape, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 scale, UnityEngine::Rect rect);
    // static private UnityEngine.Vector2 GetSphereUV(System.Single theta, System.Single phi, System.Single expand_coef)
    // Offset: 0x135AE40
    static UnityEngine::Vector2 GetSphereUV(float theta, float phi, float expand_coef);
    // static private UnityEngine.Vector3 GetSphereVert(System.Single theta, System.Single phi)
    // Offset: 0x135AEA0
    static UnityEngine::Vector3 GetSphereVert(float theta, float phi);
    // static public System.Void BuildSphere(System.Collections.Generic.List`1<UnityEngine.Vector3> verts, System.Collections.Generic.List`1<UnityEngine.Vector2> uv, System.Collections.Generic.List`1<System.Int32> triangles, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale, UnityEngine.Rect rect, System.Single worldScale, System.Int32 latitudes, System.Int32 longitudes, System.Single expand_coef)
    // Offset: 0x1359F64
    static void BuildSphere(System::Collections::Generic::List_1<UnityEngine::Vector3>* verts, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv, System::Collections::Generic::List_1<int>* triangles, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 scale, UnityEngine::Rect rect, float worldScale, int latitudes, int longitudes, float expand_coef);
    // static private UnityEngine.Vector2 GetCubeUV(OVROverlayMeshGenerator/CubeFace face, UnityEngine.Vector2 sideUV, System.Single expand_coef)
    // Offset: 0x135AF88
    static UnityEngine::Vector2 GetCubeUV(GlobalNamespace::OVROverlayMeshGenerator::CubeFace face, UnityEngine::Vector2 sideUV, float expand_coef);
    // static private UnityEngine.Vector3 GetCubeVert(OVROverlayMeshGenerator/CubeFace face, UnityEngine.Vector2 sideUV, System.Single expand_coef)
    // Offset: 0x135B174
    static UnityEngine::Vector3 GetCubeVert(GlobalNamespace::OVROverlayMeshGenerator::CubeFace face, UnityEngine::Vector2 sideUV, float expand_coef);
    // static public System.Void BuildCube(System.Collections.Generic.List`1<UnityEngine.Vector3> verts, System.Collections.Generic.List`1<UnityEngine.Vector2> uv, System.Collections.Generic.List`1<System.Int32> triangles, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale, System.Single worldScale, System.Int32 subQuads, System.Single expand_coef)
    // Offset: 0x135A41C
    static void BuildCube(System::Collections::Generic::List_1<UnityEngine::Vector3>* verts, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv, System::Collections::Generic::List_1<int>* triangles, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 scale, float worldScale, int subQuads, float expand_coef);
    // static public System.Void BuildQuad(System.Collections.Generic.List`1<UnityEngine.Vector3> verts, System.Collections.Generic.List`1<UnityEngine.Vector2> uv, System.Collections.Generic.List`1<System.Int32> triangles, UnityEngine.Rect rect)
    // Offset: 0x135A744
    static void BuildQuad(System::Collections::Generic::List_1<UnityEngine::Vector3>* verts, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv, System::Collections::Generic::List_1<int>* triangles, UnityEngine::Rect rect);
    // static public System.Void BuildHemicylinder(System.Collections.Generic.List`1<UnityEngine.Vector3> verts, System.Collections.Generic.List`1<UnityEngine.Vector2> uv, System.Collections.Generic.List`1<System.Int32> triangles, UnityEngine.Vector3 scale, UnityEngine.Rect rect, System.Int32 longitudes)
    // Offset: 0x135AA9C
    static void BuildHemicylinder(System::Collections::Generic::List_1<UnityEngine::Vector3>* verts, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv, System::Collections::Generic::List_1<int>* triangles, UnityEngine::Vector3 scale, UnityEngine::Rect rect, int longitudes);
    // public System.Void .ctor()
    // Offset: 0x135B328
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVROverlayMeshGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVROverlayMeshGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVROverlayMeshGenerator*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x135B3E8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVROverlayMeshGenerator
  #pragma pack(pop)
  static check_size<sizeof(OVROverlayMeshGenerator), 208 + sizeof(bool)> __GlobalNamespace_OVROverlayMeshGeneratorSizeCheck;
  static_assert(sizeof(OVROverlayMeshGenerator) == 0xD1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlayMeshGenerator*, "", "OVROverlayMeshGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlayMeshGenerator::*)()>(&GlobalNamespace::OVROverlayMeshGenerator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::SetOverlay
// Il2CppName: SetOverlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlayMeshGenerator::*)(GlobalNamespace::OVROverlay*)>(&GlobalNamespace::OVROverlayMeshGenerator::SetOverlay)> {
  static const MethodInfo* get() {
    static auto* overlay = &::il2cpp_utils::GetClassFromName("", "OVROverlay")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "SetOverlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overlay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect
// Il2CppName: GetBoundingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (GlobalNamespace::OVROverlayMeshGenerator::*)(UnityEngine::Rect, UnityEngine::Rect)>(&GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "GetBoundingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlayMeshGenerator::*)()>(&GlobalNamespace::OVROverlayMeshGenerator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlayMeshGenerator::*)()>(&GlobalNamespace::OVROverlayMeshGenerator::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlayMeshGenerator::*)()>(&GlobalNamespace::OVROverlayMeshGenerator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh
// Il2CppName: UpdateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlayMeshGenerator::*)(GlobalNamespace::OVROverlay::OverlayShape, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Rect)>(&GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh)> {
  static const MethodInfo* get() {
    static auto* shape = &::il2cpp_utils::GetClassFromName("", "OVROverlay/OverlayShape")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "UpdateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shape, position, rotation, scale, rect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh
// Il2CppName: GenerateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::Vector3>*, System::Collections::Generic::List_1<UnityEngine::Vector2>*, System::Collections::Generic::List_1<int>*, GlobalNamespace::OVROverlay::OverlayShape, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Rect)>(&GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* uvs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* tris = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* shape = &::il2cpp_utils::GetClassFromName("", "OVROverlay/OverlayShape")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "GenerateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, uvs, tris, shape, position, rotation, scale, rect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV
// Il2CppName: GetSphereUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(float, float, float)>(&GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV)> {
  static const MethodInfo* get() {
    static auto* theta = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* phi = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* expand_coef = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "GetSphereUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{theta, phi, expand_coef});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert
// Il2CppName: GetSphereVert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(float, float)>(&GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert)> {
  static const MethodInfo* get() {
    static auto* theta = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* phi = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "GetSphereVert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{theta, phi});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::BuildSphere
// Il2CppName: BuildSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::Vector3>*, System::Collections::Generic::List_1<UnityEngine::Vector2>*, System::Collections::Generic::List_1<int>*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Rect, float, int, int, float)>(&GlobalNamespace::OVROverlayMeshGenerator::BuildSphere)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* uv = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* worldScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* latitudes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* longitudes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* expand_coef = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "BuildSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, uv, triangles, position, rotation, scale, rect, worldScale, latitudes, longitudes, expand_coef});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV
// Il2CppName: GetCubeUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(GlobalNamespace::OVROverlayMeshGenerator::CubeFace, UnityEngine::Vector2, float)>(&GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("", "OVROverlayMeshGenerator/CubeFace")->byval_arg;
    static auto* sideUV = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* expand_coef = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "GetCubeUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, sideUV, expand_coef});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert
// Il2CppName: GetCubeVert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::OVROverlayMeshGenerator::CubeFace, UnityEngine::Vector2, float)>(&GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert)> {
  static const MethodInfo* get() {
    static auto* face = &::il2cpp_utils::GetClassFromName("", "OVROverlayMeshGenerator/CubeFace")->byval_arg;
    static auto* sideUV = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* expand_coef = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "GetCubeVert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{face, sideUV, expand_coef});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::BuildCube
// Il2CppName: BuildCube
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::Vector3>*, System::Collections::Generic::List_1<UnityEngine::Vector2>*, System::Collections::Generic::List_1<int>*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, float, int, float)>(&GlobalNamespace::OVROverlayMeshGenerator::BuildCube)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* uv = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* worldScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* subQuads = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* expand_coef = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "BuildCube", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, uv, triangles, position, rotation, scale, worldScale, subQuads, expand_coef});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::BuildQuad
// Il2CppName: BuildQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::Vector3>*, System::Collections::Generic::List_1<UnityEngine::Vector2>*, System::Collections::Generic::List_1<int>*, UnityEngine::Rect)>(&GlobalNamespace::OVROverlayMeshGenerator::BuildQuad)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* uv = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "BuildQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, uv, triangles, rect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder
// Il2CppName: BuildHemicylinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::Vector3>*, System::Collections::Generic::List_1<UnityEngine::Vector2>*, System::Collections::Generic::List_1<int>*, UnityEngine::Vector3, UnityEngine::Rect, int)>(&GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* uv = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* triangles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* longitudes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), "BuildHemicylinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, uv, triangles, scale, rect, longitudes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVROverlayMeshGenerator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVROverlayMeshGenerator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVROverlayMeshGenerator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};