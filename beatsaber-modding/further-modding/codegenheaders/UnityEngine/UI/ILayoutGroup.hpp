// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.ILayoutController
#include "UnityEngine/UI/ILayoutController.hpp"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ILayoutGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class ILayoutGroup/*, public UnityEngine::UI::ILayoutController*/ {
    public:
    // Creating value type constructor for type: ILayoutGroup
    ILayoutGroup() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutController
    operator UnityEngine::UI::ILayoutController() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutController*>(this);
    }
  }; // UnityEngine.UI.ILayoutGroup
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ILayoutGroup*, "UnityEngine.UI", "ILayoutGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"