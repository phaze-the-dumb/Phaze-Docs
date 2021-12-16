// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetRecommendedRenderTargetSize
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF7B28
  class IVRSystem::_GetRecommendedRenderTargetSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRecommendedRenderTargetSize
    _GetRecommendedRenderTargetSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D51508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetRecommendedRenderTargetSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetRecommendedRenderTargetSize*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1D51518
    void Invoke(ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D51784
    System::IAsyncResult* BeginInvoke(ByRef<uint> pnWidth, ByRef<uint> pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1D51830
    void EndInvoke(ByRef<uint> pnWidth, ByRef<uint> pnHeight, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetRecommendedRenderTargetSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize*, "Valve.VR", "IVRSystem/_GetRecommendedRenderTargetSize");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::*)(ByRef<uint>, ByRef<uint>)>(&Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::Invoke)> {
  static const MethodInfo* get() {
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::*)(ByRef<uint>, ByRef<uint>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnWidth, pnHeight, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::*)(ByRef<uint>, ByRef<uint>, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnWidth, pnHeight, result});
  }
};