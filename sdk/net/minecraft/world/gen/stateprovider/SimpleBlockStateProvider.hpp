// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_STATEPROVIDER_SIMPLEBLOCKSTATEPROVIDER_HPP
#define NET_MINECRAFT_WORLD_GEN_STATEPROVIDER_SIMPLEBLOCKSTATEPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.stateprovider.SimpleBlockStateProvider
 * Remapped: egs
 */
namespace SimpleBlockStateProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("egs", "net/minecraft/world/level/levelgen/feature/stateproviders/SimpleStateProvider", "net/minecraft/class_4656", "net/minecraft/world/gen/stateprovider/SimpleBlockStateProvider", "net/minecraft/src/C_2391_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.stateprovider.SimpleBlockStateProvider#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24945", "CODEC", "f_68797_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.stateprovider.SimpleBlockStateProvider#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24945", "CODEC", "f_68797_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.stateprovider.SimpleBlockStateProvider#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "field_21314", "state", "f_68798_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.stateprovider.SimpleBlockStateProvider#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "field_21314", "state", "f_68798_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28862", "getType", "m_5923_"), "()Legk;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getState", "method_23455", "get", "m_213972_"), "(Layw;Ljd;)Ldtc;");
    }

    static jobject get(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_STATEPROVIDER_SIMPLEBLOCKSTATEPROVIDER_HPP