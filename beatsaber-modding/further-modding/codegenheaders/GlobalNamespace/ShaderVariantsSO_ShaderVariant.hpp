// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ShaderVariantsSO
#include "GlobalNamespace/ShaderVariantsSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ShaderVariantsSO/ShaderVariant
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderVariantsSO::ShaderVariant : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant
    class Variant;
    // private ShaderVariantsSO/ShaderVariant/Variant[] _variants
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* variants;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>*) == 0x8);
    // private UnityEngine.Shader _shader
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // Creating value type constructor for type: ShaderVariant
    ShaderVariant(::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* variants_ = {}, UnityEngine::Shader* shader_ = {}) noexcept : variants{variants_}, shader{shader_} {}
    // Get instance field reference: private ShaderVariantsSO/ShaderVariant/Variant[] _variants
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>*& dyn__variants();
    // Get instance field reference: private UnityEngine.Shader _shader
    UnityEngine::Shader*& dyn__shader();
    // public ShaderVariantsSO/ShaderVariant/Variant[] get_variants()
    // Offset: 0x2390C7C
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* get_variants();
    // public UnityEngine.Shader get_shader()
    // Offset: 0x2390C84
    UnityEngine::Shader* get_shader();
    // public System.Void .ctor(UnityEngine.Shader shader, ShaderVariantsSO/ShaderVariant/Variant[] variants)
    // Offset: 0x2390C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderVariantsSO::ShaderVariant* New_ctor(UnityEngine::Shader* shader, ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* variants) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShaderVariantsSO::ShaderVariant::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderVariantsSO::ShaderVariant*, creationType>(shader, variants)));
    }
  }; // ShaderVariantsSO/ShaderVariant
  #pragma pack(pop)
  static check_size<sizeof(ShaderVariantsSO::ShaderVariant), 24 + sizeof(UnityEngine::Shader*)> __GlobalNamespace_ShaderVariantsSO_ShaderVariantSizeCheck;
  static_assert(sizeof(ShaderVariantsSO::ShaderVariant) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderVariantsSO::ShaderVariant*, "", "ShaderVariantsSO/ShaderVariant");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::ShaderVariant::get_variants
// Il2CppName: get_variants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* (GlobalNamespace::ShaderVariantsSO::ShaderVariant::*)()>(&GlobalNamespace::ShaderVariantsSO::ShaderVariant::get_variants)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderVariantsSO::ShaderVariant*), "get_variants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::ShaderVariant::get_shader
// Il2CppName: get_shader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (GlobalNamespace::ShaderVariantsSO::ShaderVariant::*)()>(&GlobalNamespace::ShaderVariantsSO::ShaderVariant::get_shader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderVariantsSO::ShaderVariant*), "get_shader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::ShaderVariant::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!