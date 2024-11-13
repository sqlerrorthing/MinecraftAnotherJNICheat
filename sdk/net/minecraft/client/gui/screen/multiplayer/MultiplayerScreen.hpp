// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_MULTIPLAYERSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_MULTIPLAYERSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen
 * Remapped: fqt
 */
namespace MultiplayerScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fqt", "net/minecraft/client/gui/screens/multiplayer/JoinMultiplayerScreen", "net/minecraft/class_500", "net/minecraft/client/gui/screen/multiplayer/MultiplayerScreen", "net/minecraft/src/C_3694_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41849
    [[maybe_unused]] static jint get_field_field_41849() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BUTTON_ROW_WIDTH", "field_41849", "field_41849", "f_263797_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41849
    [[maybe_unused]] static void set_field_field_41849(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BUTTON_ROW_WIDTH", "field_41849", "field_41849", "f_263797_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41850
    [[maybe_unused]] static jint get_field_field_41850() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOP_ROW_BUTTON_WIDTH", "field_41850", "field_41850", "f_263689_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41850
    [[maybe_unused]] static void set_field_field_41850(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOP_ROW_BUTTON_WIDTH", "field_41850", "field_41850", "f_263689_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41851
    [[maybe_unused]] static jint get_field_field_41851() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOWER_ROW_BUTTON_WIDTH", "field_41851", "field_41851", "f_263727_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41851
    [[maybe_unused]] static void set_field_field_41851(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOWER_ROW_BUTTON_WIDTH", "field_41851", "field_41851", "f_263727_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41852
    [[maybe_unused]] static jint get_field_field_41852() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "FOOTER_HEIGHT", "field_41852", "field_41852", "f_263805_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#field_41852
    [[maybe_unused]] static void set_field_field_41852(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "FOOTER_HEIGHT", "field_41852", "field_41852", "f_263805_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "LOGGER", "field_3044", "LOGGER", "f_99674_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "LOGGER", "field_3044", "LOGGER", "f_99674_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#serverListPinger
    static jobject get_field_serverListPinger(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "pinger", "field_3037", "serverListPinger", "f_99675_"), "Lfzv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#serverListPinger
    static void set_field_serverListPinger(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "pinger", "field_3037", "serverListPinger", "f_99675_"), "Lfzv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "lastScreen", "field_3049", "parent", "f_99676_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "lastScreen", "field_3049", "parent", "f_99676_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#serverListWidget
    static jobject get_field_serverListWidget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "serverSelectionList", "field_3043", "serverListWidget", "f_99673_"), "Lfqx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#serverListWidget
    static void set_field_serverListWidget(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "serverSelectionList", "field_3043", "serverListWidget", "f_99673_"), "Lfqx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#serverList
    static jobject get_field_serverList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "servers", "field_3040", "serverList", "f_99677_"), "Lfzu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#serverList
    static void set_field_serverList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "servers", "field_3040", "serverList", "f_99677_"), "Lfzu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#buttonEdit
    static jobject get_field_buttonEdit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "editButton", "field_3041", "buttonEdit", "f_99678_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#buttonEdit
    static void set_field_buttonEdit(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "editButton", "field_3041", "buttonEdit", "f_99678_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#buttonJoin
    static jobject get_field_buttonJoin(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "selectButton", "field_3050", "buttonJoin", "f_99679_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#buttonJoin
    static void set_field_buttonJoin(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "selectButton", "field_3050", "buttonJoin", "f_99679_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#buttonDelete
    static jobject get_field_buttonDelete(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "deleteButton", "field_3047", "buttonDelete", "f_99680_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#buttonDelete
    static void set_field_buttonDelete(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "deleteButton", "field_3047", "buttonDelete", "f_99680_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#selectedEntry
    static jobject get_field_selectedEntry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "editingServer", "field_3051", "selectedEntry", "f_99682_"), "Lfzt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#selectedEntry
    static void set_field_selectedEntry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "editingServer", "field_3051", "selectedEntry", "f_99682_"), "Lfzt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#lanServers
    static jobject get_field_lanServers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "lanServerList", "field_3046", "lanServers", "f_99683_"), "Lguq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#lanServers
    static void set_field_lanServers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "lanServerList", "field_3046", "lanServers", "f_99683_"), "Lguq$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#lanServerDetector
    static jobject get_field_lanServerDetector(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "lanServerDetector", "field_3045", "lanServerDetector", "f_99684_"), "Lguq$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#lanServerDetector
    static void set_field_lanServerDetector(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "lanServerDetector", "field_3045", "lanServerDetector", "f_99684_"), "Lguq$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#initialized
    static jboolean get_field_initialized(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "initedOnce", "field_3048", "initialized", "f_99685_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerScreen#initialized
    static void set_field_initialized(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "initedOnce", "field_3048", "initialized", "f_99685_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
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
    
    static jmethodID methodID_removed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "removed", "method_25432", "removed", "m_7861_"), "()V");
    }

    static void removed(const jobject& obj) {
                
       const auto methodID = methodID_removed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_refresh() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "refreshServerList", "method_2534", "refresh", "m_99733_"), "()V");
    }

    static void refresh(const jobject& obj) {
                
       const auto methodID = methodID_refresh();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "deleteCallback", "method_20377", "removeEntry", "m_99711_"), "(Z)V");
    }

    static void removeEntry(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_removeEntry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_editEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "editServerCallback", "method_20378", "editEntry", "m_99716_"), "(Z)V");
    }

    static void editEntry(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_editEntry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "addServerCallback", "method_20379", "addEntry", "m_99721_"), "(Z)V");
    }

    static void addEntry(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_addEntry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_directConnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "directJoinCallback", "method_20380", "directConnect", "m_99725_"), "(Z)V");
    }

    static void directConnect(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_directConnect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_connect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "joinSelectedServer", "method_2536", "connect", "m_99729_"), "()V");
    }

    static void connect(const jobject& obj) {
                
       const auto methodID = methodID_connect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__connect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "join", "method_2548", "connect", "m_99702_"), "(Lfzt;)V");
    }

    static void _connect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__connect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_select() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_2531", "select", "m_99700_"), "(Lfqx$a;)V");
    }

    static void select(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_select();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateButtonActivationStates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "onSelectedChange", "method_20121", "updateButtonActivationStates", "m_99730_"), "()V");
    }

    static void updateButtonActivationStates(const jobject& obj) {
                
       const auto methodID = methodID_updateButtonActivationStates();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getServerListPinger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "getPinger", "method_2538", "getServerListPinger", "m_99731_"), "()Lfzv;");
    }

    static jobject getServerListPinger(const jobject& obj) {
                
       const auto methodID = methodID_getServerListPinger();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getServerList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "getServers", "method_2529", "getServerList", "m_99732_"), "()Lfzu;");
    }

    static jobject getServerList(const jobject& obj) {
                
       const auto methodID = methodID_getServerList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_MULTIPLAYERSCREEN_HPP