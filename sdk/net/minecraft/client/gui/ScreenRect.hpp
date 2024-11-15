// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREENRECT_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREENRECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.ScreenRect
 * Remapped: fms
 */
namespace ScreenRect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fms", "net/minecraft/client/gui/navigation/ScreenRectangle", "net/minecraft/class_8030", "net/minecraft/client/gui/ScreenRect", "net/minecraft/src/C_263595_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.ScreenRect#position
    static jobject get_field_position(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "position", "comp_1195", "position", "f_263846_"), "Lfmr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.ScreenRect#position
    static void set_field_position(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "position", "comp_1195", "position", "f_263846_"), "Lfmr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.ScreenRect#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "width", "comp_1196", "width", "f_263770_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.ScreenRect#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "width", "comp_1196", "width", "f_263770_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.ScreenRect#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "height", "comp_1197", "height", "f_263800_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.ScreenRect#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "height", "comp_1197", "height", "f_263800_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.ScreenRect#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EMPTY", "field_41835", "EMPTY", "f_263720_"), "Lfms;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.ScreenRect#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EMPTY", "field_41835", "EMPTY", "f_263720_"), "Lfms;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_empty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "empty", "method_48248", "empty", "m_264427_"), "()Lfms;");
    }

    static jobject empty() {
       const auto clazz = self();
       const auto methodID = methodID_empty();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_48250", "of", "m_264109_"), "(Lfmp;IIII)Lfms;");
    }

    static jobject of(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "step", "method_48251", "add", "m_264049_"), "(Lfmq;)Lfms;");
    }

    static jobject add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLength", "method_48249", "getLength", "m_264323_"), "(Lfmp;)I");
    }

    static jint getLength(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLength();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBoundingCoordinate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBoundInDirection", "method_48255", "getBoundingCoordinate", "m_264095_"), "(Lfmq;)I");
    }

    static jint getBoundingCoordinate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBoundingCoordinate();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBorder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getBorder", "method_48256", "getBorder", "m_264525_"), "(Lfmq;)Lfms;");
    }

    static jobject getBorder(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBorder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_overlaps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "overlaps", "method_48252", "overlaps", "m_264295_"), "(Lfms;)Z");
    }

    static jboolean overlaps(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_overlaps();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__overlaps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "overlapsInAxis", "method_48253", "overlaps", "m_264632_"), "(Lfms;Lfmp;)Z");
    }

    static jboolean _overlaps(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__overlaps();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCenter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCenterInAxis", "method_48254", "getCenter", "m_264037_"), "(Lfmp;)I");
    }

    static jint getCenter(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getCenter();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_intersection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "intersection", "method_49701", "intersection", "m_275842_"), "(Lfms;)Lfms;");
    }

    static jobject intersection(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_intersection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "top", "method_49618", "getTop", "m_274449_"), "()I");
    }

    static jint getTop(const jobject& obj) {
                
       const auto methodID = methodID_getTop();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBottom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "bottom", "method_49619", "getBottom", "m_274349_"), "()I");
    }

    static jint getBottom(const jobject& obj) {
                
       const auto methodID = methodID_getBottom();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "left", "method_49620", "getLeft", "m_274563_"), "()I");
    }

    static jint getLeft(const jobject& obj) {
                
       const auto methodID = methodID_getLeft();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "right", "method_49621", "getRight", "m_274445_"), "()I");
    }

    static jint getRight(const jobject& obj) {
                
       const auto methodID = methodID_getRight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "containsPoint", "method_58137", "contains", "m_319431_"), "(II)Z");
    }

    static jboolean contains(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__position() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "position", "comp_1195", "position", "f_263846_"), "()Lfmr;");
    }

    static jobject _position(const jobject& obj) {
                
       const auto methodID = methodID__position();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__width() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "width", "comp_1196", "width", "f_263770_"), "()I");
    }

    static jint _width(const jobject& obj) {
                
       const auto methodID = methodID__width();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__height() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "height", "comp_1197", "height", "f_263800_"), "()I");
    }

    static jint _height(const jobject& obj) {
                
       const auto methodID = methodID__height();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREENRECT_HPP