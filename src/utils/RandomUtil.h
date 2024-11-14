//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_RANDOMUTIL_H
#define MINECRAFTANOTHERJNICHEAT_RANDOMUTIL_H

#include <random>
#include <type_traits>
#include <iostream>

namespace RandomUtil {

    template <typename T>
    typename std::enable_if<std::is_arithmetic<T>::value, T>::type
    generate(T min, T max) {
        std::random_device rd;
        std::mt19937 gen(rd());

        if constexpr (std::is_integral<T>::value) {
            std::uniform_int_distribution<T> dist(min, max);
            return dist(gen);
        } else {
            std::uniform_real_distribution<T> dist(min, max);
            return dist(gen);
        }
    }

}

#endif //MINECRAFTANOTHERJNICHEAT_RANDOMUTIL_H
