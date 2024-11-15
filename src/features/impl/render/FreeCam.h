//
// Created by .1qxz on 11/14/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_FREECAM_H
#define MINECRAFTANOTHERJNICHEAT_FREECAM_H


#include "features/Feature.h"

class FreeCam : public Feature {
public:

    Slider speed = Slider("Speed", 1, 0.1f, 3.0f, 0.1f);
    Checkbox freeze = Checkbox("Freeze", false);
    Checkbox track = Checkbox("Track", true);

    FreeCam() : Feature("FreeCam", "Unhooks the camera from the player", Category::RENDER) {
#ifdef DEBUG
        keyBinding.keyCode = GLFW_KEY_J;
#endif
        addSettings({&speed, &freeze, &track});
    }

    float getFakeYaw();
    float getFakePitch();

    double getFakeX();
    double getFakeY();
    double getFakeZ();

protected:
    void onEnable() override;

    void onDisable() override;

    void onMove(EventMove &event) override;

    void onPlayerRespawn() override;

    void onKey(EventOnKey &event) override;

    void onPacketSend(EventPacketSend &event) override;

    void onSync(EventSync &event) override;

private:
    float fakeYaw{0}, fakePitch{0}, prevFakeYaw{0}, prevFakePitch{0};
    double fakeX{0}, fakeY{0}, fakeZ{0}, prevFakeX{0}, prevFakeY{0}, prevFakeZ{0};
    jobject trackingEntity{nullptr};
};


#endif //MINECRAFTANOTHERJNICHEAT_FREECAM_H
