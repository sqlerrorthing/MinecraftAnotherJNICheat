// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBACKUPINFOSCREEN$BACKUPINFOLISTENTRY_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBACKUPINFOSCREEN$BACKUPINFOLISTENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry
 * Remapped: fdt$b
 */
namespace RealmsBackupInfoScreen$BackupInfoListEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdt$b", "com/mojang/realmsclient/gui/screens/RealmsBackupInfoScreen$BackupInfoListEntry", "net/minecraft/class_4379$class_5344", "net/minecraft/client/realms/gui/screen/RealmsBackupInfoScreen$BackupInfoListEntry", "net/minecraft/src/C_3283_$C_3285_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#TEMPLATE_NAME_TEXT
    [[maybe_unused]] static jobject get_field_TEMPLATE_NAME_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TEMPLATE_NAME", "field_44895", "TEMPLATE_NAME_TEXT", "f_286974_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#TEMPLATE_NAME_TEXT
    [[maybe_unused]] static void set_field_TEMPLATE_NAME_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TEMPLATE_NAME", "field_44895", "TEMPLATE_NAME_TEXT", "f_286974_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#GAME_DIFFICULTY_TEXT
    [[maybe_unused]] static jobject get_field_GAME_DIFFICULTY_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GAME_DIFFICULTY", "field_44896", "GAME_DIFFICULTY_TEXT", "f_286978_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#GAME_DIFFICULTY_TEXT
    [[maybe_unused]] static void set_field_GAME_DIFFICULTY_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GAME_DIFFICULTY", "field_44896", "GAME_DIFFICULTY_TEXT", "f_286978_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#NAME_TEXT
    [[maybe_unused]] static jobject get_field_NAME_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NAME", "field_44897", "NAME_TEXT", "f_286935_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#NAME_TEXT
    [[maybe_unused]] static void set_field_NAME_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NAME", "field_44897", "NAME_TEXT", "f_286935_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#GAME_SERVER_VERSION_TEXT
    [[maybe_unused]] static jobject get_field_GAME_SERVER_VERSION_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GAME_SERVER_VERSION", "field_44898", "GAME_SERVER_VERSION_TEXT", "f_286960_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#GAME_SERVER_VERSION_TEXT
    [[maybe_unused]] static void set_field_GAME_SERVER_VERSION_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GAME_SERVER_VERSION", "field_44898", "GAME_SERVER_VERSION_TEXT", "f_286960_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#UPLOADED_TEXT
    [[maybe_unused]] static jobject get_field_UPLOADED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "UPLOADED", "field_44899", "UPLOADED_TEXT", "f_286961_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#UPLOADED_TEXT
    [[maybe_unused]] static void set_field_UPLOADED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "UPLOADED", "field_44899", "UPLOADED_TEXT", "f_286961_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#ENABLED_PACK_TEXT
    [[maybe_unused]] static jobject get_field_ENABLED_PACK_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ENABLED_PACK", "field_44900", "ENABLED_PACK_TEXT", "f_286970_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#ENABLED_PACK_TEXT
    [[maybe_unused]] static void set_field_ENABLED_PACK_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ENABLED_PACK", "field_44900", "ENABLED_PACK_TEXT", "f_286970_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#DESCRIPTION_TEXT
    [[maybe_unused]] static jobject get_field_DESCRIPTION_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DESCRIPTION", "field_44901", "DESCRIPTION_TEXT", "f_286952_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#DESCRIPTION_TEXT
    [[maybe_unused]] static void set_field_DESCRIPTION_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DESCRIPTION", "field_44901", "DESCRIPTION_TEXT", "f_286952_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#GAME_MODE_TEXT
    [[maybe_unused]] static jobject get_field_GAME_MODE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GAME_MODE", "field_44902", "GAME_MODE_TEXT", "f_286990_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#GAME_MODE_TEXT
    [[maybe_unused]] static void set_field_GAME_MODE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GAME_MODE", "field_44902", "GAME_MODE_TEXT", "f_286990_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#SEED_TEXT
    [[maybe_unused]] static jobject get_field_SEED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SEED", "field_44903", "SEED_TEXT", "f_286941_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#SEED_TEXT
    [[maybe_unused]] static void set_field_SEED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SEED", "field_44903", "SEED_TEXT", "f_286941_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#WORLD_TYPE_TEXT
    [[maybe_unused]] static jobject get_field_WORLD_TYPE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "WORLD_TYPE", "field_44904", "WORLD_TYPE_TEXT", "f_286932_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#WORLD_TYPE_TEXT
    [[maybe_unused]] static void set_field_WORLD_TYPE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "WORLD_TYPE", "field_44904", "WORLD_TYPE_TEXT", "f_286932_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#UNDEFINED_TEXT
    [[maybe_unused]] static jobject get_field_UNDEFINED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "UNDEFINED", "field_44905", "UNDEFINED_TEXT", "f_287001_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#UNDEFINED_TEXT
    [[maybe_unused]] static void set_field_UNDEFINED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "UNDEFINED", "field_44905", "UNDEFINED_TEXT", "f_287001_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "key", "field_25258", "key", "f_88087_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "key", "field_25258", "key", "f_88087_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "value", "field_25259", "value", "f_88088_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBackupInfoScreen$BackupInfoListEntry#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "value", "field_25259", "value", "f_88088_"), "Ljava/lang/String;");
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
    
    static jmethodID methodID_getTextFromKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "translateKey", "method_51886", "getTextFromKey", "m_287178_"), "(Ljava/lang/String;)Lwz;");
    }

    static jobject getTextFromKey(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTextFromKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
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

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBACKUPINFOSCREEN$BACKUPINFOLISTENTRY_HPP