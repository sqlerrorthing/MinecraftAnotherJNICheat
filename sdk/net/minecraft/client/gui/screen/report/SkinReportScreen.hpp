// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_SKINREPORTSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_SKINREPORTSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.report.SkinReportScreen
 * Remapped: fsr
 */
namespace SkinReportScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsr", "net/minecraft/client/gui/screens/reporting/SkinReportScreen", "net/minecraft/class_8771", "net/minecraft/client/gui/screen/report/SkinReportScreen", "net/minecraft/src/C_290121_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#SKIN_WIDGET_WIDTH
    [[maybe_unused]] static jint get_field_SKIN_WIDGET_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "SKIN_WIDTH", "field_46052", "SKIN_WIDGET_WIDTH", "f_290773_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#SKIN_WIDGET_WIDTH
    [[maybe_unused]] static void set_field_SKIN_WIDGET_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "SKIN_WIDTH", "field_46052", "SKIN_WIDGET_WIDTH", "f_290773_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#REASON_BUTTON_AND_COMMENTS_BOX_WIDTH
    [[maybe_unused]] static jint get_field_REASON_BUTTON_AND_COMMENTS_BOX_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "FORM_WIDTH", "field_46053", "REASON_BUTTON_AND_COMMENTS_BOX_WIDTH", "f_290988_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#REASON_BUTTON_AND_COMMENTS_BOX_WIDTH
    [[maybe_unused]] static void set_field_REASON_BUTTON_AND_COMMENTS_BOX_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "FORM_WIDTH", "field_46053", "REASON_BUTTON_AND_COMMENTS_BOX_WIDTH", "f_290988_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#TITLE_TEXT
    [[maybe_unused]] static jobject get_field_TITLE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "TITLE", "field_46054", "TITLE_TEXT", "f_290311_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#TITLE_TEXT
    [[maybe_unused]] static void set_field_TITLE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "TITLE", "field_46054", "TITLE_TEXT", "f_290311_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.SkinReportScreen#commentsBox
    static jobject get_field_commentsBox(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "commentBox", "field_46056", "commentsBox", "f_290495_"), "Lfje;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#commentsBox
    static void set_field_commentsBox(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "commentBox", "field_46056", "commentsBox", "f_290495_"), "Lfje;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.SkinReportScreen#selectReasonButton
    static jobject get_field_selectReasonButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "selectReasonButton", "field_46058", "selectReasonButton", "f_291635_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.SkinReportScreen#selectReasonButton
    static void set_field_selectReasonButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "selectReasonButton", "field_46058", "selectReasonButton", "f_291635_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "addContent", "method_61135", "addContent", "m_338957_"), "()V");
    }

    static void addContent(const jobject& obj) {
                
       const auto methodID = methodID_addContent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "onReportChanged", "method_53586", "onChange", "m_239041_"), "()V");
    }

    static void onChange(const jobject& obj) {
                
       const auto methodID = methodID_onChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_mouseReleased() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mouseReleased", "method_25406", "mouseReleased", "m_6348_"), "(DDI)Z");
    }

    static jboolean mouseReleased(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseReleased();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_SKINREPORTSCREEN_HPP