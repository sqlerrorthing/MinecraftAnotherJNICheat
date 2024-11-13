//
// Created by .1qxz on 11/13/2024.
//

#include "../Hooks.hpp"

jmethodID KeyboardHooks::original_on_key_methodID;
void KeyboardHooks::hkOnKey(JNIEnv *env, jobject obj, jlong window, jint key, jint scancode, jint action,
                            jint modifiers) {
    EventOnKey event(key, scancode, action, modifiers);
    Listeners::getInstance().onKey(event);

    if(event.cancelled)
        return;

    env->CallNonvirtualVoidMethod(obj, Keyboard::self(), original_on_key_methodID, window, event.key, event.scancode,
                                  event.action, event.modifiers);
}