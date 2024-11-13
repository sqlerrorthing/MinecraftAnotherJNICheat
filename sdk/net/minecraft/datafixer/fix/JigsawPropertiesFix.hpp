// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_JIGSAWPROPERTIESFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_JIGSAWPROPERTIESFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.JigsawPropertiesFix
 * Remapped: bex
 */
namespace JigsawPropertiesFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bex", "net/minecraft/util/datafix/fixes/JigsawPropertiesFix", "net/minecraft/class_4977", "net/minecraft/datafixer/fix/JigsawPropertiesFix", "net/minecraft/src/C_311_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_renameProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixTag", "method_26300", "renameProperties", "m_16186_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject renameProperties(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_renameProperties();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_transform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_5105", "transform", "m_7504_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject transform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_JIGSAWPROPERTIESFIX_HPP