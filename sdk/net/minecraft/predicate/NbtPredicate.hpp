// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_NBTPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_NBTPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.NbtPredicate
 * Remapped: dk
 */
namespace NbtPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dk", "net/minecraft/advancements/critereon/NbtPredicate", "net/minecraft/class_2105", "net/minecraft/predicate/NbtPredicate", "net/minecraft/src/C_1941_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.NbtPredicate#nbt
    static jobject get_field_nbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tag", "comp_1816", "nbt", "f_57472_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.NbtPredicate#nbt
    static void set_field_nbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tag", "comp_1816", "nbt", "f_57472_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.NbtPredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45768", "CODEC", "f_291854_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.NbtPredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45768", "CODEC", "f_291854_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.NbtPredicate#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_49244", "PACKET_CODEC", "f_314061_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.NbtPredicate#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_49244", "PACKET_CODEC", "f_314061_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_9074", "test", "m_57479_"), "(Lcuq;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_9072", "test", "m_57477_"), "(Lbsr;)Z");
    }

    static jboolean _test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_9077", "test", "m_57483_"), "(Luy;)Z");
    }

    static jboolean __test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_entityToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getEntityTagToCompare", "method_9076", "entityToNbt", "m_57485_"), "(Lbsr;)Lub;");
    }

    static jobject entityToNbt(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_entityToNbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__nbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tag", "comp_1816", "nbt", "f_57472_"), "()Lub;");
    }

    static jobject _nbt(const jobject& obj) {
                
       const auto methodID = methodID__nbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_NBTPREDICATE_HPP