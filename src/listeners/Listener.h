//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_LISTENER_H
#define MINECRAFTANOTHERJNICHEAT_LISTENER_H

#include <jni.h>
#include <memory>

struct Event {
    virtual ~Event() = default;
};

struct EventCancellable : public Event {
    bool cancelled = false;

    void cancel() {
        cancelled = true;
    }
};

struct EventMove : public EventCancellable {
    const enum MovementType {
        SELF,
        PLAYER,
        PISTON,
        SHULKER_BOX,
        SHULKER
    } movementType;

    double x;
    double y;
    double z;

    EventMove(MovementType movementType, double x, double y, double z) : movementType(movementType), x(x), y(y), z(z) {}
};

struct EventSync : public EventCancellable {
    float yaw;
    float pitch;

    EventSync(float yaw, float pitch) : yaw(yaw), pitch(pitch) {}
};

struct EventPacket : public EventCancellable {
    jobject &packet;
    explicit EventPacket(jobject &packet) : packet(packet) {}
};

struct EventPacketReceived : public EventPacket {
    explicit EventPacketReceived(jobject &packet) : EventPacket(packet) {}
};

struct EventPacketSend : public EventPacket {
    explicit EventPacketSend(jobject &packet) : EventPacket(packet) {}
};

struct EventLocalPlayerUpdate : public EventCancellable {};

struct EventOnKey : public EventCancellable {
    int key;
    int scancode;
    int action;
    int modifiers;

    EventOnKey(int keyCode, int scancode, int action, int modifiers) : key(keyCode), scancode(scancode),
                                                                       action(action), modifiers(modifiers) {}
};

class Listener {
protected:
    virtual void onRender(bool tick) {}
    virtual void onKey(EventOnKey &event) {}
    virtual void onLocalPlayerUpdate(EventLocalPlayerUpdate &event) {}

    virtual void onPacketReceived(EventPacketReceived &event) {}
    virtual void onPacketSend(EventPacketSend &event) {}

    virtual void onMove(EventMove &event) {}

    virtual void onPlayerRespawn() {}

    virtual void onSync(EventSync &event) {}


    friend class Listeners;
};

#endif //MINECRAFTANOTHERJNICHEAT_LISTENER_H
