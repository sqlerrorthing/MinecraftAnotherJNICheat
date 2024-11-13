// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRUCTURESET_HPP
#define NET_MINECRAFT_STRUCTURE_STRUCTURESET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StructureSet
 * Remapped: ejx
 */
namespace StructureSet {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ejx", "net/minecraft/world/level/levelgen/structure/StructureSet", "net/minecraft/class_7059", "net/minecraft/structure/StructureSet", "net/minecraft/src/C_207023_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.structure.StructureSet#structures
    static jobject get_field_structures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "structures", "comp_510", "structures", "f_210003_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.StructureSet#structures
    static void set_field_structures(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "structures", "comp_510", "structures", "f_210003_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.StructureSet#placement
    static jobject get_field_placement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "placement", "comp_511", "placement", "f_210004_"), "Leko;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.StructureSet#placement
    static void set_field_placement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "placement", "comp_511", "placement", "f_210004_"), "Leko;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.StructureSet#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_37195", "CODEC", "f_210001_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.StructureSet#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_37195", "CODEC", "f_210001_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.StructureSet#REGISTRY_CODEC
    [[maybe_unused]] static jobject get_field_REGISTRY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_37196", "REGISTRY_CODEC", "f_210002_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.StructureSet#REGISTRY_CODEC
    [[maybe_unused]] static void set_field_REGISTRY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_37196", "REGISTRY_CODEC", "f_210002_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "entry", "method_41146", "createEntry", "m_210017_"), "(Ljm;I)Lejx$a;");
    }

    static jobject createEntry(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__createEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "entry", "method_41145", "createEntry", "m_210015_"), "(Ljm;)Lejx$a;");
    }

    static jobject _createEntry(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__createEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__structures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "structures", "comp_510", "structures", "f_210003_"), "()Ljava/util/List;");
    }

    static jobject _structures(const jobject& obj) {
                
       const auto methodID = methodID__structures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__placement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "placement", "comp_511", "placement", "f_210004_"), "()Leko;");
    }

    static jobject _placement(const jobject& obj) {
                
       const auto methodID = methodID__placement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRUCTURESET_HPP