// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: SpriteSwapTransitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class SpriteSwapTransitionSO : public GlobalNamespace::BaseTransitionSO {
    public:
    // private UnityEngine.Sprite _normalSprite
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* normalSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _highlightedSprite
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* highlightedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _pressedSprite
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* pressedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _disabledSprite
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Sprite* disabledSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _selectedSprite
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Sprite* selectedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _selectedAndHighlightedSprite
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Sprite* selectedAndHighlightedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: SpriteSwapTransitionSO
    SpriteSwapTransitionSO(UnityEngine::Sprite* normalSprite_ = {}, UnityEngine::Sprite* highlightedSprite_ = {}, UnityEngine::Sprite* pressedSprite_ = {}, UnityEngine::Sprite* disabledSprite_ = {}, UnityEngine::Sprite* selectedSprite_ = {}, UnityEngine::Sprite* selectedAndHighlightedSprite_ = {}) noexcept : normalSprite{normalSprite_}, highlightedSprite{highlightedSprite_}, pressedSprite{pressedSprite_}, disabledSprite{disabledSprite_}, selectedSprite{selectedSprite_}, selectedAndHighlightedSprite{selectedAndHighlightedSprite_} {}
    // Get instance field reference: private UnityEngine.Sprite _normalSprite
    UnityEngine::Sprite*& dyn__normalSprite();
    // Get instance field reference: private UnityEngine.Sprite _highlightedSprite
    UnityEngine::Sprite*& dyn__highlightedSprite();
    // Get instance field reference: private UnityEngine.Sprite _pressedSprite
    UnityEngine::Sprite*& dyn__pressedSprite();
    // Get instance field reference: private UnityEngine.Sprite _disabledSprite
    UnityEngine::Sprite*& dyn__disabledSprite();
    // Get instance field reference: private UnityEngine.Sprite _selectedSprite
    UnityEngine::Sprite*& dyn__selectedSprite();
    // Get instance field reference: private UnityEngine.Sprite _selectedAndHighlightedSprite
    UnityEngine::Sprite*& dyn__selectedAndHighlightedSprite();
    // public UnityEngine.Sprite get_normalSprite()
    // Offset: 0x10A0FD0
    UnityEngine::Sprite* get_normalSprite();
    // public UnityEngine.Sprite get_highlightedSprite()
    // Offset: 0x10A0FD8
    UnityEngine::Sprite* get_highlightedSprite();
    // public UnityEngine.Sprite get_pressedSprite()
    // Offset: 0x10A0FE0
    UnityEngine::Sprite* get_pressedSprite();
    // public UnityEngine.Sprite get_disabledSprite()
    // Offset: 0x10A0FE8
    UnityEngine::Sprite* get_disabledSprite();
    // public UnityEngine.Sprite get_selectedSprite()
    // Offset: 0x10A0FF0
    UnityEngine::Sprite* get_selectedSprite();
    // public UnityEngine.Sprite get_selectedAndHighlightedSprite()
    // Offset: 0x10A0FF8
    UnityEngine::Sprite* get_selectedAndHighlightedSprite();
    // public System.Void .ctor()
    // Offset: 0x10A1000
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpriteSwapTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpriteSwapTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpriteSwapTransitionSO*, creationType>()));
    }
  }; // SpriteSwapTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(SpriteSwapTransitionSO), 72 + sizeof(UnityEngine::Sprite*)> __GlobalNamespace_SpriteSwapTransitionSOSizeCheck;
  static_assert(sizeof(SpriteSwapTransitionSO) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpriteSwapTransitionSO*, "", "SpriteSwapTransitionSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpriteSwapTransitionSO::get_normalSprite
// Il2CppName: get_normalSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::SpriteSwapTransitionSO::*)()>(&GlobalNamespace::SpriteSwapTransitionSO::get_normalSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteSwapTransitionSO*), "get_normalSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteSwapTransitionSO::get_highlightedSprite
// Il2CppName: get_highlightedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::SpriteSwapTransitionSO::*)()>(&GlobalNamespace::SpriteSwapTransitionSO::get_highlightedSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteSwapTransitionSO*), "get_highlightedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteSwapTransitionSO::get_pressedSprite
// Il2CppName: get_pressedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::SpriteSwapTransitionSO::*)()>(&GlobalNamespace::SpriteSwapTransitionSO::get_pressedSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteSwapTransitionSO*), "get_pressedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteSwapTransitionSO::get_disabledSprite
// Il2CppName: get_disabledSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::SpriteSwapTransitionSO::*)()>(&GlobalNamespace::SpriteSwapTransitionSO::get_disabledSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteSwapTransitionSO*), "get_disabledSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteSwapTransitionSO::get_selectedSprite
// Il2CppName: get_selectedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::SpriteSwapTransitionSO::*)()>(&GlobalNamespace::SpriteSwapTransitionSO::get_selectedSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteSwapTransitionSO*), "get_selectedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteSwapTransitionSO::get_selectedAndHighlightedSprite
// Il2CppName: get_selectedAndHighlightedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::SpriteSwapTransitionSO::*)()>(&GlobalNamespace::SpriteSwapTransitionSO::get_selectedAndHighlightedSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteSwapTransitionSO*), "get_selectedAndHighlightedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteSwapTransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
