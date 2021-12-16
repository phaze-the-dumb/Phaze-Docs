// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.KerningTable
#include "TMPro/KerningTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPair
  class KerningPair;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.KerningTable/TMPro.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class KerningTable::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public System.Int32 left
    // Size: 0x4
    // Offset: 0x10
    int left;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 right
    // Size: 0x4
    // Offset: 0x14
    int right;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(int left_ = {}, int right_ = {}) noexcept : left{left_}, right{right_} {}
    // Get instance field reference: public System.Int32 left
    int& dyn_left();
    // Get instance field reference: public System.Int32 right
    int& dyn_right();
    // System.Boolean <RemoveKerningPair>b__0(TMPro.KerningPair item)
    // Offset: 0x1109624
    bool $RemoveKerningPair$b__0(TMPro::KerningPair* item);
    // public System.Void .ctor()
    // Offset: 0x11092D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningTable::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningTable::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningTable::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // TMPro.KerningTable/TMPro.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(KerningTable::$$c__DisplayClass5_0), 20 + sizeof(int)> __TMPro_KerningTable_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(KerningTable::$$c__DisplayClass5_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable::$$c__DisplayClass5_0*, "TMPro", "KerningTable/<>c__DisplayClass5_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::KerningTable::$$c__DisplayClass5_0::$RemoveKerningPair$b__0
// Il2CppName: <RemoveKerningPair>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::KerningTable::$$c__DisplayClass5_0::*)(TMPro::KerningPair*)>(&TMPro::KerningTable::$$c__DisplayClass5_0::$RemoveKerningPair$b__0)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("TMPro", "KerningPair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable::$$c__DisplayClass5_0*), "<RemoveKerningPair>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!