// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_FPSSMOOTHER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_FPSSMOOTHER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.FpsSmoother
 * Remapped: gfi
 */
namespace FpsSmoother {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfi", "net/minecraft/client/renderer/RunningTrimmedMean", "net/minecraft/class_4740", "net/minecraft/client/render/FpsSmoother", "net/minecraft/src/C_4175_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.FpsSmoother#times
    static jlong get_field_times(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "values", "field_21800", "times", "f_110707_"), "[J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.FpsSmoother#times
    static void set_field_times(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "values", "field_21800", "times", "f_110707_"), "[J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.FpsSmoother#size
    static jint get_field_size(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "field_21801", "size", "f_110708_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.FpsSmoother#size
    static void set_field_size(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "field_21801", "size", "f_110708_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.FpsSmoother#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cursor", "field_21802", "index", "f_110709_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.FpsSmoother#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cursor", "field_21802", "index", "f_110709_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getTargetUsedTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registerValueAndGetMean", "method_24214", "getTargetUsedTime", "m_110712_"), "(J)J");
    }

    static jlong getTargetUsedTime(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_getTargetUsedTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_FPSSMOOTHER_HPP