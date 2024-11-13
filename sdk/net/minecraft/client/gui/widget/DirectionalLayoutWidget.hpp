// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_DIRECTIONALLAYOUTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_DIRECTIONALLAYOUTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.DirectionalLayoutWidget
 * Remapped: fmd
 */
namespace DirectionalLayoutWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fmd", "net/minecraft/client/gui/layouts/LinearLayout", "net/minecraft/class_8667", "net/minecraft/client/gui/widget/DirectionalLayoutWidget", "net/minecraft/src/C_263623_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.widget.DirectionalLayoutWidget#grid
    static jobject get_field_grid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "wrapped", "field_45400", "grid", "f_290844_"), "Lfly;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.DirectionalLayoutWidget#grid
    static void set_field_grid(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "wrapped", "field_45400", "grid", "f_290844_"), "Lfly;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.DirectionalLayoutWidget#axis
    static jobject get_field_axis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "orientation", "field_45401", "axis", "f_263650_"), "Lfmd$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.DirectionalLayoutWidget#axis
    static void set_field_axis(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "orientation", "field_45401", "axis", "f_263650_"), "Lfmd$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.DirectionalLayoutWidget#currentIndex
    static jint get_field_currentIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nextChildIndex", "field_45402", "currentIndex", "f_291156_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.DirectionalLayoutWidget#currentIndex
    static void set_field_currentIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nextChildIndex", "field_45402", "currentIndex", "f_291156_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_spacing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spacing", "method_52735", "spacing", "m_294554_"), "(I)Lfmd;");
    }

    static jobject spacing(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_spacing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyPositioner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "newCellSettings", "method_52739", "copyPositioner", "m_293373_"), "()Lfmc;");
    }

    static jobject copyPositioner(const jobject& obj) {
                
       const auto methodID = methodID_copyPositioner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMainPositioner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "defaultCellSetting", "method_52740", "getMainPositioner", "m_294823_"), "()Lfmc;");
    }

    static jobject getMainPositioner(const jobject& obj) {
                
       const auto methodID = methodID_getMainPositioner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChild", "method_52737", "add", "m_264512_"), "(Lfmb;Lfmc;)Lfmb;");
    }

    static jobject add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChild", "method_52736", "add", "m_264406_"), "(Lfmb;)Lfmb;");
    }

    static jobject _add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChild", "method_52738", "add", "m_293842_"), "(Lfmb;Ljava/util/function/Consumer;)Lfmb;");
    }

    static jobject __add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_forEachElement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "visitChildren", "method_48227", "forEachElement", "m_264090_"), "(Ljava/util/function/Consumer;)V");
    }

    static void forEachElement(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachElement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_refreshPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "arrangeElements", "method_48222", "refreshPositions", "m_264036_"), "()V");
    }

    static void refreshPositions(const jobject& obj) {
                
       const auto methodID = methodID_refreshPositions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
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
    
    static jmethodID methodID_setX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "setX", "method_46421", "setX", "m_252865_"), "(I)V");
    }

    static void setX(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setX();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "setY", "method_46419", "setY", "m_253211_"), "(I)V");
    }

    static void setY(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setY();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "getX", "method_46426", "getX", "m_252754_"), "()I");
    }

    static jint getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "getY", "method_46427", "getY", "m_252907_"), "()I");
    }

    static jint getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_vertical() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "vertical", "method_52741", "vertical", "m_293633_"), "()Lfmd;");
    }

    static jobject vertical() {
       const auto clazz = self();
       const auto methodID = methodID_vertical();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_horizontal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "horizontal", "method_52742", "horizontal", "m_295847_"), "()Lfmd;");
    }

    static jobject horizontal() {
       const auto clazz = self();
       const auto methodID = methodID_horizontal();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_DIRECTIONALLAYOUTWIDGET_HPP