// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PROJECTILE_WINDCHARGEENTITY_HPP
#define NET_MINECRAFT_ENTITY_PROJECTILE_WINDCHARGEENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.projectile.WindChargeEntity
 * Remapped: coh
 */
namespace WindChargeEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("coh", "net/minecraft/world/entity/projectile/windcharge/WindCharge", "net/minecraft/class_8956", "net/minecraft/entity/projectile/WindChargeEntity", "net/minecraft/src/C_313320_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.projectile.WindChargeEntity#EXPLOSION_BEHAVIOR
    [[maybe_unused]] static jobject get_field_EXPLOSION_BEHAVIOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "EXPLOSION_DAMAGE_CALCULATOR", "field_47579", "EXPLOSION_BEHAVIOR", "f_314324_"), "Ldcp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.WindChargeEntity#EXPLOSION_BEHAVIOR
    [[maybe_unused]] static void set_field_EXPLOSION_BEHAVIOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "EXPLOSION_DAMAGE_CALCULATOR", "field_47579", "EXPLOSION_BEHAVIOR", "f_314324_"), "Ldcp;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.projectile.WindChargeEntity#EXPLOSION_POWER
    [[maybe_unused]] static jfloat get_field_EXPLOSION_POWER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RADIUS", "field_49243", "EXPLOSION_POWER", "f_314044_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.WindChargeEntity#EXPLOSION_POWER
    [[maybe_unused]] static void set_field_EXPLOSION_POWER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RADIUS", "field_49243", "EXPLOSION_POWER", "f_314044_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.WindChargeEntity#deflectCooldown
    static jint get_field_deflectCooldown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "noDeflectTicks", "field_52019", "deflectCooldown", "f_337192_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.WindChargeEntity#deflectCooldown
    static void set_field_deflectCooldown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "noDeflectTicks", "field_52019", "deflectCooldown", "f_337192_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_deflect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deflect", "method_59859", "deflect", "m_318938_"), "(Lcnq;Lbsr;Lbsr;Z)Z");
    }

    static jboolean deflect(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_deflect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_createExplosion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "explode", "method_55055", "createExplosion", "m_320462_"), "(Lexc;)V");
    }

    static void createExplosion(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createExplosion();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PROJECTILE_WINDCHARGEENTITY_HPP