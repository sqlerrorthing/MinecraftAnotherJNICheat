// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$LINEWIDTH_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$LINEWIDTH_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderPhase$LineWidth
 * Remapped: gfg$h
 */
namespace RenderPhase$LineWidth {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfg$h", "net/minecraft/client/renderer/RenderStateShard$LineStateShard", "net/minecraft/class_4668$class_4677", "net/minecraft/client/render/RenderPhase$LineWidth", "net/minecraft/src/C_4149_$C_4158_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.RenderPhase$LineWidth#width
    static jobject get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aQ", "width", "field_21392", "width", "f_110276_"), "Ljava/util/OptionalDouble;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderPhase$LineWidth#width
    static void set_field_width(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aQ", "width", "field_21392", "width", "f_110276_"), "Ljava/util/OptionalDouble;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$LINEWIDTH_HPP