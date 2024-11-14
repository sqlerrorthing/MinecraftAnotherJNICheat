//
// Created by .1qxz on 11/14/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_JAVAUTIL_H
#define MINECRAFTANOTHERJNICHEAT_JAVAUTIL_H

#include <functional>
#include "../Includes.h"

namespace JavaUtil {

    void iterateIterable(JNIEnv* env, jobject iterable, const std::function<void(jobject)>& handler);

}

#endif //MINECRAFTANOTHERJNICHEAT_JAVAUTIL_H
