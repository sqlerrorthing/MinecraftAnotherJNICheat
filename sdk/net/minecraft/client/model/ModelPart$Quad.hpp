// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MODEL_MODELPART$QUAD_HPP
#define NET_MINECRAFT_CLIENT_MODEL_MODELPART$QUAD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.model.ModelPart$Quad
 * Remapped: fyk$b
 */
namespace ModelPart$Quad {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fyk$b", "net/minecraft/client/model/geom/ModelPart$Polygon", "net/minecraft/class_630$class_593", "net/minecraft/client/model/ModelPart$Quad", "net/minecraft/src/C_3889_$C_3891_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.model.ModelPart$Quad#vertices
    static jobject get_field_vertices(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "vertices", "field_3502", "vertices", "f_104359_"), "[Lfyk$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart$Quad#vertices
    static void set_field_vertices(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "vertices", "field_3502", "vertices", "f_104359_"), "[Lfyk$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart$Quad#direction
    static jobject get_field_direction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "normal", "field_21618", "direction", "f_104360_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart$Quad#direction
    static void set_field_direction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "normal", "field_21618", "direction", "f_104360_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_MODEL_MODELPART$QUAD_HPP