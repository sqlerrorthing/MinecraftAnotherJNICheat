// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_OCEANMONUMENTGENERATOR$SIMPLEROOMFACTORY_HPP
#define NET_MINECRAFT_STRUCTURE_OCEANMONUMENTGENERATOR$SIMPLEROOMFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.OceanMonumentGenerator$SimpleRoomFactory
 * Remapped: emb$f
 */
namespace OceanMonumentGenerator$SimpleRoomFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emb$f", "net/minecraft/world/level/levelgen/structure/structures/OceanMonumentPieces$FitSimpleRoom", "net/minecraft/class_3366$class_3372", "net/minecraft/structure/OceanMonumentGenerator$SimpleRoomFactory", "net/minecraft/src/C_213230_$C_213237_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fits", "method_14769", "canGenerate", "m_213925_"), "(Lemb$v;)Z");
    }

    static jboolean canGenerate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canGenerate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_14768", "generate", "m_214153_"), "(Lji;Lemb$v;Layw;)Lemb$r;");
    }

    static jobject generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_OCEANMONUMENTGENERATOR$SIMPLEROOMFACTORY_HPP