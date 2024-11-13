// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_NETHERFOSSILGENERATOR$PIECE_HPP
#define NET_MINECRAFT_STRUCTURE_NETHERFOSSILGENERATOR$PIECE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.NetherFossilGenerator$Piece
 * Remapped: elz$a
 */
namespace NetherFossilGenerator$Piece {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elz$a", "net/minecraft/world/level/levelgen/structure/structures/NetherFossilPieces$NetherFossilPiece", "net/minecraft/class_4787$class_4788", "net/minecraft/structure/NetherFossilGenerator$Piece", "net/minecraft/src/C_213227_$C_213228_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createPlacementData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeSettings", "method_35431", "createPlacementData", "m_228555_"), "(Ldmm;)Lenp;");
    }

    static jobject createPlacementData(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createPlacementData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addAdditionalSaveData", "method_14943", "writeNbt", "m_183620_"), "(Lekh;Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_handleMetadata() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleDataMarker", "method_15026", "handleMetadata", "m_213704_"), "(Ljava/lang/String;Ljd;Lddl;Layw;Lejj;)V");
    }

    static void handleMetadata(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_handleMetadata();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "postProcess", "method_14931", "generate", "m_213694_"), "(Ldds;Lddq;Lduz;Layw;Lejj;Ldcd;Ljd;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_NETHERFOSSILGENERATOR$PIECE_HPP