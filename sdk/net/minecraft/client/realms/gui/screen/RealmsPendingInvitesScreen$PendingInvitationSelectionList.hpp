// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN$PENDINGINVITATIONSELECTIONLIST_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN$PENDINGINVITATIONSELECTIONLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsPendingInvitesScreen$PendingInvitationSelectionList
 * Remapped: feh$b
 */
namespace RealmsPendingInvitesScreen$PendingInvitationSelectionList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("feh$b", "com/mojang/realmsclient/gui/screens/RealmsPendingInvitesScreen$PendingInvitationSelectionList", "net/minecraft/class_4401$class_4402", "net/minecraft/client/realms/gui/screen/RealmsPendingInvitesScreen$PendingInvitationSelectionList", "net/minecraft/src/C_3307_$C_3314_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_removeAtIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeAtIndex", "method_21321", "removeAtIndex", "m_89057_"), "(I)V");
    }

    static void removeAtIndex(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_removeAtIndex();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMaxPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMaxPosition", "method_25317", "getMaxPosition", "m_5775_"), "()I");
    }

    static jint getMaxPosition(const jobject& obj) {
                
       const auto methodID = methodID_getMaxPosition();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRowWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRowWidth", "method_25322", "getRowWidth", "m_5759_"), "()I");
    }

    static jint getRowWidth(const jobject& obj) {
                
       const auto methodID = methodID_getRowWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setSelected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "selectItem", "method_25489", "setSelected", "m_7109_"), "(I)V");
    }

    static void setSelected(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setSelected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_selectInviteListItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "selectInviteListItem", "method_21322", "selectInviteListItem", "m_89060_"), "(I)V");
    }

    static void selectInviteListItem(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_selectInviteListItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__setSelected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_25188", "setSelected", "m_6987_"), "(Lfeh$a;)V");
    }

    static void _setSelected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__setSelected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPENDINGINVITESSCREEN$PENDINGINVITATIONSELECTIONLIST_HPP