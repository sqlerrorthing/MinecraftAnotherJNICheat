// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$SHADERPROGRAM_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$SHADERPROGRAM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderPhase$ShaderProgram
 * Remapped: gfg$m
 */
namespace RenderPhase$ShaderProgram {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfg$m", "net/minecraft/client/renderer/RenderStateShard$ShaderStateShard", "net/minecraft/class_4668$class_5942", "net/minecraft/client/render/RenderPhase$ShaderProgram", "net/minecraft/src/C_4149_$C_141720_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.RenderPhase$ShaderProgram#supplier
    static jobject get_field_supplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aQ", "shader", "field_29455", "supplier", "f_173136_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderPhase$ShaderProgram#supplier
    static void set_field_supplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aQ", "shader", "field_29455", "supplier", "f_173136_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$SHADERPROGRAM_HPP