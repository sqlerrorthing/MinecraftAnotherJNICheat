// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TUTORIAL_TUTORIALMANAGER$ENTRY_HPP
#define NET_MINECRAFT_CLIENT_TUTORIAL_TUTORIALMANAGER$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.tutorial.TutorialManager$Entry
 * Remapped: gwi$a
 */
namespace TutorialManager$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gwi$a", "net/minecraft/client/tutorial/Tutorial$TimedToast", "net/minecraft/class_1156$class_5524", "net/minecraft/client/tutorial/TutorialManager$Entry", "net/minecraft/src/C_4617_$C_4619_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.tutorial.TutorialManager$Entry#toast
    static jobject get_field_toast(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "toast", "field_26894", "toast", "f_120599_"), "Lfkx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.tutorial.TutorialManager$Entry#toast
    static void set_field_toast(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "toast", "field_26894", "toast", "f_120599_"), "Lfkx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.tutorial.TutorialManager$Entry#expiry
    static jint get_field_expiry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "durationTicks", "field_26895", "expiry", "f_120600_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.tutorial.TutorialManager$Entry#expiry
    static void set_field_expiry(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "durationTicks", "field_26895", "expiry", "f_120600_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.tutorial.TutorialManager$Entry#age
    static jint get_field_age(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "progress", "field_26896", "age", "f_120601_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.tutorial.TutorialManager$Entry#age
    static void set_field_age(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "progress", "field_26896", "age", "f_120601_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateProgress", "method_31368", "tick", "m_120609_"), "()Z");
    }

    static jboolean tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TUTORIAL_TUTORIALMANAGER$ENTRY_HPP