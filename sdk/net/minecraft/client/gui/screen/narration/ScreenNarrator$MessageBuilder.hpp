// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$MESSAGEBUILDER_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$MESSAGEBUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.narration.ScreenNarrator$MessageBuilder
 * Remapped: fml$c
 */
namespace ScreenNarrator$MessageBuilder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fml$c", "net/minecraft/client/gui/narration/ScreenNarrationCollector$Output", "net/minecraft/class_6385$class_6388", "net/minecraft/client/gui/screen/narration/ScreenNarrator$MessageBuilder", "net/minecraft/src/C_141611_$C_141615_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.narration.ScreenNarrator$MessageBuilder#depth
    static jint get_field_depth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "depth", "field_33807", "depth", "f_169220_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.narration.ScreenNarrator$MessageBuilder#depth
    static void set_field_depth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "depth", "field_33807", "depth", "f_169220_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_put() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_37032", "put", "m_142549_"), "(Lfmh;Lfmk;)V");
    }

    static void put(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_put();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_nextMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nest", "method_37031", "nextMessage", "m_142047_"), "()Lfmi;");
    }

    static jobject nextMessage(const jobject& obj) {
                
       const auto methodID = methodID_nextMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_NARRATION_SCREENNARRATOR$MESSAGEBUILDER_HPP