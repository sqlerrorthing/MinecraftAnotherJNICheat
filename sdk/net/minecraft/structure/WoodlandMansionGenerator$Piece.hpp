// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$PIECE_HPP
#define NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$PIECE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.WoodlandMansionGenerator$Piece
 * Remapped: emn$i
 */
namespace WoodlandMansionGenerator$Piece {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emn$i", "net/minecraft/world/level/levelgen/structure/structures/WoodlandMansionPieces$WoodlandMansionPiece", "net/minecraft/class_3471$class_3480", "net/minecraft/structure/WoodlandMansionGenerator$Piece", "net/minecraft/src/C_213293_$C_213302_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "makeTemplateLocation", "method_35470", "getId", "m_142415_"), "()Lakr;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeLocation", "method_35474", "getId", "m_230210_"), "(Ljava/lang/String;)Lakr;");
    }

    static jobject _getId(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createPlacementData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeSettings", "method_35473", "createPlacementData", "m_230204_"), "(Ldkv;Ldmm;)Lenp;");
    }

    static jobject createPlacementData(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createPlacementData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
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
    
};

#endif // NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$PIECE_HPP