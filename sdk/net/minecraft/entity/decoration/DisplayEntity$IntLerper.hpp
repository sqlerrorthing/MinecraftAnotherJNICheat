// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$INTLERPER_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$INTLERPER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$IntLerper
 * Remapped: bsq$f
 */
namespace DisplayEntity$IntLerper {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$f", "net/minecraft/world/entity/Display$IntInterpolator", "net/minecraft/class_8113$class_8119", "net/minecraft/entity/decoration/DisplayEntity$IntLerper", "net/minecraft/src/C_268383_$C_268391_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_constant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("constant", "constant", "constant", "constant", "m_276859_"), "(I)Lbsq$f;");
    }

    static jobject constant(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_constant();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_lerp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("get", "get", "method_48889", "lerp", "m_269120_"), "(F)I");
    }

    static jint lerp(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_lerp();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$INTLERPER_HPP