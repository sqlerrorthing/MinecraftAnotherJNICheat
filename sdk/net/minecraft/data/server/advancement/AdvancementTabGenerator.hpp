// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_ADVANCEMENTTABGENERATOR_HPP
#define NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_ADVANCEMENTTABGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.advancement.AdvancementTabGenerator
 * Remapped: me
 */
namespace AdvancementTabGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("me", "net/minecraft/data/advancements/AdvancementSubProvider", "net/minecraft/class_7785", "net/minecraft/data/server/advancement/AdvancementTabGenerator", "net/minecraft/src/C_243410_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "generate", "method_10335", "accept", "m_245571_"), "(Ljo$a;Ljava/util/function/Consumer;)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_reference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createPlaceholder", "method_55578", "reference", "m_306985_"), "(Ljava/lang/String;)Lag;");
    }

    static jobject reference(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_reference();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_ADVANCEMENTTABGENERATOR_HPP