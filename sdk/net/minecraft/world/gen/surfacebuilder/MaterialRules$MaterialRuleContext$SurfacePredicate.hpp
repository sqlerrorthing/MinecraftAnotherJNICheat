// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$MATERIALRULECONTEXT$SURFACEPREDICATE_HPP
#define NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$MATERIALRULECONTEXT$SURFACEPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.surfacebuilder.MaterialRules$MaterialRuleContext$SurfacePredicate
 * Remapped: dzp$g$a
 */
namespace MaterialRules$MaterialRuleContext$SurfacePredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzp$g$a", "net/minecraft/world/level/levelgen/SurfaceRules$Context$AbovePreliminarySurfaceCondition", "net/minecraft/class_6686$class_6694$class_6771", "net/minecraft/world/gen/surfacebuilder/MaterialRules$MaterialRuleContext$SurfacePredicate", "net/minecraft/src/C_182910_$C_182920_$C_182921_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "test", "method_39069", "get", "m_183475_"), "()Z");
    }

    static jboolean get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$MATERIALRULECONTEXT$SURFACEPREDICATE_HPP