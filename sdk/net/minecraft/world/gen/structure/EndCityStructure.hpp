// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_STRUCTURE_ENDCITYSTRUCTURE_HPP
#define NET_MINECRAFT_WORLD_GEN_STRUCTURE_ENDCITYSTRUCTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.structure.EndCityStructure
 * Remapped: elp
 */
namespace EndCityStructure {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elp", "net/minecraft/world/level/levelgen/structure/structures/EndCityStructure", "net/minecraft/class_3021", "net/minecraft/world/gen/structure/EndCityStructure", "net/minecraft/src/C_213189_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.structure.EndCityStructure#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_37792", "CODEC", "f_227523_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.structure.EndCityStructure#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_37792", "CODEC", "f_227523_"), "Lcom/mojang/serialization/MapCodec;");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "generatePieces", "method_39817", "addPieces", "m_227529_"), "(Lekj;Ljd;Ldmm;Lejr$a;)V");
    }

    static void addPieces(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_addPieces();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
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

#endif // NET_MINECRAFT_WORLD_GEN_STRUCTURE_ENDCITYSTRUCTURE_HPP