// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_VEHICLE_FURNACEMINECARTENTITY_HPP
#define NET_MINECRAFT_ENTITY_VEHICLE_FURNACEMINECARTENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.vehicle.FurnaceMinecartEntity
 * Remapped: cpc
 */
namespace FurnaceMinecartEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpc", "net/minecraft/world/entity/vehicle/MinecartFurnace", "net/minecraft/class_1696", "net/minecraft/entity/vehicle/FurnaceMinecartEntity", "net/minecraft/src/C_1214_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.vehicle.FurnaceMinecartEntity#LIT
    [[maybe_unused]] static jobject get_field_LIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DATA_ID_FUEL", "field_7740", "LIT", "f_38547_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.vehicle.FurnaceMinecartEntity#LIT
    [[maybe_unused]] static void set_field_LIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DATA_ID_FUEL", "field_7740", "LIT", "f_38547_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.vehicle.FurnaceMinecartEntity#fuel
    static jint get_field_fuel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "fuel", "field_7739", "fuel", "f_38548_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.vehicle.FurnaceMinecartEntity#fuel
    static void set_field_fuel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "fuel", "field_7739", "fuel", "f_38548_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.vehicle.FurnaceMinecartEntity#pushX
    static jdouble get_field_pushX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xPush", "field_7737", "pushX", "f_38545_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.vehicle.FurnaceMinecartEntity#pushX
    static void set_field_pushX(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xPush", "field_7737", "pushX", "f_38545_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.vehicle.FurnaceMinecartEntity#pushZ
    static jdouble get_field_pushZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "zPush", "field_7736", "pushZ", "f_38546_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.vehicle.FurnaceMinecartEntity#pushZ
    static void set_field_pushZ(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "zPush", "field_7736", "pushZ", "f_38546_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.vehicle.FurnaceMinecartEntity#ACCEPTABLE_FUEL
    [[maybe_unused]] static jobject get_field_ACCEPTABLE_FUEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "INGREDIENT", "field_7738", "ACCEPTABLE_FUEL", "f_38549_"), "Lcyw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.vehicle.FurnaceMinecartEntity#ACCEPTABLE_FUEL
    [[maybe_unused]] static void set_field_ACCEPTABLE_FUEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "INGREDIENT", "field_7738", "ACCEPTABLE_FUEL", "f_38549_"), "Lcyw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getMinecartType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getMinecartType", "method_7518", "getMinecartType", "m_6064_"), "()Lcot$a;");
    }

    static jobject getMinecartType(const jobject& obj) {
                
       const auto methodID = methodID_getMinecartType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getMaxSpeed", "method_7504", "getMaxSpeed", "m_7097_"), "()D");
    }

    static jdouble getMaxSpeed(const jobject& obj) {
                
       const auto methodID = methodID_getMaxSpeed();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_asItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ak_", "getDropItem", "method_7557", "asItem", "m_38369_"), "()Lcul;");
    }

    static jobject asItem(const jobject& obj) {
                
       const auto methodID = methodID_asItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_moveOnRail() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "moveAlongTrack", "method_7513", "moveOnRail", "m_6401_"), "(Ljd;Ldtc;)V");
    }

    static void moveOnRail(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_moveOnRail();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applySlowdown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "applyNaturalSlowdown", "method_7525", "applySlowdown", "m_7114_"), "()V");
    }

    static void applySlowdown(const jobject& obj) {
                
       const auto methodID = methodID_applySlowdown();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_interact() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "interact", "method_5688", "interact", "m_6096_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interact(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interact();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isLit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "hasFuel", "method_7565", "isLit", "m_38579_"), "()Z");
    }

    static jboolean isLit(const jobject& obj) {
                
       const auto methodID = methodID_isLit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setHasFuel", "method_7564", "setLit", "m_38576_"), "(Z)V");
    }

    static void setLit(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setLit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDefaultContainedBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getDefaultDisplayBlockState", "method_7517", "getDefaultContainedBlock", "m_6390_"), "()Ldtc;");
    }

    static jobject getDefaultContainedBlock(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultContainedBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_VEHICLE_FURNACEMINECARTENTITY_HPP