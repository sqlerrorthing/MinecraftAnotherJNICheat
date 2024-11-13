// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_FILEDOWNLOAD$PROGRESSLISTENER_HPP
#define NET_MINECRAFT_CLIENT_REALMS_FILEDOWNLOAD$PROGRESSLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.FileDownload$ProgressListener
 * Remapped: fbv$b
 */
namespace FileDownload$ProgressListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbv$b", "com/mojang/realmsclient/client/FileDownload$ProgressListener", "net/minecraft/class_4333$class_4335", "net/minecraft/client/realms/FileDownload$ProgressListener", "net/minecraft/src/C_3213_$C_3216_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.FileDownload$ProgressListener#worldName
    static jobject get_field_worldName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "worldName", "field_19541", "worldName", "f_87021_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.FileDownload$ProgressListener#worldName
    static void set_field_worldName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "worldName", "field_19541", "worldName", "f_87021_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.FileDownload$ProgressListener#tempFile
    static jobject get_field_tempFile(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tempFile", "field_19542", "tempFile", "f_87022_"), "Ljava/io/File;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.FileDownload$ProgressListener#tempFile
    static void set_field_tempFile(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tempFile", "field_19542", "tempFile", "f_87022_"), "Ljava/io/File;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.FileDownload$ProgressListener#levelStorageSource
    static jobject get_field_levelStorageSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "levelStorageSource", "field_19543", "levelStorageSource", "f_87023_"), "Lerf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.FileDownload$ProgressListener#levelStorageSource
    static void set_field_levelStorageSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "levelStorageSource", "field_19543", "levelStorageSource", "f_87023_"), "Lerf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.FileDownload$ProgressListener#downloadStatus
    static jobject get_field_downloadStatus(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "downloadStatus", "field_19544", "downloadStatus", "f_87024_"), "Lfea$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.FileDownload$ProgressListener#downloadStatus
    static void set_field_downloadStatus(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "downloadStatus", "field_19544", "downloadStatus", "f_87024_"), "Lfea$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_actionPerformed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("actionPerformed", "actionPerformed", "actionPerformed", "actionPerformed", "actionPerformed"), "(Ljava/awt/event/ActionEvent;)V");
    }

    static void actionPerformed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_actionPerformed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_FILEDOWNLOAD$PROGRESSLISTENER_HPP