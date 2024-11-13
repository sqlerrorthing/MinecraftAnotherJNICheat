// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$MATERIALRULE_HPP
#define NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$MATERIALRULE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.surfacebuilder.MaterialRules$MaterialRule
 * Remapped: dzp$o
 */
namespace MaterialRules$MaterialRule {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzp$o", "net/minecraft/world/level/levelgen/SurfaceRules$RuleSource", "net/minecraft/class_6686$class_6708", "net/minecraft/world/gen/surfacebuilder/MaterialRules$MaterialRule", "net/minecraft/src/C_182910_$C_182933_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.surfacebuilder.MaterialRules$MaterialRule#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_35252", "CODEC", "f_189682_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.surfacebuilder.MaterialRules$MaterialRule#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_35252", "CODEC", "f_189682_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_registerAndGetDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_39085", "registerAndGetDefault", "m_204630_"), "(Ljz;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject registerAndGetDefault(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registerAndGetDefault();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_39061", "codec", "m_213795_"), "()Layh;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$MATERIALRULE_HPP