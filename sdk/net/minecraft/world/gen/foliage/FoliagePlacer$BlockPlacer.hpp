// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FOLIAGE_FOLIAGEPLACER$BLOCKPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_FOLIAGE_FOLIAGEPLACER$BLOCKPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.foliage.FoliagePlacer$BlockPlacer
 * Remapped: efu$b
 */
namespace FoliagePlacer$BlockPlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efu$b", "net/minecraft/world/level/levelgen/feature/foliageplacers/FoliagePlacer$FoliageSetter", "net/minecraft/class_4647$class_8179", "net/minecraft/world/gen/foliage/FoliagePlacer$BlockPlacer", "net/minecraft/src/C_2379_$C_271048_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_placeBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_49240", "placeBlock", "m_271838_"), "(Ljd;Ldtc;)V");
    }

    static void placeBlock(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_placeBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasPlacedBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isSet", "method_49239", "hasPlacedBlock", "m_271808_"), "(Ljd;)Z");
    }

    static jboolean hasPlacedBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasPlacedBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FOLIAGE_FOLIAGEPLACER$BLOCKPLACER_HPP