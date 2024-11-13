// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_STRUCTURE_STRONGHOLDSTRUCTURE_HPP
#define NET_MINECRAFT_WORLD_GEN_STRUCTURE_STRONGHOLDSTRUCTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.structure.StrongholdStructure
 * Remapped: emk
 */
namespace StrongholdStructure {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emk", "net/minecraft/world/level/levelgen/structure/structures/StrongholdStructure", "net/minecraft/class_3188", "net/minecraft/world/gen/structure/StrongholdStructure", "net/minecraft/src/C_213290_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.structure.StrongholdStructure#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_37817", "CODEC", "f_229936_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.structure.StrongholdStructure#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_37817", "CODEC", "f_229936_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getStructurePosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findGenerationPoint", "method_38676", "getStructurePosition", "m_214086_"), "(Lejr$a;)Ljava/util/Optional;");
    }

    static jobject getStructurePosition(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStructurePosition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPieces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "generatePieces", "method_41691", "addPieces", "m_229945_"), "(Lekj;Lejr$a;)V");
    }

    static void addPieces(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_addPieces();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
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

#endif // NET_MINECRAFT_WORLD_GEN_STRUCTURE_STRONGHOLDSTRUCTURE_HPP