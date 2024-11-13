// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TOAST_SYSTEMTOAST$TYPE_HPP
#define NET_MINECRAFT_CLIENT_TOAST_SYSTEMTOAST$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.toast.SystemToast$Type
 * Remapped: fku$a
 */
namespace SystemToast$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fku$a", "net/minecraft/client/gui/components/toasts/SystemToast$SystemToastId", "net/minecraft/class_370$class_9037", "net/minecraft/client/toast/SystemToast$Type", "net/minecraft/src/C_3499_$C_301970_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#NARRATOR_TOGGLE
    [[maybe_unused]] static jobject get_field_NARRATOR_TOGGLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NARRATOR_TOGGLE", "field_47583", "NARRATOR_TOGGLE", "f_303336_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#NARRATOR_TOGGLE
    [[maybe_unused]] static void set_field_NARRATOR_TOGGLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NARRATOR_TOGGLE", "field_47583", "NARRATOR_TOGGLE", "f_303336_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#WORLD_BACKUP
    [[maybe_unused]] static jobject get_field_WORLD_BACKUP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORLD_BACKUP", "field_47584", "WORLD_BACKUP", "f_302937_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#WORLD_BACKUP
    [[maybe_unused]] static void set_field_WORLD_BACKUP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORLD_BACKUP", "field_47584", "WORLD_BACKUP", "f_302937_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#PACK_LOAD_FAILURE
    [[maybe_unused]] static jobject get_field_PACK_LOAD_FAILURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PACK_LOAD_FAILURE", "field_47585", "PACK_LOAD_FAILURE", "f_302887_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#PACK_LOAD_FAILURE
    [[maybe_unused]] static void set_field_PACK_LOAD_FAILURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PACK_LOAD_FAILURE", "field_47585", "PACK_LOAD_FAILURE", "f_302887_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#WORLD_ACCESS_FAILURE
    [[maybe_unused]] static jobject get_field_WORLD_ACCESS_FAILURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WORLD_ACCESS_FAILURE", "field_47586", "WORLD_ACCESS_FAILURE", "f_302792_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#WORLD_ACCESS_FAILURE
    [[maybe_unused]] static void set_field_WORLD_ACCESS_FAILURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WORLD_ACCESS_FAILURE", "field_47586", "WORLD_ACCESS_FAILURE", "f_302792_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#PACK_COPY_FAILURE
    [[maybe_unused]] static jobject get_field_PACK_COPY_FAILURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PACK_COPY_FAILURE", "field_47587", "PACK_COPY_FAILURE", "f_302870_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#PACK_COPY_FAILURE
    [[maybe_unused]] static void set_field_PACK_COPY_FAILURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PACK_COPY_FAILURE", "field_47587", "PACK_COPY_FAILURE", "f_302870_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#FILE_DROP_FAILURE
    [[maybe_unused]] static jobject get_field_FILE_DROP_FAILURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FILE_DROP_FAILURE", "field_52128", "FILE_DROP_FAILURE", "f_336918_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#FILE_DROP_FAILURE
    [[maybe_unused]] static void set_field_FILE_DROP_FAILURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FILE_DROP_FAILURE", "field_52128", "FILE_DROP_FAILURE", "f_336918_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#PERIODIC_NOTIFICATION
    [[maybe_unused]] static jobject get_field_PERIODIC_NOTIFICATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "PERIODIC_NOTIFICATION", "field_47588", "PERIODIC_NOTIFICATION", "f_302682_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#PERIODIC_NOTIFICATION
    [[maybe_unused]] static void set_field_PERIODIC_NOTIFICATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "PERIODIC_NOTIFICATION", "field_47588", "PERIODIC_NOTIFICATION", "f_302682_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#LOW_DISK_SPACE
    [[maybe_unused]] static jobject get_field_LOW_DISK_SPACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOW_DISK_SPACE", "field_49487", "LOW_DISK_SPACE", "f_315009_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#LOW_DISK_SPACE
    [[maybe_unused]] static void set_field_LOW_DISK_SPACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOW_DISK_SPACE", "field_49487", "LOW_DISK_SPACE", "f_315009_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#CHUNK_LOAD_FAILURE
    [[maybe_unused]] static jobject get_field_CHUNK_LOAD_FAILURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CHUNK_LOAD_FAILURE", "field_49488", "CHUNK_LOAD_FAILURE", "f_316454_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#CHUNK_LOAD_FAILURE
    [[maybe_unused]] static void set_field_CHUNK_LOAD_FAILURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CHUNK_LOAD_FAILURE", "field_49488", "CHUNK_LOAD_FAILURE", "f_316454_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#CHUNK_SAVE_FAILURE
    [[maybe_unused]] static jobject get_field_CHUNK_SAVE_FAILURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "CHUNK_SAVE_FAILURE", "field_49489", "CHUNK_SAVE_FAILURE", "f_316449_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#CHUNK_SAVE_FAILURE
    [[maybe_unused]] static void set_field_CHUNK_SAVE_FAILURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "CHUNK_SAVE_FAILURE", "field_49489", "CHUNK_SAVE_FAILURE", "f_316449_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.toast.SystemToast$Type#UNSECURE_SERVER_WARNING
    [[maybe_unused]] static jobject get_field_UNSECURE_SERVER_WARNING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "UNSECURE_SERVER_WARNING", "field_47589", "UNSECURE_SERVER_WARNING", "f_302594_"), "Lfku$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.toast.SystemToast$Type#UNSECURE_SERVER_WARNING
    [[maybe_unused]] static void set_field_UNSECURE_SERVER_WARNING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "UNSECURE_SERVER_WARNING", "field_47589", "UNSECURE_SERVER_WARNING", "f_302594_"), "Lfku$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.client.toast.SystemToast$Type#displayDuration
    static jlong get_field_displayDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "displayTime", "field_47590", "displayDuration", "f_232547_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.toast.SystemToast$Type#displayDuration
    static void set_field_displayDuration(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "displayTime", "field_47590", "displayDuration", "f_232547_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_TOAST_SYSTEMTOAST$TYPE_HPP