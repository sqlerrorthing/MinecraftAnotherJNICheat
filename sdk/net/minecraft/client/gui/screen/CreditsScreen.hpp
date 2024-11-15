// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_CREDITSSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_CREDITSSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.CreditsScreen
 * Remapped: fog
 */
namespace CreditsScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fog", "net/minecraft/client/gui/screens/WinScreen", "net/minecraft/class_445", "net/minecraft/client/gui/screen/CreditsScreen", "net/minecraft/src/C_3593_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_2632", "LOGGER", "f_96863_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_2632", "LOGGER", "f_96863_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#VIGNETTE_TEXTURE
    [[maybe_unused]] static jobject get_field_VIGNETTE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VIGNETTE_LOCATION", "field_2633", "VIGNETTE_TEXTURE", "f_96866_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#VIGNETTE_TEXTURE
    [[maybe_unused]] static void set_field_VIGNETTE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VIGNETTE_LOCATION", "field_2633", "VIGNETTE_TEXTURE", "f_96866_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#SEPARATOR_LINE
    [[maybe_unused]] static jobject get_field_SEPARATOR_LINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SECTION_HEADING", "field_33955", "SEPARATOR_LINE", "f_169463_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#SEPARATOR_LINE
    [[maybe_unused]] static void set_field_SEPARATOR_LINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SECTION_HEADING", "field_33955", "SEPARATOR_LINE", "f_169463_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#CENTERED_LINE_PREFIX
    [[maybe_unused]] static jobject get_field_CENTERED_LINE_PREFIX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "NAME_PREFIX", "field_32273", "CENTERED_LINE_PREFIX", "f_169464_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#CENTERED_LINE_PREFIX
    [[maybe_unused]] static void set_field_CENTERED_LINE_PREFIX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "NAME_PREFIX", "field_32273", "CENTERED_LINE_PREFIX", "f_169464_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#OBFUSCATION_PLACEHOLDER
    [[maybe_unused]] static jobject get_field_OBFUSCATION_PLACEHOLDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "OBFUSCATE_TOKEN", "field_24260", "OBFUSCATION_PLACEHOLDER", "f_96867_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#OBFUSCATION_PLACEHOLDER
    [[maybe_unused]] static void set_field_OBFUSCATION_PLACEHOLDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "OBFUSCATE_TOKEN", "field_24260", "OBFUSCATION_PLACEHOLDER", "f_96867_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#SPACE_BAR_SPEED_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_SPACE_BAR_SPEED_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "SPEEDUP_FACTOR", "field_33957", "SPACE_BAR_SPEED_MULTIPLIER", "f_169466_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#SPACE_BAR_SPEED_MULTIPLIER
    [[maybe_unused]] static void set_field_SPACE_BAR_SPEED_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "SPEEDUP_FACTOR", "field_33957", "SPACE_BAR_SPEED_MULTIPLIER", "f_169466_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#CTRL_KEY_SPEED_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_CTRL_KEY_SPEED_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SPEEDUP_FACTOR_FAST", "field_34012", "CTRL_KEY_SPEED_MULTIPLIER", "f_181393_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#CTRL_KEY_SPEED_MULTIPLIER
    [[maybe_unused]] static void set_field_CTRL_KEY_SPEED_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SPEEDUP_FACTOR_FAST", "field_34012", "CTRL_KEY_SPEED_MULTIPLIER", "f_181393_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#END_POEM_TEXT_LOCATION
    [[maybe_unused]] static jobject get_field_END_POEM_TEXT_LOCATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "END_POEM_LOCATION", "field_52137", "END_POEM_TEXT_LOCATION", "f_337681_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#END_POEM_TEXT_LOCATION
    [[maybe_unused]] static void set_field_END_POEM_TEXT_LOCATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "END_POEM_LOCATION", "field_52137", "END_POEM_TEXT_LOCATION", "f_337681_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#CREDITS_TEXT_LOCATION
    [[maybe_unused]] static jobject get_field_CREDITS_TEXT_LOCATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "CREDITS_LOCATION", "field_52138", "CREDITS_TEXT_LOCATION", "f_337191_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#CREDITS_TEXT_LOCATION
    [[maybe_unused]] static void set_field_CREDITS_TEXT_LOCATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "CREDITS_LOCATION", "field_52138", "CREDITS_TEXT_LOCATION", "f_337191_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.CreditsScreen#POST_CREDITS_TEXT_LOCATION
    [[maybe_unused]] static jobject get_field_POST_CREDITS_TEXT_LOCATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "POSTCREDITS_LOCATION", "field_52139", "POST_CREDITS_TEXT_LOCATION", "f_337531_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#POST_CREDITS_TEXT_LOCATION
    [[maybe_unused]] static void set_field_POST_CREDITS_TEXT_LOCATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "POSTCREDITS_LOCATION", "field_52139", "POST_CREDITS_TEXT_LOCATION", "f_337531_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#endCredits
    static jboolean get_field_endCredits(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "poem", "field_2627", "endCredits", "f_96868_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#endCredits
    static void set_field_endCredits(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "poem", "field_2627", "endCredits", "f_96868_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#finishAction
    static jobject get_field_finishAction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "onFinished", "field_2630", "finishAction", "f_96869_"), "Ljava/lang/Runnable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#finishAction
    static void set_field_finishAction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "onFinished", "field_2630", "finishAction", "f_96869_"), "Ljava/lang/Runnable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#time
    static jfloat get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "scroll", "field_2628", "time", "f_169467_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#time
    static void set_field_time(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "scroll", "field_2628", "time", "f_169467_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#credits
    static jobject get_field_credits(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "lines", "field_2634", "credits", "f_96871_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#credits
    static void set_field_credits(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "lines", "field_2634", "credits", "f_96871_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#centeredLines
    static jobject get_field_centeredLines(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "centeredLines", "field_24261", "centeredLines", "f_96872_"), "Lit/unimi/dsi/fastutil/ints/IntSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#centeredLines
    static void set_field_centeredLines(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "centeredLines", "field_24261", "centeredLines", "f_96872_"), "Lit/unimi/dsi/fastutil/ints/IntSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#creditsHeight
    static jint get_field_creditsHeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "totalScrollLength", "field_2629", "creditsHeight", "f_96873_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#creditsHeight
    static void set_field_creditsHeight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "totalScrollLength", "field_2629", "creditsHeight", "f_96873_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#spaceKeyPressed
    static jboolean get_field_spaceKeyPressed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "speedupActive", "field_34010", "spaceKeyPressed", "f_181391_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#spaceKeyPressed
    static void set_field_spaceKeyPressed(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "speedupActive", "field_34010", "spaceKeyPressed", "f_181391_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#pressedCtrlKeys
    static jobject get_field_pressedCtrlKeys(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "speedupModifiers", "field_34011", "pressedCtrlKeys", "f_181392_"), "Lit/unimi/dsi/fastutil/ints/IntSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#pressedCtrlKeys
    static void set_field_pressedCtrlKeys(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "speedupModifiers", "field_34011", "pressedCtrlKeys", "f_181392_"), "Lit/unimi/dsi/fastutil/ints/IntSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#speed
    static jfloat get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "scrollSpeed", "field_2635", "speed", "f_96874_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#speed
    static void set_field_speed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "scrollSpeed", "field_2635", "speed", "f_96874_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#baseSpeed
    static jfloat get_field_baseSpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "unmodifiedScrollSpeed", "field_33954", "baseSpeed", "f_169462_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#baseSpeed
    static void set_field_baseSpeed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "unmodifiedScrollSpeed", "field_33954", "baseSpeed", "f_169462_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#speedMultiplier
    static jint get_field_speedMultiplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "direction", "field_44778", "speedMultiplier", "f_283835_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#speedMultiplier
    static void set_field_speedMultiplier(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "direction", "field_44778", "speedMultiplier", "f_283835_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.CreditsScreen#logoDrawer
    static jobject get_field_logoDrawer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "logoRenderer", "field_41848", "logoDrawer", "f_263706_"), "Lfjd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.CreditsScreen#logoDrawer
    static void set_field_logoDrawer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "logoRenderer", "field_41848", "logoDrawer", "f_263706_"), "Lfjd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "calculateScrollSpeed", "method_37369", "getSpeed", "m_181399_"), "()F");
    }

    static jfloat getSpeed(const jobject& obj) {
                
       const auto methodID = methodID_getSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "tick", "method_25393", "tick", "m_86600_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keyReleased() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "keyReleased", "method_16803", "keyReleased", "m_7920_"), "(III)Z");
    }

    static jboolean keyReleased(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyReleased();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_closeScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "respawn", "method_2257", "closeScreen", "m_96895_"), "()V");
    }

    static void closeScreen(const jobject& obj) {
                
       const auto methodID = methodID_closeScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "wrapCreditsIO", "method_39775", "load", "m_197398_"), "(Lakr;Lfog$a;)V");
    }

    static void load(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_load();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readPoem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addPoemFile", "method_39774", "readPoem", "m_232817_"), "(Ljava/io/Reader;)V");
    }

    static void readPoem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readPoem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCredits() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addCreditsFile", "method_39776", "readCredits", "m_232819_"), "(Ljava/io/Reader;)V");
    }

    static void readCredits(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCredits();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addEmptyLine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "addEmptyLine", "method_37306", "addEmptyLine", "m_169482_"), "()V");
    }

    static void addEmptyLine(const jobject& obj) {
                
       const auto methodID = methodID_addEmptyLine();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addPoemLines", "method_37305", "addText", "m_181397_"), "(Ljava/lang/String;)V");
    }

    static void addText(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addText();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__addText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCreditsLine", "method_37304", "addText", "m_169472_"), "(Lwz;Z)V");
    }

    static void _addText(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID__addText();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_renderVignette() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderVignette", "method_57738", "renderVignette", "m_323905_"), "(Lfhz;)V");
    }

    static void renderVignette(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renderVignette();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderBackground", "method_25420", "renderBackground", "m_280273_"), "(Lfhz;IIF)V");
    }

    static void renderBackground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_renderDarkening() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderMenuBackground", "method_57736", "renderDarkening", "m_320284_"), "(Lfhz;IIII)V");
    }

    static void renderDarkening(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_renderDarkening();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_shouldPause() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "isPauseScreen", "method_25421", "shouldPause", "m_7043_"), "()Z");
    }

    static jboolean shouldPause(const jobject& obj) {
                
       const auto methodID = methodID_shouldPause();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_removed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "removed", "method_25432", "removed", "m_7861_"), "()V");
    }

    static void removed(const jobject& obj) {
                
       const auto methodID = methodID_removed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMusic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "getBackgroundMusic", "method_50024", "getMusic", "m_278176_"), "()Lavm;");
    }

    static jobject getMusic(const jobject& obj) {
                
       const auto methodID = methodID_getMusic();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_CREDITSSCREEN_HPP