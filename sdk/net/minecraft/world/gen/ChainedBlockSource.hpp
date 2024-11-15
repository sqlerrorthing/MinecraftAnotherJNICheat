// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHAINEDBLOCKSOURCE_HPP
#define NET_MINECRAFT_WORLD_GEN_CHAINEDBLOCKSOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.ChainedBlockSource
 * Remapped: eie
 */
namespace ChainedBlockSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eie", "net/minecraft/world/level/levelgen/material/MaterialRuleList", "net/minecraft/class_6582", "net/minecraft/world/gen/ChainedBlockSource", "net/minecraft/src/C_183000_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.ChainedBlockSource#samplers
    static jobject get_field_samplers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "materialRuleList", "comp_437", "samplers", "f_191545_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.ChainedBlockSource#samplers
    static void set_field_samplers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "materialRuleList", "comp_437", "samplers", "f_191545_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("calculate", "calculate", "calculate", "sample", "m_207387_"), "(Ldyr$b;)Ldtc;");
    }

    static jobject sample(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sample();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__samplers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "materialRuleList", "comp_437", "samplers", "f_191545_"), "()Ljava/util/List;");
    }

    static jobject _samplers(const jobject& obj) {
                
       const auto methodID = methodID__samplers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHAINEDBLOCKSOURCE_HPP