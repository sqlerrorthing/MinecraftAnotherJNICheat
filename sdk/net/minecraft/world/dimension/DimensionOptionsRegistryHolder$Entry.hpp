// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONOPTIONSREGISTRYHOLDER$ENTRY_HPP
#define NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONOPTIONSREGISTRYHOLDER$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.dimension.DimensionOptionsRegistryHolder$Entry
 * Remapped: dzt$a
 */
namespace DimensionOptionsRegistryHolder$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzt$a", "net/minecraft/world/level/levelgen/WorldDimensions$1Entry", "net/minecraft/class_7723$class_7724", "net/minecraft/world/dimension/DimensionOptionsRegistryHolder$Entry", "net/minecraft/src/C_243563_$C_243457_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$Entry#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_1015", "key", "f_244236_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$Entry#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_1015", "key", "f_244236_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$Entry#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_1016", "value", "f_243758_"), "Ldwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$Entry#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "comp_1016", "value", "f_243758_"), "Ldwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_toEntryInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "registrationInfo", "method_57014", "toEntryInfo", "m_322379_"), "()Ljy;");
    }

    static jobject toEntryInfo(const jobject& obj) {
                
       const auto methodID = methodID_toEntryInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__key() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "key", "comp_1015", "key", "f_244236_"), "()Lakq;");
    }

    static jobject _key(const jobject& obj) {
                
       const auto methodID = methodID__key();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "value", "comp_1016", "value", "f_243758_"), "()Ldwz;");
    }

    static jobject _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONOPTIONSREGISTRYHOLDER$ENTRY_HPP