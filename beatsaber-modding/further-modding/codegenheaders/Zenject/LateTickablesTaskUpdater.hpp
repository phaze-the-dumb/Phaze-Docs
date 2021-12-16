// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateTickable
  class ILateTickable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.LateTickablesTaskUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class LateTickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::ILateTickable*> {
    public:
    // Creating value type constructor for type: LateTickablesTaskUpdater
    LateTickablesTaskUpdater() noexcept {}
    // protected System.Void UpdateItem(Zenject.ILateTickable task)
    // Offset: 0x1719570
    void UpdateItem(Zenject::ILateTickable* task);
    // public System.Void .ctor()
    // Offset: 0x171961C
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LateTickablesTaskUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::LateTickablesTaskUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LateTickablesTaskUpdater*, creationType>()));
    }
  }; // Zenject.LateTickablesTaskUpdater
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::LateTickablesTaskUpdater*, "Zenject", "LateTickablesTaskUpdater");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::LateTickablesTaskUpdater::UpdateItem
// Il2CppName: UpdateItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::LateTickablesTaskUpdater::*)(Zenject::ILateTickable*)>(&Zenject::LateTickablesTaskUpdater::UpdateItem)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("Zenject", "ILateTickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::LateTickablesTaskUpdater*), "UpdateItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: Zenject::LateTickablesTaskUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!