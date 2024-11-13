//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_LISTENER_H
#define MINECRAFTANOTHERJNICHEAT_LISTENER_H


struct Event {
    virtual ~Event() = default;
};

struct EventCancellable : public Event {
    bool cancelled = false;
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

    friend class Listeners;
};

#endif //MINECRAFTANOTHERJNICHEAT_LISTENER_H
