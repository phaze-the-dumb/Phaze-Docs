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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: DistortionCoordinates_t
  struct DistortionCoordinates_t;
}
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
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._ComputeDistortion
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF7B64
  class IVRSystem::_ComputeDistortion : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ComputeDistortion
    _ComputeDistortion() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D4C248
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ComputeDistortion* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_ComputeDistortion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ComputeDistortion*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.EVREye eEye, System.Single fU, System.Single fV, ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates)
    // Offset: 0x1D4C258
    bool Invoke(Valve::VR::EVREye eEye, float fU, float fV, ByRef<Valve::VR::DistortionCoordinates_t> pDistortionCoordinates);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, System.Single fU, System.Single fV, ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D4C534
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, float fU, float fV, ByRef<Valve::VR::DistortionCoordinates_t> pDistortionCoordinates, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates, System.IAsyncResult result)
    // Offset: 0x1D4C620
    bool EndInvoke(ByRef<Valve::VR::DistortionCoordinates_t> pDistortionCoordinates, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._ComputeDistortion
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_ComputeDistortion*, "Valve.VR", "IVRSystem/_ComputeDistortion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ComputeDistortion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ComputeDistortion::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_ComputeDistortion::*)(Valve::VR::EVREye, float, float, ByRef<Valve::VR::DistortionCoordinates_t>)>(&Valve::VR::IVRSystem::_ComputeDistortion::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* fU = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fV = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pDistortionCoordinates = &::il2cpp_utils::GetClassFromName("Valve.VR", "DistortionCoordinates_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_ComputeDistortion*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, fU, fV, pDistortionCoordinates});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ComputeDistortion::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_ComputeDistortion::*)(Valve::VR::EVREye, float, float, ByRef<Valve::VR::DistortionCoordinates_t>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_ComputeDistortion::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* fU = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fV = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pDistortionCoordinates = &::il2cpp_utils::GetClassFromName("Valve.VR", "DistortionCoordinates_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_ComputeDistortion*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, fU, fV, pDistortionCoordinates, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ComputeDistortion::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_ComputeDistortion::*)(ByRef<Valve::VR::DistortionCoordinates_t>, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_ComputeDistortion::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pDistortionCoordinates = &::il2cpp_utils::GetClassFromName("Valve.VR", "DistortionCoordinates_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_ComputeDistortion*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pDistortionCoordinates, result});
  }
};