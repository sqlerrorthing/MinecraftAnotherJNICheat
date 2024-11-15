// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_VEHICLE_BOATENTITY$LOCATION_HPP
#define NET_MINECRAFT_ENTITY_VEHICLE_BOATENTITY$LOCATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.vehicle.BoatEntity$Location
 * Remapped: cov$a
 */
namespace BoatEntity$Location {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cov$a", "net/minecraft/world/entity/vehicle/Boat$Status", "net/minecraft/class_1690$class_1691", "net/minecraft/entity/vehicle/BoatEntity$Location", "net/minecraft/src/C_1205_$C_1207_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#IN_WATER
    [[maybe_unused]] static jobject get_field_IN_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "IN_WATER", "field_7718", "IN_WATER", "IN_WATER"), "Lcov$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#IN_WATER
    [[maybe_unused]] static void set_field_IN_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "IN_WATER", "field_7718", "IN_WATER", "IN_WATER"), "Lcov$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#UNDER_WATER
    [[maybe_unused]] static jobject get_field_UNDER_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "UNDER_WATER", "field_7717", "UNDER_WATER", "UNDER_WATER"), "Lcov$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#UNDER_WATER
    [[maybe_unused]] static void set_field_UNDER_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "UNDER_WATER", "field_7717", "UNDER_WATER", "UNDER_WATER"), "Lcov$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#UNDER_FLOWING_WATER
    [[maybe_unused]] static jobject get_field_UNDER_FLOWING_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UNDER_FLOWING_WATER", "field_7716", "UNDER_FLOWING_WATER", "UNDER_FLOWING_WATER"), "Lcov$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#UNDER_FLOWING_WATER
    [[maybe_unused]] static void set_field_UNDER_FLOWING_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UNDER_FLOWING_WATER", "field_7716", "UNDER_FLOWING_WATER", "UNDER_FLOWING_WATER"), "Lcov$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#ON_LAND
    [[maybe_unused]] static jobject get_field_ON_LAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ON_LAND", "field_7719", "ON_LAND", "ON_LAND"), "Lcov$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#ON_LAND
    [[maybe_unused]] static void set_field_ON_LAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ON_LAND", "field_7719", "ON_LAND", "ON_LAND"), "Lcov$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#IN_AIR
    [[maybe_unused]] static jobject get_field_IN_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "IN_AIR", "field_7720", "IN_AIR", "IN_AIR"), "Lcov$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.vehicle.BoatEntity$Location#IN_AIR
    [[maybe_unused]] static void set_field_IN_AIR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "IN_AIR", "field_7720", "IN_AIR", "IN_AIR"), "Lcov$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcov$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcov$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_VEHICLE_BOATENTITY$LOCATION_HPP