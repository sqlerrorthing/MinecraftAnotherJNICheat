// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_PATTERN_BLOCKPATTERN$BLOCKSTATECACHELOADER_HPP
#define NET_MINECRAFT_BLOCK_PATTERN_BLOCKPATTERN$BLOCKSTATECACHELOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.pattern.BlockPattern$BlockStateCacheLoader
 * Remapped: dth$a
 */
namespace BlockPattern$BlockStateCacheLoader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dth$a", "net/minecraft/world/level/block/state/pattern/BlockPattern$BlockCacheLoader", "net/minecraft/class_2700$class_2701", "net/minecraft/block/pattern/BlockPattern$BlockStateCacheLoader", "net/minecraft/src/C_2071_$C_2072_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.pattern.BlockPattern$BlockStateCacheLoader#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "level", "field_12359", "world", "f_61204_"), "Ldcz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.pattern.BlockPattern$BlockStateCacheLoader#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "level", "field_12359", "world", "f_61204_"), "Ldcz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.pattern.BlockPattern$BlockStateCacheLoader#forceLoad
    static jboolean get_field_forceLoad(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "loadChunks", "field_12360", "forceLoad", "f_61205_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.pattern.BlockPattern$BlockStateCacheLoader#forceLoad
    static void set_field_forceLoad(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "loadChunks", "field_12360", "forceLoad", "f_61205_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_11714", "load", "load"), "(Ljd;)Ldtg;");
    }

    static jobject load(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_load();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_PATTERN_BLOCKPATTERN$BLOCKSTATECACHELOADER_HPP