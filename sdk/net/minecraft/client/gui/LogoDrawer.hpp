// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_LOGODRAWER_HPP
#define NET_MINECRAFT_CLIENT_GUI_LOGODRAWER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.LogoDrawer
 * Remapped: fjd
 */
namespace LogoDrawer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjd", "net/minecraft/client/gui/components/LogoRenderer", "net/minecraft/class_8020", "net/minecraft/client/gui/LogoDrawer", "net/minecraft/src/C_263613_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_TEXTURE
    [[maybe_unused]] static jobject get_field_LOGO_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MINECRAFT_LOGO", "field_41805", "LOGO_TEXTURE", "f_263712_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_TEXTURE
    [[maybe_unused]] static void set_field_LOGO_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MINECRAFT_LOGO", "field_41805", "LOGO_TEXTURE", "f_263712_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.LogoDrawer#MINCERAFT_TEXTURE
    [[maybe_unused]] static jobject get_field_MINCERAFT_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EASTER_EGG_LOGO", "field_44540", "MINCERAFT_TEXTURE", "f_278419_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.LogoDrawer#MINCERAFT_TEXTURE
    [[maybe_unused]] static void set_field_MINCERAFT_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EASTER_EGG_LOGO", "field_44540", "MINCERAFT_TEXTURE", "f_278419_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.LogoDrawer#EDITION_TEXTURE
    [[maybe_unused]] static jobject get_field_EDITION_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MINECRAFT_EDITION", "field_41806", "EDITION_TEXTURE", "f_263806_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.LogoDrawer#EDITION_TEXTURE
    [[maybe_unused]] static void set_field_EDITION_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MINECRAFT_EDITION", "field_41806", "EDITION_TEXTURE", "f_263806_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_REGION_WIDTH
    [[maybe_unused]] static jint get_field_LOGO_REGION_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGO_WIDTH", "field_41807", "LOGO_REGION_WIDTH", "f_263835_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_REGION_WIDTH
    [[maybe_unused]] static void set_field_LOGO_REGION_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGO_WIDTH", "field_41807", "LOGO_REGION_WIDTH", "f_263835_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_REGION_HEIGHT
    [[maybe_unused]] static jint get_field_LOGO_REGION_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOGO_HEIGHT", "field_41808", "LOGO_REGION_HEIGHT", "f_263775_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_REGION_HEIGHT
    [[maybe_unused]] static void set_field_LOGO_REGION_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOGO_HEIGHT", "field_41808", "LOGO_REGION_HEIGHT", "f_263775_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.LogoDrawer#LOGO_TEXTURE_WIDTH
    [[maybe_unused]] static jint get_field_LOGO_TEXTURE_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGO_TEXTURE_WIDTH", "field_44541", "LOGO_TEXTURE_WIDTH", "f_278428_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#LOGO_TEXTURE_WIDTH
    [[maybe_unused]] static void set_field_LOGO_TEXTURE_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGO_TEXTURE_WIDTH", "field_44541", "LOGO_TEXTURE_WIDTH", "f_278428_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.LogoDrawer#LOGO_TEXTURE_HEIGHT
    [[maybe_unused]] static jint get_field_LOGO_TEXTURE_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOGO_TEXTURE_HEIGHT", "field_44542", "LOGO_TEXTURE_HEIGHT", "f_278414_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#LOGO_TEXTURE_HEIGHT
    [[maybe_unused]] static void set_field_LOGO_TEXTURE_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOGO_TEXTURE_HEIGHT", "field_44542", "LOGO_TEXTURE_HEIGHT", "f_278414_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_REGION_WIDTH
    [[maybe_unused]] static jint get_field_EDITION_REGION_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "EDITION_WIDTH", "field_44543", "EDITION_REGION_WIDTH", "f_278429_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_REGION_WIDTH
    [[maybe_unused]] static void set_field_EDITION_REGION_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "EDITION_WIDTH", "field_44543", "EDITION_REGION_WIDTH", "f_278429_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_REGION_HEIGHT
    [[maybe_unused]] static jint get_field_EDITION_REGION_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "EDITION_HEIGHT", "field_44544", "EDITION_REGION_HEIGHT", "f_278399_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_REGION_HEIGHT
    [[maybe_unused]] static void set_field_EDITION_REGION_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "EDITION_HEIGHT", "field_44544", "EDITION_REGION_HEIGHT", "f_278399_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_TEXTURE_WIDTH
    [[maybe_unused]] static jint get_field_EDITION_TEXTURE_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "EDITION_TEXTURE_WIDTH", "field_44545", "EDITION_TEXTURE_WIDTH", "f_278377_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_TEXTURE_WIDTH
    [[maybe_unused]] static void set_field_EDITION_TEXTURE_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "EDITION_TEXTURE_WIDTH", "field_44545", "EDITION_TEXTURE_WIDTH", "f_278377_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_TEXTURE_HEIGHT
    [[maybe_unused]] static jint get_field_EDITION_TEXTURE_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "EDITION_TEXTURE_HEIGHT", "field_44546", "EDITION_TEXTURE_HEIGHT", "f_278401_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#EDITION_TEXTURE_HEIGHT
    [[maybe_unused]] static void set_field_EDITION_TEXTURE_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "EDITION_TEXTURE_HEIGHT", "field_44546", "EDITION_TEXTURE_HEIGHT", "f_278401_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_BASE_Y
    [[maybe_unused]] static jint get_field_LOGO_BASE_Y() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT_HEIGHT_OFFSET", "field_41809", "LOGO_BASE_Y", "f_263676_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.LogoDrawer#LOGO_BASE_Y
    [[maybe_unused]] static void set_field_LOGO_BASE_Y(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT_HEIGHT_OFFSET", "field_41809", "LOGO_BASE_Y", "f_263676_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.LogoDrawer#LOGO_AND_EDITION_OVERLAP
    [[maybe_unused]] static jint get_field_LOGO_AND_EDITION_OVERLAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "EDITION_LOGO_OVERLAP", "field_44547", "LOGO_AND_EDITION_OVERLAP", "f_278513_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#LOGO_AND_EDITION_OVERLAP
    [[maybe_unused]] static void set_field_LOGO_AND_EDITION_OVERLAP(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "EDITION_LOGO_OVERLAP", "field_44547", "LOGO_AND_EDITION_OVERLAP", "f_278513_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.LogoDrawer#minceraft
    static jboolean get_field_minceraft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "showEasterEgg", "field_41810", "minceraft", "f_263665_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#minceraft
    static void set_field_minceraft(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "showEasterEgg", "field_41810", "minceraft", "f_263665_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.LogoDrawer#ignoreAlpha
    static jboolean get_field_ignoreAlpha(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "keepLogoThroughFade", "field_41811", "ignoreAlpha", "f_263708_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LogoDrawer#ignoreAlpha
    static void set_field_ignoreAlpha(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "keepLogoThroughFade", "field_41811", "ignoreAlpha", "f_263708_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderLogo", "method_48209", "draw", "m_280037_"), "(Lfhz;IF)V");
    }

    static void draw(const jobject& obj, const jobject& arg0, const jint& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderLogo", "method_48210", "draw", "m_280118_"), "(Lfhz;IFI)V");
    }

    static void _draw(const jobject& obj, const jobject& arg0, const jint& arg1, const jfloat& arg2, const jint& arg3) {
                
       const auto methodID = methodID__draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_LOGODRAWER_HPP