// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CARVER_CAVECARVER_HPP
#define NET_MINECRAFT_WORLD_GEN_CARVER_CAVECARVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.carver.CaveCarver
 * Remapped: ebb
 */
namespace CaveCarver {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ebb", "net/minecraft/world/level/levelgen/carver/CaveWorldCarver", "net/minecraft/class_2925", "net/minecraft/world/gen/carver/CaveCarver", "net/minecraft/src/C_2206_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_shouldCarve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isStartChunk", "method_35358", "shouldCarve", "m_214133_"), "(Leba;Layw;)Z");
    }

    static jboolean shouldCarve(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_shouldCarve();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_carve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "carve", "method_35357", "carve", "m_213788_"), "(Leaz;Leba;Lduy;Ljava/util/function/Function;Layw;Ldyk;Ldcd;Ldux;)Z");
    }

    static jboolean carve(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7) {
                
       const auto methodID = methodID_carve();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_getMaxCaveCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCaveBound", "method_16577", "getMaxCaveCount", "m_6208_"), "()I");
    }

    static jint getMaxCaveCount(const jobject& obj) {
                
       const auto methodID = methodID_getMaxCaveCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTunnelSystemWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThickness", "method_16576", "getTunnelSystemWidth", "m_213592_"), "(Layw;)F");
    }

    static jfloat getTunnelSystemWidth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTunnelSystemWidth();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTunnelSystemHeightWidthRatio() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getYScale", "method_16578", "getTunnelSystemHeightWidthRatio", "m_6203_"), "()D");
    }

    static jdouble getTunnelSystemHeightWidthRatio(const jobject& obj) {
                
       const auto methodID = methodID_getTunnelSystemHeightWidthRatio();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_carveCave() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createRoom", "method_12674", "carveCave", "m_190690_"), "(Leaz;Leba;Lduy;Ljava/util/function/Function;Ldyk;DDDFDLdux;Lebe$a;)V");
    }

    static void carveCave(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7, const jfloat& arg8, const jdouble& arg9, const jobject& arg10, const jobject& arg11) {
                
       const auto methodID = methodID_carveCave();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    };
    
    static jmethodID methodID_carveTunnels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createTunnel", "method_12675", "carveTunnels", "m_190670_"), "(Leaz;Leba;Lduy;Ljava/util/function/Function;JLdyk;DDDDDFFFIIDLdux;Lebe$a;)V");
    }

    static void carveTunnels(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jlong& arg4, const jobject& arg5, const jdouble& arg6, const jdouble& arg7, const jdouble& arg8, const jdouble& arg9, const jdouble& arg10, const jfloat& arg11, const jfloat& arg12, const jfloat& arg13, const jint& arg14, const jint& arg15, const jdouble& arg16, const jobject& arg17, const jobject& arg18) {
                
       const auto methodID = methodID_carveTunnels();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18);
    };
    
    static jmethodID methodID_isPositionExcluded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldSkip", "method_33974", "isPositionExcluded", "m_159195_"), "(DDDD)Z");
    }

    static jboolean isPositionExcluded(const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_isPositionExcluded();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CARVER_CAVECARVER_HPP