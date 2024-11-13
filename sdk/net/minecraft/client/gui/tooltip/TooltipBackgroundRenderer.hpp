// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_TOOLTIP_TOOLTIPBACKGROUNDRENDERER_HPP
#define NET_MINECRAFT_CLIENT_GUI_TOOLTIP_TOOLTIPBACKGROUNDRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer
 * Remapped: fqr
 */
namespace TooltipBackgroundRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fqr", "net/minecraft/client/gui/screens/inventory/tooltip/TooltipRenderUtil", "net/minecraft/class_8002", "net/minecraft/client/gui/tooltip/TooltipBackgroundRenderer", "net/minecraft/src/C_262715_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41688
    [[maybe_unused]] static jint get_field_field_41688() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MOUSE_OFFSET", "field_41688", "field_41688", "f_262731_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41688
    [[maybe_unused]] static void set_field_field_41688(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MOUSE_OFFSET", "field_41688", "field_41688", "f_262731_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41693
    [[maybe_unused]] static jint get_field_field_41693() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "PADDING", "field_41693", "field_41693", "f_262737_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41693
    [[maybe_unused]] static void set_field_field_41693(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "PADDING", "field_41693", "field_41693", "f_262737_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41689
    [[maybe_unused]] static jint get_field_field_41689() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PADDING_LEFT", "field_41689", "field_41689", "f_262753_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41689
    [[maybe_unused]] static void set_field_field_41689(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PADDING_LEFT", "field_41689", "field_41689", "f_262753_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41690
    [[maybe_unused]] static jint get_field_field_41690() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PADDING_RIGHT", "field_41690", "field_41690", "f_262741_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41690
    [[maybe_unused]] static void set_field_field_41690(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PADDING_RIGHT", "field_41690", "field_41690", "f_262741_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41691
    [[maybe_unused]] static jint get_field_field_41691() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PADDING_TOP", "field_41691", "field_41691", "f_262749_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41691
    [[maybe_unused]] static void set_field_field_41691(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PADDING_TOP", "field_41691", "field_41691", "f_262749_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41692
    [[maybe_unused]] static jint get_field_field_41692() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PADDING_BOTTOM", "field_41692", "field_41692", "f_262756_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#field_41692
    [[maybe_unused]] static void set_field_field_41692(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PADDING_BOTTOM", "field_41692", "field_41692", "f_262756_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#BACKGROUND_COLOR
    [[maybe_unused]] static jint get_field_BACKGROUND_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BACKGROUND_COLOR", "field_41694", "BACKGROUND_COLOR", "f_262744_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#BACKGROUND_COLOR
    [[maybe_unused]] static void set_field_BACKGROUND_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BACKGROUND_COLOR", "field_41694", "BACKGROUND_COLOR", "f_262744_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#START_Y_BORDER_COLOR
    [[maybe_unused]] static jint get_field_START_Y_BORDER_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BORDER_COLOR_TOP", "field_41695", "START_Y_BORDER_COLOR", "f_262725_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#START_Y_BORDER_COLOR
    [[maybe_unused]] static void set_field_START_Y_BORDER_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BORDER_COLOR_TOP", "field_41695", "START_Y_BORDER_COLOR", "f_262725_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#END_Y_BORDER_COLOR
    [[maybe_unused]] static jint get_field_END_Y_BORDER_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BORDER_COLOR_BOTTOM", "field_41696", "END_Y_BORDER_COLOR", "f_262743_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.tooltip.TooltipBackgroundRenderer#END_Y_BORDER_COLOR
    [[maybe_unused]] static void set_field_END_Y_BORDER_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BORDER_COLOR_BOTTOM", "field_41696", "END_Y_BORDER_COLOR", "f_262743_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderTooltipBackground", "method_47946", "render", "m_280205_"), "(Lfhz;IIIII)V");
    }

    static void render(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_renderBorder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderFrameGradient", "method_47948", "renderBorder", "m_280115_"), "(Lfhz;IIIIIII)V");
    }

    static void renderBorder(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7) {
       const auto clazz = self();
       const auto methodID = methodID_renderBorder();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_renderVerticalLine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "renderVerticalLine", "method_47949", "renderVerticalLine", "m_280387_"), "(Lfhz;IIIII)V");
    }

    static void renderVerticalLine(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_renderVerticalLine();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID__renderVerticalLine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderVerticalLineGradient", "method_47947", "renderVerticalLine", "m_280556_"), "(Lfhz;IIIIII)V");
    }

    static void _renderVerticalLine(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6) {
       const auto clazz = self();
       const auto methodID = methodID__renderVerticalLine();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_renderHorizontalLine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "renderHorizontalLine", "method_47951", "renderHorizontalLine", "m_280217_"), "(Lfhz;IIIII)V");
    }

    static void renderHorizontalLine(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_renderHorizontalLine();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_renderRectangle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "renderRectangle", "method_47950", "renderRectangle", "m_280538_"), "(Lfhz;IIIIII)V");
    }

    static void renderRectangle(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_renderRectangle();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_TOOLTIP_TOOLTIPBACKGROUNDRENDERER_HPP