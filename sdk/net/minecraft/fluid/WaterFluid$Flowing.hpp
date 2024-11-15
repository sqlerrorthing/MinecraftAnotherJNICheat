// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_FLUID_WATERFLUID$FLOWING_HPP
#define NET_MINECRAFT_FLUID_WATERFLUID$FLOWING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.fluid.WaterFluid$Flowing
 * Remapped: epk$a
 */
namespace WaterFluid$Flowing {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("epk$a", "net/minecraft/world/level/material/WaterFluid$Flowing", "net/minecraft/class_3621$class_3622", "net/minecraft/fluid/WaterFluid$Flowing", "net/minecraft/src/C_2700_$C_2701_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createFluidStateDefinition", "method_15775", "appendProperties", "m_7180_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getAmount", "method_15779", "getLevel", "m_7430_"), "(Lepe;)I");
    }

    static jint getLevel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isStill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isSource", "method_15793", "isStill", "m_7444_"), "(Lepe;)Z");
    }

    static jboolean isStill(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isStill();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_FLUID_WATERFLUID$FLOWING_HPP