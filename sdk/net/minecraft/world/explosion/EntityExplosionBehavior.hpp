// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_EXPLOSION_ENTITYEXPLOSIONBEHAVIOR_HPP
#define NET_MINECRAFT_WORLD_EXPLOSION_ENTITYEXPLOSIONBEHAVIOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.explosion.EntityExplosionBehavior
 * Remapped: dcm
 */
namespace EntityExplosionBehavior {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcm", "net/minecraft/world/level/EntityBasedExplosionDamageCalculator", "net/minecraft/class_5361", "net/minecraft/world/explosion/EntityExplosionBehavior", "net/minecraft/src/C_1576_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.explosion.EntityExplosionBehavior#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "source", "field_25399", "entity", "f_45892_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.EntityExplosionBehavior#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "source", "field_25399", "entity", "f_45892_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlastResistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockExplosionResistance", "method_29555", "getBlastResistance", "m_6617_"), "(Ldco;Ldcc;Ljd;Ldtc;Lepe;)Ljava/util/Optional;");
    }

    static jobject getBlastResistance(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_getBlastResistance();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_canDestroyBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldBlockExplode", "method_29554", "canDestroyBlock", "m_6714_"), "(Ldco;Ldcc;Ljd;Ldtc;F)Z");
    }

    static jboolean canDestroyBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jfloat& arg4) {
                
       const auto methodID = methodID_canDestroyBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_WORLD_EXPLOSION_ENTITYEXPLOSIONBEHAVIOR_HPP