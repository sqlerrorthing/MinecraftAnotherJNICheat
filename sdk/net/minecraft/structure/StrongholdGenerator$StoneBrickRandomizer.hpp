// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$STONEBRICKRANDOMIZER_HPP
#define NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$STONEBRICKRANDOMIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StrongholdGenerator$StoneBrickRandomizer
 * Remapped: emj$k
 */
namespace StrongholdGenerator$StoneBrickRandomizer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emj$k", "net/minecraft/world/level/levelgen/structure/structures/StrongholdPieces$SmoothStoneSelector", "net/minecraft/class_3421$class_3432", "net/minecraft/structure/StrongholdGenerator$StoneBrickRandomizer", "net/minecraft/src/C_213268_$C_213282_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_setBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "next", "method_14948", "setBlock", "m_213766_"), "(Layw;IIIZ)V");
    }

    static void setBlock(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_setBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$STONEBRICKRANDOMIZER_HPP