// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_SURFACEWATERDEPTHFILTERPLACEMENTMODIFIER_HPP
#define NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_SURFACEWATERDEPTHFILTERPLACEMENTMODIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.placementmodifier.SurfaceWaterDepthFilterPlacementModifier
 * Remapped: eje
 */
namespace SurfaceWaterDepthFilterPlacementModifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eje", "net/minecraft/world/level/levelgen/placement/SurfaceWaterDepthFilter", "net/minecraft/class_5934", "net/minecraft/world/gen/placementmodifier/SurfaceWaterDepthFilterPlacementModifier", "net/minecraft/src/C_183023_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.placementmodifier.SurfaceWaterDepthFilterPlacementModifier#MODIFIER_CODEC
    [[maybe_unused]] static jobject get_field_MODIFIER_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_29323", "MODIFIER_CODEC", "f_191945_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.placementmodifier.SurfaceWaterDepthFilterPlacementModifier#MODIFIER_CODEC
    [[maybe_unused]] static void set_field_MODIFIER_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_29323", "MODIFIER_CODEC", "f_191945_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.placementmodifier.SurfaceWaterDepthFilterPlacementModifier#maxWaterDepth
    static jint get_field_maxWaterDepth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "maxWaterDepth", "field_29324", "maxWaterDepth", "f_191946_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.placementmodifier.SurfaceWaterDepthFilterPlacementModifier#maxWaterDepth
    static void set_field_maxWaterDepth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "maxWaterDepth", "field_29324", "maxWaterDepth", "f_191946_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "forMaxDepth", "method_39662", "of", "m_191950_"), "(I)Leje;");
    }

    static jobject of(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldPlace", "method_38918", "shouldPlace", "m_213917_"), "(Leiw;Layw;Ljd;)Z");
    }

    static jboolean shouldPlace(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_shouldPlace();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "type", "method_39615", "getType", "m_183327_"), "()Leiz;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_SURFACEWATERDEPTHFILTERPLACEMENTMODIFIER_HPP