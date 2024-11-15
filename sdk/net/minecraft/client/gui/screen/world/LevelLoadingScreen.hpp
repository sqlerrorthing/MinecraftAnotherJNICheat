// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_LEVELLOADINGSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_LEVELLOADINGSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.LevelLoadingScreen
 * Remapped: fnr
 */
namespace LevelLoadingScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fnr", "net/minecraft/client/gui/screens/LevelLoadingScreen", "net/minecraft/class_3928", "net/minecraft/client/gui/screen/world/LevelLoadingScreen", "net/minecraft/src/C_3564_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#NARRATION_DELAY
    [[maybe_unused]] static jlong get_field_NARRATION_DELAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NARRATION_DELAY_MS", "field_32246", "NARRATION_DELAY", "f_169309_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#NARRATION_DELAY
    [[maybe_unused]] static void set_field_NARRATION_DELAY(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NARRATION_DELAY_MS", "field_32246", "NARRATION_DELAY", "f_169309_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#progressProvider
    static jobject get_field_progressProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "progressListener", "field_17406", "progressProvider", "f_96138_"), "Larh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#progressProvider
    static void set_field_progressProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "progressListener", "field_17406", "progressProvider", "f_96138_"), "Larh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#lastNarrationTime
    static jlong get_field_lastNarrationTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastNarration", "field_19101", "lastNarrationTime", "f_96139_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#lastNarrationTime
    static void set_field_lastNarrationTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastNarration", "field_19101", "lastNarrationTime", "f_96139_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#done
    static jboolean get_field_done(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "done", "field_33810", "done", "f_169310_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#done
    static void set_field_done(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "done", "field_33810", "done", "f_169310_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#STATUS_TO_COLOR
    [[maybe_unused]] static jobject get_field_STATUS_TO_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "COLORS", "field_17407", "STATUS_TO_COLOR", "f_96140_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.LevelLoadingScreen#STATUS_TO_COLOR
    [[maybe_unused]] static void set_field_STATUS_TO_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "COLORS", "field_17407", "STATUS_TO_COLOR", "f_96140_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_shouldCloseOnEsc() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aJ_", "shouldCloseOnEsc", "method_25422", "shouldCloseOnEsc", "m_6913_"), "()Z");
    }

    static jboolean shouldCloseOnEsc(const jobject& obj) {
                
       const auto methodID = methodID_shouldCloseOnEsc();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasUsageText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aS_", "shouldNarrateNavigation", "method_48262", "hasUsageText", "m_264396_"), "()Z");
    }

    static jboolean hasUsageText(const jobject& obj) {
                
       const auto methodID = methodID_hasUsageText();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_removed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "removed", "method_25432", "removed", "m_7861_"), "()V");
    }

    static void removed(const jobject& obj) {
                
       const auto methodID = methodID_removed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addElementNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateNarratedWidget", "method_37056", "addElementNarrations", "m_142227_"), "(Lfmi;)V");
    }

    static void addElementNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addElementNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPercentage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getFormattedProgress", "method_37057", "getPercentage", "m_169313_"), "()Lwz;");
    }

    static jobject getPercentage(const jobject& obj) {
                
       const auto methodID = methodID_getPercentage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawChunkMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderChunks", "method_17538", "drawChunkMap", "m_96149_"), "(Lfhz;Larh;IIII)V");
    }

    static void drawChunkMap(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_drawChunkMap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_LEVELLOADINGSCREEN_HPP