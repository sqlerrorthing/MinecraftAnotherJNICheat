// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDLISTWIDGET$LOADINGENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDLISTWIDGET$LOADINGENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.WorldListWidget$LoadingEntry
 * Remapped: ftn$b
 */
namespace WorldListWidget$LoadingEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftn$b", "net/minecraft/client/gui/screens/worldselection/WorldSelectionList$LoadingHeader", "net/minecraft/class_528$class_7415", "net/minecraft/client/gui/screen/world/WorldListWidget$LoadingEntry", "net/minecraft/src/C_3772_$C_213391_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.world.WorldListWidget$LoadingEntry#LOADING_LIST_TEXT
    [[maybe_unused]] static jobject get_field_LOADING_LIST_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOADING_LABEL", "field_38997", "LOADING_LIST_TEXT", "f_233218_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldListWidget$LoadingEntry#LOADING_LIST_TEXT
    [[maybe_unused]] static void set_field_LOADING_LIST_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOADING_LABEL", "field_38997", "LOADING_LIST_TEXT", "f_233218_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldListWidget$LoadingEntry#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_38998", "client", "f_233219_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldListWidget$LoadingEntry#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_38998", "client", "f_233219_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_getNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNarration", "method_37006", "getNarration", "m_142172_"), "()Lwz;");
    }

    static jobject getNarration(const jobject& obj) {
                
       const auto methodID = methodID_getNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDLISTWIDGET$LOADINGENTRY_HPP