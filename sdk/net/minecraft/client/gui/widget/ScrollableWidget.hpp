// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_SCROLLABLEWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_SCROLLABLEWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.ScrollableWidget
 * Remapped: fig
 */
namespace ScrollableWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fig", "net/minecraft/client/gui/components/AbstractScrollWidget", "net/minecraft/class_7528", "net/minecraft/client/gui/widget/ScrollableWidget", "net/minecraft/src/C_238472_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.widget.ScrollableWidget#TEXT_FIELD_TEXTURES
    [[maybe_unused]] static jobject get_field_TEXT_FIELD_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BACKGROUND_SPRITES", "field_45905", "TEXT_FIELD_TEXTURES", "f_290588_"), "Lfjz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.ScrollableWidget#TEXT_FIELD_TEXTURES
    [[maybe_unused]] static void set_field_TEXT_FIELD_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BACKGROUND_SPRITES", "field_45905", "TEXT_FIELD_TEXTURES", "f_290588_"), "Lfjz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.ScrollableWidget#SCROLLER_TEXTURE
    [[maybe_unused]] static jobject get_field_SCROLLER_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SCROLLER_SPRITE", "field_45906", "SCROLLER_TEXTURE", "f_290568_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.ScrollableWidget#SCROLLER_TEXTURE
    [[maybe_unused]] static void set_field_SCROLLER_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SCROLLER_SPRITE", "field_45906", "SCROLLER_TEXTURE", "f_290568_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.ScrollableWidget#PADDING
    [[maybe_unused]] static jint get_field_PADDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INNER_PADDING", "field_39496", "PADDING", "f_238777_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.ScrollableWidget#PADDING
    [[maybe_unused]] static void set_field_PADDING(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INNER_PADDING", "field_39496", "PADDING", "f_238777_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.ScrollableWidget#SCROLLER_WIDTH
    [[maybe_unused]] static jint get_field_SCROLLER_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SCROLL_BAR_WIDTH", "field_45907", "SCROLLER_WIDTH", "f_290523_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.ScrollableWidget#SCROLLER_WIDTH
    [[maybe_unused]] static void set_field_SCROLLER_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SCROLL_BAR_WIDTH", "field_45907", "SCROLLER_WIDTH", "f_290523_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.ScrollableWidget#scrollY
    static jdouble get_field_scrollY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "scrollAmount", "field_39497", "scrollY", "f_238564_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.ScrollableWidget#scrollY
    static void set_field_scrollY(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "scrollAmount", "field_39497", "scrollY", "f_238564_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.ScrollableWidget#scrollbarDragged
    static jboolean get_field_scrollbarDragged(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "scrolling", "field_39498", "scrollbarDragged", "f_238779_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.ScrollableWidget#scrollbarDragged
    static void set_field_scrollbarDragged(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "scrolling", "field_39498", "scrollbarDragged", "f_238779_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
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
    
    static jmethodID methodID_mouseDragged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseDragged", "method_25403", "mouseDragged", "m_7979_"), "(DDIDD)Z");
    }

    static jboolean mouseDragged(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2, const jdouble& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_mouseDragged();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_mouseScrolled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseScrolled", "method_25401", "mouseScrolled", "m_6050_"), "(DDDD)Z");
    }

    static jboolean mouseScrolled(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
                
       const auto methodID = methodID_mouseScrolled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getScrollbarThumbHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getScrollBarHeight", "method_44394", "getScrollbarThumbHeight", "m_240211_"), "()I");
    }

    static jint getScrollbarThumbHeight(const jobject& obj) {
                
       const auto methodID = methodID_getScrollbarThumbHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderOverlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderDecorations", "method_44384", "renderOverlay", "m_239516_"), "(Lfhz;)V");
    }

    static void renderOverlay(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renderOverlay();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPadding() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "innerPadding", "method_44381", "getPadding", "m_239244_"), "()I");
    }

    static jint getPadding(const jobject& obj) {
                
       const auto methodID = methodID_getPadding();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPaddingDoubled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "totalInnerPadding", "method_44385", "getPaddingDoubled", "m_240012_"), "()I");
    }

    static jint getPaddingDoubled(const jobject& obj) {
                
       const auto methodID = methodID_getPaddingDoubled();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getScrollY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "scrollAmount", "method_44387", "getScrollY", "m_239030_"), "()D");
    }

    static jdouble getScrollY(const jobject& obj) {
                
       const auto methodID = methodID_getScrollY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_setScrollY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setScrollAmount", "method_44382", "setScrollY", "m_240206_"), "(D)V");
    }

    static void setScrollY(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_setScrollY();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMaxScrollY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getMaxScrollAmount", "method_44390", "getMaxScrollY", "m_239509_"), "()I");
    }

    static jint getMaxScrollY(const jobject& obj) {
                
       const auto methodID = methodID_getMaxScrollY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getContentsHeightWithPadding() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getContentHeight", "method_44395", "getContentsHeightWithPadding", "m_239044_"), "()I");
    }

    static jint getContentsHeightWithPadding(const jobject& obj) {
                
       const auto methodID = methodID_getContentsHeightWithPadding();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_drawBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderBackground", "method_44386", "drawBox", "m_240048_"), "(Lfhz;)V");
    }

    static void drawBox(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_drawBox();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__drawBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBorder", "method_52233", "drawBox", "m_289749_"), "(Lfhz;IIII)V");
    }

    static void _drawBox(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID__drawBox();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_drawScrollbar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderScrollBar", "method_44396", "drawScrollbar", "m_264041_"), "(Lfhz;)V");
    }

    static void drawScrollbar(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_drawScrollbar();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withinContentAreaTopBottom", "method_44383", "isVisible", "m_239942_"), "(II)Z");
    }

    static jboolean isVisible(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_isVisible();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isWithinBounds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "withinContentAreaPoint", "method_44388", "isWithinBounds", "m_239606_"), "(DD)Z");
    }

    static jboolean isWithinBounds(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_isWithinBounds();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_overflows() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "scrollbarVisible", "method_44392", "overflows", "m_239656_"), "()Z");
    }

    static jboolean overflows(const jobject& obj) {
                
       const auto methodID = methodID_overflows();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getScrollerWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "scrollbarWidth", "method_53532", "getScrollerWidth", "m_294573_"), "()I");
    }

    static jint getScrollerWidth(const jobject& obj) {
                
       const auto methodID = methodID_getScrollerWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getContentsHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getInnerHeight", "method_44391", "getContentsHeight", "m_239019_"), "()I");
    }

    static jint getContentsHeight(const jobject& obj) {
                
       const auto methodID = methodID_getContentsHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDeltaYPerScroll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "scrollRate", "method_44393", "getDeltaYPerScroll", "m_239725_"), "()D");
    }

    static jdouble getDeltaYPerScroll(const jobject& obj) {
                
       const auto methodID = methodID_getDeltaYPerScroll();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderContents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderContents", "method_44389", "renderContents", "m_239197_"), "(Lfhz;IIF)V");
    }

    static void renderContents(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderContents();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_SCROLLABLEWIDGET_HPP