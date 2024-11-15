// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_DEBUG_PINGCHART_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_DEBUG_PINGCHART_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.debug.PingChart
 * Remapped: fke
 */
namespace PingChart {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fke", "net/minecraft/client/gui/components/debugchart/PingDebugChart", "net/minecraft/class_8758", "net/minecraft/client/gui/hud/debug/PingChart", "net/minecraft/src/C_290197_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45931
    [[maybe_unused]] static jint get_field_field_45931() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RED", "field_45931", "field_45931", "f_291464_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45931
    [[maybe_unused]] static void set_field_field_45931(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RED", "field_45931", "field_45931", "f_291464_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45932
    [[maybe_unused]] static jint get_field_field_45932() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "YELLOW", "field_45932", "field_45932", "f_291565_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45932
    [[maybe_unused]] static void set_field_field_45932(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "YELLOW", "field_45932", "field_45932", "f_291565_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45933
    [[maybe_unused]] static jint get_field_field_45933() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GREEN", "field_45933", "field_45933", "f_290496_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45933
    [[maybe_unused]] static void set_field_field_45933(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GREEN", "field_45933", "field_45933", "f_290496_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45934
    [[maybe_unused]] static jint get_field_field_45934() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CHART_TOP_VALUE", "field_45934", "field_45934", "f_290933_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.debug.PingChart#field_45934
    [[maybe_unused]] static void set_field_field_45934(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CHART_TOP_VALUE", "field_45934", "field_45934", "f_290933_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_renderThresholds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "renderAdditionalLinesAndLabels", "method_53473", "renderThresholds", "m_293086_"), "(Lfhz;III)V");
    }

    static void renderThresholds(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_renderThresholds();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_format() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "toDisplayString", "method_53468", "format", "m_293688_"), "(D)Ljava/lang/String;");
    }

    static jobject format(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_format();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSampleHeight", "method_53475", "getHeight", "m_292631_"), "(D)I");
    }

    static jint getHeight(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSampleColor", "method_53471", "getColor", "m_292871_"), "(J)I");
    }

    static jint getColor(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_DEBUG_PINGCHART_HPP