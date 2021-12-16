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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ViewState because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: SelectableStateController
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectableStateController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SelectableStateController::ViewState
    struct ViewState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SelectableStateController/ViewState
    // [TokenAttribute] Offset: FFFFFFFF
    struct ViewState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ViewState
      constexpr ViewState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SelectableStateController/ViewState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public SelectableStateController/ViewState Normal
      static GlobalNamespace::SelectableStateController::ViewState _get_Normal();
      // Set static field: static public SelectableStateController/ViewState Normal
      static void _set_Normal(GlobalNamespace::SelectableStateController::ViewState value);
      // static field const value: static public SelectableStateController/ViewState Highlighted
      static constexpr const int Highlighted = 1;
      // Get static field: static public SelectableStateController/ViewState Highlighted
      static GlobalNamespace::SelectableStateController::ViewState _get_Highlighted();
      // Set static field: static public SelectableStateController/ViewState Highlighted
      static void _set_Highlighted(GlobalNamespace::SelectableStateController::ViewState value);
      // static field const value: static public SelectableStateController/ViewState Pressed
      static constexpr const int Pressed = 2;
      // Get static field: static public SelectableStateController/ViewState Pressed
      static GlobalNamespace::SelectableStateController::ViewState _get_Pressed();
      // Set static field: static public SelectableStateController/ViewState Pressed
      static void _set_Pressed(GlobalNamespace::SelectableStateController::ViewState value);
      // static field const value: static public SelectableStateController/ViewState Disabled
      static constexpr const int Disabled = 3;
      // Get static field: static public SelectableStateController/ViewState Disabled
      static GlobalNamespace::SelectableStateController::ViewState _get_Disabled();
      // Set static field: static public SelectableStateController/ViewState Disabled
      static void _set_Disabled(GlobalNamespace::SelectableStateController::ViewState value);
      // static field const value: static public SelectableStateController/ViewState Selected
      static constexpr const int Selected = 4;
      // Get static field: static public SelectableStateController/ViewState Selected
      static GlobalNamespace::SelectableStateController::ViewState _get_Selected();
      // Set static field: static public SelectableStateController/ViewState Selected
      static void _set_Selected(GlobalNamespace::SelectableStateController::ViewState value);
      // static field const value: static public SelectableStateController/ViewState SelectedAndHighlighted
      static constexpr const int SelectedAndHighlighted = 5;
      // Get static field: static public SelectableStateController/ViewState SelectedAndHighlighted
      static GlobalNamespace::SelectableStateController::ViewState _get_SelectedAndHighlighted();
      // Set static field: static public SelectableStateController/ViewState SelectedAndHighlighted
      static void _set_SelectedAndHighlighted(GlobalNamespace::SelectableStateController::ViewState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // SelectableStateController/ViewState
    #pragma pack(pop)
    static check_size<sizeof(SelectableStateController::ViewState), 0 + sizeof(int)> __GlobalNamespace_SelectableStateController_ViewStateSizeCheck;
    static_assert(sizeof(SelectableStateController::ViewState) == 0x4);
    // [InjectAttribute] Offset: 0xE44BA8
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x18
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private System.Action`1<SelectableStateController/ViewState> stateDidChangeEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<GlobalNamespace::SelectableStateController::ViewState>* stateDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::SelectableStateController::ViewState>*) == 0x8);
    // private SelectableStateController/ViewState <currentViewState>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::SelectableStateController::ViewState currentViewState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectableStateController::ViewState) == 0x4);
    // Creating value type constructor for type: SelectableStateController
    SelectableStateController(Tweening::TweeningManager* tweeningManager_ = {}, System::Action_1<GlobalNamespace::SelectableStateController::ViewState>* stateDidChangeEvent_ = {}, GlobalNamespace::SelectableStateController::ViewState currentViewState_ = {}) noexcept : tweeningManager{tweeningManager_}, stateDidChangeEvent{stateDidChangeEvent_}, currentViewState{currentViewState_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private System.Action`1<SelectableStateController/ViewState> stateDidChangeEvent
    System::Action_1<GlobalNamespace::SelectableStateController::ViewState>*& dyn_stateDidChangeEvent();
    // Get instance field reference: private SelectableStateController/ViewState <currentViewState>k__BackingField
    GlobalNamespace::SelectableStateController::ViewState& dyn_$currentViewState$k__BackingField();
    // public Tweening.TweeningManager get_tweeningManager()
    // Offset: 0x10925F4
    Tweening::TweeningManager* get_tweeningManager();
    // private SelectableStateController/ViewState get_currentViewState()
    // Offset: 0x10925FC
    GlobalNamespace::SelectableStateController::ViewState get_currentViewState();
    // private System.Void set_currentViewState(SelectableStateController/ViewState value)
    // Offset: 0x1092604
    void set_currentViewState(GlobalNamespace::SelectableStateController::ViewState value);
    // public System.Void add_stateDidChangeEvent(System.Action`1<SelectableStateController/ViewState> value)
    // Offset: 0x10924AC
    void add_stateDidChangeEvent(System::Action_1<GlobalNamespace::SelectableStateController::ViewState>* value);
    // public System.Void remove_stateDidChangeEvent(System.Action`1<SelectableStateController/ViewState> value)
    // Offset: 0x1092550
    void remove_stateDidChangeEvent(System::Action_1<GlobalNamespace::SelectableStateController::ViewState>* value);
    // protected System.Void SetState(SelectableStateController/ViewState state)
    // Offset: 0x109260C
    void SetState(GlobalNamespace::SelectableStateController::ViewState state);
    // protected System.Void .ctor()
    // Offset: 0x1092684
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectableStateController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectableStateController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectableStateController*, creationType>()));
    }
  }; // SelectableStateController
  #pragma pack(pop)
  static check_size<sizeof(SelectableStateController), 40 + sizeof(GlobalNamespace::SelectableStateController::ViewState)> __GlobalNamespace_SelectableStateControllerSizeCheck;
  static_assert(sizeof(SelectableStateController) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectableStateController*, "", "SelectableStateController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectableStateController::ViewState, "", "SelectableStateController/ViewState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectableStateController::get_tweeningManager
// Il2CppName: get_tweeningManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::TweeningManager* (GlobalNamespace::SelectableStateController::*)()>(&GlobalNamespace::SelectableStateController::get_tweeningManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableStateController*), "get_tweeningManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableStateController::get_currentViewState
// Il2CppName: get_currentViewState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SelectableStateController::ViewState (GlobalNamespace::SelectableStateController::*)()>(&GlobalNamespace::SelectableStateController::get_currentViewState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableStateController*), "get_currentViewState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableStateController::set_currentViewState
// Il2CppName: set_currentViewState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(GlobalNamespace::SelectableStateController::ViewState)>(&GlobalNamespace::SelectableStateController::set_currentViewState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SelectableStateController/ViewState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableStateController*), "set_currentViewState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableStateController::add_stateDidChangeEvent
// Il2CppName: add_stateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(System::Action_1<GlobalNamespace::SelectableStateController::ViewState>*)>(&GlobalNamespace::SelectableStateController::add_stateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SelectableStateController/ViewState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableStateController*), "add_stateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent
// Il2CppName: remove_stateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(System::Action_1<GlobalNamespace::SelectableStateController::ViewState>*)>(&GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SelectableStateController/ViewState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableStateController*), "remove_stateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableStateController::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(GlobalNamespace::SelectableStateController::ViewState)>(&GlobalNamespace::SelectableStateController::SetState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "SelectableStateController/ViewState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableStateController*), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableStateController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!