//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_TIMEUTIL_H
#define MINECRAFTANOTHERJNICHEAT_TIMEUTIL_H

#include <iostream>
#include <chrono>

class TimeUtil {
public:
    explicit TimeUtil() : ms(currentMilliseconds()) {}

    [[nodiscard]] bool hasReached(long long millis) const {
        return currentMilliseconds() - ms >= millis;
    }

    [[nodiscard]] bool operator>(long long millis) const {
        return hasReached(millis);
    }

    void reset() {
        ms = currentMilliseconds();
    }

private:
    long long ms;

    static long long currentMilliseconds() {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now().time_since_epoch()).count();
    }
};
#endif //MINECRAFTANOTHERJNICHEAT_TIMEUTIL_H
