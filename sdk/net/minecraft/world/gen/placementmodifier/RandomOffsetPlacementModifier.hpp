// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_RANDOMOFFSETPLACEMENTMODIFIER_HPP
#define NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_RANDOMOFFSETPLACEMENTMODIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.placementmodifier.RandomOffsetPlacementModifier
 * Remapped: eja
 */
namespace RandomOffsetPlacementModifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eja", "net/minecraft/world/level/levelgen/placement/RandomOffsetPlacement", "net/minecraft/class_6732", "net/minecraft/world/gen/placementmodifier/RandomOffsetPlacementModifier", "net/minecraft/src/C_183019_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.placementmodifier.RandomOffsetPlacementModifier#MODIFIER_CODEC
    [[maybe_unused]] static jobject get_field_MODIFIER_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_35419", "MODIFIER_CODEC", "f_191870_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.placementmodifier.RandomOffsetPlacementModifier#MODIFIER_CODEC
    [[maybe_unused]] static void set_field_MODIFIER_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_35419", "MODIFIER_CODEC", "f_191870_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.placementmodifier.RandomOffsetPlacementModifier#spreadXz
    static jobject get_field_spreadXz(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xzSpread", "field_35420", "spreadXz", "f_191871_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.placementmodifier.RandomOffsetPlacementModifier#spreadXz
    static void set_field_spreadXz(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xzSpread", "field_35420", "spreadXz", "f_191871_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.placementmodifier.RandomOffsetPlacementModifier#spreadY
    static jobject get_field_spreadY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "ySpread", "field_35421", "spreadY", "f_191872_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.placementmodifier.RandomOffsetPlacementModifier#spreadY
    static void set_field_spreadY(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "ySpread", "field_35421", "spreadY", "f_191872_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_39657", "of", "m_191879_"), "(Lbpw;Lbpw;)Leja;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_vertically() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "vertical", "method_39656", "vertically", "m_191877_"), "(Lbpw;)Leja;");
    }

    static jobject vertically(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_vertically();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_horizontally() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "horizontal", "method_39658", "horizontally", "m_191891_"), "(Lbpw;)Leja;");
    }

    static jobject horizontally(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_horizontally();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getPositions", "method_14452", "getPositions", "m_213676_"), "(Leiw;Layw;Ljd;)Ljava/util/stream/Stream;");
    }

    static jobject getPositions(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getPositions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
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

#endif // NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_RANDOMOFFSETPLACEMENTMODIFIER_HPP