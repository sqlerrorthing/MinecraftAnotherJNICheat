// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_COLLECTION_WEIGHTING_HPP
#define NET_MINECRAFT_UTIL_COLLECTION_WEIGHTING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.collection.Weighting
 * Remapped: bpe
 */
namespace Weighting {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bpe", "net/minecraft/util/random/WeightedRandom", "net/minecraft/class_6011", "net/minecraft/util/collection/Weighting", "net/minecraft/src/C_141040_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getWeightSum() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getTotalWeight", "method_34984", "getWeightSum", "m_146312_"), "(Ljava/util/List;)I");
    }

    static jint getWeightSum(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getWeightSum();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getRandom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomItem", "method_34987", "getRandom", "m_216825_"), "(Layw;Ljava/util/List;I)Ljava/util/Optional;");
    }

    static jobject getRandom(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getRandom();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getWeightedItem", "method_34985", "getAt", "m_146314_"), "(Ljava/util/List;I)Ljava/util/Optional;");
    }

    static jobject getAt(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getAt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getRandom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomItem", "method_34986", "getRandom", "m_216822_"), "(Layw;Ljava/util/List;)Ljava/util/Optional;");
    }

    static jobject _getRandom(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__getRandom();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_COLLECTION_WEIGHTING_HPP