// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_JUNGLETEMPLEGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_JUNGLETEMPLEGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.JungleTempleGenerator
 * Remapped: elt
 */
namespace JungleTempleGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elt", "net/minecraft/world/level/levelgen/structure/structures/JungleTemplePiece", "net/minecraft/class_3348", "net/minecraft/structure/JungleTempleGenerator", "net/minecraft/src/C_213195_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.JungleTempleGenerator#field_34727
    [[maybe_unused]] static jint get_field_field_34727() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "WIDTH", "field_34727", "field_34727", "f_227659_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.JungleTempleGenerator#field_34727
    [[maybe_unused]] static void set_field_field_34727(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "WIDTH", "field_34727", "field_34727", "f_227659_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.JungleTempleGenerator#DEPTH
    [[maybe_unused]] static jint get_field_DEPTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DEPTH", "field_34728", "DEPTH", "f_227660_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.JungleTempleGenerator#DEPTH
    [[maybe_unused]] static void set_field_DEPTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DEPTH", "field_34728", "DEPTH", "f_227660_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.JungleTempleGenerator#placedMainChest
    static jboolean get_field_placedMainChest(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "placedMainChest", "field_14402", "placedMainChest", "f_227661_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.JungleTempleGenerator#placedMainChest
    static void set_field_placedMainChest(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "placedMainChest", "field_14402", "placedMainChest", "f_227661_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.JungleTempleGenerator#placedHiddenChest
    static jboolean get_field_placedHiddenChest(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "placedHiddenChest", "field_14401", "placedHiddenChest", "f_227662_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.JungleTempleGenerator#placedHiddenChest
    static void set_field_placedHiddenChest(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "placedHiddenChest", "field_14401", "placedHiddenChest", "f_227662_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.JungleTempleGenerator#placedTrap1
    static jboolean get_field_placedTrap1(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "placedTrap1", "field_14400", "placedTrap1", "f_227663_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.JungleTempleGenerator#placedTrap1
    static void set_field_placedTrap1(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "placedTrap1", "field_14400", "placedTrap1", "f_227663_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.JungleTempleGenerator#placedTrap2
    static jboolean get_field_placedTrap2(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "placedTrap2", "field_14399", "placedTrap2", "f_227664_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.JungleTempleGenerator#placedTrap2
    static void set_field_placedTrap2(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "placedTrap2", "field_14399", "placedTrap2", "f_227664_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.JungleTempleGenerator#COBBLESTONE_RANDOMIZER
    [[maybe_unused]] static jobject get_field_COBBLESTONE_RANDOMIZER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "STONE_SELECTOR", "field_14403", "COBBLESTONE_RANDOMIZER", "f_227665_"), "Lelt$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.JungleTempleGenerator#COBBLESTONE_RANDOMIZER
    [[maybe_unused]] static void set_field_COBBLESTONE_RANDOMIZER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "STONE_SELECTOR", "field_14403", "COBBLESTONE_RANDOMIZER", "f_227665_"), "Lelt$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
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
    
};

#endif // NET_MINECRAFT_STRUCTURE_JUNGLETEMPLEGENERATOR_HPP