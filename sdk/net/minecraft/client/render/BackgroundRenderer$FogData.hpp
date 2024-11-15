// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$FOGDATA_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$FOGDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.BackgroundRenderer$FogData
 * Remapped: ger$c
 */
namespace BackgroundRenderer$FogData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ger$c", "net/minecraft/client/renderer/FogRenderer$FogData", "net/minecraft/class_758$class_7285", "net/minecraft/client/render/BackgroundRenderer$FogData", "net/minecraft/src/C_4122_$C_213421_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.render.BackgroundRenderer$FogData#fogType
    static jobject get_field_fogType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mode", "field_38339", "fogType", "f_234199_"), "Lger$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.BackgroundRenderer$FogData#fogType
    static void set_field_fogType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "mode", "field_38339", "fogType", "f_234199_"), "Lger$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.BackgroundRenderer$FogData#fogStart
    static jfloat get_field_fogStart(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "start", "field_38340", "fogStart", "f_234200_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.BackgroundRenderer$FogData#fogStart
    static void set_field_fogStart(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "start", "field_38340", "fogStart", "f_234200_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.BackgroundRenderer$FogData#fogEnd
    static jfloat get_field_fogEnd(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "end", "field_38341", "fogEnd", "f_234201_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.BackgroundRenderer$FogData#fogEnd
    static void set_field_fogEnd(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "end", "field_38341", "fogEnd", "f_234201_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.BackgroundRenderer$FogData#fogShape
    static jobject get_field_fogShape(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "shape", "field_38342", "fogShape", "f_234202_"), "Lfav;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.BackgroundRenderer$FogData#fogShape
    static void set_field_fogShape(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "shape", "field_38342", "fogShape", "f_234202_"), "Lfav;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$FOGDATA_HPP