// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_NETHERFORTRESSGENERATOR$PIECEDATA_HPP
#define NET_MINECRAFT_STRUCTURE_NETHERFORTRESSGENERATOR$PIECEDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.NetherFortressGenerator$PieceData
 * Remapped: elx$n
 */
namespace NetherFortressGenerator$PieceData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elx$n", "net/minecraft/world/level/levelgen/structure/structures/NetherFortressPieces$PieceWeight", "net/minecraft/class_3390$class_3404", "net/minecraft/structure/NetherFortressGenerator$PieceData", "net/minecraft/src/C_213207_$C_213222_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.structure.NetherFortressGenerator$PieceData#pieceType
    static jobject get_field_pieceType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pieceClass", "field_14501", "pieceType", "f_228434_"), "Ljava/lang/Class;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.NetherFortressGenerator$PieceData#pieceType
    static void set_field_pieceType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pieceClass", "field_14501", "pieceType", "f_228434_"), "Ljava/lang/Class;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.NetherFortressGenerator$PieceData#weight
    static jint get_field_weight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "weight", "field_14503", "weight", "f_228435_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.NetherFortressGenerator$PieceData#weight
    static void set_field_weight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "weight", "field_14503", "weight", "f_228435_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.NetherFortressGenerator$PieceData#generatedCount
    static jint get_field_generatedCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "placeCount", "field_14502", "generatedCount", "f_228436_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.NetherFortressGenerator$PieceData#generatedCount
    static void set_field_generatedCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "placeCount", "field_14502", "generatedCount", "f_228436_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.NetherFortressGenerator$PieceData#limit
    static jint get_field_limit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxPlaceCount", "field_14499", "limit", "f_228437_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.NetherFortressGenerator$PieceData#limit
    static void set_field_limit(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxPlaceCount", "field_14499", "limit", "f_228437_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.NetherFortressGenerator$PieceData#repeatable
    static jboolean get_field_repeatable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "allowInRow", "field_14500", "repeatable", "f_228438_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.NetherFortressGenerator$PieceData#repeatable
    static void set_field_repeatable(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "allowInRow", "field_14500", "repeatable", "f_228438_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_canGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "doPlace", "method_14816", "canGenerate", "m_228449_"), "(I)Z");
    }

    static jboolean canGenerate(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_canGenerate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__canGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValid", "method_14815", "canGenerate", "m_228448_"), "()Z");
    }

    static jboolean _canGenerate(const jobject& obj) {
                
       const auto methodID = methodID__canGenerate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_NETHERFORTRESSGENERATOR$PIECEDATA_HPP