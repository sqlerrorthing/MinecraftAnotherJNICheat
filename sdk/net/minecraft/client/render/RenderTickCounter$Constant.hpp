// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERTICKCOUNTER$CONSTANT_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERTICKCOUNTER$CONSTANT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderTickCounter$Constant
 * Remapped: fgf$a
 */
namespace RenderTickCounter$Constant {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgf$a", "net/minecraft/client/DeltaTracker$DefaultValue", "net/minecraft/class_9779$class_9780", "net/minecraft/client/render/RenderTickCounter$Constant", "net/minecraft/src/C_336468_$C_336559_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Constant#value
    static jfloat get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "field_51957", "value", "f_337105_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Constant#value
    static void set_field_value(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "field_51957", "value", "f_337105_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getLastFrameDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getGameTimeDeltaTicks", "method_60636", "getLastFrameDuration", "m_339005_"), "()F");
    }

    static jfloat getLastFrameDuration(const jobject& obj) {
                
       const auto methodID = methodID_getLastFrameDuration();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTickDelta() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getGameTimeDeltaPartialTick", "method_60637", "getTickDelta", "m_338527_"), "(Z)F");
    }

    static jfloat getTickDelta(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getTickDelta();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLastDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRealtimeDeltaTicks", "method_60638", "getLastDuration", "m_338557_"), "()F");
    }

    static jfloat getLastDuration(const jobject& obj) {
                
       const auto methodID = methodID_getLastDuration();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERTICKCOUNTER$CONSTANT_HPP