// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.CollectionConverter
#include "System/ComponentModel/CollectionConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ArrayConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayConverter : public System::ComponentModel::CollectionConverter {
    public:
    // Creating value type constructor for type: ArrayConverter
    ArrayConverter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x18B5604
    // Implemented from: System.ComponentModel.CollectionConverter
    // Base method: System.Void CollectionConverter::.ctor()
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::ArrayConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayConverter*, creationType>()));
    }
  }; // System.ComponentModel.ArrayConverter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ArrayConverter*, "System.ComponentModel", "ArrayConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ArrayConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!