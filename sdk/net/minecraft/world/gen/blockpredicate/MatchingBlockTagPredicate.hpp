// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_MATCHINGBLOCKTAGPREDICATE_HPP
#define NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_MATCHINGBLOCKTAGPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.blockpredicate.MatchingBlockTagPredicate
 * Remapped: eak
 */
namespace MatchingBlockTagPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eak", "net/minecraft/world/level/levelgen/blockpredicates/MatchingBlockTagPredicate", "net/minecraft/class_6848", "net/minecraft/world/gen/blockpredicate/MatchingBlockTagPredicate", "net/minecraft/src/C_197759_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.world.gen.blockpredicate.MatchingBlockTagPredicate#tag
    static jobject get_field_tag(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "tag", "field_36287", "tag", "f_198335_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.blockpredicate.MatchingBlockTagPredicate#tag
    static void set_field_tag(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "tag", "field_36287", "tag", "f_198335_"), "Lawu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.MatchingBlockTagPredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_36288", "CODEC", "f_198336_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.MatchingBlockTagPredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_36288", "CODEC", "f_198336_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_38893", "test", "m_183454_"), "(Ldtc;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_38873", "getType", "m_183575_"), "()Leag;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_MATCHINGBLOCKTAGPREDICATE_HPP