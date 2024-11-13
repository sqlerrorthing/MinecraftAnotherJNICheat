// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBROKENWORLDSCREEN_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBROKENWORLDSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen
 * Remapped: fdv
 */
namespace RealmsBrokenWorldScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdv", "com/mojang/realmsclient/gui/screens/RealmsBrokenWorldScreen", "net/minecraft/class_4384", "net/minecraft/client/realms/gui/screen/RealmsBrokenWorldScreen", "net/minecraft/src/C_3290_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#SLOT_FRAME_TEXTURE
    [[maybe_unused]] static jobject get_field_SLOT_FRAME_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SLOT_FRAME_SPRITE", "field_45239", "SLOT_FRAME_TEXTURE", "f_291735_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#SLOT_FRAME_TEXTURE
    [[maybe_unused]] static void set_field_SLOT_FRAME_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SLOT_FRAME_SPRITE", "field_45239", "SLOT_FRAME_TEXTURE", "f_291735_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_19763", "LOGGER", "f_88283_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_19763", "LOGGER", "f_88283_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#field_32120
    [[maybe_unused]] static jint get_field_field_32120() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_BUTTON_WIDTH", "field_32120", "field_32120", "f_167363_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#field_32120
    [[maybe_unused]] static void set_field_field_32120(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_BUTTON_WIDTH", "field_32120", "field_32120", "f_167363_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "lastScreen", "field_19764", "parent", "f_88284_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "lastScreen", "field_19764", "parent", "f_88284_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#serverData
    static jobject get_field_serverData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "serverData", "field_20492", "serverData", "f_88286_"), "Lfcp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#serverData
    static void set_field_serverData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "serverData", "field_20492", "serverData", "f_88286_"), "Lfcp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#serverId
    static jlong get_field_serverId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "serverId", "field_19767", "serverId", "f_88287_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#serverId
    static void set_field_serverId(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "serverId", "field_19767", "serverId", "f_88287_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#message
    static jobject get_field_message(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "message", "field_19769", "message", "f_88289_"), "[Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#message
    static void set_field_message(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "message", "field_19769", "message", "f_88289_"), "[Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#left_x
    static jint get_field_left_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "leftX", "field_19770", "left_x", "f_88290_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#left_x
    static void set_field_left_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "leftX", "field_19770", "left_x", "f_88290_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#slotsThatHasBeenDownloaded
    static jobject get_field_slotsThatHasBeenDownloaded(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "slotsThatHasBeenDownloaded", "field_19778", "slotsThatHasBeenDownloaded", "f_88292_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#slotsThatHasBeenDownloaded
    static void set_field_slotsThatHasBeenDownloaded(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "slotsThatHasBeenDownloaded", "field_19778", "slotsThatHasBeenDownloaded", "f_88292_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#animTick
    static jint get_field_animTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "animTick", "field_19779", "animTick", "f_88293_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsBrokenWorldScreen#animTick
    static void set_field_animTick(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "animTick", "field_19779", "animTick", "f_88293_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNarratedTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getNarrationMessage", "method_25435", "getNarratedTitle", "m_142562_"), "()Lwz;");
    }

    static jobject getNarratedTitle(const jobject& obj) {
                
       const auto methodID = methodID_getNarratedTitle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_addButtons() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "addButtons", "method_21178", "addButtons", "m_88350_"), "()V");
    }

    static void addButtons(const jobject& obj) {
                
       const auto methodID = methodID_addButtons();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "tick", "method_25393", "tick", "m_86600_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getFramePositionX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFramePositionX", "method_21179", "getFramePositionX", "m_88301_"), "(I)I");
    }

    static jint getFramePositionX(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getFramePositionX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fetchServerData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fetchServerData", "method_21181", "fetchServerData", "m_88313_"), "(J)V");
    }

    static void fetchServerData(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_fetchServerData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_play() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "doSwitchOrReset", "method_25123", "play", "m_88300_"), "()V");
    }

    static void play(const jobject& obj) {
                
       const auto methodID = methodID_play();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_downloadWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "downloadWorld", "method_21187", "downloadWorld", "m_88335_"), "(I)V");
    }

    static void downloadWorld(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_downloadWorld();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isMinigame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "isMinigame", "method_21196", "isMinigame", "m_88352_"), "()Z");
    }

    static jboolean isMinigame(const jobject& obj) {
                
       const auto methodID = methodID_isMinigame();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_drawSlotFrame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawSlotFrame", "method_21180", "drawSlotFrame", "m_280068_"), "(Lfhz;IIIIZLjava/lang/String;IJLjava/lang/String;Z)V");
    }

    static void drawSlotFrame(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jboolean& arg5, const jobject& arg6, const jint& arg7, const jlong& arg8, const jobject& arg9, const jboolean& arg10) {
                
       const auto methodID = methodID_drawSlotFrame();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSBROKENWORLDSCREEN_HPP