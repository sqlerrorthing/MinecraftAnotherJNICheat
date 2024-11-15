// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PROJECTILE_DRAGONFIREBALLENTITY_HPP
#define NET_MINECRAFT_ENTITY_PROJECTILE_DRAGONFIREBALLENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.projectile.DragonFireballEntity
 * Remapped: cng
 */
namespace DragonFireballEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cng", "net/minecraft/world/entity/projectile/DragonFireball", "net/minecraft/class_1670", "net/minecraft/entity/projectile/DragonFireballEntity", "net/minecraft/src/C_1155_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.projectile.DragonFireballEntity#DAMAGE_RANGE
    [[maybe_unused]] static jfloat get_field_DAMAGE_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SPLASH_RANGE", "field_30661", "DAMAGE_RANGE", "f_150132_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.projectile.DragonFireballEntity#DAMAGE_RANGE
    [[maybe_unused]] static void set_field_DAMAGE_RANGE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SPLASH_RANGE", "field_30661", "DAMAGE_RANGE", "f_150132_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_onCollision() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHit", "method_7488", "onCollision", "m_6532_"), "(Lexa;)V");
    }

    static void onCollision(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCollision();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_damage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hurt", "method_5643", "damage", "m_6469_"), "(Lbrk;F)Z");
    }

    static jboolean damage(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_damage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getParticleType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getTrailParticle", "method_7467", "getParticleType", "m_5967_"), "()Llk;");
    }

    static jobject getParticleType(const jobject& obj) {
                
       const auto methodID = methodID_getParticleType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isBurning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "shouldBurn", "method_7468", "isBurning", "m_5931_"), "()Z");
    }

    static jboolean isBurning(const jobject& obj) {
                
       const auto methodID = methodID_isBurning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PROJECTILE_DRAGONFIREBALLENTITY_HPP