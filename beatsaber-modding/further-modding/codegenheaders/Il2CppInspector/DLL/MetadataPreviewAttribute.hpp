// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppInspector.DLL.MetadataPreviewAttribute
  class MetadataPreviewAttribute : public System::Attribute {
    public:
    // public System.String Data
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Data;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MetadataPreviewAttribute
    MetadataPreviewAttribute(::Il2CppString* Data_ = {}) noexcept : Data{Data_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Data;
    }
    // Get instance field reference: public System.String Data
    ::Il2CppString*& dyn_Data();
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetadataPreviewAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Il2CppInspector::DLL::MetadataPreviewAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetadataPreviewAttribute*, creationType>()));
    }
  }; // Il2CppInspector.DLL.MetadataPreviewAttribute
}
DEFINE_IL2CPP_ARG_TYPE(Il2CppInspector::DLL::MetadataPreviewAttribute*, "Il2CppInspector.DLL", "MetadataPreviewAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Il2CppInspector::DLL::MetadataPreviewAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!