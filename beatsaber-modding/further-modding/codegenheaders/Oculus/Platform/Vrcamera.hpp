// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Vrcamera
  // [TokenAttribute] Offset: FFFFFFFF
  class Vrcamera : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Vrcamera
    Vrcamera() noexcept {}
    // static public System.Void SetGetSurfaceUpdateNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<System.String> callback)
    // Offset: 0x23BA864
    static void SetGetSurfaceUpdateNotificationCallback(typename Oculus::Platform::Message_1<::Il2CppString*>::Callback* callback);
  }; // Oculus.Platform.Vrcamera
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Vrcamera*, "Oculus.Platform", "Vrcamera");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Vrcamera::SetGetSurfaceUpdateNotificationCallback
// Il2CppName: SetGetSurfaceUpdateNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want