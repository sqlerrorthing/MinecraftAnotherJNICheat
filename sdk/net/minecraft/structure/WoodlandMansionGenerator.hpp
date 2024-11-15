// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.WoodlandMansionGenerator
 * Remapped: emn
 */
namespace WoodlandMansionGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emn", "net/minecraft/world/level/levelgen/structure/structures/WoodlandMansionPieces", "net/minecraft/class_3471", "net/minecraft/structure/WoodlandMansionGenerator", "net/minecraft/src/C_213293_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_addPieces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "generateMansion", "method_15029", "addPieces", "m_229985_"), "(Lenu;Ljd;Ldmm;Ljava/util/List;Layw;)V");
    }

    static void addPieces(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_addPieces();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR_HPP