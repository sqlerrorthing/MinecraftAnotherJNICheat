// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_TREEDECORATOR_HPP
#define NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_TREEDECORATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.treedecorator.TreeDecorator
 * Remapped: eha
 */
namespace TreeDecorator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eha", "net/minecraft/world/level/levelgen/feature/treedecorators/TreeDecorator", "net/minecraft/class_4662", "net/minecraft/world/gen/treedecorator/TreeDecorator", "net/minecraft/src/C_2416_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.treedecorator.TreeDecorator#TYPE_CODEC
    [[maybe_unused]] static jobject get_field_TYPE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CODEC", "field_24962", "TYPE_CODEC", "f_70021_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.treedecorator.TreeDecorator#TYPE_CODEC
    [[maybe_unused]] static void set_field_TYPE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CODEC", "field_24962", "TYPE_CODEC", "f_70021_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28893", "getType", "m_6663_"), "()Lehb;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_23469", "generate", "m_214187_"), "(Leha$a;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_TREEDECORATOR_HPP