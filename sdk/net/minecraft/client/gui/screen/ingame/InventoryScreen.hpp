// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_INVENTORYSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_INVENTORYSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.InventoryScreen
 * Remapped: fpt
 */
namespace InventoryScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpt", "net/minecraft/client/gui/screens/inventory/InventoryScreen", "net/minecraft/class_490", "net/minecraft/client/gui/screen/ingame/InventoryScreen", "net/minecraft/src/C_3664_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.InventoryScreen#mouseX
    static jfloat get_field_mouseX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "xMouse", "field_2935", "mouseX", "f_98831_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.InventoryScreen#mouseX
    static void set_field_mouseX(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "xMouse", "field_2935", "mouseX", "f_98831_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.InventoryScreen#mouseY
    static jfloat get_field_mouseY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "yMouse", "field_2934", "mouseY", "f_98832_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.InventoryScreen#mouseY
    static void set_field_mouseY(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "yMouse", "field_2934", "mouseY", "f_98832_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.InventoryScreen#recipeBook
    static jobject get_field_recipeBook(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "recipeBookComponent", "field_2929", "recipeBook", "f_98833_"), "Lfsa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.InventoryScreen#recipeBook
    static void set_field_recipeBook(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "recipeBookComponent", "field_2929", "recipeBook", "f_98833_"), "Lfsa;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.InventoryScreen#narrow
    static jboolean get_field_narrow(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "widthTooNarrow", "field_2931", "narrow", "f_98835_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.InventoryScreen#narrow
    static void set_field_narrow(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "widthTooNarrow", "field_2931", "narrow", "f_98835_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.InventoryScreen#mouseDown
    static jboolean get_field_mouseDown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "buttonClicked", "field_2930", "mouseDown", "f_98836_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.InventoryScreen#mouseDown
    static void set_field_mouseDown(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "buttonClicked", "field_2930", "mouseDown", "f_98836_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_handledScreenTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "containerTick", "method_37432", "handledScreenTick", "m_181908_"), "()V");
    }

    static void handledScreenTick(const jobject& obj) {
                
       const auto methodID = methodID_handledScreenTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_drawForeground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderLabels", "method_2388", "drawForeground", "m_280003_"), "(Lfhz;II)V");
    }

    static void drawForeground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_drawForeground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBg", "method_2389", "drawBackground", "m_7286_"), "(Lfhz;FII)V");
    }

    static void drawBackground(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_drawBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderEntityInInventoryFollowsMouse", "method_2486", "drawEntity", "m_274545_"), "(Lfhz;IIIIIFFFLbtn;)V");
    }

    static void drawEntity(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jobject& arg9) {
       const auto clazz = self();
       const auto methodID = methodID_drawEntity();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID__drawEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderEntityInInventory", "method_48472", "drawEntity", "m_280432_"), "(Lfhz;FFFLorg/joml/Vector3f;Lorg/joml/Quaternionf;Lorg/joml/Quaternionf;Lbtn;)V");
    }

    static void _drawEntity(const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7) {
       const auto clazz = self();
       const auto methodID = methodID__drawEntity();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_charTyped() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "charTyped", "method_25400", "charTyped", "m_5534_"), "(CI)Z");
    }

    static jboolean charTyped(const jobject& obj, const jchar& arg0, const jint& arg1) {
                
       const auto methodID = methodID_charTyped();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isPointWithinBounds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isHovering", "method_2378", "isPointWithinBounds", "m_6774_"), "(IIIIDD)Z");
    }

    static jboolean isPointWithinBounds(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jdouble& arg4, const jdouble& arg5) {
                
       const auto methodID = methodID_isPointWithinBounds();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_mouseReleased() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mouseReleased", "method_25406", "mouseReleased", "m_6348_"), "(DDI)Z");
    }

    static jboolean mouseReleased(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseReleased();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isClickOutsideBounds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasClickedOutside", "method_2381", "isClickOutsideBounds", "m_7467_"), "(DDIII)Z");
    }

    static jboolean isClickOutsideBounds(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_isClickOutsideBounds();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onMouseClick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotClicked", "method_2383", "onMouseClick", "m_6597_"), "(Lcrq;IILcqe;)V");
    }

    static void onMouseClick(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onMouseClick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_refreshRecipeBook() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "recipesUpdated", "method_16891", "refreshRecipeBook", "m_6916_"), "()V");
    }

    static void refreshRecipeBook(const jobject& obj) {
                
       const auto methodID = methodID_refreshRecipeBook();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRecipeBookWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "getRecipeBookComponent", "method_2659", "getRecipeBookWidget", "m_5564_"), "()Lfsa;");
    }

    static jobject getRecipeBookWidget(const jobject& obj) {
                
       const auto methodID = methodID_getRecipeBookWidget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_INVENTORYSCREEN_HPP