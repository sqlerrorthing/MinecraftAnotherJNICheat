// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_MULTILINETEXTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_MULTILINETEXTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.MultilineTextWidget
 * Remapped: fjg
 */
namespace MultilineTextWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjg", "net/minecraft/client/gui/components/MultiLineTextWidget", "net/minecraft/class_7940", "net/minecraft/client/gui/widget/MultilineTextWidget", "net/minecraft/src/C_260406_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.widget.MultilineTextWidget#maxWidth
    static jobject get_field_maxWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "maxWidth", "field_42486", "maxWidth", "f_268685_"), "Ljava/util/OptionalInt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.MultilineTextWidget#maxWidth
    static void set_field_maxWidth(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "maxWidth", "field_42486", "maxWidth", "f_268685_"), "Ljava/util/OptionalInt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.MultilineTextWidget#maxRows
    static jobject get_field_maxRows(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxRows", "field_42487", "maxRows", "f_268603_"), "Ljava/util/OptionalInt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.MultilineTextWidget#maxRows
    static void set_field_maxRows(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxRows", "field_42487", "maxRows", "f_268603_"), "Ljava/util/OptionalInt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.MultilineTextWidget#cacheKeyToText
    static jobject get_field_cacheKeyToText(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cache", "field_42488", "cacheKeyToText", "f_268539_"), "Laze;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.MultilineTextWidget#cacheKeyToText
    static void set_field_cacheKeyToText(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cache", "field_42488", "cacheKeyToText", "f_268539_"), "Laze;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.MultilineTextWidget#centered
    static jboolean get_field_centered(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "centered", "field_41343", "centered", "f_260670_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.MultilineTextWidget#centered
    static void set_field_centered(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "centered", "field_41343", "centered", "f_260670_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_setTextColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setColor", "method_48983", "setTextColor", "m_269033_"), "(I)Lfjg;");
    }

    static jobject setTextColor(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setTextColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setMaxWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setMaxWidth", "method_48984", "setMaxWidth", "m_269098_"), "(I)Lfjg;");
    }

    static jobject setMaxWidth(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setMaxWidth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setMaxRows() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setMaxRows", "method_48985", "setMaxRows", "m_269328_"), "(I)Lfjg;");
    }

    static jobject setMaxRows(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setMaxRows();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setCentered() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setCentered", "method_48981", "setCentered", "m_269484_"), "(Z)Lfjg;");
    }

    static jobject setCentered(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setCentered();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "getWidth", "method_25368", "getWidth", "m_5711_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "getHeight", "method_25364", "getHeight", "m_93694_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getCacheKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getFreshCacheKey", "method_48982", "getCacheKey", "m_269393_"), "()Lfjg$a;");
    }

    static jobject getCacheKey(const jobject& obj) {
                
       const auto methodID = methodID_getCacheKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_MULTILINETEXTWIDGET_HPP