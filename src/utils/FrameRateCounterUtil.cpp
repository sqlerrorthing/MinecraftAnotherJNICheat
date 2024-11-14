//
// Created by .1qxz on 11/14/2024.
//

#include "FrameRateCounterUtil.h"
#include "iostream"
#include <chrono>
#include <algorithm>

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define llong long long

llong currentTimeMillis() {
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
}

void FrameRateCounterUtil::recordFrame() {
    llong currentTime = currentTimeMillis();
    records.push_back(currentTime);

    records.erase(std::remove_if(records.begin(), records.end(),
                                 [currentTime](llong timestamp) { return timestamp + 1000 < currentTime; }), records.end());

    fps = max(records.size(), 4);
}

int FrameRateCounterUtil::getFps() const {
    return fps;
}
