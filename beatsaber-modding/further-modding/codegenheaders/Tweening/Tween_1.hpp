// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tweening.Tween
#include "Tweening/Tween.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // WARNING Size may be invalid!
  // Autogenerated type: Tweening.Tween`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Tween_1 : public Tweening::Tween {
    public:
    // public T fromValue
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T fromValue;
    // public T toValue
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T toValue;
    // public System.Action`1<T> onUpdate
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<T>* onUpdate;
    // Field size check
    static_assert(sizeof(System::Action_1<T>*) == 0x8);
    // Creating value type constructor for type: Tween_1
    Tween_1(T fromValue_ = {}, T toValue_ = {}, System::Action_1<T>* onUpdate_ = {}) noexcept : fromValue{fromValue_}, toValue{toValue_}, onUpdate{onUpdate_} {}
    // Autogenerated instance field getter
    // Get instance field: public T fromValue
    T& dyn_fromValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::dyn_fromValue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "fromValue"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T toValue
    T& dyn_toValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::dyn_toValue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "toValue"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<T> onUpdate
    System::Action_1<T>*& dyn_onUpdate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::dyn_onUpdate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "onUpdate"))->offset;
      return *reinterpret_cast<System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(T fromValue, T toValue, System.Action`1<T> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tween_1<T>* New_ctor(T fromValue, T toValue, System::Action_1<T>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tween_1<T>*, creationType>(fromValue, toValue, onUpdate, duration, easeType, delay)));
    }
    // public System.Void .ctor(T fromValue, T toValue, System.Action`1<T> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tween_1<T>* New_ctor(T fromValue, T toValue, System::Action_1<T>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tween_1<T>*, creationType>(fromValue, toValue, onUpdate, duration, animationCurve, delay)));
    }
    // static protected System.Void OnSpawned(T fromValue, T toValue, System.Action`1<T> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay, Tweening.Tween`1<T> t)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(T fromValue, T toValue, System::Action_1<T>* onUpdate, float duration, Tweening::EaseType easeType, float delay, Tweening::Tween_1<T>* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::OnSpawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tween_1<T>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromValue), ::il2cpp_utils::ExtractType(toValue), ::il2cpp_utils::ExtractType(onUpdate), ::il2cpp_utils::ExtractType(duration), ::il2cpp_utils::ExtractType(easeType), ::il2cpp_utils::ExtractType(delay), ::il2cpp_utils::ExtractType(t)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, fromValue, toValue, onUpdate, duration, easeType, delay, t);
    }
    // private System.Void Init(T fromValue, T toValue, System.Action`1<T> onUpdate, System.Single duration, Tweening.InterpolationType interpolationType, Tweening.EaseType easeType, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0xFFFFFFFF
    void Init(T fromValue, T toValue, System::Action_1<T>* onUpdate, float duration, Tweening::InterpolationType interpolationType, Tweening::EaseType easeType, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromValue), ::il2cpp_utils::ExtractType(toValue), ::il2cpp_utils::ExtractType(onUpdate), ::il2cpp_utils::ExtractType(duration), ::il2cpp_utils::ExtractType(interpolationType), ::il2cpp_utils::ExtractType(easeType), ::il2cpp_utils::ExtractType(animationCurve), ::il2cpp_utils::ExtractType(delay)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, fromValue, toValue, onUpdate, duration, interpolationType, easeType, animationCurve, delay);
    }
    // public System.Void Reinit(T fromValue, T toValue, System.Action`1<T> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0xFFFFFFFF
    void Reinit(T fromValue, T toValue, System::Action_1<T>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::Reinit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromValue), ::il2cpp_utils::ExtractType(toValue), ::il2cpp_utils::ExtractType(onUpdate), ::il2cpp_utils::ExtractType(duration), ::il2cpp_utils::ExtractType(easeType), ::il2cpp_utils::ExtractType(delay)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, fromValue, toValue, onUpdate, duration, easeType, delay);
    }
    // public System.Void Reinit(T fromValue, T toValue, System.Action`1<T> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0xFFFFFFFF
    void Reinit(T fromValue, T toValue, System::Action_1<T>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::Reinit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromValue), ::il2cpp_utils::ExtractType(toValue), ::il2cpp_utils::ExtractType(onUpdate), ::il2cpp_utils::ExtractType(duration), ::il2cpp_utils::ExtractType(animationCurve), ::il2cpp_utils::ExtractType(delay)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, fromValue, toValue, onUpdate, duration, animationCurve, delay);
    }
    // public T GetValue(System.Single t)
    // Offset: 0xFFFFFFFF
    T GetValue(float t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::GetValue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, t);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Tweening.Tween
    // Base method: System.Void Tween::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tween_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tween_1<T>*, creationType>()));
    }
    // public override System.Void Update(System.Single deltaTime)
    // Offset: 0xFFFFFFFF
    // Implemented from: Tweening.Tween
    // Base method: System.Void Tween::Update(System.Single deltaTime)
    void Update(float deltaTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::Update");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Update", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(deltaTime)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, deltaTime);
    }
    // public override System.Void Sample(System.Single t)
    // Offset: 0xFFFFFFFF
    // Implemented from: Tweening.Tween
    // Base method: System.Void Tween::Sample(System.Single t)
    void Sample(float t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween_1::Sample");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Sample", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, t);
    }
  }; // Tweening.Tween`1
  // Could not write size check! Type: Tweening.Tween`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Tweening::Tween_1, "Tweening", "Tween`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"