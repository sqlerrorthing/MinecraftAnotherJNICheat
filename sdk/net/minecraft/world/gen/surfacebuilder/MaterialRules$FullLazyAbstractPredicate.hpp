// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$FULLLAZYABSTRACTPREDICATE_HPP
#define NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$FULLLAZYABSTRACTPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.surfacebuilder.MaterialRules$FullLazyAbstractPredicate
 * Remapped: dzp$k
 */
namespace MaterialRules$FullLazyAbstractPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzp$k", "net/minecraft/world/level/levelgen/SurfaceRules$LazyYCondition", "net/minecraft/class_6686$class_6774", "net/minecraft/world/gen/surfacebuilder/MaterialRules$FullLazyAbstractPredicate", "net/minecraft/src/C_182910_$C_182928_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getCurrentUniqueValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getContextLastUpdate", "method_39479", "getCurrentUniqueValue", "m_183477_"), "()J");
    }

    static jlong getCurrentUniqueValue(const jobject& obj) {
                
       const auto methodID = methodID_getCurrentUniqueValue();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$FULLLAZYABSTRACTPREDICATE_HPP