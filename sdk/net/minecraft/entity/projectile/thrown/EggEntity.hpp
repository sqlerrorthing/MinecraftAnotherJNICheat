// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PROJECTILE_THROWN_EGGENTITY_HPP
#define NET_MINECRAFT_ENTITY_PROJECTILE_THROWN_EGGENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.projectile.thrown.EggEntity
 * Remapped: cny
 */
namespace EggEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cny", "net/minecraft/world/entity/projectile/ThrownEgg", "net/minecraft/class_1681", "net/minecraft/entity/projectile/thrown/EggEntity", "net/minecraft/src/C_1175_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.projectile.thrown.EggEntity#EMPTY_DIMENSIONS
    [[maybe_unused]] static jobject get_field_EMPTY_DIMENSIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ZERO_SIZED_DIMENSIONS", "field_51894", "EMPTY_DIMENSIONS", "f_337551_"), "Lbsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.thrown.EggEntity#EMPTY_DIMENSIONS
    [[maybe_unused]] static void set_field_EMPTY_DIMENSIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ZERO_SIZED_DIMENSIONS", "field_51894", "EMPTY_DIMENSIONS", "f_337551_"), "Lbsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_handleStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleEntityEvent", "method_5711", "handleStatus", "m_7822_"), "(B)V");
    }

    static void handleStatus(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_handleStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onEntityHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHitEntity", "method_7454", "onEntityHit", "m_5790_"), "(Lewz;)V");
    }

    static void onEntityHit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onEntityHit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCollision() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHit", "method_7488", "onCollision", "m_6532_"), "(Lexa;)V");
    }

    static void onCollision(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCollision();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDefaultItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getDefaultItem", "method_16942", "getDefaultItem", "m_7881_"), "()Lcul;");
    }

    static jobject getDefaultItem(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PROJECTILE_THROWN_EGGENTITY_HPP