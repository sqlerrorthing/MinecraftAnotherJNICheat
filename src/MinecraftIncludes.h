//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_MINECRAFTINCLUDES_H
#define MINECRAFTANOTHERJNICHEAT_MINECRAFTINCLUDES_H

#include "net/minecraft/client/util/Window.hpp"
#include "net/minecraft/client/MinecraftClient.hpp"
#include "net/minecraft/client/render/GameRenderer.hpp"
#include "net/minecraft/client/Keyboard.hpp"
#include "net/minecraft/client/render/Camera.hpp"
#include "net/minecraft/client/option/Perspective.hpp"
#include "net/minecraft/client/option/GameOptions.hpp"
#include "net/minecraft/network/ClientConnection.hpp"
#include "net/minecraft/fluid/FlowableFluid.hpp"
#include "net/minecraft/client/render/LightmapTextureManager.hpp"
#include "net/minecraft/entity/passive/AbstractHorseEntity.hpp"
#include <net/minecraft/client/input/Input.hpp>
#include <net/minecraft/client/network/ClientPlayerEntity.hpp>
#include "net/minecraft/network/packet/c2s/play/PlayerInteractBlockC2SPacket.hpp"
#include "net/minecraft/entity/player/PlayerInventory.hpp"
#include "net/minecraft/item/Items.hpp"
#include "net/minecraft/item/ItemStack.hpp"
#include "net/minecraft/entity/Entity.hpp"
#include "net/minecraft/util/Hand.hpp"
#include "net/minecraft/entity/LivingEntity.hpp"
#include "net/minecraft/entity/player/HungerManager.hpp"
#include "net/minecraft/text/Text.hpp"
#include "net/minecraft/entity/player/PlayerEntity.hpp"
#include "net/minecraft/client/network/ClientPlayerEntity.hpp"
#include "net/minecraft/util/profiler/ProfilerSystem.hpp"
#include "net/minecraft/util/math/Vec3d.hpp"
#include "net/minecraft/util/math/Direction.hpp"
#include "net/minecraft/util/profiler/Profiler.hpp"
#include "net/minecraft/client/render/WorldRenderer.hpp"
#include "net/minecraft/client/render/RenderTickCounter.hpp"
#include "net/minecraft/client/render/RenderTickCounter$Dynamic.hpp"

#define _MC MinecraftClient::get_field_instance()
#define _OPTIONS MinecraftClient::get_field_options(_MC)
#define _PLAYER MinecraftClient::get_field_player(_MC)
#define _WORLD MinecraftClient::get_field_world(_MC)

#endif //MINECRAFTANOTHERJNICHEAT_MINECRAFTINCLUDES_H
