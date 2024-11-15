// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBACKUPSCREEN$BACKUPOBJECTSELECTIONLISTENTRY_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBACKUPSCREEN$BACKUPOBJECTSELECTIONLISTENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry
 * Remapped: fdu$b
 */
namespace RealmsBackupScreen$BackupObjectSelectionListEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdu$b", "com/mojang/realmsclient/gui/screens/RealmsBackupScreen$Entry", "net/minecraft/class_4381$class_4383", "net/minecraft/client/realms/gui/screen/RealmsBackupScreen$BackupObjectSelectionListEntry", "net/minecraft/src/C_3286_$C_3289_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#field_44525
    [[maybe_unused]] static jint get_field_field_44525() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "Y_PADDING", "field_44525", "field_44525", "f_278395_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#field_44525
    [[maybe_unused]] static void set_field_field_44525(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "Y_PADDING", "field_44525", "field_44525", "f_278395_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#mBackup
    static jobject get_field_mBackup(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "backup", "field_19761", "mBackup", "f_88247_"), "Lfce;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#mBackup
    static void set_field_mBackup(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "backup", "field_19761", "mBackup", "f_88247_"), "Lfce;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#restoreButton
    static jobject get_field_restoreButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "restoreButton", "field_49452", "restoreButton", "f_278378_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#restoreButton
    static void set_field_restoreButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "restoreButton", "field_49452", "restoreButton", "f_278378_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#changesButton
    static jobject get_field_changesButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "changesButton", "field_49451", "changesButton", "f_278470_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#changesButton
    static void set_field_changesButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "changesButton", "field_49451", "changesButton", "f_278470_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#buttons
    static jobject get_field_buttons(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "children", "field_44527", "buttons", "f_278436_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupScreen$BackupObjectSelectionListEntry#buttons
    static void set_field_buttons(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "children", "field_44527", "buttons", "f_278436_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_updateChangeList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "populateChangeList", "method_51239", "updateChangeList", "m_278830_"), "(Lfce;)V");
    }

    static void updateChangeList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateChangeList();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addToChangeList", "method_51241", "addChange", "m_278753_"), "(Ljava/lang/String;)V");
    }

    static void addChange(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLastModifiedDate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getShortBackupDate", "method_57672", "getLastModifiedDate", "m_323206_"), "()Ljava/lang/String;");
    }

    static jobject getLastModifiedDate(const jobject& obj) {
                
       const auto methodID = methodID_getLastModifiedDate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_restore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "restoreClicked", "method_57674", "restore", "m_323294_"), "()V");
    }

    static void restore(const jobject& obj) {
                
       const auto methodID = methodID_restore();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_children() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aK_", "children", "method_25396", "children", "m_6702_"), "()Ljava/util/List;");
    }

    static jobject children(const jobject& obj) {
                
       const auto methodID = methodID_children();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_selectableChildren() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "narratables", "method_37025", "selectableChildren", "m_142437_"), "()Ljava/util/List;");
    }

    static jobject selectableChildren(const jobject& obj) {
                
       const auto methodID = methodID_selectableChildren();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_getMediumDatePresentation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMediumDatePresentation", "method_21176", "getMediumDatePresentation", "m_88275_"), "(Ljava/util/Date;)Ljava/lang/String;");
    }

    static jobject getMediumDatePresentation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMediumDatePresentation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBACKUPSCREEN$BACKUPOBJECTSELECTIONLISTENTRY_HPP