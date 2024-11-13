// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_SMITHINGSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_SMITHINGSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.SmithingScreen
 * Remapped: fqe
 */
namespace SmithingScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fqe", "net/minecraft/client/gui/screens/inventory/SmithingScreen", "net/minecraft/class_4895", "net/minecraft/client/gui/screen/ingame/SmithingScreen", "net/minecraft/src/C_3679_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#ERROR_TEXTURE
    [[maybe_unused]] static jobject get_field_ERROR_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ERROR_SPRITE", "field_45498", "ERROR_TEXTURE", "f_290545_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#ERROR_TEXTURE
    [[maybe_unused]] static void set_field_ERROR_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ERROR_SPRITE", "field_45498", "ERROR_TEXTURE", "f_290545_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM_TEXTURE
    [[maybe_unused]] static jobject get_field_EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM", "field_42052", "EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM_TEXTURE", "f_265861_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM_TEXTURE
    [[maybe_unused]] static void set_field_EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM", "field_42052", "EMPTY_SLOT_SMITHING_TEMPLATE_ARMOR_TRIM_TEXTURE", "f_265861_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE_TEXTURE
    [[maybe_unused]] static jobject get_field_EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE", "field_42053", "EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE_TEXTURE", "f_265993_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE_TEXTURE
    [[maybe_unused]] static void set_field_EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE", "field_42053", "EMPTY_SLOT_SMITHING_TEMPLATE_NETHERITE_UPGRADE_TEXTURE", "f_265993_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#MISSING_TEMPLATE_TOOLTIP
    [[maybe_unused]] static jobject get_field_MISSING_TEMPLATE_TOOLTIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "MISSING_TEMPLATE_TOOLTIP", "field_42054", "MISSING_TEMPLATE_TOOLTIP", "f_266043_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#MISSING_TEMPLATE_TOOLTIP
    [[maybe_unused]] static void set_field_MISSING_TEMPLATE_TOOLTIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "MISSING_TEMPLATE_TOOLTIP", "field_42054", "MISSING_TEMPLATE_TOOLTIP", "f_266043_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#ERROR_TOOLTIP
    [[maybe_unused]] static jobject get_field_ERROR_TOOLTIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "ERROR_TOOLTIP", "field_42055", "ERROR_TOOLTIP", "f_266014_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#ERROR_TOOLTIP
    [[maybe_unused]] static void set_field_ERROR_TOOLTIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "ERROR_TOOLTIP", "field_42055", "ERROR_TOOLTIP", "f_266014_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#EMPTY_SLOT_TEXTURES
    [[maybe_unused]] static jobject get_field_EMPTY_SLOT_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "EMPTY_SLOT_SMITHING_TEMPLATES", "field_42056", "EMPTY_SLOT_TEXTURES", "f_265883_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#EMPTY_SLOT_TEXTURES
    [[maybe_unused]] static void set_field_EMPTY_SLOT_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "EMPTY_SLOT_SMITHING_TEMPLATES", "field_42056", "EMPTY_SLOT_TEXTURES", "f_265883_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42057
    [[maybe_unused]] static jint get_field_field_42057() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("K", "TITLE_LABEL_X", "field_42057", "field_42057", "f_265886_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42057
    [[maybe_unused]] static void set_field_field_42057(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("K", "TITLE_LABEL_X", "field_42057", "field_42057", "f_265886_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42058
    [[maybe_unused]] static jint get_field_field_42058() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "TITLE_LABEL_Y", "field_42058", "field_42058", "f_266080_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42058
    [[maybe_unused]] static void set_field_field_42058(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "TITLE_LABEL_Y", "field_42058", "field_42058", "f_266080_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42059
    [[maybe_unused]] static jint get_field_field_42059() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "ERROR_ICON_WIDTH", "field_42059", "field_42059", "f_266007_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42059
    [[maybe_unused]] static void set_field_field_42059(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "ERROR_ICON_WIDTH", "field_42059", "field_42059", "f_266007_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42060
    [[maybe_unused]] static jint get_field_field_42060() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("N", "ERROR_ICON_HEIGHT", "field_42060", "field_42060", "f_265938_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42060
    [[maybe_unused]] static void set_field_field_42060(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("N", "ERROR_ICON_HEIGHT", "field_42060", "field_42060", "f_265938_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42061
    [[maybe_unused]] static jint get_field_field_42061() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("O", "ERROR_ICON_X", "field_42061", "field_42061", "f_266104_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42061
    [[maybe_unused]] static void set_field_field_42061(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("O", "ERROR_ICON_X", "field_42061", "field_42061", "f_266104_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42062
    [[maybe_unused]] static jint get_field_field_42062() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("P", "ERROR_ICON_Y", "field_42062", "field_42062", "f_265904_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42062
    [[maybe_unused]] static void set_field_field_42062(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("P", "ERROR_ICON_Y", "field_42062", "field_42062", "f_265904_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42063
    [[maybe_unused]] static jint get_field_field_42063() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("Q", "TOOLTIP_WIDTH", "field_42063", "field_42063", "f_265934_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42063
    [[maybe_unused]] static void set_field_field_42063(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("Q", "TOOLTIP_WIDTH", "field_42063", "field_42063", "f_265934_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42068
    [[maybe_unused]] static jint get_field_field_42068() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("R", "ARMOR_STAND_Y_ROT", "field_42068", "field_42068", "f_265852_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42068
    [[maybe_unused]] static void set_field_field_42068(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("R", "ARMOR_STAND_Y_ROT", "field_42068", "field_42068", "f_265852_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42047
    [[maybe_unused]] static jint get_field_field_42047() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("S", "ARMOR_STAND_X_ROT", "field_42047", "field_42047", "f_266067_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42047
    [[maybe_unused]] static void set_field_field_42047(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("S", "ARMOR_STAND_X_ROT", "field_42047", "field_42047", "f_266067_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_45497
    [[maybe_unused]] static jobject get_field_field_45497() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("T", "ARMOR_STAND_TRANSLATION", "field_45497", "field_45497", "f_290401_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_45497
    [[maybe_unused]] static void set_field_field_45497(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("T", "ARMOR_STAND_TRANSLATION", "field_45497", "field_45497", "f_290401_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#ARMOR_STAND_ROTATION
    [[maybe_unused]] static jobject get_field_ARMOR_STAND_ROTATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("U", "ARMOR_STAND_ANGLE", "field_42048", "ARMOR_STAND_ROTATION", "f_265867_"), "Lorg/joml/Quaternionf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#ARMOR_STAND_ROTATION
    [[maybe_unused]] static void set_field_ARMOR_STAND_ROTATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("U", "ARMOR_STAND_ANGLE", "field_42048", "ARMOR_STAND_ROTATION", "f_265867_"), "Lorg/joml/Quaternionf;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42049
    [[maybe_unused]] static jint get_field_field_42049() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("V", "ARMOR_STAND_SCALE", "field_42049", "field_42049", "f_266017_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42049
    [[maybe_unused]] static void set_field_field_42049(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("V", "ARMOR_STAND_SCALE", "field_42049", "field_42049", "f_266017_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42050
    [[maybe_unused]] static jint get_field_field_42050() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("W", "ARMOR_STAND_OFFSET_Y", "field_42050", "field_42050", "f_265925_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42050
    [[maybe_unused]] static void set_field_field_42050(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("W", "ARMOR_STAND_OFFSET_Y", "field_42050", "field_42050", "f_265925_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42051
    [[maybe_unused]] static jint get_field_field_42051() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("X", "ARMOR_STAND_OFFSET_X", "field_42051", "field_42051", "f_266081_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#field_42051
    [[maybe_unused]] static void set_field_field_42051(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("X", "ARMOR_STAND_OFFSET_X", "field_42051", "field_42051", "f_266081_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.SmithingScreen#templateSlotIcon
    static jobject get_field_templateSlotIcon(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("Y", "templateIcon", "field_42064", "templateSlotIcon", "f_265945_"), "Lfpj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#templateSlotIcon
    static void set_field_templateSlotIcon(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("Y", "templateIcon", "field_42064", "templateSlotIcon", "f_265945_"), "Lfpj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.SmithingScreen#baseSlotIcon
    static jobject get_field_baseSlotIcon(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("Z", "baseIcon", "field_42065", "baseSlotIcon", "f_265973_"), "Lfpj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#baseSlotIcon
    static void set_field_baseSlotIcon(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("Z", "baseIcon", "field_42065", "baseSlotIcon", "f_265973_"), "Lfpj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.SmithingScreen#additionsSlotIcon
    static jobject get_field_additionsSlotIcon(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aa", "additionalIcon", "field_42066", "additionsSlotIcon", "f_265920_"), "Lfpj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#additionsSlotIcon
    static void set_field_additionsSlotIcon(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aa", "additionalIcon", "field_42066", "additionsSlotIcon", "f_265920_"), "Lfpj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.SmithingScreen#armorStand
    static jobject get_field_armorStand(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ab", "armorStandPreview", "field_42067", "armorStand", "f_266031_"), "Lciw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SmithingScreen#armorStand
    static void set_field_armorStand(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ab", "armorStandPreview", "field_42067", "armorStand", "f_266031_"), "Lciw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "subInit", "method_25445", "setup", "m_5653_"), "()V");
    }

    static void setup(const jobject& obj) {
                
       const auto methodID = methodID_setup();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_handledScreenTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "containerTick", "method_37432", "handledScreenTick", "m_181908_"), "()V");
    }

    static void handledScreenTick(const jobject& obj) {
                
       const auto methodID = methodID_handledScreenTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSmithingTemplate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "getTemplateItem", "method_48473", "getSmithingTemplate", "m_266259_"), "()Ljava/util/Optional;");
    }

    static jobject getSmithingTemplate(const jobject& obj) {
                
       const auto methodID = methodID_getSmithingTemplate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBg", "method_2389", "drawBackground", "m_7286_"), "(Lfhz;FII)V");
    }

    static void drawBackground(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_drawBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onSlotUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotChanged", "method_7635", "onSlotUpdate", "m_7934_"), "(Lcpu;ILcuq;)V");
    }

    static void onSlotUpdate(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onSlotUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_equipArmorStand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateArmorStandPreview", "method_48641", "equipArmorStand", "m_267709_"), "(Lcuq;)V");
    }

    static void equipArmorStand(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_equipArmorStand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_drawInvalidRecipeArrow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderErrorIcon", "method_48467", "drawInvalidRecipeArrow", "m_266390_"), "(Lfhz;II)V");
    }

    static void drawInvalidRecipeArrow(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_drawInvalidRecipeArrow();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_renderSlotTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "renderOnboardingTooltips", "method_48476", "renderSlotTooltip", "m_266311_"), "(Lfhz;II)V");
    }

    static void renderSlotTooltip(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_renderSlotTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_hasInvalidRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("G", "hasRecipeError", "method_48474", "hasInvalidRecipe", "m_266329_"), "()Z");
    }

    static jboolean hasInvalidRecipe(const jobject& obj) {
                
       const auto methodID = methodID_hasInvalidRecipe();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_SMITHINGSCREEN_HPP