// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_ABSTRACTCOUNTPLACEMENTMODIFIER_HPP
#define NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_ABSTRACTCOUNTPLACEMENTMODIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.placementmodifier.AbstractCountPlacementModifier
 * Remapped: ejc
 */
namespace AbstractCountPlacementModifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ejc", "net/minecraft/world/level/levelgen/placement/RepeatingPlacement", "net/minecraft/class_5857", "net/minecraft/world/gen/placementmodifier/AbstractCountPlacementModifier", "net/minecraft/src/C_183021_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "count", "method_14452", "getCount", "m_213944_"), "(Layw;Ljd;)I");
    }

    static jint getCount(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getPositions", "method_14452", "getPositions", "m_213676_"), "(Leiw;Layw;Ljd;)Ljava/util/stream/Stream;");
    }

    static jobject getPositions(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getPositions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_PLACEMENTMODIFIER_ABSTRACTCOUNTPLACEMENTMODIFIER_HPP