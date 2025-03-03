#pragma once

#include "Zenject/FromBinder.hpp"
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/GameObjectCreationParameters.hpp"
#include "Zenject/InjectContext.hpp"

#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "UnityEngine/EventSystems/RaycastResult.hpp"
#include "UnityEngine/Camera.hpp"

#include "custom-types/shared/macros.hpp"

namespace Lapiz::Zenject::ZenjectExtensions {
    /// @brief Binds a view controller to the container.
    /// @param binder The binder.
    /// @param onInstantiated The callback when the view controller is instantiated.
    /// @return 
    ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentAsViewController(::Zenject::FromBinder* binder, std::function<void(::Zenject::InjectContext*, Il2CppObject*)> onInstantiated = nullptr);
    
    /// @brief Creates a new component on a new GameObject
    /// @param binder 
    /// @param gameObjectInfo 
    /// @return 
    ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewGameObject(::Zenject::FromBinder* binder, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

    /// @brief Creates a new component on a new GameObject
    /// @param binder 
    /// @return 
    static inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewGameObject(::Zenject::FromBinder* binder) {
        return FromNewComponentOnNewGameObject(binder,  ::Zenject::GameObjectCreationParameters::New_ctor());
    }
}

DECLARE_CLASS_CODEGEN(Lapiz::Zenject::ZenjectExtensions, DummyRaycaster, UnityEngine::EventSystems::BaseRaycaster,
    DECLARE_OVERRIDE_METHOD(UnityEngine::Camera*, get_eventCamera, il2cpp_utils::il2cpp_type_check::MetadataGetter<&::UnityEngine::EventSystems::BaseRaycaster::get_eventCamera>::get());
    DECLARE_OVERRIDE_METHOD(void, Raycast, il2cpp_utils::il2cpp_type_check::MetadataGetter<&::UnityEngine::EventSystems::BaseRaycaster::Raycast>::get(), UnityEngine::EventSystems::PointerEventData* pointerEventData, ListWrapper<UnityEngine::EventSystems::RaycastResult> resultAppendList);
)