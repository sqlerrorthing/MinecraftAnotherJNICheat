//
// Created by .1qxz on 11/12/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_LISTENERS_H
#define MINECRAFTANOTHERJNICHEAT_LISTENERS_H

#include "Listener.h"
#include "iostream"
#include <vector>

class Listeners : public Listener {
public:
    static Listeners& getInstance() {
        static Listeners instance;
        return instance;
    }

    void registerListener(Listener* listener);
    void unregisterListener(Listener* listener);

    void onRender(bool tick) override;
    void onKey(EventOnKey &event) override;
    void onLocalPlayerUpdate(EventLocalPlayerUpdate &event) override;

private:
    Listeners() = default;
    ~Listeners() = default;

private:

    std::vector<Listener*> listeners{};
};


#endif //MINECRAFTANOTHERJNICHEAT_LISTENERS_H
