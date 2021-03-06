// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Profiling
namespace Unity::Profiling {
}
// Completed forward declares
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Profiling.ProfilerMarker
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DB28A0
  // [NativeHeaderAttribute] Offset: DB28A0
  struct ProfilerMarker/*, public System::ValueType*/ {
    public:
    // Nested type: Unity::Profiling::ProfilerMarker::AutoScope
    struct AutoScope;
    // [NativeDisableUnsafePtrRestrictionAttribute] Offset: 0xDB7C18
    // readonly System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: ProfilerMarker
    constexpr ProfilerMarker(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: readonly System.IntPtr m_Ptr
    System::IntPtr& dyn_m_Ptr();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1C4495C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ProfilerMarker(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Profiling::ProfilerMarker::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, name);
    }
    // public Unity.Profiling.ProfilerMarker/Unity.Profiling.AutoScope Auto()
    // Offset: 0x1C44A04
    Unity::Profiling::ProfilerMarker::AutoScope Auto();
    // static System.IntPtr Internal_Create(System.String name, System.UInt16 flags)
    // Offset: 0x1C449B4
    static System::IntPtr Internal_Create(::Il2CppString* name, uint16_t flags);
    // static System.Void Internal_Begin(System.IntPtr markerPtr)
    // Offset: 0x1C44A4C
    static void Internal_Begin(System::IntPtr markerPtr);
    // static System.Void Internal_End(System.IntPtr markerPtr)
    // Offset: 0x1C44A8C
    static void Internal_End(System::IntPtr markerPtr);
  }; // Unity.Profiling.ProfilerMarker
  #pragma pack(pop)
  static check_size<sizeof(ProfilerMarker), 0 + sizeof(System::IntPtr)> __Unity_Profiling_ProfilerMarkerSizeCheck;
  static_assert(sizeof(ProfilerMarker) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Profiling::ProfilerMarker, "Unity.Profiling", "ProfilerMarker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Profiling::ProfilerMarker::ProfilerMarker
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Profiling::ProfilerMarker::Auto
// Il2CppName: Auto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Profiling::ProfilerMarker::AutoScope (Unity::Profiling::ProfilerMarker::*)()>(&Unity::Profiling::ProfilerMarker::Auto)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerMarker), "Auto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Profiling::ProfilerMarker::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*, uint16_t)>(&Unity::Profiling::ProfilerMarker::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerMarker), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, flags});
  }
};
// Writing MetadataGetter for method: Unity::Profiling::ProfilerMarker::Internal_Begin
// Il2CppName: Internal_Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&Unity::Profiling::ProfilerMarker::Internal_Begin)> {
  static const MethodInfo* get() {
    static auto* markerPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerMarker), "Internal_Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{markerPtr});
  }
};
// Writing MetadataGetter for method: Unity::Profiling::ProfilerMarker::Internal_End
// Il2CppName: Internal_End
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&Unity::Profiling::ProfilerMarker::Internal_End)> {
  static const MethodInfo* get() {
    static auto* markerPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerMarker), "Internal_End", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{markerPtr});
  }
};
