// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSMAINSCREEN$NOTIFICATIONBUTTONWIDGET_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSMAINSCREEN$NOTIFICATIONBUTTONWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget
 * Remapped: fbt$g
 */
namespace RealmsMainScreen$NotificationButtonWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbt$g", "com/mojang/realmsclient/RealmsMainScreen$NotificationButton", "net/minecraft/class_4325$class_8651", "net/minecraft/client/realms/gui/screen/RealmsMainScreen$NotificationButtonWidget", "net/minecraft/src/C_3197_$C_290043_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#TEXTURES
    [[maybe_unused]] static jobject get_field_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NOTIFICATION_ICONS", "field_45227", "TEXTURES", "f_291629_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#TEXTURES
    [[maybe_unused]] static void set_field_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NOTIFICATION_ICONS", "field_45227", "TEXTURES", "f_291629_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#field_45228
    [[maybe_unused]] static jint get_field_field_45228() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "UNKNOWN_COUNT", "field_45228", "field_45228", "f_291704_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#field_45228
    [[maybe_unused]] static void set_field_field_45228(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "UNKNOWN_COUNT", "field_45228", "field_45228", "f_291704_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#SIZE
    [[maybe_unused]] static jint get_field_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SIZE", "field_45229", "SIZE", "f_290966_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#SIZE
    [[maybe_unused]] static void set_field_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SIZE", "field_45229", "SIZE", "f_290966_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#TEXTURE_SIZE
    [[maybe_unused]] static jint get_field_TEXTURE_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SPRITE_SIZE", "field_45230", "TEXTURE_SIZE", "f_291327_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#TEXTURE_SIZE
    [[maybe_unused]] static void set_field_TEXTURE_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SPRITE_SIZE", "field_45230", "TEXTURE_SIZE", "f_291327_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#notificationCount
    static jint get_field_notificationCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "notificationCount", "field_45231", "notificationCount", "f_290656_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsMainScreen$NotificationButtonWidget#notificationCount
    static void set_field_notificationCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "notificationCount", "field_45231", "notificationCount", "f_290656_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getNotificationCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "notificationCount", "method_53794", "getNotificationCount", "m_294789_"), "()I");
    }

    static jint getNotificationCount(const jobject& obj) {
                
       const auto methodID = methodID_getNotificationCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setNotificationCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setNotificationCount", "method_52651", "setNotificationCount", "m_294712_"), "(I)V");
    }

    static void setNotificationCount(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setNotificationCount();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawNotificationCounter", "method_52652", "render", "m_292651_"), "(Lfhz;)V");
    }

    static void render(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSMAINSCREEN$NOTIFICATIONBUTTONWIDGET_HPP