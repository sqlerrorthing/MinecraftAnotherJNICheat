// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_REALMSWORLDSLOTBUTTON$STATE_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_REALMSWORLDSLOTBUTTON$STATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.RealmsWorldSlotButton$State
 * Remapped: fdp$b
 */
namespace RealmsWorldSlotButton$State {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdp$b", "com/mojang/realmsclient/gui/RealmsWorldSlotButton$State", "net/minecraft/class_4367$class_4370", "net/minecraft/client/realms/gui/RealmsWorldSlotButton$State", "net/minecraft/src/C_3279_$C_3281_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#isCurrentlyActiveSlot
    static jboolean get_field_isCurrentlyActiveSlot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isCurrentlyActiveSlot", "field_19682", "isCurrentlyActiveSlot", "f_87983_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#isCurrentlyActiveSlot
    static void set_field_isCurrentlyActiveSlot(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isCurrentlyActiveSlot", "field_19682", "isCurrentlyActiveSlot", "f_87983_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#slotName
    static jobject get_field_slotName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "slotName", "field_19683", "slotName", "f_87984_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#slotName
    static void set_field_slotName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "slotName", "field_19683", "slotName", "f_87984_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#version
    static jobject get_field_version(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "slotVersion", "field_46848", "version", "f_302212_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#version
    static void set_field_version(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "slotVersion", "field_46848", "version", "f_302212_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#compatibility
    static jobject get_field_compatibility(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "compatibility", "field_46849", "compatibility", "f_303774_"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#compatibility
    static void set_field_compatibility(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "compatibility", "field_46849", "compatibility", "f_303774_"), "Lfcp$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#imageId
    static jlong get_field_imageId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "imageId", "field_19684", "imageId", "f_87985_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#imageId
    static void set_field_imageId(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "imageId", "field_19684", "imageId", "f_87985_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#image
    static jobject get_field_image(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "image", "field_19685", "image", "f_87986_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#image
    static void set_field_image(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "image", "field_19685", "image", "f_87986_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#empty
    static jboolean get_field_empty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "empty", "field_19686", "empty", "f_87980_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#empty
    static void set_field_empty(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "empty", "field_19686", "empty", "f_87980_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#minigame
    static jboolean get_field_minigame(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minigame", "field_19687", "minigame", "f_87981_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#minigame
    static void set_field_minigame(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minigame", "field_19687", "minigame", "f_87981_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#action
    static jobject get_field_action(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "action", "field_19688", "action", "f_87982_"), "Lfdp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.RealmsWorldSlotButton$State#action
    static void set_field_action(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "action", "field_19688", "action", "f_87982_"), "Lfdp$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_REALMSWORLDSLOTBUTTON$STATE_HPP