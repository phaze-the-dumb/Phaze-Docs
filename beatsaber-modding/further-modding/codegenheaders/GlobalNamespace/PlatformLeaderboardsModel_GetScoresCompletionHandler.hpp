// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel/GetScoresCompletionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformLeaderboardsModel::GetScoresCompletionHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetScoresCompletionHandler
    GetScoresCompletionHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11F2CF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardsModel::GetScoresCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardsModel::GetScoresCompletionHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlatformLeaderboardsModel/GetScoresResult result, PlatformLeaderboardsModel/LeaderboardScore[] scores, System.Int32 referencePlayerScoreIndex)
    // Offset: 0x11F324C
    void Invoke(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int referencePlayerScoreIndex);
    // public System.IAsyncResult BeginInvoke(PlatformLeaderboardsModel/GetScoresResult result, PlatformLeaderboardsModel/LeaderboardScore[] scores, System.Int32 referencePlayerScoreIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11F3A34
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int referencePlayerScoreIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x11F3AEC
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformLeaderboardsModel/GetScoresCompletionHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*, "", "PlatformLeaderboardsModel/GetScoresCompletionHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::*)(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>*, int)>(&GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresResult")->byval_arg;
    static auto* scores = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/LeaderboardScore"), 1)->byval_arg;
    static auto* referencePlayerScoreIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, scores, referencePlayerScoreIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::*)(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>*, int, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresResult")->byval_arg;
    static auto* scores = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/LeaderboardScore"), 1)->byval_arg;
    static auto* referencePlayerScoreIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, scores, referencePlayerScoreIndex, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::*)(System::IAsyncResult*)>(&GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};