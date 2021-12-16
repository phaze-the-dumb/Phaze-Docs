// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_FontAsset
#include "TMPro/TMP_FontAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Character
  class TMP_Character;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_FontAsset/TMPro.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TMP_FontAsset::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly TMPro.TMP_FontAsset/TMPro.<>c <>9
    static TMPro::TMP_FontAsset::$$c* _get_$$9();
    // Set static field: static public readonly TMPro.TMP_FontAsset/TMPro.<>c <>9
    static void _set_$$9(TMPro::TMP_FontAsset::$$c* value);
    // Get static field: static public System.Func`2<TMPro.TMP_Character,System.UInt32> <>9__100_0
    static System::Func_2<TMPro::TMP_Character*, uint>* _get_$$9__100_0();
    // Set static field: static public System.Func`2<TMPro.TMP_Character,System.UInt32> <>9__100_0
    static void _set_$$9__100_0(System::Func_2<TMPro::TMP_Character*, uint>* value);
    // Get static field: static public System.Func`2<UnityEngine.TextCore.Glyph,System.UInt32> <>9__101_0
    static System::Func_2<UnityEngine::TextCore::Glyph*, uint>* _get_$$9__101_0();
    // Set static field: static public System.Func`2<UnityEngine.TextCore.Glyph,System.UInt32> <>9__101_0
    static void _set_$$9__101_0(System::Func_2<UnityEngine::TextCore::Glyph*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x11174DC
    static void _cctor();
    // System.UInt32 <SortCharacterTable>b__100_0(TMPro.TMP_Character c)
    // Offset: 0x1117548
    uint $SortCharacterTable$b__100_0(TMPro::TMP_Character* c);
    // System.UInt32 <SortGlyphTable>b__101_0(UnityEngine.TextCore.Glyph c)
    // Offset: 0x1117560
    uint $SortGlyphTable$b__101_0(UnityEngine::TextCore::Glyph* c);
    // public System.Void .ctor()
    // Offset: 0x1117540
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_FontAsset::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_FontAsset::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_FontAsset::$$c*, creationType>()));
    }
  }; // TMPro.TMP_FontAsset/TMPro.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontAsset::$$c*, "TMPro", "TMP_FontAsset/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_FontAsset::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_FontAsset::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAsset::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAsset::$$c::$SortCharacterTable$b__100_0
// Il2CppName: <SortCharacterTable>b__100_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::TMP_FontAsset::$$c::*)(TMPro::TMP_Character*)>(&TMPro::TMP_FontAsset::$$c::$SortCharacterTable$b__100_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Character")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAsset::$$c*), "<SortCharacterTable>b__100_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAsset::$$c::$SortGlyphTable$b__101_0
// Il2CppName: <SortGlyphTable>b__101_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::TMP_FontAsset::$$c::*)(UnityEngine::TextCore::Glyph*)>(&TMPro::TMP_FontAsset::$$c::$SortGlyphTable$b__101_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore", "Glyph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAsset::$$c*), "<SortGlyphTable>b__101_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAsset::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!