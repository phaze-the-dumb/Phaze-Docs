// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Extension
  class X509Extension;
  // Forward declaring type: X509ExtensionEnumerator
  class X509ExtensionEnumerator;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ExtensionCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DAD008
  class X509ExtensionCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: X509ExtensionCollection
    X509ExtensionCollection(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // Get static field: static private System.Byte[] Empty
    static ::Array<uint8_t>* _get_Empty();
    // Set static field: static private System.Byte[] Empty
    static void _set_Empty(::Array<uint8_t>* value);
    // Get instance field reference: private System.Collections.ArrayList _list
    System::Collections::ArrayList*& dyn__list();
    // public System.Int32 get_Count()
    // Offset: 0x18638C4
    int get_Count();
    // public System.Security.Cryptography.X509Certificates.X509Extension get_Item(System.String oid)
    // Offset: 0x18634E4
    System::Security::Cryptography::X509Certificates::X509Extension* get_Item(::Il2CppString* oid);
    // System.Void .ctor(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1864454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionCollection* New_ctor(Mono::Security::X509::X509Certificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ExtensionCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionCollection*, creationType>(cert)));
    }
    // static private System.Void .cctor()
    // Offset: 0x186D0C8
    static void _cctor();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x186CF0C
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator GetEnumerator()
    // Offset: 0x186B030
    System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x186D064
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Security.Cryptography.X509Certificates.X509ExtensionCollection
  #pragma pack(pop)
  static check_size<sizeof(X509ExtensionCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Security_Cryptography_X509Certificates_X509ExtensionCollectionSizeCheck;
  static_assert(sizeof(X509ExtensionCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*, "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Extension* (System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)(::Il2CppString*)>(&System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ExtensionCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ExtensionCollection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::X509Certificates::X509ExtensionCollection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)(System::Array*, int)>(&System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ExtensionCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* (System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509ExtensionCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};