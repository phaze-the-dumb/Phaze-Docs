// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ShaderVariantsSO/ShaderVariant
#include "GlobalNamespace/ShaderVariantsSO_ShaderVariant.hpp"
// Including type: UnityEngine.Rendering.PassType
#include "UnityEngine/Rendering/PassType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ShaderVariantsSO/ShaderVariant/Variant
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderVariantsSO::ShaderVariant::Variant : public ::Il2CppObject {
    public:
    // private UnityEngine.Rendering.PassType _passType
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::Rendering::PassType passType;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::PassType) == 0x4);
    // Padding between fields: passType and: keywords
    char __padding0[0x4] = {};
    // private System.String _keywords
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* keywords;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Variant
    Variant(UnityEngine::Rendering::PassType passType_ = {}, ::Il2CppString* keywords_ = {}) noexcept : passType{passType_}, keywords{keywords_} {}
    // Get instance field reference: private UnityEngine.Rendering.PassType _passType
    UnityEngine::Rendering::PassType& dyn__passType();
    // Get instance field reference: private System.String _keywords
    ::Il2CppString*& dyn__keywords();
    // public UnityEngine.Rendering.PassType get_passType()
    // Offset: 0x2390CC4
    UnityEngine::Rendering::PassType get_passType();
    // public System.String get_keywords()
    // Offset: 0x2390CCC
    ::Il2CppString* get_keywords();
    // public System.Void .ctor(UnityEngine.Rendering.PassType passType, System.String keywords)
    // Offset: 0x2390CD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderVariantsSO::ShaderVariant::Variant* New_ctor(UnityEngine::Rendering::PassType passType, ::Il2CppString* keywords) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderVariantsSO::ShaderVariant::Variant*, creationType>(passType, keywords)));
    }
  }; // ShaderVariantsSO/ShaderVariant/Variant
  #pragma pack(pop)
  static check_size<sizeof(ShaderVariantsSO::ShaderVariant::Variant), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_ShaderVariantsSO_ShaderVariant_VariantSizeCheck;
  static_assert(sizeof(ShaderVariantsSO::ShaderVariant::Variant) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*, "", "ShaderVariantsSO/ShaderVariant/Variant");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::get_passType
// Il2CppName: get_passType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::PassType (GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::*)()>(&GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::get_passType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*), "get_passType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::get_keywords
// Il2CppName: get_keywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::*)()>(&GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::get_keywords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*), "get_keywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!