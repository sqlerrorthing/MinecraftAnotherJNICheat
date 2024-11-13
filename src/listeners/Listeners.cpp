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
