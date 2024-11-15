// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_SIMPLEPOSITIONINGWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_SIMPLEPOSITIONINGWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.SimplePositioningWidget
 * Remapped: flx
 */
namespace SimplePositioningWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flx", "net/minecraft/client/gui/layouts/FrameLayout", "net/minecraft/class_7843", "net/minecraft/client/gui/widget/SimplePositioningWidget", "net/minecraft/src/C_263600_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.widget.SimplePositioningWidget#elements
    static jobject get_field_elements(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "field_40766", "elements", "f_263788_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.SimplePositioningWidget#elements
    static void set_field_elements(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "field_40766", "elements", "f_263788_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.SimplePositioningWidget#minHeight
    static jint get_field_minHeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minWidth", "field_40768", "minHeight", "f_263834_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.SimplePositioningWidget#minHeight
    static void set_field_minHeight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minWidth", "field_40768", "minHeight", "f_263834_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.SimplePositioningWidget#minWidth
    static jint get_field_minWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minHeight", "field_40769", "minWidth", "f_263810_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.SimplePositioningWidget#minWidth
    static void set_field_minWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minHeight", "field_40769", "minWidth", "f_263810_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.SimplePositioningWidget#mainPositioner
    static jobject get_field_mainPositioner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "defaultChildLayoutSettings", "field_40770", "mainPositioner", "f_263739_"), "Lfmc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.SimplePositioningWidget#mainPositioner
    static void set_field_mainPositioner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "defaultChildLayoutSettings", "field_40770", "mainPositioner", "f_263739_"), "Lfmc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setDimensions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setMinDimensions", "method_46446", "setDimensions", "m_264232_"), "(II)Lflx;");
    }

    static jobject setDimensions(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setDimensions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setMinHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setMinHeight", "method_46447", "setMinHeight", "m_264240_"), "(I)Lflx;");
    }

    static jobject setMinHeight(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setMinHeight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setMinWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setMinWidth", "method_46449", "setMinWidth", "m_264444_"), "(I)Lflx;");
    }

    static jobject setMinWidth(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setMinWidth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyPositioner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "newChildLayoutSettings", "method_46448", "copyPositioner", "m_264364_"), "()Lfmc;");
    }

    static jobject copyPositioner(const jobject& obj) {
                
       const auto methodID = methodID_copyPositioner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMainPositioner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "defaultChildLayoutSetting", "method_46450", "getMainPositioner", "m_264088_"), "()Lfmc;");
    }

    static jobject getMainPositioner(const jobject& obj) {
                
       const auto methodID = methodID_getMainPositioner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_refreshPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "arrangeElements", "method_48222", "refreshPositions", "m_264036_"), "()V");
    }

    static void refreshPositions(const jobject& obj) {
                
       const auto methodID = methodID_refreshPositions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChild", "method_46441", "add", "m_264557_"), "(Lfmb;)Lfmb;");
    }

    static jobject add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChild", "method_46444", "add", "m_264564_"), "(Lfmb;Lfmc;)Lfmb;");
    }

    static jobject _add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChild", "method_52732", "add", "m_295002_"), "(Lfmb;Ljava/util/function/Consumer;)Lfmb;");
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
    
    static jmethodID methodID_setPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "centerInRectangle", "method_46442", "setPos", "m_264159_"), "(Lfmb;IIII)V");
    }

    static void setPos(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_setPos();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__setPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "centerInRectangle", "method_48634", "setPos", "m_267781_"), "(Lfmb;Lfms;)V");
    }

    static void _setPos(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__setPos();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___setPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "alignInRectangle", "method_49617", "setPos", "m_274605_"), "(Lfmb;Lfms;FF)V");
    }

    static void __setPos(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jfloat& arg3) {
       const auto clazz = self();
       const auto methodID = methodID___setPos();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID____setPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "alignInRectangle", "method_46443", "setPos", "m_264460_"), "(Lfmb;IIIIFF)V");
    }

    static void ___setPos(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jfloat& arg5, const jfloat& arg6) {
       const auto clazz = self();
       const auto methodID = methodID____setPos();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_____setPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "alignInDimension", "method_46440", "setPos", "m_264274_"), "(IIILjava/util/function/Consumer;F)V");
    }

    static void ____setPos(const jint& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_____setPos();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_SIMPLEPOSITIONINGWIDGET_HPP