//
// Created by .1qxz on 11/14/2024.
//

#include "JavaUtil.h"

void JavaUtil::iterateIterable(JNIEnv *env, jobject iterable, const std::function<void(jobject)> &handler) {
    jclass iterableClass = env->FindClass("java/lang/Iterable");
    jmethodID iteratorMethod = env->GetMethodID(iterableClass, "iterator", "()Ljava/util/Iterator;");
    jobject iterator = env->CallObjectMethod(iterable, iteratorMethod);

    jclass iteratorClass = env->FindClass("java/util/Iterator");
    jmethodID hasNextMethod = env->GetMethodID(iteratorClass, "hasNext", "()Z");
    jmethodID nextMethod = env->GetMethodID(iteratorClass, "next", "()Ljava/lang/Object;");

    while (env->CallBooleanMethod(iterator, hasNextMethod)) {
        jobject element = env->CallObjectMethod(iterator, nextMethod);

        handler(element);

        env->DeleteLocalRef(element);
    }

    env->DeleteLocalRef(iterator);
    env->DeleteLocalRef(iterableClass);
    env->DeleteLocalRef(iteratorClass);
}
