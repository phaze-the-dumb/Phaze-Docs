// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServicesInfoViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class OnlineServicesInfoViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::OnlineServicesInfoViewController::$GetServerStatus$d__8
    struct $GetServerStatus$d__8;
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(HMUI::TextPageScrollView*) == 0x8);
    // private BeatmapLevelSO _testBeatmapLevel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::BeatmapLevelSO* testBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _testBeatmapCharacteristic
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BeatmapCharacteristicSO* testBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private UnityEngine.UI.Button _refreshButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* refreshButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xE48E7C
    // private readonly OnlineServices.ServerManager _serverManager
    // Size: 0x8
    // Offset: 0x90
    OnlineServices::ServerManager* serverManager;
    // Field size check
    static_assert(sizeof(OnlineServices::ServerManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE48E8C
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // private System.Text.StringBuilder _sb
    // Size: 0x8
    // Offset: 0xA0
    System::Text::StringBuilder* sb;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // Creating value type constructor for type: OnlineServicesInfoViewController
    OnlineServicesInfoViewController(HMUI::TextPageScrollView* textPageScrollView_ = {}, GlobalNamespace::BeatmapLevelSO* testBeatmapLevel_ = {}, GlobalNamespace::BeatmapCharacteristicSO* testBeatmapCharacteristic_ = {}, UnityEngine::UI::Button* refreshButton_ = {}, OnlineServices::ServerManager* serverManager_ = {}, GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}, System::Text::StringBuilder* sb_ = {}) noexcept : textPageScrollView{textPageScrollView_}, testBeatmapLevel{testBeatmapLevel_}, testBeatmapCharacteristic{testBeatmapCharacteristic_}, refreshButton{refreshButton_}, serverManager{serverManager_}, platformUserModel{platformUserModel_}, sb{sb_} {}
    // Get instance field reference: private HMUI.TextPageScrollView _textPageScrollView
    HMUI::TextPageScrollView*& dyn__textPageScrollView();
    // Get instance field reference: private BeatmapLevelSO _testBeatmapLevel
    GlobalNamespace::BeatmapLevelSO*& dyn__testBeatmapLevel();
    // Get instance field reference: private BeatmapCharacteristicSO _testBeatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn__testBeatmapCharacteristic();
    // Get instance field reference: private UnityEngine.UI.Button _refreshButton
    UnityEngine::UI::Button*& dyn__refreshButton();
    // Get instance field reference: private readonly OnlineServices.ServerManager _serverManager
    OnlineServices::ServerManager*& dyn__serverManager();
    // Get instance field reference: private readonly IPlatformUserModel _platformUserModel
    GlobalNamespace::IPlatformUserModel*& dyn__platformUserModel();
    // Get instance field reference: private System.Text.StringBuilder _sb
    System::Text::StringBuilder*& dyn__sb();
    // private System.Void GetServerStatus()
    // Offset: 0x1032FB4
    void GetServerStatus();
    // private System.Void AppendLine(System.String line)
    // Offset: 0x103306C
    void AppendLine(::Il2CppString* line);
    // public System.Void .ctor()
    // Offset: 0x10330C4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnlineServicesInfoViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OnlineServicesInfoViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnlineServicesInfoViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1032F00
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // OnlineServicesInfoViewController
  #pragma pack(pop)
  static check_size<sizeof(OnlineServicesInfoViewController), 160 + sizeof(System::Text::StringBuilder*)> __GlobalNamespace_OnlineServicesInfoViewControllerSizeCheck;
  static_assert(sizeof(OnlineServicesInfoViewController) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnlineServicesInfoViewController*, "", "OnlineServicesInfoViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesInfoViewController::GetServerStatus
// Il2CppName: GetServerStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesInfoViewController::*)()>(&GlobalNamespace::OnlineServicesInfoViewController::GetServerStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesInfoViewController*), "GetServerStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesInfoViewController::AppendLine
// Il2CppName: AppendLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesInfoViewController::*)(::Il2CppString*)>(&GlobalNamespace::OnlineServicesInfoViewController::AppendLine)> {
  static const MethodInfo* get() {
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesInfoViewController*), "AppendLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{line});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesInfoViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesInfoViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesInfoViewController::*)(bool, bool, bool)>(&GlobalNamespace::OnlineServicesInfoViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesInfoViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};