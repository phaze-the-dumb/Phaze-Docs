// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/GUID
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::GUID : public ::Il2CppObject {
    public:
    // public System.Int32 a
    // Size: 0x4
    // Offset: 0x10
    int a;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int16 b
    // Size: 0x2
    // Offset: 0x14
    int16_t b;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 c
    // Size: 0x2
    // Offset: 0x16
    int16_t c;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Byte d0
    // Size: 0x1
    // Offset: 0x18
    uint8_t d0;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte d1
    // Size: 0x1
    // Offset: 0x19
    uint8_t d1;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte d2
    // Size: 0x1
    // Offset: 0x1A
    uint8_t d2;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte d3
    // Size: 0x1
    // Offset: 0x1B
    uint8_t d3;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte d4
    // Size: 0x1
    // Offset: 0x1C
    uint8_t d4;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte d5
    // Size: 0x1
    // Offset: 0x1D
    uint8_t d5;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte d6
    // Size: 0x1
    // Offset: 0x1E
    uint8_t d6;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte d7
    // Size: 0x1
    // Offset: 0x1F
    uint8_t d7;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: GUID
    GUID(int a_ = {}, int16_t b_ = {}, int16_t c_ = {}, uint8_t d0_ = {}, uint8_t d1_ = {}, uint8_t d2_ = {}, uint8_t d3_ = {}, uint8_t d4_ = {}, uint8_t d5_ = {}, uint8_t d6_ = {}, uint8_t d7_ = {}) noexcept : a{a_}, b{b_}, c{c_}, d0{d0_}, d1{d1_}, d2{d2_}, d3{d3_}, d4{d4_}, d5{d5_}, d6{d6_}, d7{d7_} {}
    // Get instance field reference: public System.Int32 a
    int& dyn_a();
    // Get instance field reference: public System.Int16 b
    int16_t& dyn_b();
    // Get instance field reference: public System.Int16 c
    int16_t& dyn_c();
    // Get instance field reference: public System.Byte d0
    uint8_t& dyn_d0();
    // Get instance field reference: public System.Byte d1
    uint8_t& dyn_d1();
    // Get instance field reference: public System.Byte d2
    uint8_t& dyn_d2();
    // Get instance field reference: public System.Byte d3
    uint8_t& dyn_d3();
    // Get instance field reference: public System.Byte d4
    uint8_t& dyn_d4();
    // Get instance field reference: public System.Byte d5
    uint8_t& dyn_d5();
    // Get instance field reference: public System.Byte d6
    uint8_t& dyn_d6();
    // Get instance field reference: public System.Byte d7
    uint8_t& dyn_d7();
    // public System.Void .ctor()
    // Offset: 0x162E438
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlugin::GUID* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRPlugin::GUID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlugin::GUID*, creationType>()));
    }
  }; // OVRPlugin/GUID
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::GUID), 31 + sizeof(uint8_t)> __GlobalNamespace_OVRPlugin_GUIDSizeCheck;
  static_assert(sizeof(OVRPlugin::GUID) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::GUID*, "", "OVRPlugin/GUID");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::GUID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!