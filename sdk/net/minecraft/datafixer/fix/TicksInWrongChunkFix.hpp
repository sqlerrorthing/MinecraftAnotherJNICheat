// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_TICKSINWRONGCHUNKFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_TICKSINWRONGCHUNKFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.TicksInWrongChunkFix
 * Remapped: bgf
 */
namespace TicksInWrongChunkFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bgf", "net/minecraft/util/datafix/fixes/OverreachingTickFix", "net/minecraft/class_6909", "net/minecraft/datafixer/fix/TicksInWrongChunkFix", "net/minecraft/src/C_206959_"));
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
    
    static jmethodID methodID_putNeighborTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "extractOverreachingTicks", "method_40439", "putNeighborTicks", "m_207662_"), "(Lcom/mojang/serialization/Dynamic;IILjava/util/Optional;Ljava/lang/String;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject putNeighborTicks(const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_putNeighborTicks();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_TICKSINWRONGCHUNKFIX_HPP