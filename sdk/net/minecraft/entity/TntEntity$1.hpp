// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_TNTENTITY$1_HPP
#define NET_MINECRAFT_ENTITY_TNTENTITY$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.TntEntity$1
 * Remapped: cji$1
 */
namespace TntEntity$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cji$1", "net/minecraft/world/entity/item/PrimedTnt$1", "net/minecraft/class_1541$1", "net/minecraft/entity/TntEntity$1", "net/minecraft/src/C_977_$C_336487_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canDestroyBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldBlockExplode", "method_29554", "canDestroyBlock", "m_6714_"), "(Ldco;Ldcc;Ljd;Ldtc;F)Z");
    }

    static jboolean canDestroyBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jfloat& arg4) {
                
       const auto methodID = methodID_canDestroyBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getBlastResistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockExplosionResistance", "method_29555", "getBlastResistance", "m_6617_"), "(Ldco;Ldcc;Ljd;Ldtc;Lepe;)Ljava/util/Optional;");
    }

    static jobject getBlastResistance(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_getBlastResistance();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_TNTENTITY$1_HPP