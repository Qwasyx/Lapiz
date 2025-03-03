#pragma once

#include "custom-types/shared/macros.hpp"
#include "macros.hpp"

#include "System/IDisposable.hpp"
#include "sabers/LapizSaberFactory.hpp"
#include "sabers/SaberModelManager.hpp"

#include "GlobalNamespace/ColorManager.hpp"
#include "GlobalNamespace/SaberBurnMarkArea.hpp"
#include "UnityEngine/LineRenderer.hpp"
#include "UnityEngine/RenderTexture.hpp"

#include "System/Collections/Generic/Queue_1.hpp"

DECLARE_CLASS_CODEGEN_INTERFACES(Lapiz::Sabers::Effects, SaberBurnMarkAreaLatch, Il2CppObject, classof(System::IDisposable*),
    DECLARE_PRIVATE_FIELD(Lapiz::Sabers::LapizSaberFactory*, _lapizSaberFactory);
    DECLARE_PRIVATE_FIELD(Lapiz::Sabers::SaberModelManager*, _saberModelManager);
    using EarlySabers = System::Collections::Generic::Queue_1<Lapiz::Sabers::LapizSaber*>;
    DECLARE_PRIVATE_FIELD(EarlySabers*, _earlySabers);
    DECLARE_PRIVATE_FIELD(GlobalNamespace::SaberBurnMarkArea*, _saberBurnMarkArea);
    DECLARE_PRIVATE_FIELD(int, _lineFactoryIncrement);

    DECLARE_OVERRIDE_METHOD(void, Dispose, il2cpp_utils::il2cpp_type_check::MetadataGetter<&::System::IDisposable::Dispose>::get());
    DECLARE_INSTANCE_METHOD(void, LapizSaberFactory_SaberCreated, Lapiz::Sabers::LapizSaber* lapizSaber);
    DECLARE_INSTANCE_METHOD(void, ColorUpdated, GlobalNamespace::Saber* saber, UnityEngine::Color color);
    DECLARE_PRIVATE_METHOD(void, AddSaber, GlobalNamespace::Saber* saber);

    DECLARE_PRIVATE_METHOD(UnityEngine::LineRenderer*, CreateNewLineRenderer, UnityEngine::Color initialColor);
    DECLARE_PRIVATE_METHOD(UnityEngine::RenderTexture*, CreateNewRenderTexture);

    DECLARE_CTOR(ctor, Lapiz::Sabers::SaberModelManager* saberModelManager, Lapiz::Sabers::LapizSaberFactory* lapizSaberFactory);
    public:
        void SaberBurnMarkArea_Start_Postfix(GlobalNamespace::SaberBurnMarkArea* self);
        void SaberBurnMarkArea_LateUpdate_Postfix(GlobalNamespace::SaberBurnMarkArea* self);
        static SaberBurnMarkAreaLatch* get_instance();
    private:
        static SaberBurnMarkAreaLatch* instance;
)