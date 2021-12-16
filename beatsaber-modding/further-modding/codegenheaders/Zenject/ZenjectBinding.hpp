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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: BindTypes because it is already included!
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenjectBinding : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: Zenject::ZenjectBinding::BindTypes
    struct BindTypes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Zenject.ZenjectBinding/Zenject.BindTypes
    // [TokenAttribute] Offset: FFFFFFFF
    struct BindTypes/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: BindTypes
      constexpr BindTypes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Zenject.ZenjectBinding/Zenject.BindTypes Self
      static constexpr const int Self = 0;
      // Get static field: static public Zenject.ZenjectBinding/Zenject.BindTypes Self
      static Zenject::ZenjectBinding::BindTypes _get_Self();
      // Set static field: static public Zenject.ZenjectBinding/Zenject.BindTypes Self
      static void _set_Self(Zenject::ZenjectBinding::BindTypes value);
      // static field const value: static public Zenject.ZenjectBinding/Zenject.BindTypes AllInterfaces
      static constexpr const int AllInterfaces = 1;
      // Get static field: static public Zenject.ZenjectBinding/Zenject.BindTypes AllInterfaces
      static Zenject::ZenjectBinding::BindTypes _get_AllInterfaces();
      // Set static field: static public Zenject.ZenjectBinding/Zenject.BindTypes AllInterfaces
      static void _set_AllInterfaces(Zenject::ZenjectBinding::BindTypes value);
      // static field const value: static public Zenject.ZenjectBinding/Zenject.BindTypes AllInterfacesAndSelf
      static constexpr const int AllInterfacesAndSelf = 2;
      // Get static field: static public Zenject.ZenjectBinding/Zenject.BindTypes AllInterfacesAndSelf
      static Zenject::ZenjectBinding::BindTypes _get_AllInterfacesAndSelf();
      // Set static field: static public Zenject.ZenjectBinding/Zenject.BindTypes AllInterfacesAndSelf
      static void _set_AllInterfacesAndSelf(Zenject::ZenjectBinding::BindTypes value);
      // static field const value: static public Zenject.ZenjectBinding/Zenject.BindTypes BaseType
      static constexpr const int BaseType = 3;
      // Get static field: static public Zenject.ZenjectBinding/Zenject.BindTypes BaseType
      static Zenject::ZenjectBinding::BindTypes _get_BaseType();
      // Set static field: static public Zenject.ZenjectBinding/Zenject.BindTypes BaseType
      static void _set_BaseType(Zenject::ZenjectBinding::BindTypes value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Zenject.ZenjectBinding/Zenject.BindTypes
    #pragma pack(pop)
    static check_size<sizeof(ZenjectBinding::BindTypes), 0 + sizeof(int)> __Zenject_ZenjectBinding_BindTypesSizeCheck;
    static_assert(sizeof(ZenjectBinding::BindTypes) == 0x4);
    // [TooltipAttribute] Offset: 0xE0392C
    // private UnityEngine.Component[] _components
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Component*>* components;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Component*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE03978
    // private System.String _identifier
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [TooltipAttribute] Offset: 0xE039C4
    // private System.Boolean _useSceneContext
    // Size: 0x1
    // Offset: 0x28
    bool useSceneContext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _ifNotBound
    // Size: 0x1
    // Offset: 0x29
    bool ifNotBound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ifNotBound and: context
    char __padding3[0x6] = {};
    // [TooltipAttribute] Offset: 0xE03A20
    // [NullAllowed] Offset: 0xE03A20
    // [FormerlySerializedAsAttribute] Offset: 0xE03A20
    // private Zenject.Context _context
    // Size: 0x8
    // Offset: 0x30
    Zenject::Context* context;
    // Field size check
    static_assert(sizeof(Zenject::Context*) == 0x8);
    // [TooltipAttribute] Offset: 0xE03AA0
    // private Zenject.ZenjectBinding/Zenject.BindTypes _bindType
    // Size: 0x4
    // Offset: 0x38
    Zenject::ZenjectBinding::BindTypes bindType;
    // Field size check
    static_assert(sizeof(Zenject::ZenjectBinding::BindTypes) == 0x4);
    // Creating value type constructor for type: ZenjectBinding
    ZenjectBinding(::Array<UnityEngine::Component*>* components_ = {}, ::Il2CppString* identifier_ = {}, bool useSceneContext_ = {}, bool ifNotBound_ = {}, Zenject::Context* context_ = {}, Zenject::ZenjectBinding::BindTypes bindType_ = {}) noexcept : components{components_}, identifier{identifier_}, useSceneContext{useSceneContext_}, ifNotBound{ifNotBound_}, context{context_}, bindType{bindType_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Component[] _components
    ::Array<UnityEngine::Component*>*& dyn__components();
    // Get instance field reference: private System.String _identifier
    ::Il2CppString*& dyn__identifier();
    // Get instance field reference: private System.Boolean _useSceneContext
    bool& dyn__useSceneContext();
    // Get instance field reference: private System.Boolean _ifNotBound
    bool& dyn__ifNotBound();
    // Get instance field reference: private Zenject.Context _context
    Zenject::Context*& dyn__context();
    // Get instance field reference: private Zenject.ZenjectBinding/Zenject.BindTypes _bindType
    Zenject::ZenjectBinding::BindTypes& dyn__bindType();
    // public System.Boolean get_UseSceneContext()
    // Offset: 0x23E3050
    bool get_UseSceneContext();
    // public System.Boolean get_IfNotBound()
    // Offset: 0x23E3058
    bool get_IfNotBound();
    // public Zenject.Context get_Context()
    // Offset: 0x23E3060
    Zenject::Context* get_Context();
    // public System.Void set_Context(Zenject.Context value)
    // Offset: 0x23E3068
    void set_Context(Zenject::Context* value);
    // public UnityEngine.Component[] get_Components()
    // Offset: 0x23E3070
    ::Array<UnityEngine::Component*>* get_Components();
    // public System.String get_Identifier()
    // Offset: 0x23E3078
    ::Il2CppString* get_Identifier();
    // public Zenject.ZenjectBinding/Zenject.BindTypes get_BindType()
    // Offset: 0x23E3080
    Zenject::ZenjectBinding::BindTypes get_BindType();
    // public System.Void Start()
    // Offset: 0x23E3088
    void Start();
    // public System.Void .ctor()
    // Offset: 0x23E308C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectBinding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectBinding*, creationType>()));
    }
  }; // Zenject.ZenjectBinding
  #pragma pack(pop)
  static check_size<sizeof(ZenjectBinding), 56 + sizeof(Zenject::ZenjectBinding::BindTypes)> __Zenject_ZenjectBindingSizeCheck;
  static_assert(sizeof(ZenjectBinding) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectBinding*, "Zenject", "ZenjectBinding");
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectBinding::BindTypes, "Zenject", "ZenjectBinding/BindTypes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectBinding::get_UseSceneContext
// Il2CppName: get_UseSceneContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_UseSceneContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "get_UseSceneContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::get_IfNotBound
// Il2CppName: get_IfNotBound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_IfNotBound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "get_IfNotBound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::get_Context
// Il2CppName: get_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Context* (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_Context)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "get_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::set_Context
// Il2CppName: set_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectBinding::*)(Zenject::Context*)>(&Zenject::ZenjectBinding::set_Context)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "Context")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "set_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::get_Components
// Il2CppName: get_Components
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Component*>* (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_Components)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "get_Components", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::get_Identifier
// Il2CppName: get_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_Identifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "get_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::get_BindType
// Il2CppName: get_BindType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenjectBinding::BindTypes (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_BindType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "get_BindType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectBinding*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!