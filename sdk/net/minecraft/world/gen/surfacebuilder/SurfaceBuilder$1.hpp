// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_SURFACEBUILDER$1_HPP
#define NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_SURFACEBUILDER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.surfacebuilder.SurfaceBuilder$1
 * Remapped: dzq$1
 */
namespace SurfaceBuilder$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzq$1", "net/minecraft/world/level/levelgen/SurfaceSystem$1", "net/minecraft/class_6724$1", "net/minecraft/world/gen/surfacebuilder/SurfaceBuilder$1", "net/minecraft/src/C_182948_$C_182949_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlock", "method_32892", "getState", "m_183556_"), "(I)Ldtc;");
    }

    static jobject getState(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlock", "method_38092", "setState", "m_183639_"), "(ILdtc;)V");
    }

    static void setState(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_SURFACEBUILDER$1_HPP