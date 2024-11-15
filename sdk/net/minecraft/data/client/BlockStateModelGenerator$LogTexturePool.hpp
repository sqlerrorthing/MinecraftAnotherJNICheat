// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEMODELGENERATOR$LOGTEXTUREPOOL_HPP
#define NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEMODELGENERATOR$LOGTEXTUREPOOL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.BlockStateModelGenerator$LogTexturePool
 * Remapped: no$f
 */
namespace BlockStateModelGenerator$LogTexturePool {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("no$f", "net/minecraft/data/models/BlockModelGenerators$WoodProvider", "net/minecraft/class_4910$class_4914", "net/minecraft/data/client/BlockStateModelGenerator$LogTexturePool", "net/minecraft/src/C_4786_$C_4791_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.client.BlockStateModelGenerator$LogTexturePool#textures
    static jobject get_field_textures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "logMapping", "field_22843", "textures", "f_125070_"), "Lof;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.BlockStateModelGenerator$LogTexturePool#textures
    static void set_field_textures(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "logMapping", "field_22843", "textures", "f_125070_"), "Lof;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_wood() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "wood", "method_25728", "wood", "m_125074_"), "(Ldfy;)Lno$f;");
    }

    static jobject wood(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_wood();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "log", "method_25729", "stem", "m_125076_"), "(Ldfy;)Lno$f;");
    }

    static jobject stem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_log() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "logWithHorizontal", "method_25730", "log", "m_125078_"), "(Ldfy;)Lno$f;");
    }

    static jobject log(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_log();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_uvLockedLog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "logUVLocked", "method_47520", "uvLockedLog", "m_258006_"), "(Ldfy;)Lno$f;");
    }

    static jobject uvLockedLog(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_uvLockedLog();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEMODELGENERATOR$LOGTEXTUREPOOL_HPP