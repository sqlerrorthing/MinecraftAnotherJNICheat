// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_MINESHAFTGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_MINESHAFTGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.MineshaftGenerator
 * Remapped: elv
 */
namespace MineshaftGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elv", "net/minecraft/world/level/levelgen/structure/structures/MineshaftPieces", "net/minecraft/class_3353", "net/minecraft/structure/MineshaftGenerator", "net/minecraft/src/C_213198_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.structure.MineshaftGenerator#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_29326", "LOGGER", "f_227697_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.MineshaftGenerator#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_29326", "LOGGER", "f_227697_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.MineshaftGenerator#field_31551
    [[maybe_unused]] static jint get_field_field_31551() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_SHAFT_WIDTH", "field_31551", "field_31551", "f_227698_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.MineshaftGenerator#field_31551
    [[maybe_unused]] static void set_field_field_31551(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_SHAFT_WIDTH", "field_31551", "field_31551", "f_227698_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.MineshaftGenerator#field_31552
    [[maybe_unused]] static jint get_field_field_31552() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_SHAFT_HEIGHT", "field_31552", "field_31552", "f_227699_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.MineshaftGenerator#field_31552
    [[maybe_unused]] static void set_field_field_31552(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_SHAFT_HEIGHT", "field_31552", "field_31552", "f_227699_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.MineshaftGenerator#field_31553
    [[maybe_unused]] static jint get_field_field_31553() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_SHAFT_LENGTH", "field_31553", "field_31553", "f_227700_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.MineshaftGenerator#field_31553
    [[maybe_unused]] static void set_field_field_31553(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_SHAFT_LENGTH", "field_31553", "field_31553", "f_227700_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.MineshaftGenerator#field_31554
    [[maybe_unused]] static jint get_field_field_31554() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_PILLAR_HEIGHT", "field_31554", "field_31554", "f_227701_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.MineshaftGenerator#field_31554
    [[maybe_unused]] static void set_field_field_31554(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_PILLAR_HEIGHT", "field_31554", "field_31554", "f_227701_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.MineshaftGenerator#field_31555
    [[maybe_unused]] static jint get_field_field_31555() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_CHAIN_HEIGHT", "field_31555", "field_31555", "f_227702_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.MineshaftGenerator#field_31555
    [[maybe_unused]] static void set_field_field_31555(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_CHAIN_HEIGHT", "field_31555", "field_31555", "f_227702_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.MineshaftGenerator#field_31556
    [[maybe_unused]] static jint get_field_field_31556() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MAX_DEPTH", "field_31556", "field_31556", "f_227703_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.MineshaftGenerator#field_31556
    [[maybe_unused]] static void set_field_field_31556(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MAX_DEPTH", "field_31556", "field_31556", "f_227703_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.MineshaftGenerator#field_34729
    [[maybe_unused]] static jint get_field_field_34729() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAGIC_START_Y", "field_34729", "field_34729", "f_227696_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.MineshaftGenerator#field_34729
    [[maybe_unused]] static void set_field_field_34729(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAGIC_START_Y", "field_34729", "field_34729", "f_227696_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_pickPiece() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createRandomShaftPiece", "method_14712", "pickPiece", "m_227715_"), "(Lejw;Layw;IIILji;ILelw$a;)Lelv$c;");
    }

    static jobject pickPiece(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jobject& arg5, const jint& arg6, const jobject& arg7) {
       const auto clazz = self();
       const auto methodID = methodID_pickPiece();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_pieceGenerator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "generateAndAddPiece", "method_14711", "pieceGenerator", "m_227706_"), "(Lejv;Lejw;Layw;IIILji;I)Lelv$c;");
    }

    static jobject pieceGenerator(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jobject& arg6, const jint& arg7) {
       const auto clazz = self();
       const auto methodID = methodID_pieceGenerator();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_MINESHAFTGENERATOR_HPP