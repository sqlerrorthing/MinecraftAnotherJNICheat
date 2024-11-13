// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_FLUID_EMPTYFLUID_HPP
#define NET_MINECRAFT_FLUID_EMPTYFLUID_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.fluid.EmptyFluid
 * Remapped: epb
 */
namespace EmptyFluid {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("epb", "net/minecraft/world/level/material/EmptyFluid", "net/minecraft/class_3576", "net/minecraft/fluid/EmptyFluid", "net/minecraft/src/C_2687_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getBucketItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBucket", "method_15774", "getBucketItem", "m_6859_"), "()Lcul;");
    }

    static jobject getBucketItem(const jobject& obj) {
                
       const auto methodID = methodID_getBucketItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBeReplacedWith() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canBeReplacedWith", "method_15777", "canBeReplacedWith", "m_5486_"), "(Lepe;Ldcc;Ljd;Lepd;Lji;)Z");
    }

    static jboolean canBeReplacedWith(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_canBeReplacedWith();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFlow", "method_15782", "getVelocity", "m_7000_"), "(Ldcc;Ljd;Lepe;)Lexc;");
    }

    static jobject getVelocity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getVelocity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getTickRate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTickDelay", "method_15789", "getTickRate", "m_6718_"), "(Ldcz;)I");
    }

    static jint getTickRate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTickRate();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isEmpty", "method_15794", "isEmpty", "m_6759_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlastResistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getExplosionResistance", "method_15784", "getBlastResistance", "m_6752_"), "()F");
    }

    static jfloat getBlastResistance(const jobject& obj) {
                
       const auto methodID = methodID_getBlastResistance();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeight", "method_15788", "getHeight", "m_6098_"), "(Lepe;Ldcc;Ljd;)F");
    }

    static jfloat getHeight(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOwnHeight", "method_20784", "getHeight", "m_7427_"), "(Lepe;)F");
    }

    static jfloat _getHeight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getHeight();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createLegacyBlock", "method_15790", "toBlockState", "m_5804_"), "(Lepe;)Ldtc;");
    }

    static jobject toBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isStill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isSource", "method_15793", "isStill", "m_7444_"), "(Lepe;)Z");
    }

    static jboolean isStill(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isStill();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getAmount", "method_15779", "getLevel", "m_7430_"), "(Lepe;)I");
    }

    static jint getLevel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getShape", "method_17775", "getShape", "m_7999_"), "(Lepe;Ldcc;Ljd;)Lexv;");
    }

    static jobject getShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_FLUID_EMPTYFLUID_HPP