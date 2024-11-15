// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_STRUCTURE_DESERTPYRAMIDSTRUCTURE_HPP
#define NET_MINECRAFT_WORLD_GEN_STRUCTURE_DESERTPYRAMIDSTRUCTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.structure.DesertPyramidStructure
 * Remapped: eln
 */
namespace DesertPyramidStructure {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eln", "net/minecraft/world/level/levelgen/structure/structures/DesertPyramidStructure", "net/minecraft/class_3006", "net/minecraft/world/gen/structure/DesertPyramidStructure", "net/minecraft/src/C_213181_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.structure.DesertPyramidStructure#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_37791", "CODEC", "f_227415_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.structure.DesertPyramidStructure#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_37791", "CODEC", "f_227415_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_postPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "afterPlace", "method_38694", "postPlace", "m_214110_"), "(Ldds;Lddq;Lduz;Layw;Lejj;Ldcd;Lekg;)V");
    }

    static void postPlace(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_postPlace();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_placeSuspiciousSand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "placeSuspiciousSand", "method_51181", "placeSuspiciousSand", "m_278858_"), "(Lejj;Ldds;Ljd;)V");
    }

    static void placeSuspiciousSand(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_placeSuspiciousSand();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "type", "method_41618", "getType", "m_213658_"), "()Leka;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_STRUCTURE_DESERTPYRAMIDSTRUCTURE_HPP