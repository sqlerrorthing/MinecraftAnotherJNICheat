// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_DIRECTIONALLAYOUTWIDGET$DISPLAYAXIS_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_DIRECTIONALLAYOUTWIDGET$DISPLAYAXIS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.DirectionalLayoutWidget$DisplayAxis
 * Remapped: fmd$a
 */
namespace DirectionalLayoutWidget$DisplayAxis {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fmd$a", "net/minecraft/client/gui/layouts/LinearLayout$Orientation", "net/minecraft/class_8667$class_8668", "net/minecraft/client/gui/widget/DirectionalLayoutWidget$DisplayAxis", "net/minecraft/src/C_263623_$C_263618_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.widget.DirectionalLayoutWidget$DisplayAxis#HORIZONTAL
    [[maybe_unused]] static jobject get_field_HORIZONTAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HORIZONTAL", "field_45403", "HORIZONTAL", "HORIZONTAL"), "Lfmd$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.widget.DirectionalLayoutWidget$DisplayAxis#HORIZONTAL
    [[maybe_unused]] static void set_field_HORIZONTAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HORIZONTAL", "field_45403", "HORIZONTAL", "HORIZONTAL"), "Lfmd$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.widget.DirectionalLayoutWidget$DisplayAxis#VERTICAL
    [[maybe_unused]] static jobject get_field_VERTICAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERTICAL", "field_45404", "VERTICAL", "VERTICAL"), "Lfmd$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.widget.DirectionalLayoutWidget$DisplayAxis#VERTICAL
    [[maybe_unused]] static void set_field_VERTICAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERTICAL", "field_45404", "VERTICAL", "VERTICAL"), "Lfmd$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfmd$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfmd$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setSpacing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSpacing", "method_52744", "setSpacing", "m_294840_"), "(Lfly;I)V");
    }

    static void setSpacing(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setSpacing();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChild", "method_52745", "add", "m_295960_"), "(Lfly;Lfmb;ILfmc;)Lfmb;");
    }

    static jobject add(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_DIRECTIONALLAYOUTWIDGET$DISPLAYAXIS_HPP