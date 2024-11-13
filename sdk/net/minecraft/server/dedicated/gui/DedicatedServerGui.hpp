// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_GUI_DEDICATEDSERVERGUI_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_GUI_DEDICATEDSERVERGUI_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.gui.DedicatedServerGui
 * Remapped: apt
 */
namespace DedicatedServerGui {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("apt", "net/minecraft/server/gui/MinecraftServerGui", "net/minecraft/class_3182", "net/minecraft/server/dedicated/gui/DedicatedServerGui", "net/minecraft/src/C_5416_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#FONT_MONOSPACE
    [[maybe_unused]] static jobject get_field_FONT_MONOSPACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MONOSPACED", "field_13837", "FONT_MONOSPACE", "f_139899_"), "Ljava/awt/Font;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#FONT_MONOSPACE
    [[maybe_unused]] static void set_field_FONT_MONOSPACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MONOSPACED", "field_13837", "FONT_MONOSPACE", "f_139899_"), "Ljava/awt/Font;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_13840", "LOGGER", "f_139900_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_13840", "LOGGER", "f_139900_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#TITLE
    [[maybe_unused]] static jobject get_field_TITLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TITLE", "field_29666", "TITLE", "f_142884_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#TITLE
    [[maybe_unused]] static void set_field_TITLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TITLE", "field_29666", "TITLE", "f_142884_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#SHUTTING_DOWN_TITLE
    [[maybe_unused]] static jobject get_field_SHUTTING_DOWN_TITLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SHUTDOWN_TITLE", "field_29667", "SHUTTING_DOWN_TITLE", "f_142885_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#SHUTTING_DOWN_TITLE
    [[maybe_unused]] static void set_field_SHUTTING_DOWN_TITLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SHUTDOWN_TITLE", "field_29667", "SHUTTING_DOWN_TITLE", "f_142885_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.dedicated.gui.DedicatedServerGui#server
    static jobject get_field_server(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "server", "field_13839", "server", "f_139901_"), "Lapn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#server
    static void set_field_server(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "server", "field_13839", "server", "f_139901_"), "Lapn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.dedicated.gui.DedicatedServerGui#consoleUpdateThread
    static jobject get_field_consoleUpdateThread(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "logAppenderThread", "field_13838", "consoleUpdateThread", "f_139902_"), "Ljava/lang/Thread;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#consoleUpdateThread
    static void set_field_consoleUpdateThread(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "logAppenderThread", "field_13838", "consoleUpdateThread", "f_139902_"), "Ljava/lang/Thread;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.dedicated.gui.DedicatedServerGui#stopTasks
    static jobject get_field_stopTasks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "finalizers", "field_16855", "stopTasks", "f_139903_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.dedicated.gui.DedicatedServerGui#stopTasks
    static void set_field_stopTasks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "finalizers", "field_16855", "stopTasks", "f_139903_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.dedicated.gui.DedicatedServerGui#stopped
    static jobject get_field_stopped(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "isClosing", "field_16854", "stopped", "f_139904_"), "Ljava/util/concurrent/atomic/AtomicBoolean;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.dedicated.gui.DedicatedServerGui#stopped
    static void set_field_stopped(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "isClosing", "field_16854", "stopped", "f_139904_"), "Ljava/util/concurrent/atomic/AtomicBoolean;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "showFrameFor", "method_13969", "create", "m_139921_"), "(Lapn;)Lapt;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addStopTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addFinalizer", "method_16746", "addStopTask", "m_139909_"), "(Ljava/lang/Runnable;)V");
    }

    static void addStopTask(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addStopTask();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createStatsPanel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "buildInfoPanel", "method_13976", "createStatsPanel", "m_139932_"), "()Ljavax/swing/JComponent;");
    }

    static jobject createStatsPanel(const jobject& obj) {
                
       const auto methodID = methodID_createStatsPanel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createPlaysPanel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "buildPlayerPanel", "method_13975", "createPlaysPanel", "m_139933_"), "()Ljavax/swing/JComponent;");
    }

    static jobject createPlaysPanel(const jobject& obj) {
                
       const auto methodID = methodID_createPlaysPanel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createLogPanel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "buildChatPanel", "method_13973", "createLogPanel", "m_139934_"), "()Ljavax/swing/JComponent;");
    }

    static jobject createLogPanel(const jobject& obj) {
                
       const auto methodID = methodID_createLogPanel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_13974", "start", "m_139908_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "close", "method_16750", "stop", "m_139925_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_runStopTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "runFinalizers", "method_16747", "runStopTasks", "m_139935_"), "()V");
    }

    static void runStopTasks(const jobject& obj) {
                
       const auto methodID = methodID_runStopTasks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_appendToConsole() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "print", "method_13970", "appendToConsole", "m_139914_"), "(Ljavax/swing/JTextArea;Ljavax/swing/JScrollPane;Ljava/lang/String;)V");
    }

    static void appendToConsole(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_appendToConsole();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DEDICATED_GUI_DEDICATEDSERVERGUI_HPP