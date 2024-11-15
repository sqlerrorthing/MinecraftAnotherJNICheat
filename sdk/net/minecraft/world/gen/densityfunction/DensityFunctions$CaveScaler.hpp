// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONS$CAVESCALER_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONS$CAVESCALER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunctions$CaveScaler
 * Remapped: dzf$a
 */
namespace DensityFunctions$CaveScaler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzf$a", "net/minecraft/world/level/levelgen/NoiseRouterData$QuantizedSpaghettiRarity", "net/minecraft/class_6954$class_5841", "net/minecraft/world/gen/densityfunction/DensityFunctions$CaveScaler", "net/minecraft/src/C_207015_$C_207016_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_scaleCaves() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSphaghettiRarity2D", "method_33835", "scaleCaves", "m_209563_"), "(D)D");
    }

    static jdouble scaleCaves(const jdouble& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_scaleCaves();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_scaleTunnels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getSpaghettiRarity3D", "method_33836", "scaleTunnels", "m_209565_"), "(D)D");
    }

    static jdouble scaleTunnels(const jdouble& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_scaleTunnels();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONS$CAVESCALER_HPP