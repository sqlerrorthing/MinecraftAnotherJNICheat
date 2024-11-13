// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.BlockColumnFeature
 * Remapped: ebl
 */
namespace BlockColumnFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ebl", "net/minecraft/world/level/levelgen/feature/BlockColumnFeature", "net/minecraft/class_6654", "net/minecraft/world/gen/feature/BlockColumnFeature", "net/minecraft/src/C_182979_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_13151", "generate", "m_142674_"), "(Lecg;)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_adjustLayerHeights() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "truncate", "method_38906", "adjustLayerHeights", "m_190792_"), "([IIIZ)V");
    }

    static void adjustLayerHeights(const jarray& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jboolean& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_adjustLayerHeights();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURE_HPP