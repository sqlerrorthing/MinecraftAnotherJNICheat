// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_CONNECTSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_CONNECTSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.multiplayer.ConnectScreen
 * Remapped: fnc
 */
namespace ConnectScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fnc", "net/minecraft/client/gui/screens/ConnectScreen", "net/minecraft/class_412", "net/minecraft/client/gui/screen/multiplayer/ConnectScreen", "net/minecraft/src/C_3542_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#CONNECTOR_THREADS_COUNT
    [[maybe_unused]] static jobject get_field_CONNECTOR_THREADS_COUNT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UNIQUE_THREAD_ID", "field_2408", "CONNECTOR_THREADS_COUNT", "f_95682_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#CONNECTOR_THREADS_COUNT
    [[maybe_unused]] static void set_field_CONNECTOR_THREADS_COUNT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UNIQUE_THREAD_ID", "field_2408", "CONNECTOR_THREADS_COUNT", "f_95682_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "LOGGER", "field_2410", "LOGGER", "f_95683_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "LOGGER", "field_2410", "LOGGER", "f_95683_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#NARRATOR_INTERVAL
    [[maybe_unused]] static jlong get_field_NARRATOR_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "NARRATION_DELAY_MS", "field_32238", "NARRATOR_INTERVAL", "f_169261_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#NARRATOR_INTERVAL
    [[maybe_unused]] static void set_field_NARRATOR_INTERVAL(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "NARRATION_DELAY_MS", "field_32238", "NARRATOR_INTERVAL", "f_169261_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#ABORTED_TEXT
    [[maybe_unused]] static jobject get_field_ABORTED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ABORT_CONNECTION", "field_44970", "ABORTED_TEXT", "f_290019_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#ABORTED_TEXT
    [[maybe_unused]] static void set_field_ABORTED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ABORT_CONNECTION", "field_44970", "ABORTED_TEXT", "f_290019_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#UNKNOWN_HOST_TEXT
    [[maybe_unused]] static jobject get_field_UNKNOWN_HOST_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "UNKNOWN_HOST_MESSAGE", "field_33736", "UNKNOWN_HOST_TEXT", "f_169260_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#UNKNOWN_HOST_TEXT
    [[maybe_unused]] static void set_field_UNKNOWN_HOST_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "UNKNOWN_HOST_MESSAGE", "field_33736", "UNKNOWN_HOST_TEXT", "f_169260_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#connection
    static jobject get_field_connection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "connection", "field_2411", "connection", "f_95684_"), "Lvt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#connection
    static void set_field_connection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "connection", "field_2411", "connection", "f_95684_"), "Lvt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#future
    static jobject get_field_future(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "channelFuture", "field_44971", "future", "f_290020_"), "Lio/netty/channel/ChannelFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#future
    static void set_field_future(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "channelFuture", "field_44971", "future", "f_290020_"), "Lio/netty/channel/ChannelFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#connectingCancelled
    static jboolean get_field_connectingCancelled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "aborted", "field_2409", "connectingCancelled", "f_95685_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#connectingCancelled
    static void set_field_connectingCancelled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "aborted", "field_2409", "connectingCancelled", "f_95685_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "parent", "field_2412", "parent", "f_95686_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "parent", "field_2412", "parent", "f_95686_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#status
    static jobject get_field_status(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "status", "field_2413", "status", "f_95687_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#status
    static void set_field_status(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "status", "field_2413", "status", "f_95687_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#lastNarrationTime
    static jlong get_field_lastNarrationTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "lastNarration", "field_19097", "lastNarrationTime", "f_95688_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#lastNarrationTime
    static void set_field_lastNarrationTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "lastNarration", "field_19097", "lastNarrationTime", "f_95688_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#failureErrorMessage
    static jobject get_field_failureErrorMessage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "connectFailedTitle", "field_44548", "failureErrorMessage", "f_278471_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.ConnectScreen#failureErrorMessage
    static void set_field_failureErrorMessage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "connectFailedTitle", "field_44548", "failureErrorMessage", "f_278471_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_connect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "startConnecting", "method_36877", "connect", "m_278792_"), "(Lfod;Lfgo;Lgax;Lfzt;ZLfzy;)V");
    }

    static void connect(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_connect();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID__connect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "connect", "method_2130", "connect", "m_247688_"), "(Lfgo;Lgax;Lfzt;Lfzy;)V");
    }

    static void _connect(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID__connect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_setStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateStatus", "method_2131", "setStatus", "m_95717_"), "(Lwz;)V");
    }

    static void setStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "tick", "method_25393", "tick", "m_86600_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldCloseOnEsc() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aJ_", "shouldCloseOnEsc", "method_25422", "shouldCloseOnEsc", "m_6913_"), "()Z");
    }

    static jboolean shouldCloseOnEsc(const jobject& obj) {
                
       const auto methodID = methodID_shouldCloseOnEsc();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
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
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_CONNECTSCREEN_HPP