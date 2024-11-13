// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN$PENDINGINVITATIONSELECTIONLISTENTRY_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN$PENDINGINVITATIONSELECTIONLISTENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry
 * Remapped: feh$a
 */
namespace RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("feh$a", "com/mojang/realmsclient/gui/screens/RealmsPendingInvitesScreen$Entry", "net/minecraft/class_4401$class_4403", "net/minecraft/client/realms/gui/screen/RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry", "net/minecraft/src/C_3307_$C_3311_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry#field_32123
    [[maybe_unused]] static jint get_field_field_32123() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TEXT_LEFT", "field_32123", "field_32123", "f_167427_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry#field_32123
    [[maybe_unused]] static void set_field_field_32123(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TEXT_LEFT", "field_32123", "field_32123", "f_167427_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry#mPendingInvite
    static jobject get_field_mPendingInvite(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pendingInvite", "field_19953", "mPendingInvite", "f_88992_"), "Lfci;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry#mPendingInvite
    static void set_field_mPendingInvite(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pendingInvite", "field_19953", "mPendingInvite", "f_88992_"), "Lfci;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry#buttons
    static jobject get_field_buttons(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rowButtons", "field_19955", "buttons", "f_88993_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionListEntry#buttons
    static void set_field_buttons(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rowButtons", "field_19955", "buttons", "f_88993_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_renderPendingInvitationItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderPendingInvitationItem", "method_21324", "renderPendingInvitationItem", "m_280468_"), "(Lfhz;Lfci;IIII)V");
    }

    static void renderPendingInvitationItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_renderPendingInvitationItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNarration", "method_37006", "getNarration", "m_142172_"), "()Lwz;");
    }

    static jobject getNarration(const jobject& obj) {
                
       const auto methodID = methodID_getNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN$PENDINGINVITATIONSELECTIONLISTENTRY_HPP