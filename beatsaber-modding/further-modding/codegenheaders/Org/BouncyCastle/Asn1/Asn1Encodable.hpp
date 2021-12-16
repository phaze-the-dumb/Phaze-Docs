// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Convertible
#include "Org/BouncyCastle/Asn1/IAsn1Convertible.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Encodable
  // [TokenAttribute] Offset: FFFFFFFF
  class Asn1Encodable : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    // Creating value type constructor for type: Asn1Encodable
    Asn1Encodable() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Convertible
    operator Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // public System.Byte[] GetEncoded()
    // Offset: 0x172C7F8
    ::Array<uint8_t>* GetEncoded();
    // public System.Byte[] GetEncoded(System.String encoding)
    // Offset: 0x172C8B8
    ::Array<uint8_t>* GetEncoded(::Il2CppString* encoding);
    // public System.Byte[] GetDerEncoded()
    // Offset: 0x172C9B0
    ::Array<uint8_t>* GetDerEncoded();
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // protected System.Void .ctor()
    // Offset: 0x172CBE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Encodable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Encodable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Encodable*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x172CA78
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x172CAB0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Org.BouncyCastle.Asn1.Asn1Encodable
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Encodable*, "Org.BouncyCastle.Asn1", "Asn1Encodable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Encodable::GetEncoded
// Il2CppName: GetEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::Asn1Encodable::*)()>(&Org::BouncyCastle::Asn1::Asn1Encodable::GetEncoded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Encodable*), "GetEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Encodable::GetEncoded
// Il2CppName: GetEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::Asn1Encodable::*)(::Il2CppString*)>(&Org::BouncyCastle::Asn1::Asn1Encodable::GetEncoded)> {
  static const MethodInfo* get() {
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Encodable*), "GetEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoding});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Encodable::GetDerEncoded
// Il2CppName: GetDerEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::Asn1Encodable::*)()>(&Org::BouncyCastle::Asn1::Asn1Encodable::GetDerEncoded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Encodable*), "GetDerEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Encodable::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Asn1Encodable::*)()>(&Org::BouncyCastle::Asn1::Asn1Encodable::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Encodable*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Encodable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Encodable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::Asn1Encodable::*)()>(&Org::BouncyCastle::Asn1::Asn1Encodable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Encodable*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Encodable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::Asn1Encodable::*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Asn1Encodable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Encodable*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};