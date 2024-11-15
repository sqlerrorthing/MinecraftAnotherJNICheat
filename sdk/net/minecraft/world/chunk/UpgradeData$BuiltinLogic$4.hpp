// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_UPGRADEDATA$BUILTINLOGIC$4_HPP
#define NET_MINECRAFT_WORLD_CHUNK_UPGRADEDATA$BUILTINLOGIC$4_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.UpgradeData$BuiltinLogic$4
 * Remapped: dvv$b$4
 */
namespace UpgradeData$BuiltinLogic$4 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dvv$b$4", "net/minecraft/world/level/chunk/UpgradeData$BlockFixers$4", "net/minecraft/class_2843$class_2845$4", "net/minecraft/world/chunk/UpgradeData$BuiltinLogic$4", "net/minecraft/src/C_2149_$C_2152_$C_2156_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.chunk.UpgradeData$BuiltinLogic$4#distanceToPositions
    static jobject get_field_distanceToPositions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "queue", "field_12964", "distanceToPositions", "f_63422_"), "Ljava/lang/ThreadLocal;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.UpgradeData$BuiltinLogic$4#distanceToPositions
    static void set_field_distanceToPositions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "queue", "field_12964", "distanceToPositions", "f_63422_"), "Ljava/lang/ThreadLocal;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getUpdatedState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateShape", "method_12358", "getUpdatedState", "m_5731_"), "(Ldtc;Lji;Ldtc;Ldcx;Ljd;Ljd;)Ldtc;");
    }

    static jobject getUpdatedState(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_getUpdatedState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_postUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "processChunk", "method_12357", "postUpdate", "m_5870_"), "(Ldcx;)V");
    }

    static void postUpdate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_postUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_UPGRADEDATA$BUILTINLOGIC$4_HPP