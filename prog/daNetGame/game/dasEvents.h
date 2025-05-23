// generated by dagor2/prog/scripts/genDasevents.das
#pragma once

#include <daECS/core/entityId.h>
#include <daECS/core/event.h>
#include <daECS/core/componentTypes.h>
#include <math/dag_Point3.h>
#include <util/dag_simpleString.h>
#include <EASTL/string.h>


/// native_events

ECS_BROADCAST_EVENT_TYPE(ChangeServerRoute, /*currentIsUnresponsive*/ bool);
ECS_UNICAST_EVENT_TYPE(CmdUpdateGridScale);
ECS_BROADCAST_EVENT_TYPE(EventAnyEntityResurrected, /*eid*/ ecs::EntityId);
ECS_BROADCAST_EVENT_TYPE(EventGameSessionFinished, /*disconnected*/ bool);
ECS_BROADCAST_EVENT_TYPE(EventGameSessionStarted);
ECS_BROADCAST_EVENT_TYPE(EventKeyFrameSaved, /*time*/ int);
ECS_BROADCAST_EVENT_TYPE(EventTickrateChanged, /*oldTickrate*/ int, /*newTickrate*/ int);
ECS_UNICAST_EVENT_TYPE(PossessTargetByPlayer, /*target*/ ecs::EntityId);
ECS_BROADCAST_EVENT_TYPE(RequestSaveKeyFrame);
ECS_BROADCAST_EVENT_TYPE(ServerCreatePlayersEntities);
ECS_BROADCAST_EVENT_TYPE(UpdateStageGameLogic, /*dt*/ float, /*curTime*/ float);
