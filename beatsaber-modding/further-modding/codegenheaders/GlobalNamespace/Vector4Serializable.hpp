// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Vector4Serializable
  // [TokenAttribute] Offset: FFFFFFFF
  struct Vector4Serializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::Vector4Serializable>*/ {
    public:
    // private System.Int32 _x
    // Size: 0x4
    // Offset: 0x0
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _y
    // Size: 0x4
    // Offset: 0x4
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _z
    // Size: 0x4
    // Offset: 0x8
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _w
    // Size: 0x4
    // Offset: 0xC
    int w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Vector4Serializable
    constexpr Vector4Serializable(int x_ = {}, int y_ = {}, int z_ = {}, int w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::Vector4Serializable>
    operator System::IEquatable_1<GlobalNamespace::Vector4Serializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::Vector4Serializable>*>(this);
    }
    // Get instance field reference: private System.Int32 _x
    int& dyn__x();
    // Get instance field reference: private System.Int32 _y
    int& dyn__y();
    // Get instance field reference: private System.Int32 _z
    int& dyn__z();
    // Get instance field reference: private System.Int32 _w
    int& dyn__w();
    // public System.Void .ctor(UnityEngine.Vector4 v)
    // Offset: 0x2379B28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector4Serializable(UnityEngine::Vector4 v) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Vector4Serializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(v)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, v);
    }
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2379BF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector4Serializable(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Vector4Serializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2379570
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2379618
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(Vector4Serializable other)
    // Offset: 0x2379698
    bool Equals(GlobalNamespace::Vector4Serializable other);
    // public System.Boolean Approximately(Vector4Serializable other)
    // Offset: 0x23796DC
    bool Approximately(GlobalNamespace::Vector4Serializable other);
    // public System.Int32 GetSize()
    // Offset: 0x2379A7C
    int GetSize();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2379760
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2379818
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2379834
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // Vector4Serializable
  #pragma pack(pop)
  static check_size<sizeof(Vector4Serializable), 12 + sizeof(int)> __GlobalNamespace_Vector4SerializableSizeCheck;
  static_assert(sizeof(Vector4Serializable) == 0x10);
  // static public Vector4Serializable op_Addition(Vector4Serializable a, Vector4Serializable b)
  // Offset: 0x2379C88
  GlobalNamespace::Vector4Serializable operator+(const GlobalNamespace::Vector4Serializable& a, const GlobalNamespace::Vector4Serializable& b);
  // static public Vector4Serializable op_Subtraction(Vector4Serializable a, Vector4Serializable b)
  // Offset: 0x2379CB4
  GlobalNamespace::Vector4Serializable operator-(const GlobalNamespace::Vector4Serializable& a, const GlobalNamespace::Vector4Serializable& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector4Serializable, "", "Vector4Serializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::Vector4Serializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::Vector4Serializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Vector4Serializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::Vector4Serializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Vector4Serializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::Vector4Serializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector4Serializable::*)(GlobalNamespace::Vector4Serializable)>(&GlobalNamespace::Vector4Serializable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "Vector4Serializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector4Serializable::*)(GlobalNamespace::Vector4Serializable)>(&GlobalNamespace::Vector4Serializable::Approximately)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "Vector4Serializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Vector4Serializable::*)()>(&GlobalNamespace::Vector4Serializable::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector4Serializable::*)(::Il2CppObject*)>(&GlobalNamespace::Vector4Serializable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Vector4Serializable::*)()>(&GlobalNamespace::Vector4Serializable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::Vector4Serializable::*)()>(&GlobalNamespace::Vector4Serializable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector4Serializable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Vector4Serializable::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!