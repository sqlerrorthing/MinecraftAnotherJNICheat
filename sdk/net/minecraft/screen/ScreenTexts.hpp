// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SCREENTEXTS_HPP
#define NET_MINECRAFT_SCREEN_SCREENTEXTS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ScreenTexts
 * Remapped: wy
 */
namespace ScreenTexts {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wy", "net/minecraft/network/chat/CommonComponents", "net/minecraft/class_5244", "net/minecraft/screen/ScreenTexts", "net/minecraft/src/C_4995_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_39003", "EMPTY", "f_237098_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_39003", "EMPTY", "f_237098_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#ON
    [[maybe_unused]] static jobject get_field_ON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OPTION_ON", "field_24332", "ON", "f_130653_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#ON
    [[maybe_unused]] static void set_field_ON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OPTION_ON", "field_24332", "ON", "f_130653_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#OFF
    [[maybe_unused]] static jobject get_field_OFF() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OPTION_OFF", "field_24333", "OFF", "f_130654_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#OFF
    [[maybe_unused]] static void set_field_OFF(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OPTION_OFF", "field_24333", "OFF", "f_130654_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#DONE
    [[maybe_unused]] static jobject get_field_DONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GUI_DONE", "field_24334", "DONE", "f_130655_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#DONE
    [[maybe_unused]] static void set_field_DONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GUI_DONE", "field_24334", "DONE", "f_130655_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#CANCEL
    [[maybe_unused]] static jobject get_field_CANCEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GUI_CANCEL", "field_24335", "CANCEL", "f_130656_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#CANCEL
    [[maybe_unused]] static void set_field_CANCEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GUI_CANCEL", "field_24335", "CANCEL", "f_130656_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#YES
    [[maybe_unused]] static jobject get_field_YES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GUI_YES", "field_24336", "YES", "f_130657_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#YES
    [[maybe_unused]] static void set_field_YES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GUI_YES", "field_24336", "YES", "f_130657_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#NO
    [[maybe_unused]] static jobject get_field_NO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GUI_NO", "field_24337", "NO", "f_130658_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#NO
    [[maybe_unused]] static void set_field_NO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GUI_NO", "field_24337", "NO", "f_130658_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#OK
    [[maybe_unused]] static jobject get_field_OK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GUI_OK", "field_44914", "OK", "f_286989_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#OK
    [[maybe_unused]] static void set_field_OK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GUI_OK", "field_44914", "OK", "f_286989_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#PROCEED
    [[maybe_unused]] static jobject get_field_PROCEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GUI_PROCEED", "field_24338", "PROCEED", "f_130659_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#PROCEED
    [[maybe_unused]] static void set_field_PROCEED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GUI_PROCEED", "field_24338", "PROCEED", "f_130659_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#CONTINUE
    [[maybe_unused]] static jobject get_field_CONTINUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GUI_CONTINUE", "field_41873", "CONTINUE", "f_263736_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#CONTINUE
    [[maybe_unused]] static void set_field_CONTINUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GUI_CONTINUE", "field_41873", "CONTINUE", "f_263736_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#BACK
    [[maybe_unused]] static jobject get_field_BACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GUI_BACK", "field_24339", "BACK", "f_130660_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#BACK
    [[maybe_unused]] static void set_field_BACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GUI_BACK", "field_24339", "BACK", "f_130660_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#TO_TITLE
    [[maybe_unused]] static jobject get_field_TO_TITLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "GUI_TO_TITLE", "field_43109", "TO_TITLE", "f_275759_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#TO_TITLE
    [[maybe_unused]] static void set_field_TO_TITLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "GUI_TO_TITLE", "field_43109", "TO_TITLE", "f_275759_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#ACKNOWLEDGE
    [[maybe_unused]] static jobject get_field_ACKNOWLEDGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "GUI_ACKNOWLEDGE", "field_39742", "ACKNOWLEDGE", "f_238584_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#ACKNOWLEDGE
    [[maybe_unused]] static void set_field_ACKNOWLEDGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "GUI_ACKNOWLEDGE", "field_39742", "ACKNOWLEDGE", "f_238584_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#OPEN_LINK
    [[maybe_unused]] static jobject get_field_OPEN_LINK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "GUI_OPEN_IN_BROWSER", "field_44968", "OPEN_LINK", "f_289829_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#OPEN_LINK
    [[maybe_unused]] static void set_field_OPEN_LINK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "GUI_OPEN_IN_BROWSER", "field_44968", "OPEN_LINK", "f_289829_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#COPY_LINK_TO_CLIPBOARD
    [[maybe_unused]] static jobject get_field_COPY_LINK_TO_CLIPBOARD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "GUI_COPY_LINK_TO_CLIPBOARD", "field_44969", "COPY_LINK_TO_CLIPBOARD", "f_289837_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#COPY_LINK_TO_CLIPBOARD
    [[maybe_unused]] static void set_field_COPY_LINK_TO_CLIPBOARD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "GUI_COPY_LINK_TO_CLIPBOARD", "field_44969", "COPY_LINK_TO_CLIPBOARD", "f_289837_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#DISCONNECT
    [[maybe_unused]] static jobject get_field_DISCONNECT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "GUI_DISCONNECT", "field_45692", "DISCONNECT", "f_290546_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#DISCONNECT
    [[maybe_unused]] static void set_field_DISCONNECT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "GUI_DISCONNECT", "field_45692", "DISCONNECT", "f_290546_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#CONNECT_FAILED_TRANSFER
    [[maybe_unused]] static jobject get_field_CONNECT_FAILED_TRANSFER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TRANSFER_CONNECT_FAILED", "field_48539", "CONNECT_FAILED_TRANSFER", "f_317038_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#CONNECT_FAILED_TRANSFER
    [[maybe_unused]] static void set_field_CONNECT_FAILED_TRANSFER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TRANSFER_CONNECT_FAILED", "field_48539", "CONNECT_FAILED_TRANSFER", "f_317038_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#CONNECT_FAILED
    [[maybe_unused]] static jobject get_field_CONNECT_FAILED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "CONNECT_FAILED", "field_26625", "CONNECT_FAILED", "f_130661_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#CONNECT_FAILED
    [[maybe_unused]] static void set_field_CONNECT_FAILED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "CONNECT_FAILED", "field_26625", "CONNECT_FAILED", "f_130661_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#LINE_BREAK
    [[maybe_unused]] static jobject get_field_LINE_BREAK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "NEW_LINE", "field_33849", "LINE_BREAK", "f_178388_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#LINE_BREAK
    [[maybe_unused]] static void set_field_LINE_BREAK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "NEW_LINE", "field_33849", "LINE_BREAK", "f_178388_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#SENTENCE_SEPARATOR
    [[maybe_unused]] static jobject get_field_SENTENCE_SEPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "NARRATION_SEPARATOR", "field_33850", "SENTENCE_SEPARATOR", "f_178389_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#SENTENCE_SEPARATOR
    [[maybe_unused]] static void set_field_SENTENCE_SEPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "NARRATION_SEPARATOR", "field_33850", "SENTENCE_SEPARATOR", "f_178389_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#ELLIPSIS
    [[maybe_unused]] static jobject get_field_ELLIPSIS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "ELLIPSIS", "field_39678", "ELLIPSIS", "f_238772_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#ELLIPSIS
    [[maybe_unused]] static void set_field_ELLIPSIS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "ELLIPSIS", "field_39678", "ELLIPSIS", "f_238772_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.ScreenTexts#SPACE
    [[maybe_unused]] static jobject get_field_SPACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SPACE", "field_41874", "SPACE", "f_263701_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenTexts#SPACE
    [[maybe_unused]] static void set_field_SPACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SPACE", "field_41874", "SPACE", "f_263701_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_space() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "space", "method_48320", "space", "m_264333_"), "()Lxn;");
    }

    static jobject space() {
       const auto clazz = self();
       const auto methodID = methodID_space();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_days() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "days", "method_44682", "days", "m_239422_"), "(J)Lxn;");
    }

    static jobject days(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_days();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_hours() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "hours", "method_44683", "hours", "m_240041_"), "(J)Lxn;");
    }

    static jobject hours(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hours();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_minutes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "minutes", "method_44684", "minutes", "m_239877_"), "(J)Lxn;");
    }

    static jobject minutes(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_minutes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_onOrOff() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "optionStatus", "method_36134", "onOrOff", "m_130666_"), "(Z)Lwz;");
    }

    static jobject onOrOff(const jboolean& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_onOrOff();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_composeToggleText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "optionStatus", "method_30619", "composeToggleText", "m_130663_"), "(Lwz;Z)Lxn;");
    }

    static jobject composeToggleText(const jobject& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_composeToggleText();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_composeGenericOptionText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "optionNameValue", "method_32700", "composeGenericOptionText", "m_178393_"), "(Lwz;Lwz;)Lxn;");
    }

    static jobject composeGenericOptionText(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_composeGenericOptionText();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_joinSentences() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "joinForNarration", "method_37111", "joinSentences", "m_267603_"), "([Lwz;)Lxn;");
    }

    static jobject joinSentences(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_joinSentences();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_joinLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "joinLines", "method_37110", "joinLines", "m_178396_"), "([Lwz;)Lwz;");
    }

    static jobject joinLines(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_joinLines();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__joinLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "joinLines", "method_37109", "joinLines", "m_178391_"), "(Ljava/util/Collection;)Lwz;");
    }

    static jobject _joinLines(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__joinLines();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SCREENTEXTS_HPP