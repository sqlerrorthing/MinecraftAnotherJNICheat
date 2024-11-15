// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRUCTUREPIECESGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_STRUCTUREPIECESGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StructurePiecesGenerator
 * Remapped: eke
 */
namespace StructurePiecesGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eke", "net/minecraft/world/level/levelgen/structure/pieces/PieceGenerator", "net/minecraft/class_6622", "net/minecraft/structure/StructurePiecesGenerator", "net/minecraft/src/C_183026_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_generatePieces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("generatePieces", "generatePieces", "generatePieces", "generatePieces", "m_197325_"), "(Lekj;Leke$a;)V");
    }

    static void generatePieces(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_generatePieces();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRUCTUREPIECESGENERATOR_HPP