//
// Created by .1qxz on 11/14/2024.
//

#include "FreeCam.h"
#include "utils/MovementUtil.h"
#include "utils/MathUtil.h"
#include "net/minecraft/client/option/KeyBinding.hpp"
#include "net/minecraft/network/packet/c2s/play/PlayerMoveC2SPacket.hpp"

void FreeCam::onEnable() {
    Feature::onEnable();

    auto mc = _MC;
    auto player = _PLAYER;

    MinecraftClient::set_field_chunkCullingEnabled(mc, false);

    std::cout << Entity::get_field_yaw(player) << std::endl;
    fakeYaw = Entity::get_field_yaw(player);
    fakePitch = Entity::get_field_pitch(player);

    prevFakeYaw = fakeYaw;
    prevFakePitch = fakePitch;

    fakeX = Entity::getX(player);
    fakeY = Entity::getY(player) + Entity::getEyeHeight(player, Entity::getPose(player));
    fakeZ = Entity::getZ(player);

    prevFakeX = fakeX;
    prevFakeY = Entity::getY(player);
    prevFakeZ = fakeZ;
}

void FreeCam::onSync(EventSync &event) {
    auto player = _PLAYER;

    if(player == nullptr)
        return;

    prevFakeYaw = fakeYaw;
    prevFakePitch = fakePitch;

    if (trackingEntity != nullptr) {
        fakeYaw = Entity::get_field_yaw(trackingEntity);
        fakePitch = Entity::get_field_pitch(trackingEntity);

        prevFakeX = fakeX;
        prevFakeY = fakeY;
        prevFakeZ = fakeZ;

        fakeX = Entity::getX(trackingEntity);
        fakeY = Entity::getY(trackingEntity) + Entity::getEyeHeight(trackingEntity, Entity::getPose(trackingEntity));
        fakeZ = Entity::getZ(trackingEntity);
    } else {
        fakeYaw = Entity::get_field_yaw(player);
        fakePitch = Entity::get_field_pitch(player);

        auto result = MovementUtil::forward(speed.getValue());

        prevFakeX = fakeX;
        prevFakeY = fakeY;
        prevFakeZ = fakeZ;

        fakeX += result.motionX;
        fakeZ += result.motionZ;

        auto options = _OPTIONS;

        if(CKeyBinding::get_field_pressed(GameOptions::get_field_jumpKey(options)))
            fakeY += speed.getValue();

        if(CKeyBinding::get_field_pressed(GameOptions::get_field_sneakKey(options)))
            fakeY -= speed.getValue();
    }

    auto input = ClientPlayerEntity::get_field_input(player);

    Input::set_field_movementForward(input, 0);
    Input::set_field_movementSideways(input, 0);
    Input::set_field_jumping(input, false);
    Input::set_field_sneaking(input, false);
}

void FreeCam::onKey(EventOnKey &event) {
    if(trackingEntity != nullptr) {
        if (event.key == GLFW_KEY_ESCAPE || event.key == GLFW_KEY_LEFT_SHIFT || event.key == GLFW_KEY_RIGHT_SHIFT) {
            MinecraftSDK::env->DeleteGlobalRef(trackingEntity);
            trackingEntity = nullptr;
            event.cancel();
        }
    }
}

void FreeCam::onDisable() {
    Feature::onDisable();

    auto mc = _MC;
    MinecraftClient::set_field_chunkCullingEnabled(mc, true);

    if(trackingEntity != nullptr) {
        MinecraftSDK::env->DeleteGlobalRef(trackingEntity);
        trackingEntity = nullptr;
    }
}


void FreeCam::onMove(EventMove &event) {
    if(freeze) {
        event.cancel();
    }
}

void FreeCam::onPacketSend(EventPacketSend &event) {
    if(freeze && IS_INSTANCE(event.packet, PlayerMoveC2SPacket::self())) {
        event.cancel();
    }
}

void FreeCam::onPlayerRespawn() {
    this->setToggled(false);
}

float FreeCam::getFakeYaw() {
    return MathUtil::interpolate(prevFakeYaw, fakeYaw, this->getTickDelta());
}

float FreeCam::getFakePitch() {
    return MathUtil::interpolate(prevFakePitch, fakePitch, this->getTickDelta());
}

double FreeCam::getFakeX() {
    return MathUtil::interpolate(prevFakeX, fakeX, static_cast<double>(this->getTickDelta()));
}

double FreeCam::getFakeY() {
    return MathUtil::interpolate(prevFakeY, fakeY,static_cast<double>(this->getTickDelta()));
}

double FreeCam::getFakeZ() {
    return MathUtil::interpolate(prevFakeZ, fakeZ, static_cast<double>(this->getTickDelta()));
}
