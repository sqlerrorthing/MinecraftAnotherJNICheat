// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_FIXEDPLACEMENTMODIFIER_HPP
#define NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_FIXEDPLACEMENTMODIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.placementmodifier.FixedPlacementModifier
 * Remapped: eip
 */
namespace FixedPlacementModifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eip", "net/minecraft/world/level/levelgen/placement/FixedPlacement", "net/minecraft/class_9830", "net/minecraft/world/gen/placementmodifier/FixedPlacementModifier", "net/minecraft/src/C_336439_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.placementmodifier.FixedPlacementModifier#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_52290", "CODEC", "f_336734_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.placementmodifier.FixedPlacementModifier#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_52290", "CODEC", "f_336734_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.placementmodifier.FixedPlacementModifier#positions
    static jobject get_field_positions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "positions", "field_52291", "positions", "f_337523_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.placementmodifier.FixedPlacementModifier#positions
    static void set_field_positions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "positions", "field_52291", "positions", "f_337523_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_61122", "of", "m_338351_"), "([Ljd;)Leip;");
    }

    static jobject of(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getPositions", "method_14452", "getPositions", "m_213676_"), "(Leiw;Layw;Ljd;)Ljava/util/stream/Stream;");
    }

    static jobject getPositions(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getPositions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_chunkSectionMatchesPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isSameChunk", "method_61119", "chunkSectionMatchesPos", "m_338349_"), "(IILjd;)Z");
    }

    static jboolean chunkSectionMatchesPos(const jint& arg0, const jint& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_chunkSectionMatchesPos();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
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

#endif // NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_FIXEDPLACEMENTMODIFIER_HPP