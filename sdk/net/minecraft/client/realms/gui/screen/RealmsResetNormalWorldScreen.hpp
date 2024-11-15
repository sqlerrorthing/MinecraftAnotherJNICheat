// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSRESETNORMALWORLDSCREEN_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSRESETNORMALWORLDSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen
 * Remapped: fek
 */
namespace RealmsResetNormalWorldScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fek", "com/mojang/realmsclient/gui/screens/RealmsResetNormalWorldScreen", "net/minecraft/class_4409", "net/minecraft/client/realms/gui/screen/RealmsResetNormalWorldScreen", "net/minecraft/src/C_3319_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#RESET_SEED_TEXT
    [[maybe_unused]] static jobject get_field_RESET_SEED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SEED_LABEL", "field_26506", "RESET_SEED_TEXT", "f_89266_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#RESET_SEED_TEXT
    [[maybe_unused]] static void set_field_RESET_SEED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SEED_LABEL", "field_26506", "RESET_SEED_TEXT", "f_89266_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#TITLE
    [[maybe_unused]] static jobject get_field_TITLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_46114", "TITLE", "f_291080_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#TITLE
    [[maybe_unused]] static void set_field_TITLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TITLE", "field_46114", "TITLE", "f_291080_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#field_45278
    [[maybe_unused]] static jint get_field_field_45278() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BUTTON_SPACING", "field_45278", "field_45278", "f_290734_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#field_45278
    [[maybe_unused]] static void set_field_field_45278(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BUTTON_SPACING", "field_45278", "field_45278", "f_290734_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#field_45279
    [[maybe_unused]] static jint get_field_field_45279() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "CONTENT_WIDTH", "field_45279", "field_45279", "f_290341_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#field_45279
    [[maybe_unused]] static void set_field_field_45279(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "CONTENT_WIDTH", "field_45279", "field_45279", "f_290341_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#layout
    static jobject get_field_layout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "layout", "field_45280", "layout", "f_291068_"), "Lflz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#layout
    static void set_field_layout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "layout", "field_45280", "layout", "f_291068_"), "Lflz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#callback
    static jobject get_field_callback(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "callback", "field_27938", "callback", "f_167436_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#callback
    static void set_field_callback(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "callback", "field_27938", "callback", "f_167436_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#seedEdit
    static jobject get_field_seedEdit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "seedEdit", "field_19984", "seedEdit", "f_89270_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#seedEdit
    static void set_field_seedEdit(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "seedEdit", "field_19984", "seedEdit", "f_89270_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#generatorType
    static jobject get_field_generatorType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "levelType", "field_27939", "generatorType", "f_167435_"), "Lffa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#generatorType
    static void set_field_generatorType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "levelType", "field_27939", "generatorType", "f_167435_"), "Lffa;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#mapFeatures
    static jboolean get_field_mapFeatures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "generateStructures", "field_27940", "mapFeatures", "f_89271_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#mapFeatures
    static void set_field_mapFeatures(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "generateStructures", "field_27940", "mapFeatures", "f_89271_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#experiments
    static jobject get_field_experiments(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "experiments", "field_46708", "experiments", "f_302343_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#experiments
    static void set_field_experiments(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "experiments", "field_46708", "experiments", "f_302343_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#parentTitle
    static jobject get_field_parentTitle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "buttonTitle", "field_24206", "parentTitle", "f_89273_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsResetNormalWorldScreen#parentTitle
    static void set_field_parentTitle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "buttonTitle", "field_24206", "parentTitle", "f_89273_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setInitialFocus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aI_", "setInitialFocus", "method_56131", "setInitialFocus", "m_318615_"), "()V");
    }

    static void setInitialFocus(const jobject& obj) {
                
       const auto methodID = methodID_setInitialFocus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addExperimentsButton() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createExperimentsButton", "method_54378", "addExperimentsButton", "m_307974_"), "(Lfmd;)V");
    }

    static void addExperimentsButton(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addExperimentsButton();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createResetWorldInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "createWorldGenerationInfo", "method_52693", "createResetWorldInfo", "m_293863_"), "()Lffg;");
    }

    static jobject createResetWorldInfo(const jobject& obj) {
                
       const auto methodID = methodID_createResetWorldInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_initTabNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "repositionElements", "method_48640", "initTabNavigation", "m_267719_"), "()V");
    }

    static void initTabNavigation(const jobject& obj) {
                
       const auto methodID = methodID_initTabNavigation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSRESETNORMALWORLDSCREEN_HPP