// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKPILEFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKPILEFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.BlockPileFeature
 * Remapped: ebm
 */
namespace BlockPileFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ebm", "net/minecraft/world/level/levelgen/feature/BlockPileFeature", "net/minecraft/class_3805", "net/minecraft/world/gen/feature/BlockPileFeature", "net/minecraft/src/C_2221_"));
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
    
    static jmethodID methodID_canPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayPlaceOn", "method_16707", "canPlace", "m_224944_"), "(Ldcx;Ljd;Layw;)Z");
    }

    static jboolean canPlace(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_canPlace();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_addPileBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryPlaceBlock", "method_16708", "addPileBlock", "m_224948_"), "(Ldcx;Ljd;Layw;Leea;)V");
    }

    static void addPileBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_addPileBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKPILEFEATURE_HPP