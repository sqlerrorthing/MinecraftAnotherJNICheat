// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_BURIEDTREASUREGENERATOR$PIECE_HPP
#define NET_MINECRAFT_STRUCTURE_BURIEDTREASUREGENERATOR$PIECE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.BuriedTreasureGenerator$Piece
 * Remapped: elk$a
 */
namespace BuriedTreasureGenerator$Piece {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elk$a", "net/minecraft/world/level/levelgen/structure/structures/BuriedTreasurePieces$BuriedTreasurePiece", "net/minecraft/class_3789$class_3339", "net/minecraft/structure/BuriedTreasureGenerator$Piece", "net/minecraft/src/C_213177_$C_213178_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addAdditionalSaveData", "method_14943", "writeNbt", "m_183620_"), "(Lekh;Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "postProcess", "method_14931", "generate", "m_213694_"), "(Ldds;Lddq;Lduz;Layw;Lejj;Ldcd;Ljd;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_isLiquid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isLiquid", "method_14655", "isLiquid", "m_227380_"), "(Ldtc;)Z");
    }

    static jboolean isLiquid(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isLiquid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_BURIEDTREASUREGENERATOR$PIECE_HPP