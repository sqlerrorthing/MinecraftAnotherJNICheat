// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_BOSSBARHUD_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_BOSSBARHUD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.BossBarHud
 * Remapped: fil
 */
namespace BossBarHud {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fil", "net/minecraft/client/gui/components/BossHealthOverlay", "net/minecraft/class_337", "net/minecraft/client/gui/hud/BossBarHud", "net/minecraft/src/C_3450_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.hud.BossBarHud#WIDTH
    [[maybe_unused]] static jint get_field_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BAR_WIDTH", "field_32177", "WIDTH", "f_168805_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.BossBarHud#WIDTH
    [[maybe_unused]] static void set_field_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BAR_WIDTH", "field_32177", "WIDTH", "f_168805_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.BossBarHud#HEIGHT
    [[maybe_unused]] static jint get_field_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BAR_HEIGHT", "field_32178", "HEIGHT", "f_168806_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.BossBarHud#HEIGHT
    [[maybe_unused]] static void set_field_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BAR_HEIGHT", "field_32178", "HEIGHT", "f_168806_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.BossBarHud#BACKGROUND_TEXTURES
    [[maybe_unused]] static jobject get_field_BACKGROUND_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BAR_BACKGROUND_SPRITES", "field_45344", "BACKGROUND_TEXTURES", "f_290930_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.BossBarHud#BACKGROUND_TEXTURES
    [[maybe_unused]] static void set_field_BACKGROUND_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BAR_BACKGROUND_SPRITES", "field_45344", "BACKGROUND_TEXTURES", "f_290930_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.BossBarHud#PROGRESS_TEXTURES
    [[maybe_unused]] static jobject get_field_PROGRESS_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BAR_PROGRESS_SPRITES", "field_45345", "PROGRESS_TEXTURES", "f_290575_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.BossBarHud#PROGRESS_TEXTURES
    [[maybe_unused]] static void set_field_PROGRESS_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BAR_PROGRESS_SPRITES", "field_45345", "PROGRESS_TEXTURES", "f_290575_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.BossBarHud#NOTCHED_BACKGROUND_TEXTURES
    [[maybe_unused]] static jobject get_field_NOTCHED_BACKGROUND_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OVERLAY_BACKGROUND_SPRITES", "field_45346", "NOTCHED_BACKGROUND_TEXTURES", "f_291445_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.BossBarHud#NOTCHED_BACKGROUND_TEXTURES
    [[maybe_unused]] static void set_field_NOTCHED_BACKGROUND_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OVERLAY_BACKGROUND_SPRITES", "field_45346", "NOTCHED_BACKGROUND_TEXTURES", "f_291445_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.BossBarHud#NOTCHED_PROGRESS_TEXTURES
    [[maybe_unused]] static jobject get_field_NOTCHED_PROGRESS_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "OVERLAY_PROGRESS_SPRITES", "field_45347", "NOTCHED_PROGRESS_TEXTURES", "f_290640_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.BossBarHud#NOTCHED_PROGRESS_TEXTURES
    [[maybe_unused]] static void set_field_NOTCHED_PROGRESS_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "OVERLAY_PROGRESS_SPRITES", "field_45347", "NOTCHED_PROGRESS_TEXTURES", "f_290640_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.BossBarHud#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minecraft", "field_2058", "client", "f_93698_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.BossBarHud#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minecraft", "field_2058", "client", "f_93698_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.hud.BossBarHud#bossBars
    static jobject get_field_bossBars(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "events", "field_2060", "bossBars", "f_93699_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.hud.BossBarHud#bossBars
    static void set_field_bossBars(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "events", "field_2060", "bossBars", "f_93699_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_1796", "render", "m_280652_"), "(Lfhz;)V");
    }

    static void render(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderBossBar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawBar", "method_1799", "renderBossBar", "m_280106_"), "(Lfhz;IILbqh;)V");
    }

    static void renderBossBar(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_renderBossBar();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__renderBossBar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawBar", "method_41830", "renderBossBar", "m_280093_"), "(Lfhz;IILbqh;I[Lakr;[Lakr;)V");
    }

    static void _renderBossBar(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jint& arg4, const jarray& arg5, const jobject& arg6, const jarray& arg7, const jobject& arg8) {
                
       const auto methodID = methodID__renderBossBar();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_handlePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_1795", "handlePacket", "m_93711_"), "(Lace;)V");
    }

    static void handlePacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_handlePacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reset", "method_1801", "clear", "m_93703_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldPlayDragonMusic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "shouldPlayMusic", "method_1798", "shouldPlayDragonMusic", "m_93713_"), "()Z");
    }

    static jboolean shouldPlayDragonMusic(const jobject& obj) {
                
       const auto methodID = methodID_shouldPlayDragonMusic();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldDarkenSky() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "shouldDarkenScreen", "method_1797", "shouldDarkenSky", "m_93714_"), "()Z");
    }

    static jboolean shouldDarkenSky(const jobject& obj) {
                
       const auto methodID = methodID_shouldDarkenSky();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldThickenFog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "shouldCreateWorldFog", "method_1800", "shouldThickenFog", "m_93715_"), "()Z");
    }

    static jboolean shouldThickenFog(const jobject& obj) {
                
       const auto methodID = methodID_shouldThickenFog();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_BOSSBARHUD_HPP