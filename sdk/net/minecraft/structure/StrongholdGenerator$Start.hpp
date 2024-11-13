// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$START_HPP
#define NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$START_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StrongholdGenerator$Start
 * Remapped: emj$m
 */
namespace StrongholdGenerator$Start {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emj$m", "net/minecraft/world/level/levelgen/structure/structures/StrongholdPieces$StartPiece", "net/minecraft/class_3421$class_3434", "net/minecraft/structure/StrongholdGenerator$Start", "net/minecraft/src/C_213268_$C_213284_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.structure.StrongholdGenerator$Start#lastPiece
    static jobject get_field_lastPiece(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previousPiece", "field_15284", "lastPiece", "f_229797_"), "Lemj$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.StrongholdGenerator$Start#lastPiece
    static void set_field_lastPiece(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previousPiece", "field_15284", "lastPiece", "f_229797_"), "Lemj$f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.StrongholdGenerator$Start#portalRoom
    static jobject get_field_portalRoom(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "portalRoomPiece", "field_15283", "portalRoom", "f_229798_"), "Lemj$g;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.StrongholdGenerator$Start#portalRoom
    static void set_field_portalRoom(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "portalRoomPiece", "field_15283", "portalRoom", "f_229798_"), "Lemj$g;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.StrongholdGenerator$Start#pieces
    static jobject get_field_pieces(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pendingChildren", "field_15282", "pieces", "f_229799_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.StrongholdGenerator$Start#pieces
    static void set_field_pieces(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pendingChildren", "field_15282", "pieces", "f_229799_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getCenter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getLocatorPosition", "method_35458", "getCenter", "m_142171_"), "()Ljd;");
    }

    static jobject getCenter(const jobject& obj) {
                
       const auto methodID = methodID_getCenter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$START_HPP