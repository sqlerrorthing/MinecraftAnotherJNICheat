// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_BUTTONWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_BUTTONWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.ButtonWidget
 * Remapped: fim
 */
namespace ButtonWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fim", "net/minecraft/client/gui/components/Button", "net/minecraft/class_4185", "net/minecraft/client/gui/widget/ButtonWidget", "net/minecraft/src/C_3451_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_WIDTH_SMALL
    [[maybe_unused]] static jint get_field_DEFAULT_WIDTH_SMALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SMALL_WIDTH", "field_39499", "DEFAULT_WIDTH_SMALL", "f_238663_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_WIDTH_SMALL
    [[maybe_unused]] static void set_field_DEFAULT_WIDTH_SMALL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SMALL_WIDTH", "field_39499", "DEFAULT_WIDTH_SMALL", "f_238663_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_WIDTH
    [[maybe_unused]] static jint get_field_DEFAULT_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "DEFAULT_WIDTH", "field_39500", "DEFAULT_WIDTH", "f_238716_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_WIDTH
    [[maybe_unused]] static void set_field_DEFAULT_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "DEFAULT_WIDTH", "field_39500", "DEFAULT_WIDTH", "f_238716_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.widget.ButtonWidget#field_49479
    [[maybe_unused]] static jint get_field_field_49479() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "BIG_WIDTH", "field_49479", "field_49479", "f_315630_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.widget.ButtonWidget#field_49479
    [[maybe_unused]] static void set_field_field_49479(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "BIG_WIDTH", "field_49479", "field_49479", "f_315630_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_HEIGHT
    [[maybe_unused]] static jint get_field_DEFAULT_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DEFAULT_HEIGHT", "field_39501", "DEFAULT_HEIGHT", "f_238808_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_HEIGHT
    [[maybe_unused]] static void set_field_DEFAULT_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DEFAULT_HEIGHT", "field_39501", "DEFAULT_HEIGHT", "f_238808_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.widget.ButtonWidget#field_46856
    [[maybe_unused]] static jint get_field_field_46856() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "DEFAULT_SPACING", "field_46856", "field_46856", "f_303561_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.widget.ButtonWidget#field_46856
    [[maybe_unused]] static void set_field_field_46856(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "DEFAULT_SPACING", "field_46856", "field_46856", "f_303561_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_NARRATION_SUPPLIER
    [[maybe_unused]] static jobject get_field_DEFAULT_NARRATION_SUPPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "DEFAULT_NARRATION", "field_40754", "DEFAULT_NARRATION_SUPPLIER", "f_252438_"), "Lfim$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.widget.ButtonWidget#DEFAULT_NARRATION_SUPPLIER
    [[maybe_unused]] static void set_field_DEFAULT_NARRATION_SUPPLIER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "DEFAULT_NARRATION", "field_40754", "DEFAULT_NARRATION_SUPPLIER", "f_252438_"), "Lfim$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.widget.ButtonWidget#onPress
    static jobject get_field_onPress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "onPress", "field_22767", "onPress", "f_93717_"), "Lfim$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.widget.ButtonWidget#onPress
    static void set_field_onPress(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "onPress", "field_22767", "onPress", "f_93717_"), "Lfim$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.widget.ButtonWidget#narrationSupplier
    static jobject get_field_narrationSupplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "createNarration", "field_40755", "narrationSupplier", "f_252416_"), "Lfim$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.widget.ButtonWidget#narrationSupplier
    static void set_field_narrationSupplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "createNarration", "field_40755", "narrationSupplier", "f_252416_"), "Lfim$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_46430", "builder", "m_253074_"), "(Lwz;Lfim$c;)Lfim$a;");
    }

    static jobject builder(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__onPress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onPress", "method_25306", "onPress", "m_5691_"), "()V");
    }

    static void _onPress(const jobject& obj) {
                
       const auto methodID = methodID__onPress();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNarrationMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aQ_", "createNarrationMessage", "method_25360", "getNarrationMessage", "m_5646_"), "()Lxn;");
    }

    static jobject getNarrationMessage(const jobject& obj) {
                
       const auto methodID = methodID_getNarrationMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_appendClickableNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateWidgetNarration", "method_47399", "appendClickableNarrations", "m_168797_"), "(Lfmi;)V");
    }

    static void appendClickableNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendClickableNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_BUTTONWIDGET_HPP