// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_ICONWIDGET$SIMPLE_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_ICONWIDGET$SIMPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.IconWidget$Simple
 * Remapped: fiz$a
 */
namespace IconWidget$Simple {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fiz$a", "net/minecraft/client/gui/components/ImageWidget$Sprite", "net/minecraft/class_8208$class_8659", "net/minecraft/client/gui/widget/IconWidget$Simple", "net/minecraft/src/C_273809_$C_290142_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.widget.IconWidget$Simple#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_45357", "texture", "f_290445_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.IconWidget$Simple#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_45357", "texture", "f_290445_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_ICONWIDGET$SIMPLE_HPP