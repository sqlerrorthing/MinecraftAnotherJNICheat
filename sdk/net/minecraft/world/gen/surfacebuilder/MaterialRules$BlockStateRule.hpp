// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$BLOCKSTATERULE_HPP
#define NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$BLOCKSTATERULE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.surfacebuilder.MaterialRules$BlockStateRule
 * Remapped: dzp$u
 */
namespace MaterialRules$BlockStateRule {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzp$u", "net/minecraft/world/level/levelgen/SurfaceRules$SurfaceRule", "net/minecraft/class_6686$class_6715", "net/minecraft/world/gen/surfacebuilder/MaterialRules$BlockStateRule", "net/minecraft/src/C_182910_$C_182940_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tryApply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("tryApply", "tryApply", "tryApply", "tryApply", "m_183550_"), "(III)Ldtc;");
    }

    static jobject tryApply(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_tryApply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$BLOCKSTATERULE_HPP