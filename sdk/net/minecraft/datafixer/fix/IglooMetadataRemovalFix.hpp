// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_IGLOOMETADATAREMOVALFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_IGLOOMETADATAREMOVALFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.IglooMetadataRemovalFix
 * Remapped: bec
 */
namespace IglooMetadataRemovalFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bec", "net/minecraft/util/datafix/fixes/IglooMetadataRemovalFix", "net/minecraft/class_1176", "net/minecraft/datafixer/fix/IglooMetadataRemovalFix", "net/minecraft/src/C_293_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeMetadata() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixTag", "method_4993", "removeMetadata", "m_15904_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject removeMetadata(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_removeMetadata();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_removeIgloos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "removeIglooPieces", "method_4996", "removeIgloos", "m_15908_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject removeIgloos(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_removeIgloos();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isIgloo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "isIglooPiece", "method_4997", "isIgloo", "m_15912_"), "(Lcom/mojang/serialization/Dynamic;)Z");
    }

    static jboolean isIgloo(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isIgloo();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_IGLOOMETADATAREMOVALFIX_HPP