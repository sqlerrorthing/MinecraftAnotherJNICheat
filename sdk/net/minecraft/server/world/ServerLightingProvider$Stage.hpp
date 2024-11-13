// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_SERVERLIGHTINGPROVIDER$STAGE_HPP
#define NET_MINECRAFT_SERVER_WORLD_SERVERLIGHTINGPROVIDER$STAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.ServerLightingProvider$Stage
 * Remapped: aqx$a
 */
namespace ServerLightingProvider$Stage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqx$a", "net/minecraft/server/level/ThreadedLevelLightEngine$TaskType", "net/minecraft/class_3227$class_3901", "net/minecraft/server/world/ServerLightingProvider$Stage", "net/minecraft/src/C_15_$C_16_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.server.world.ServerLightingProvider$Stage#PRE_UPDATE
    [[maybe_unused]] static jobject get_field_PRE_UPDATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PRE_UPDATE", "field_17261", "PRE_UPDATE", "PRE_UPDATE"), "Laqx$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.world.ServerLightingProvider$Stage#PRE_UPDATE
    [[maybe_unused]] static void set_field_PRE_UPDATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PRE_UPDATE", "field_17261", "PRE_UPDATE", "PRE_UPDATE"), "Laqx$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.world.ServerLightingProvider$Stage#POST_UPDATE
    [[maybe_unused]] static jobject get_field_POST_UPDATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POST_UPDATE", "field_17262", "POST_UPDATE", "POST_UPDATE"), "Laqx$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.world.ServerLightingProvider$Stage#POST_UPDATE
    [[maybe_unused]] static void set_field_POST_UPDATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POST_UPDATE", "field_17262", "POST_UPDATE", "POST_UPDATE"), "Laqx$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Laqx$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Laqx$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_SERVERLIGHTINGPROVIDER$STAGE_HPP