// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_VEHICLE_VEHICLEENTITY_HPP
#define NET_MINECRAFT_ENTITY_VEHICLE_VEHICLEENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.vehicle.VehicleEntity
 * Remapped: cpg
 */
namespace VehicleEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpg", "net/minecraft/world/entity/vehicle/VehicleEntity", "net/minecraft/class_8836", "net/minecraft/entity/vehicle/VehicleEntity", "net/minecraft/src/C_302183_"));
        }
        return cachedClass;
    };

    // getter for static protected field net.minecraft.entity.vehicle.VehicleEntity#DAMAGE_WOBBLE_TICKS
    [[maybe_unused]] static jobject get_field_DAMAGE_WOBBLE_TICKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DATA_ID_HURT", "field_46655", "DAMAGE_WOBBLE_TICKS", "f_302249_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.vehicle.VehicleEntity#DAMAGE_WOBBLE_TICKS
    [[maybe_unused]] static void set_field_DAMAGE_WOBBLE_TICKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DATA_ID_HURT", "field_46655", "DAMAGE_WOBBLE_TICKS", "f_302249_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.entity.vehicle.VehicleEntity#DAMAGE_WOBBLE_SIDE
    [[maybe_unused]] static jobject get_field_DAMAGE_WOBBLE_SIDE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DATA_ID_HURTDIR", "field_46656", "DAMAGE_WOBBLE_SIDE", "f_302571_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.vehicle.VehicleEntity#DAMAGE_WOBBLE_SIDE
    [[maybe_unused]] static void set_field_DAMAGE_WOBBLE_SIDE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DATA_ID_HURTDIR", "field_46656", "DAMAGE_WOBBLE_SIDE", "f_302571_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.entity.vehicle.VehicleEntity#DAMAGE_WOBBLE_STRENGTH
    [[maybe_unused]] static jobject get_field_DAMAGE_WOBBLE_STRENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DATA_ID_DAMAGE", "field_46657", "DAMAGE_WOBBLE_STRENGTH", "f_302371_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.vehicle.VehicleEntity#DAMAGE_WOBBLE_STRENGTH
    [[maybe_unused]] static void set_field_DAMAGE_WOBBLE_STRENGTH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DATA_ID_DAMAGE", "field_46657", "DAMAGE_WOBBLE_STRENGTH", "f_302371_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_damage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hurt", "method_5643", "damage", "m_6469_"), "(Lbrk;F)Z");
    }

    static jboolean damage(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_damage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_shouldAlwaysKill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "shouldSourceDestroy", "method_55056", "shouldAlwaysKill", "m_304763_"), "(Lbrk;)Z");
    }

    static jboolean shouldAlwaysKill(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_shouldAlwaysKill();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_killAndDropItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "destroy", "method_54298", "killAndDropItem", "m_305179_"), "(Lcul;)V");
    }

    static void killAndDropItem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_killAndDropItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setDamageWobbleTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setHurtTime", "method_54299", "setDamageWobbleTicks", "m_307446_"), "(I)V");
    }

    static void setDamageWobbleTicks(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setDamageWobbleTicks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setDamageWobbleSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "setHurtDir", "method_54300", "setDamageWobbleSide", "m_306256_"), "(I)V");
    }

    static void setDamageWobbleSide(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setDamageWobbleSide();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setDamageWobbleStrength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setDamage", "method_54297", "setDamageWobbleStrength", "m_305563_"), "(F)V");
    }

    static void setDamageWobbleStrength(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setDamageWobbleStrength();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDamageWobbleStrength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("N", "getDamage", "method_54294", "getDamageWobbleStrength", "m_304923_"), "()F");
    }

    static jfloat getDamageWobbleStrength(const jobject& obj) {
                
       const auto methodID = methodID_getDamageWobbleStrength();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDamageWobbleTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("O", "getHurtTime", "method_54295", "getDamageWobbleTicks", "m_305464_"), "()I");
    }

    static jint getDamageWobbleTicks(const jobject& obj) {
                
       const auto methodID = methodID_getDamageWobbleTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDamageWobbleSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("P", "getHurtDir", "method_54296", "getDamageWobbleSide", "m_305195_"), "()I");
    }

    static jint getDamageWobbleSide(const jobject& obj) {
                
       const auto methodID = methodID_getDamageWobbleSide();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_killAndDropSelf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "destroy", "method_7516", "killAndDropSelf", "m_38227_"), "(Lbrk;)V");
    }

    static void killAndDropSelf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_killAndDropSelf();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_asItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ak_", "getDropItem", "method_7557", "asItem", "m_38369_"), "()Lcul;");
    }

    static jobject asItem(const jobject& obj) {
                
       const auto methodID = methodID_asItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_VEHICLE_VEHICLEENTITY_HPP