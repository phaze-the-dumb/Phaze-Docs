// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.VmpcMac
  // [TokenAttribute] Offset: FFFFFFFF
  class VmpcMac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private System.Byte g
    // Size: 0x1
    // Offset: 0x10
    uint8_t g;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte n
    // Size: 0x1
    // Offset: 0x11
    uint8_t n;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: n and: P
    char __padding1[0x6] = {};
    // private System.Byte[] P
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* P;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte s
    // Size: 0x1
    // Offset: 0x20
    uint8_t s;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: s and: T
    char __padding3[0x7] = {};
    // private System.Byte[] T
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* T;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workingIV
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* workingIV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workingKey
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte x1
    // Size: 0x1
    // Offset: 0x40
    uint8_t x1;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte x2
    // Size: 0x1
    // Offset: 0x41
    uint8_t x2;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte x3
    // Size: 0x1
    // Offset: 0x42
    uint8_t x3;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte x4
    // Size: 0x1
    // Offset: 0x43
    uint8_t x4;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: VmpcMac
    VmpcMac(uint8_t g_ = {}, uint8_t n_ = {}, ::Array<uint8_t>* P_ = {}, uint8_t s_ = {}, ::Array<uint8_t>* T_ = {}, ::Array<uint8_t>* workingIV_ = {}, ::Array<uint8_t>* workingKey_ = {}, uint8_t x1_ = {}, uint8_t x2_ = {}, uint8_t x3_ = {}, uint8_t x4_ = {}) noexcept : g{g_}, n{n_}, P{P_}, s{s_}, T{T_}, workingIV{workingIV_}, workingKey{workingKey_}, x1{x1_}, x2{x2_}, x3{x3_}, x4{x4_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: private System.Byte g
    uint8_t& dyn_g();
    // Get instance field reference: private System.Byte n
    uint8_t& dyn_n();
    // Get instance field reference: private System.Byte[] P
    ::Array<uint8_t>*& dyn_P();
    // Get instance field reference: private System.Byte s
    uint8_t& dyn_s();
    // Get instance field reference: private System.Byte[] T
    ::Array<uint8_t>*& dyn_T();
    // Get instance field reference: private System.Byte[] workingIV
    ::Array<uint8_t>*& dyn_workingIV();
    // Get instance field reference: private System.Byte[] workingKey
    ::Array<uint8_t>*& dyn_workingKey();
    // Get instance field reference: private System.Byte x1
    uint8_t& dyn_x1();
    // Get instance field reference: private System.Byte x2
    uint8_t& dyn_x2();
    // Get instance field reference: private System.Byte x3
    uint8_t& dyn_x3();
    // Get instance field reference: private System.Byte x4
    uint8_t& dyn_x4();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1919F14
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Int32 GetMacSize()
    // Offset: 0x191A394
    int GetMacSize();
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x191A39C
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Void initKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x191A528
    void initKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes);
    // public System.Void Reset()
    // Offset: 0x191A754
    void Reset();
    // public System.Void Update(System.Byte input)
    // Offset: 0x191A800
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x191AA6C
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Void .ctor()
    // Offset: 0x191AB94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VmpcMac* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::VmpcMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VmpcMac*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Macs.VmpcMac
  #pragma pack(pop)
  static check_size<sizeof(VmpcMac), 67 + sizeof(uint8_t)> __Org_BouncyCastle_Crypto_Macs_VmpcMacSizeCheck;
  static_assert(sizeof(VmpcMac) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::VmpcMac*, "Org.BouncyCastle.Crypto.Macs", "VmpcMac");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Macs::VmpcMac::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::VmpcMac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::VmpcMac::*)()>(&Org::BouncyCastle::Crypto::Macs::VmpcMac::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::VmpcMac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::VmpcMac::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::VmpcMac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::initKey
// Il2CppName: initKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Macs::VmpcMac::initKey)> {
  static const MethodInfo* get() {
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::VmpcMac*), "initKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBytes, ivBytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::VmpcMac::*)()>(&Org::BouncyCastle::Crypto::Macs::VmpcMac::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::VmpcMac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::VmpcMac::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::VmpcMac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Macs::VmpcMac::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::VmpcMac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::VmpcMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!