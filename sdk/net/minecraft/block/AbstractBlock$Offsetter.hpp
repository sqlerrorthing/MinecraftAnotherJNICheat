// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ABSTRACTBLOCK$OFFSETTER_HPP
#define NET_MINECRAFT_BLOCK_ABSTRACTBLOCK$OFFSETTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.AbstractBlock$Offsetter
 * Remapped: dtb$b
 */
namespace AbstractBlock$Offsetter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dtb$b", "net/minecraft/world/level/block/state/BlockBehaviour$OffsetFunction", "net/minecraft/class_4970$class_8176", "net/minecraft/block/AbstractBlock$Offsetter", "net/minecraft/src/C_2056_$C_271075_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_evaluate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("evaluate", "evaluate", "evaluate", "evaluate", "m_271794_"), "(Ldtc;Ldcc;Ljd;)Lexc;");
    }

    static jobject evaluate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_evaluate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ABSTRACTBLOCK$OFFSETTER_HPP