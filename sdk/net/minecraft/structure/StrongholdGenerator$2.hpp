// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$2_HPP
#define NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StrongholdGenerator$2
 * Remapped: emj$2
 */
namespace StrongholdGenerator$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emj$2", "net/minecraft/world/level/levelgen/structure/structures/StrongholdPieces$2", "net/minecraft/class_3421$2", "net/minecraft/structure/StrongholdGenerator$2", "net/minecraft/src/C_213268_$C_213270_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "doPlace", "method_14862", "canGenerate", "m_214198_"), "(I)Z");
    }

    static jboolean canGenerate(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_canGenerate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$2_HPP