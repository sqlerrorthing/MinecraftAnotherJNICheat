// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_HORSESCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_HORSESCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.HorseScreen
 * Remapped: fps
 */
namespace HorseScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fps", "net/minecraft/client/gui/screens/inventory/HorseInventoryScreen", "net/minecraft/class_491", "net/minecraft/client/gui/screen/ingame/HorseScreen", "net/minecraft/src/C_3663_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#CHEST_SLOTS_TEXTURE
    [[maybe_unused]] static jobject get_field_CHEST_SLOTS_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "CHEST_SLOTS_SPRITE", "field_45473", "CHEST_SLOTS_TEXTURE", "f_290705_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#CHEST_SLOTS_TEXTURE
    [[maybe_unused]] static void set_field_CHEST_SLOTS_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "CHEST_SLOTS_SPRITE", "field_45473", "CHEST_SLOTS_TEXTURE", "f_290705_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#SADDLE_SLOT_TEXTURE
    [[maybe_unused]] static jobject get_field_SADDLE_SLOT_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "SADDLE_SLOT_SPRITE", "field_45474", "SADDLE_SLOT_TEXTURE", "f_290344_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#SADDLE_SLOT_TEXTURE
    [[maybe_unused]] static void set_field_SADDLE_SLOT_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "SADDLE_SLOT_SPRITE", "field_45474", "SADDLE_SLOT_TEXTURE", "f_290344_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#LLAMA_ARMOR_SLOT_TEXTURE
    [[maybe_unused]] static jobject get_field_LLAMA_ARMOR_SLOT_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "LLAMA_ARMOR_SLOT_SPRITE", "field_45475", "LLAMA_ARMOR_SLOT_TEXTURE", "f_290913_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#LLAMA_ARMOR_SLOT_TEXTURE
    [[maybe_unused]] static void set_field_LLAMA_ARMOR_SLOT_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "LLAMA_ARMOR_SLOT_SPRITE", "field_45475", "LLAMA_ARMOR_SLOT_TEXTURE", "f_290913_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#ARMOR_SLOT_TEXTURE
    [[maybe_unused]] static jobject get_field_ARMOR_SLOT_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "ARMOR_SLOT_SPRITE", "field_45472", "ARMOR_SLOT_TEXTURE", "f_291563_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#ARMOR_SLOT_TEXTURE
    [[maybe_unused]] static void set_field_ARMOR_SLOT_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "ARMOR_SLOT_SPRITE", "field_45472", "ARMOR_SLOT_TEXTURE", "f_291563_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "HORSE_INVENTORY_LOCATION", "field_2937", "TEXTURE", "f_98811_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "HORSE_INVENTORY_LOCATION", "field_2937", "TEXTURE", "f_98811_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.HorseScreen#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "horse", "field_2941", "entity", "f_98812_"), "Lchi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "horse", "field_2941", "entity", "f_98812_"), "Lchi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.HorseScreen#slotColumnCount
    static jint get_field_slotColumnCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "inventoryColumns", "field_52253", "slotColumnCount", "f_337403_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#slotColumnCount
    static void set_field_slotColumnCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "inventoryColumns", "field_52253", "slotColumnCount", "f_337403_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.HorseScreen#mouseX
    static jfloat get_field_mouseX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "xMouse", "field_2939", "mouseX", "f_98813_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#mouseX
    static void set_field_mouseX(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "xMouse", "field_2939", "mouseX", "f_98813_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.HorseScreen#mouseY
    static jfloat get_field_mouseY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "yMouse", "field_2938", "mouseY", "f_98814_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HorseScreen#mouseY
    static void set_field_mouseY(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "yMouse", "field_2938", "mouseY", "f_98814_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_drawBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBg", "method_2389", "drawBackground", "m_7286_"), "(Lfhz;FII)V");
    }

    static void drawBackground(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_drawBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_HORSESCREEN_HPP