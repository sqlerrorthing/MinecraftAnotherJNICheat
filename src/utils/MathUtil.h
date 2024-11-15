//
// Created by .1qxz on 11/14/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_MATHUTIL_H
#define MINECRAFTANOTHERJNICHEAT_MATHUTIL_H

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#include <algorithm>
#include <type_traits>

namespace MathUtil {

    template <typename T>
    typename std::enable_if<std::is_arithmetic<T>::value, T>::type
    clamp(T num, T min, T max) {
        return num < min ? min : MIN(num, max);
    }

    template <typename T>
    typename std::enable_if<std::is_arithmetic<T>::value, T>::type
    lerp(T delta, T start, T end) {
        return start + delta * (end - start);
    }

    template <typename T>
    typename std::enable_if<std::is_arithmetic<T>::value, T>::type
    interpolate(T oldValue, T newValue, T interpolationValue) {
        return (oldValue + (newValue - oldValue) * interpolationValue);
    }

}

#endif //MINECRAFTANOTHERJNICHEAT_MATHUTIL_H
