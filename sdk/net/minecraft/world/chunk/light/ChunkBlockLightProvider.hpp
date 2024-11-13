// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_LIGHT_CHUNKBLOCKLIGHTPROVIDER_HPP
#define NET_MINECRAFT_WORLD_CHUNK_LIGHT_CHUNKBLOCKLIGHTPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.light.ChunkBlockLightProvider
 * Remapped: eom
 */
namespace ChunkBlockLightProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eom", "net/minecraft/world/level/lighting/BlockLightEngine", "net/minecraft/class_3552", "net/minecraft/world/chunk/light/ChunkBlockLightProvider", "net/minecraft/src/C_2668_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.chunk.light.ChunkBlockLightProvider#mutablePos
    static jobject get_field_mutablePos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "mutablePos", "field_16511", "mutablePos", "f_75489_"), "Ljd$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.light.ChunkBlockLightProvider#mutablePos
    static void set_field_mutablePos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "mutablePos", "field_16511", "mutablePos", "f_75489_"), "Ljd$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_method_51529() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkNode", "method_51529", "method_51529", "m_75858_"), "(J)V");
    }

    static void method_51529(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_method_51529();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_method_51531() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "propagateIncrease", "method_51531", "method_51531", "m_284316_"), "(JJI)V");
    }

    static void method_51531(const jobject& obj, const jlong& arg0, const jlong& arg1, const jint& arg2) {
                
       const auto methodID = methodID_method_51531();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_method_51530() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "propagateDecrease", "method_51530", "method_51530", "m_284321_"), "(JJ)V");
    }

    static void method_51530(const jobject& obj, const jlong& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_method_51530();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLightSourceLuminance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEmission", "method_15474", "getLightSourceLuminance", "m_284436_"), "(JLdtc;)I");
    }

    static jint getLightSourceLuminance(const jobject& obj, const jlong& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getLightSourceLuminance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_propagateLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "propagateLightSources", "method_51471", "propagateLight", "m_142519_"), "(Ldcd;)V");
    }

    static void propagateLight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_propagateLight();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_LIGHT_CHUNKBLOCKLIGHTPROVIDER_HPP