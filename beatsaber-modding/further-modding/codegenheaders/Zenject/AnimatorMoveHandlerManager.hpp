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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IAnimatorMoveHandler
  class IAnimatorMoveHandler;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AnimatorMoveHandlerManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatorMoveHandlerManager : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<Zenject.IAnimatorMoveHandler> _handlers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>* handlers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>*) == 0x8);
    // Creating value type constructor for type: AnimatorMoveHandlerManager
    AnimatorMoveHandlerManager(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>* handlers_ = {}) noexcept : handlers{handlers_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.IAnimatorMoveHandler> _handlers
    System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>*& dyn__handlers();
    // public System.Void Construct(System.Collections.Generic.List`1<Zenject.IAnimatorMoveHandler> handlers)
    // Offset: 0x13E1B40
    void Construct(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>* handlers);
    // public System.Void OnAnimatorMove()
    // Offset: 0x13E1B48
    void OnAnimatorMove();
    // public System.Void .ctor()
    // Offset: 0x13E1CA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorMoveHandlerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::AnimatorMoveHandlerManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorMoveHandlerManager*, creationType>()));
    }
  }; // Zenject.AnimatorMoveHandlerManager
  #pragma pack(pop)
  static check_size<sizeof(AnimatorMoveHandlerManager), 24 + sizeof(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>*)> __Zenject_AnimatorMoveHandlerManagerSizeCheck;
  static_assert(sizeof(AnimatorMoveHandlerManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorMoveHandlerManager*, "Zenject", "AnimatorMoveHandlerManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::AnimatorMoveHandlerManager::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorMoveHandlerManager::*)(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>*)>(&Zenject::AnimatorMoveHandlerManager::Construct)> {
  static const MethodInfo* get() {
    static auto* handlers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "IAnimatorMoveHandler")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorMoveHandlerManager*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handlers});
  }
};
// Writing MetadataGetter for method: Zenject::AnimatorMoveHandlerManager::OnAnimatorMove
// Il2CppName: OnAnimatorMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorMoveHandlerManager::*)()>(&Zenject::AnimatorMoveHandlerManager::OnAnimatorMove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorMoveHandlerManager*), "OnAnimatorMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AnimatorMoveHandlerManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!