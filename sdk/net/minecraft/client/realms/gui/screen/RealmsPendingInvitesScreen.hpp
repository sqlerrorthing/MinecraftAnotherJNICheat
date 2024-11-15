// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen
 * Remapped: feh
 */
namespace RealmsPendingInvitesScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("feh", "com/mojang/realmsclient/gui/screens/RealmsPendingInvitesScreen", "net/minecraft/class_4401", "net/minecraft/client/realms/gui/screen/RealmsPendingInvitesScreen", "net/minecraft/src/C_3307_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#ACCEPT_HIGHLIGHTED_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_ACCEPT_HIGHLIGHTED_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ACCEPT_HIGHLIGHTED_SPRITE", "field_45250", "ACCEPT_HIGHLIGHTED_ICON_TEXTURE", "f_290802_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#ACCEPT_HIGHLIGHTED_ICON_TEXTURE
    [[maybe_unused]] static void set_field_ACCEPT_HIGHLIGHTED_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ACCEPT_HIGHLIGHTED_SPRITE", "field_45250", "ACCEPT_HIGHLIGHTED_ICON_TEXTURE", "f_290802_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#ACCEPT_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_ACCEPT_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ACCEPT_SPRITE", "field_22702", "ACCEPT_ICON_TEXTURE", "f_290891_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#ACCEPT_ICON_TEXTURE
    [[maybe_unused]] static void set_field_ACCEPT_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ACCEPT_SPRITE", "field_22702", "ACCEPT_ICON_TEXTURE", "f_290891_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#REJECT_HIGHLIGHTED_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_REJECT_HIGHLIGHTED_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REJECT_HIGHLIGHTED_SPRITE", "field_45251", "REJECT_HIGHLIGHTED_ICON_TEXTURE", "f_290576_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#REJECT_HIGHLIGHTED_ICON_TEXTURE
    [[maybe_unused]] static void set_field_REJECT_HIGHLIGHTED_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REJECT_HIGHLIGHTED_SPRITE", "field_45251", "REJECT_HIGHLIGHTED_ICON_TEXTURE", "f_290576_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#REJECT_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_REJECT_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "REJECT_SPRITE", "field_22703", "REJECT_ICON_TEXTURE", "f_290319_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#REJECT_ICON_TEXTURE
    [[maybe_unused]] static void set_field_REJECT_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "REJECT_SPRITE", "field_22703", "REJECT_ICON_TEXTURE", "f_290319_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "LOGGER", "field_19935", "LOGGER", "f_88874_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "LOGGER", "field_19935", "LOGGER", "f_88874_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#NO_PENDING_TEXT
    [[maybe_unused]] static jobject get_field_NO_PENDING_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "NO_PENDING_INVITES_TEXT", "field_26493", "NO_PENDING_TEXT", "f_88877_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#NO_PENDING_TEXT
    [[maybe_unused]] static void set_field_NO_PENDING_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "NO_PENDING_INVITES_TEXT", "field_26493", "NO_PENDING_TEXT", "f_88877_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#ACCEPT_TEXT
    [[maybe_unused]] static jobject get_field_ACCEPT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ACCEPT_INVITE", "field_26494", "ACCEPT_TEXT", "f_291353_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#ACCEPT_TEXT
    [[maybe_unused]] static void set_field_ACCEPT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ACCEPT_INVITE", "field_26494", "ACCEPT_TEXT", "f_291353_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#REJECT_TEXT
    [[maybe_unused]] static jobject get_field_REJECT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "REJECT_INVITE", "field_26495", "REJECT_TEXT", "f_290573_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#REJECT_TEXT
    [[maybe_unused]] static void set_field_REJECT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "REJECT_INVITE", "field_26495", "REJECT_TEXT", "f_290573_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "lastScreen", "field_19936", "parent", "f_88880_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "lastScreen", "field_19936", "parent", "f_88880_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#pendingInvites
    static jobject get_field_pendingInvites(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "pendingInvites", "field_45249", "pendingInvites", "f_290969_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#pendingInvites
    static void set_field_pendingInvites(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "pendingInvites", "field_45249", "pendingInvites", "f_290969_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#tooltip
    static jobject get_field_tooltip(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "toolTip", "field_19937", "tooltip", "f_88881_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#tooltip
    static void set_field_tooltip(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "toolTip", "field_19937", "tooltip", "f_88881_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#pendingInvitationSelectionList
    static jobject get_field_pendingInvitationSelectionList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "pendingInvitationSelectionList", "field_19939", "pendingInvitationSelectionList", "f_88883_"), "Lfeh$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#pendingInvitationSelectionList
    static void set_field_pendingInvitationSelectionList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "pendingInvitationSelectionList", "field_19939", "pendingInvitationSelectionList", "f_88883_"), "Lfeh$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#selectedInvite
    static jint get_field_selectedInvite(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "selectedInvite", "field_19941", "selectedInvite", "f_88885_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#selectedInvite
    static void set_field_selectedInvite(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "selectedInvite", "field_19941", "selectedInvite", "f_88885_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#acceptButton
    static jobject get_field_acceptButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "acceptButton", "field_19942", "acceptButton", "f_88886_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#acceptButton
    static void set_field_acceptButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "acceptButton", "field_19942", "acceptButton", "f_88886_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#rejectButton
    static jobject get_field_rejectButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "rejectButton", "field_19943", "rejectButton", "f_88887_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen#rejectButton
    static void set_field_rejectButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "rejectButton", "field_19943", "rejectButton", "f_88887_"), "Lfim;");
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
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_handle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleInvitation", "method_52672", "handle", "m_294390_"), "(IZ)V");
    }

    static void handle(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_handle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_updateButtonStates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "updateButtonStates", "method_21307", "updateButtonStates", "m_88957_"), "()V");
    }

    static void updateButtonStates(const jobject& obj) {
                
       const auto methodID = methodID_updateButtonStates();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldAcceptAndRejectButtonBeVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldAcceptAndRejectButtonBeVisible", "method_21314", "shouldAcceptAndRejectButtonBeVisible", "m_88962_"), "(I)Z");
    }

    static jboolean shouldAcceptAndRejectButtonBeVisible(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_shouldAcceptAndRejectButtonBeVisible();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN_HPP