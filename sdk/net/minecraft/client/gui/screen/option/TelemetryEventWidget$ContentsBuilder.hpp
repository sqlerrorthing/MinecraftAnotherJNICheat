// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_TELEMETRYEVENTWIDGET$CONTENTSBUILDER_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_TELEMETRYEVENTWIDGET$CONTENTSBUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.option.TelemetryEventWidget$ContentsBuilder
 * Remapped: fsy$b
 */
namespace TelemetryEventWidget$ContentsBuilder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsy$b", "net/minecraft/client/gui/screens/telemetry/TelemetryEventWidget$ContentBuilder", "net/minecraft/class_7941$class_7943", "net/minecraft/client/gui/screen/option/TelemetryEventWidget$ContentsBuilder", "net/minecraft/src/C_260377_$C_260380_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.option.TelemetryEventWidget$ContentsBuilder#gridWidth
    static jint get_field_gridWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "width", "field_41362", "gridWidth", "f_260618_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.TelemetryEventWidget$ContentsBuilder#gridWidth
    static void set_field_gridWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "width", "field_41362", "gridWidth", "f_260618_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.option.TelemetryEventWidget$ContentsBuilder#layout
    static jobject get_field_layout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "layout", "field_45566", "layout", "f_291355_"), "Lfmd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.TelemetryEventWidget$ContentsBuilder#layout
    static void set_field_layout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "layout", "field_45566", "layout", "f_291355_"), "Lfmd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.option.TelemetryEventWidget$ContentsBuilder#narration
    static jobject get_field_narration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "narration", "field_41366", "narration", "f_260507_"), "Lxn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.TelemetryEventWidget$ContentsBuilder#narration
    static void set_field_narration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "narration", "field_41366", "narration", "f_260507_"), "Lxn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_appendTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addLine", "method_47643", "appendTitle", "m_260980_"), "(Lfhx;Lwz;)V");
    }

    static void appendTitle(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_appendTitle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__appendTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addLine", "method_47644", "appendTitle", "m_261152_"), "(Lfhx;Lwz;I)V");
    }

    static void _appendTitle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID__appendTitle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_appendText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addHeader", "method_47645", "appendText", "m_261236_"), "(Lfhx;Lwz;)V");
    }

    static void appendText(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_appendText();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_appendSpace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addSpacer", "method_47642", "appendSpace", "m_260899_"), "(I)V");
    }

    static void appendSpace(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_appendSpace();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_47641", "build", "m_261135_"), "()Lfsy$a;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_TELEMETRYEVENTWIDGET$CONTENTSBUILDER_HPP