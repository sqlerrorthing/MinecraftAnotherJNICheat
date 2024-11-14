//
// Created by .1qxz on 11/14/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_MATHUTIL_H
#define MINECRAFTANOTHERJNICHEAT_MATHUTIL_H

#include <algorithm>

namespace MathUtil {

    template <typename T>
    typename std::enable_if<std::is_arithmetic<T>::value, T>::type
    clamp(T num, T min, T max) {
        return num < min ? min : std::min(num, max);
    }

}

#endif //MINECRAFTANOTHERJNICHEAT_MATHUTIL_H
