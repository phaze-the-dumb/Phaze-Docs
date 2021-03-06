// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IServerSongPackProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IServerSongPackProvider {
    public:
    // Creating value type constructor for type: IServerSongPackProvider
    IServerSongPackProvider() noexcept {}
    // public SongPackMask[] DecomposeSongPackMask(SongPackMask songPackMask)
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::SongPackMask>* DecomposeSongPackMask(GlobalNamespace::SongPackMask songPackMask);
  }; // IServerSongPackProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerSongPackProvider*, "", "IServerSongPackProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IServerSongPackProvider::DecomposeSongPackMask
// Il2CppName: DecomposeSongPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::SongPackMask>* (GlobalNamespace::IServerSongPackProvider::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::IServerSongPackProvider::DecomposeSongPackMask)> {
  static const MethodInfo* get() {
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IServerSongPackProvider*), "DecomposeSongPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackMask});
  }
};
