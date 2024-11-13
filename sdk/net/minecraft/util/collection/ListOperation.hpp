// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_COLLECTION_LISTOPERATION_HPP
#define NET_MINECRAFT_UTIL_COLLECTION_LISTOPERATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.collection.ListOperation
 * Remapped: etd
 */
namespace ListOperation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("etd", "net/minecraft/world/level/storage/loot/functions/ListOperation", "net/minecraft/class_9368", "net/minecraft/util/collection/ListOperation", "net/minecraft/src/C_313598_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.collection.ListOperation#UNLIMITED_SIZE_CODEC
    [[maybe_unused]] static jobject get_field_UNLIMITED_SIZE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNLIMITED_CODEC", "field_51424", "UNLIMITED_SIZE_CODEC", "f_317149_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.collection.ListOperation#UNLIMITED_SIZE_CODEC
    [[maybe_unused]] static void set_field_UNLIMITED_SIZE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNLIMITED_CODEC", "field_51424", "UNLIMITED_SIZE_CODEC", "f_317149_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_58456", "createCodec", "m_320139_"), "(I)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject createCodec(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mode", "method_58191", "getMode", "m_320900_"), "()Letd$f;");
    }

    static jobject getMode(const jobject& obj) {
                
       const auto methodID = methodID_getMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_59742", "apply", "m_323335_"), "(Ljava/util/List;Ljava/util/List;)Ljava/util/List;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_58192", "apply", "m_320579_"), "(Ljava/util/List;Ljava/util/List;I)Ljava/util/List;");
    }

    static jobject _apply(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID__apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_UTIL_COLLECTION_LISTOPERATION_HPP