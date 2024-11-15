// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_PLAYERSKINWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_PLAYERSKINWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.PlayerSkinWidget
 * Remapped: fjm
 */
namespace PlayerSkinWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjm", "net/minecraft/client/gui/components/PlayerSkinWidget", "net/minecraft/class_8765", "net/minecraft/client/gui/widget/PlayerSkinWidget", "net/minecraft/src/C_290143_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45996
    [[maybe_unused]] static jfloat get_field_field_45996() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MODEL_OFFSET", "field_45996", "field_45996", "f_290508_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45996
    [[maybe_unused]] static void set_field_field_45996(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MODEL_OFFSET", "field_45996", "field_45996", "f_290508_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45997
    [[maybe_unused]] static jfloat get_field_field_45997() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MODEL_HEIGHT", "field_45997", "field_45997", "f_291646_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45997
    [[maybe_unused]] static void set_field_field_45997(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MODEL_HEIGHT", "field_45997", "field_45997", "f_291646_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45998
    [[maybe_unused]] static jfloat get_field_field_45998() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "Z_OFFSET", "field_45998", "field_45998", "f_290900_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45998
    [[maybe_unused]] static void set_field_field_45998(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "Z_OFFSET", "field_45998", "field_45998", "f_290900_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45999
    [[maybe_unused]] static jfloat get_field_field_45999() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ROTATION_SENSITIVITY", "field_45999", "field_45999", "f_290572_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_45999
    [[maybe_unused]] static void set_field_field_45999(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ROTATION_SENSITIVITY", "field_45999", "field_45999", "f_290572_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_46000
    [[maybe_unused]] static jfloat get_field_field_46000() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_ROTATION_X", "field_46000", "field_46000", "f_290809_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_46000
    [[maybe_unused]] static void set_field_field_46000(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_ROTATION_X", "field_46000", "field_46000", "f_290809_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_46001
    [[maybe_unused]] static jfloat get_field_field_46001() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT_ROTATION_Y", "field_46001", "field_46001", "f_291393_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_46001
    [[maybe_unused]] static void set_field_field_46001(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT_ROTATION_Y", "field_46001", "field_46001", "f_291393_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_46002
    [[maybe_unused]] static jfloat get_field_field_46002() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ROTATION_X_LIMIT", "field_46002", "field_46002", "f_290435_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#field_46002
    [[maybe_unused]] static void set_field_field_46002(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ROTATION_X_LIMIT", "field_46002", "field_46002", "f_290435_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.PlayerSkinWidget#models
    static jobject get_field_models(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "model", "field_46003", "models", "f_290485_"), "Lfjm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#models
    static void set_field_models(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "model", "field_46003", "models", "f_290485_"), "Lfjm$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.PlayerSkinWidget#skinSupplier
    static jobject get_field_skinSupplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "skin", "field_46004", "skinSupplier", "f_291593_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#skinSupplier
    static void set_field_skinSupplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "skin", "field_46004", "skinSupplier", "f_291593_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.PlayerSkinWidget#xRotation
    static jfloat get_field_xRotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "rotationX", "field_46005", "xRotation", "f_291705_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#xRotation
    static void set_field_xRotation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "rotationX", "field_46005", "xRotation", "f_291705_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.PlayerSkinWidget#yRotation
    static jfloat get_field_yRotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "rotationY", "field_46006", "yRotation", "f_291202_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PlayerSkinWidget#yRotation
    static void set_field_yRotation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "rotationY", "field_46006", "yRotation", "f_291202_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onDrag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onDrag", "method_25349", "onDrag", "m_7212_"), "(DDDD)V");
    }

    static void onDrag(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
                
       const auto methodID = methodID_onDrag();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_playDownSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playDownSound", "method_25354", "playDownSound", "m_7435_"), "(Lgvf;)V");
    }

    static void playDownSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playDownSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_appendClickableNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateWidgetNarration", "method_47399", "appendClickableNarrations", "m_168797_"), "(Lfmi;)V");
    }

    static void appendClickableNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendClickableNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isNarratable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "isActive", "method_37303", "isNarratable", "m_142518_"), "()Z");
    }

    static jboolean isNarratable(const jobject& obj) {
                
       const auto methodID = methodID_isNarratable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNavigationPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nextFocusPath", "method_48205", "getNavigationPath", "m_264064_"), "(Lfmo;)Lfhw;");
    }

    static jobject getNavigationPath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNavigationPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_PLAYERSKINWIDGET_HPP