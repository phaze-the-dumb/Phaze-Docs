// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ICertificateValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class ICertificateValidator {
    public:
    // Creating value type constructor for type: ICertificateValidator
    ICertificateValidator() noexcept {}
    // public System.Void ValidateCertificateChain(MasterServerEndPoint endPoint, System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0xFFFFFFFF
    void ValidateCertificateChain(GlobalNamespace::MasterServerEndPoint* endPoint, System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
  }; // ICertificateValidator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICertificateValidator*, "", "ICertificateValidator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ICertificateValidator::ValidateCertificateChain
// Il2CppName: ValidateCertificateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ICertificateValidator::*)(GlobalNamespace::MasterServerEndPoint*, System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::Array<uint8_t>*>*)>(&GlobalNamespace::ICertificateValidator::ValidateCertificateChain)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("", "MasterServerEndPoint")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    static auto* certificateChain = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ICertificateValidator*), "ValidateCertificateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, certificate, certificateChain});
  }
};
