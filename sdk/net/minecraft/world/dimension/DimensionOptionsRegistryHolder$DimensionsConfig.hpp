// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONOPTIONSREGISTRYHOLDER$DIMENSIONSCONFIG_HPP
#define NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONOPTIONSREGISTRYHOLDER$DIMENSIONSCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.dimension.DimensionOptionsRegistryHolder$DimensionsConfig
 * Remapped: dzt$b
 */
namespace DimensionOptionsRegistryHolder$DimensionsConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzt$b", "net/minecraft/world/level/levelgen/WorldDimensions$Complete", "net/minecraft/class_7723$class_7725", "net/minecraft/world/dimension/DimensionOptionsRegistryHolder$DimensionsConfig", "net/minecraft/src/C_243563_$C_243520_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$DimensionsConfig#dimensions
    static jobject get_field_dimensions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dimensions", "comp_1017", "dimensions", "f_244049_"), "Ljz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$DimensionsConfig#dimensions
    static void set_field_dimensions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dimensions", "comp_1017", "dimensions", "f_244049_"), "Ljz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$DimensionsConfig#specialWorldProperty
    static jobject get_field_specialWorldProperty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "specialWorldProperty", "comp_1018", "specialWorldProperty", "f_244634_"), "Lerj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.DimensionOptionsRegistryHolder$DimensionsConfig#specialWorldProperty
    static void set_field_specialWorldProperty(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "specialWorldProperty", "comp_1018", "specialWorldProperty", "f_244634_"), "Lerj$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getLifecycle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lifecycle", "method_45536", "getLifecycle", "m_245945_"), "()Lcom/mojang/serialization/Lifecycle;");
    }

    static jobject getLifecycle(const jobject& obj) {
                
       const auto methodID = methodID_getLifecycle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_toDynamicRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "dimensionsRegistryAccess", "method_45537", "toDynamicRegistryManager", "m_245593_"), "()Lka$b;");
    }

    static jobject toDynamicRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID_toDynamicRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__dimensions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "dimensions", "comp_1017", "dimensions", "f_244049_"), "()Ljz;");
    }

    static jobject _dimensions(const jobject& obj) {
                
       const auto methodID = methodID__dimensions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__specialWorldProperty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "specialWorldProperty", "comp_1018", "specialWorldProperty", "f_244634_"), "()Lerj$a;");
    }

    static jobject _specialWorldProperty(const jobject& obj) {
                
       const auto methodID = methodID__specialWorldProperty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_DIMENSION_DIMENSIONOPTIONSREGISTRYHOLDER$DIMENSIONSCONFIG_HPP