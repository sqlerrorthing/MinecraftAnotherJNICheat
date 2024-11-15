//
// Created by .1qxz on 11/12/2024.
//

#include "Listeners.h"

void Listeners::registerListener(Listener *listener) {
    auto it = std::find(listeners.begin(), listeners.end(), listener);
    if (it == listeners.end()) {
        listeners.push_back(listener);
    }
}

void Listeners::unregisterListener(Listener *listener) {
    auto it = std::find(listeners.begin(), listeners.end(), listener);
    if (it != listeners.end()) {
        listeners.erase(it);
    }
}

void Listeners::onRender(bool tick) {
    for (const auto& listener : listeners) {
        listener->onRender(tick);
    }
}

void Listeners::onKey(EventOnKey &event) {
    for (const auto& listener : listeners) {
        listener->onKey(event);
        if (event.cancelled) {
            break;
        }
    }
}

void Listeners::onLocalPlayerUpdate(EventLocalPlayerUpdate &event) {
    for (const auto& listener : listeners) {
        listener->onLocalPlayerUpdate(event);
    }
}

void Listeners::onPacketReceived(EventPacketReceived &event) {
    for (const auto& listener : listeners) {
        listener->onPacketReceived(event);
        if (event.cancelled) {
            break;
        }
    }
}

void Listeners::onPacketSend(EventPacketSend &event) {
    for (const auto& listener : listeners) {
        listener->onPacketSend(event);
        if (event.cancelled) {
            break;
        }
    }
}

void Listeners::onMove(EventMove &event) {
    for (const auto& listener : listeners) {
        listener->onMove(event);
        if (event.cancelled) {
            break;
        }
    }
}

void Listeners::onPlayerRespawn() {
    for (const auto& listener : listeners) {
        listener->onPlayerRespawn();
    }
}

void Listeners::onSync(EventSync &event) {
    for (const auto& listener : listeners) {
        listener->onSync(event);
        if (event.cancelled) {
            break;
        }
    }
}
