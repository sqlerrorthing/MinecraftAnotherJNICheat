// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.report.ChatSelectionScreen
 * Remapped: fsn
 */
namespace ChatSelectionScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsn", "net/minecraft/client/gui/screens/reporting/ChatSelectionScreen", "net/minecraft/class_7543", "net/minecraft/client/gui/screen/report/ChatSelectionScreen", "net/minecraft/src/C_238447_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.gui.screen.report.ChatSelectionScreen#CHECKMARK_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_CHECKMARK_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CHECKMARK_SPRITE", "field_45559", "CHECKMARK_ICON_TEXTURE", "f_291703_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.report.ChatSelectionScreen#CHECKMARK_ICON_TEXTURE
    [[maybe_unused]] static void set_field_CHECKMARK_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CHECKMARK_SPRITE", "field_45559", "CHECKMARK_ICON_TEXTURE", "f_291703_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#TITLE_TEXT
    [[maybe_unused]] static jobject get_field_TITLE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TITLE", "field_39727", "TITLE_TEXT", "f_238718_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#TITLE_TEXT
    [[maybe_unused]] static void set_field_TITLE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TITLE", "field_39727", "TITLE_TEXT", "f_238718_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#CONTEXT_TEXT
    [[maybe_unused]] static jobject get_field_CONTEXT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CONTEXT_INFO", "field_39728", "CONTEXT_TEXT", "f_238622_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#CONTEXT_TEXT
    [[maybe_unused]] static void set_field_CONTEXT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CONTEXT_INFO", "field_39728", "CONTEXT_TEXT", "f_238622_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "lastScreen", "field_39584", "parent", "f_238797_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "lastScreen", "field_39584", "parent", "f_238797_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#reporter
    static jobject get_field_reporter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "reportingContext", "field_39585", "reporter", "f_238651_"), "Lgao;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#reporter
    static void set_field_reporter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "reportingContext", "field_39585", "reporter", "f_238651_"), "Lgao;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#doneButton
    static jobject get_field_doneButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "confirmSelectedButton", "field_39586", "doneButton", "f_238763_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#doneButton
    static void set_field_doneButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "confirmSelectedButton", "field_39586", "doneButton", "f_238763_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#contextMessage
    static jobject get_field_contextMessage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "contextInfoLabel", "field_39729", "contextMessage", "f_238785_"), "Lfjf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#contextMessage
    static void set_field_contextMessage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "contextInfoLabel", "field_39729", "contextMessage", "f_238785_"), "Lfjf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#selectionList
    static jobject get_field_selectionList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "chatSelectionList", "field_39587", "selectionList", "f_238686_"), "Lfsn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#selectionList
    static void set_field_selectionList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "chatSelectionList", "field_39587", "selectionList", "f_238686_"), "Lfsn$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.report.ChatSelectionScreen#report
    static jobject get_field_report(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "report", "field_39588", "report", "f_238567_"), "Lgah$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.report.ChatSelectionScreen#report
    static void set_field_report(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "report", "field_39588", "report", "f_238567_"), "Lgah$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#newReportConsumer
    static jobject get_field_newReportConsumer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "onSelected", "field_39589", "newReportConsumer", "f_238817_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#newReportConsumer
    static void set_field_newReportConsumer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "onSelected", "field_39589", "newReportConsumer", "f_238817_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#listAdder
    static jobject get_field_listAdder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "chatLogFiller", "field_39590", "listAdder", "f_238733_"), "Lfsm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen#listAdder
    static void set_field_listAdder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "chatLogFiller", "field_39590", "listAdder", "f_238733_"), "Lfsm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSentByReportedPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canReport", "method_44495", "isSentByReportedPlayer", "m_241847_"), "(Lgad;)Z");
    }

    static jboolean isSentByReportedPlayer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isSentByReportedPlayer();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addMessages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "extendLog", "method_44504", "addMessages", "m_239478_"), "()V");
    }

    static void addMessages(const jobject& obj) {
                
       const auto methodID = methodID_addMessages();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addMoreMessages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "onReachedScrollTop", "method_44507", "addMoreMessages", "m_239043_"), "()V");
    }

    static void addMoreMessages(const jobject& obj) {
                
       const auto methodID = methodID_addMoreMessages();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setDoneButtonActivation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "updateConfirmSelectedButton", "method_44509", "setDoneButtonActivation", "m_239634_"), "()V");
    }

    static void setDoneButtonActivation(const jobject& obj) {
                
       const auto methodID = methodID_setDoneButtonActivation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNarratedTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getNarrationMessage", "method_25435", "getNarratedTitle", "m_142562_"), "()Lwz;");
    }

    static jobject getNarratedTitle(const jobject& obj) {
                
       const auto methodID = methodID_getNarratedTitle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN_HPP