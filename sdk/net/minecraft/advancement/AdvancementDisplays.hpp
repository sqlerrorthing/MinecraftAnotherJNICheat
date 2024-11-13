// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTDISPLAYS_HPP
#define NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTDISPLAYS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.AdvancementDisplays
 * Remapped: alq
 */
namespace AdvancementDisplays {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alq", "net/minecraft/server/advancements/AdvancementVisibilityEvaluator", "net/minecraft/class_8005", "net/minecraft/advancement/AdvancementDisplays", "net/minecraft/src/C_263609_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.advancement.AdvancementDisplays#DISPLAY_DEPTH
    [[maybe_unused]] static jint get_field_DISPLAY_DEPTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VISIBILITY_DEPTH", "field_41737", "DISPLAY_DEPTH", "f_263793_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.advancement.AdvancementDisplays#DISPLAY_DEPTH
    [[maybe_unused]] static void set_field_DISPLAY_DEPTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VISIBILITY_DEPTH", "field_41737", "DISPLAY_DEPTH", "f_263793_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluateVisibilityRule", "method_48032", "getStatus", "m_264339_"), "(Laf;Z)Lalq$b;");
    }

    static jobject getStatus(const jobject& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getStatus();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_shouldDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluateVisiblityForUnfinishedNode", "method_48033", "shouldDisplay", "m_264309_"), "(Lit/unimi/dsi/fastutil/Stack;)Z");
    }

    static jboolean shouldDisplay(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_shouldDisplay();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__shouldDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluateVisibility", "method_48030", "shouldDisplay", "m_264099_"), "(Lah;Lit/unimi/dsi/fastutil/Stack;Ljava/util/function/Predicate;Lalq$a;)Z");
    }

    static jboolean _shouldDisplay(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__shouldDisplay();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_calculateDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluateVisibility", "method_48031", "calculateDisplay", "m_264402_"), "(Lah;Ljava/util/function/Predicate;Lalq$a;)V");
    }

    static void calculateDisplay(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_calculateDisplay();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTDISPLAYS_HPP