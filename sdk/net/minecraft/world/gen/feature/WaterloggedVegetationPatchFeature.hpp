// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_WATERLOGGEDVEGETATIONPATCHFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_WATERLOGGEDVEGETATIONPATCHFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.WaterloggedVegetationPatchFeature
 * Remapped: edw
 */
namespace WaterloggedVegetationPatchFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("edw", "net/minecraft/world/level/levelgen/feature/WaterloggedVegetationPatchFeature", "net/minecraft/class_5923", "net/minecraft/world/gen/feature/WaterloggedVegetationPatchFeature", "net/minecraft/src/C_141377_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_placeGroundAndGetPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeGroundPatch", "method_34316", "placeGroundAndGetPositions", "m_213631_"), "(Ldds;Lefh;Layw;Ljd;Ljava/util/function/Predicate;II)Ljava/util/Set;");
    }

    static jobject placeGroundAndGetPositions(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5, const jint& arg6) {
                
       const auto methodID = methodID_placeGroundAndGetPositions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_isSolidBlockAroundPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isExposed", "method_34323", "isSolidBlockAroundPos", "m_160655_"), "(Ldds;Ljava/util/Set;Ljd;Ljd$a;)Z");
    }

    static jboolean isSolidBlockAroundPos(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_isSolidBlockAroundPos();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isSolidBlockSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isExposedDirection", "method_34322", "isSolidBlockSide", "m_160650_"), "(Ldds;Ljd;Ljd$a;Lji;)Z");
    }

    static jboolean isSolidBlockSide(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_isSolidBlockSide();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_generateVegetationFeature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeVegetation", "method_34315", "generateVegetationFeature", "m_213555_"), "(Ldds;Lefh;Lduz;Layw;Ljd;)Z");
    }

    static jboolean generateVegetationFeature(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_generateVegetationFeature();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_WATERLOGGEDVEGETATIONPATCHFEATURE_HPP