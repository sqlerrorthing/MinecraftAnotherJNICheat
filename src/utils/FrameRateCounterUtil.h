//
// Created by .1qxz on 11/14/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_FRAMERATECOUNTERUTIL_H
#define MINECRAFTANOTHERJNICHEAT_FRAMERATECOUNTERUTIL_H

#include "vector"

class FrameRateCounterUtil {
public:
    static FrameRateCounterUtil& getInstance() {
        static FrameRateCounterUtil instance;
        return instance;
    }

    void recordFrame();

    [[nodiscard]] int getFps() const;

private:
    FrameRateCounterUtil() = default;
    FrameRateCounterUtil(const FrameRateCounterUtil&) = delete;
    FrameRateCounterUtil& operator=(const FrameRateCounterUtil&) = delete;

    std::vector<long long> records{};
    int fps = 5;
};


#endif //MINECRAFTANOTHERJNICHEAT_FRAMERATECOUNTERUTIL_H
