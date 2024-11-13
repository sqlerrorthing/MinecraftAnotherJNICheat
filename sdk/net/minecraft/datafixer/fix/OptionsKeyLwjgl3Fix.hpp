// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_OPTIONSKEYLWJGL3FIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_OPTIONSKEYLWJGL3FIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.OptionsKeyLwjgl3Fix
 * Remapped: bfz
 */
namespace OptionsKeyLwjgl3Fix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfz", "net/minecraft/util/datafix/fixes/OptionsKeyLwjgl3Fix", "net/minecraft/class_1201", "net/minecraft/datafixer/fix/OptionsKeyLwjgl3Fix", "net/minecraft/src/C_332_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.datafixer.fix.OptionsKeyLwjgl3Fix#KEY_UNKNOWN
    [[maybe_unused]] static jobject get_field_KEY_UNKNOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "KEY_UNKNOWN", "field_29906", "KEY_UNKNOWN", "f_145573_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.datafixer.fix.OptionsKeyLwjgl3Fix#KEY_UNKNOWN
    [[maybe_unused]] static void set_field_KEY_UNKNOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "KEY_UNKNOWN", "field_29906", "KEY_UNKNOWN", "f_145573_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.OptionsKeyLwjgl3Fix#NUMERICAL_KEY_IDS_TO_KEY_NAMES
    [[maybe_unused]] static jobject get_field_NUMERICAL_KEY_IDS_TO_KEY_NAMES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAP", "field_5706", "NUMERICAL_KEY_IDS_TO_KEY_NAMES", "f_16627_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.OptionsKeyLwjgl3Fix#NUMERICAL_KEY_IDS_TO_KEY_NAMES
    [[maybe_unused]] static void set_field_NUMERICAL_KEY_IDS_TO_KEY_NAMES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAP", "field_5706", "NUMERICAL_KEY_IDS_TO_KEY_NAMES", "f_16627_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_OPTIONSKEYLWJGL3FIX_HPP