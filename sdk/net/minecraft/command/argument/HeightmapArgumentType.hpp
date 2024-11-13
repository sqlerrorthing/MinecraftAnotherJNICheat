// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_HEIGHTMAPARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_HEIGHTMAPARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.HeightmapArgumentType
 * Remapped: fj
 */
namespace HeightmapArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fj", "net/minecraft/commands/arguments/HeightmapTypeArgument", "net/minecraft/class_8199", "net/minecraft/command/argument/HeightmapArgumentType", "net/minecraft/src/C_273803_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.HeightmapArgumentType#HEIGHTMAP_CODEC
    [[maybe_unused]] static jobject get_field_HEIGHTMAP_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOWER_CASE_CODEC", "field_42994", "HEIGHTMAP_CODEC", "f_273851_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.HeightmapArgumentType#HEIGHTMAP_CODEC
    [[maybe_unused]] static void set_field_HEIGHTMAP_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOWER_CASE_CODEC", "field_42994", "HEIGHTMAP_CODEC", "f_273851_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getHeightmapTypes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "keptTypes", "method_49546", "getHeightmapTypes", "m_274452_"), "()[Ldyy$a;");
    }

    static jobject getHeightmapTypes() {
       const auto clazz = self();
       const auto methodID = methodID_getHeightmapTypes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_heightmap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "heightmap", "method_49542", "heightmap", "m_274509_"), "()Lfj;");
    }

    static jobject heightmap() {
       const auto clazz = self();
       const auto methodID = methodID_heightmap();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getHeightmap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeightmap", "method_49544", "getHeightmap", "m_274370_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Ldyy$a;");
    }

    static jobject getHeightmap(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getHeightmap();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_transformValueName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "convertId", "method_49545", "transformValueName", "m_274434_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject transformValueName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transformValueName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_HEIGHTMAPARGUMENTTYPE_HPP