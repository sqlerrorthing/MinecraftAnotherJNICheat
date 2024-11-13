// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ENTITYTYPE$1_HPP
#define NET_MINECRAFT_ENTITY_ENTITYTYPE$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.EntityType$1
 * Remapped: bsx$1
 */
namespace EntityType$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsx$1", "net/minecraft/world/entity/EntityType$1", "net/minecraft/class_1299$1", "net/minecraft/entity/EntityType$1", "net/minecraft/src/C_513_$C_141067_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tryAdvance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("tryAdvance", "tryAdvance", "tryAdvance", "tryAdvance", "tryAdvance"), "(Ljava/util/function/Consumer;)Z");
    }

    static jboolean tryAdvance(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryAdvance();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_trySplit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("trySplit", "trySplit", "", "", "trySplit"), "()Ljava/util/Spliterator;");
    }

    static jobject trySplit(const jobject& obj) {
                
       const auto methodID = methodID_trySplit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_estimateSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("estimateSize", "estimateSize", "", "", "estimateSize"), "()J");
    }

    static jlong estimateSize(const jobject& obj) {
                
       const auto methodID = methodID_estimateSize();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_characteristics() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("characteristics", "characteristics", "", "", "characteristics"), "()I");
    }

    static jint characteristics(const jobject& obj) {
                
       const auto methodID = methodID_characteristics();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_ENTITYTYPE$1_HPP