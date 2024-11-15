// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_CHATHUD_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_CHATHUD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.ChatHud
 * Remapped: fin
 */
namespace ChatHud {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fin", "net/minecraft/client/gui/components/ChatComponent", "net/minecraft/class_338", "net/minecraft/client/gui/hud/ChatHud", "net/minecraft/src/C_3454_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_2065", "LOGGER", "f_93757_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_2065", "LOGGER", "f_93757_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#MAX_MESSAGES
    [[maybe_unused]] static jint get_field_MAX_MESSAGES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_CHAT_HISTORY", "field_32180", "MAX_MESSAGES", "f_168843_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#MAX_MESSAGES
    [[maybe_unused]] static void set_field_MAX_MESSAGES(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_CHAT_HISTORY", "field_32180", "MAX_MESSAGES", "f_168843_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#MISSING_MESSAGE_INDEX
    [[maybe_unused]] static jint get_field_MISSING_MESSAGE_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_NOT_FOUND", "field_39771", "MISSING_MESSAGE_INDEX", "f_240336_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#MISSING_MESSAGE_INDEX
    [[maybe_unused]] static void set_field_MISSING_MESSAGE_INDEX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_NOT_FOUND", "field_39771", "MISSING_MESSAGE_INDEX", "f_240336_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#field_39772
    [[maybe_unused]] static jint get_field_field_39772() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MESSAGE_INDENT", "field_39772", "field_39772", "f_240385_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#field_39772
    [[maybe_unused]] static void set_field_field_39772(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MESSAGE_INDENT", "field_39772", "field_39772", "f_240385_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#field_39773
    [[maybe_unused]] static jint get_field_field_39773() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MESSAGE_TAG_MARGIN_LEFT", "field_39773", "field_39773", "f_240337_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#field_39773
    [[maybe_unused]] static void set_field_field_39773(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MESSAGE_TAG_MARGIN_LEFT", "field_39773", "field_39773", "f_240337_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#OFFSET_FROM_BOTTOM
    [[maybe_unused]] static jint get_field_OFFSET_FROM_BOTTOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BOTTOM_MARGIN", "field_40389", "OFFSET_FROM_BOTTOM", "f_244226_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#OFFSET_FROM_BOTTOM
    [[maybe_unused]] static void set_field_OFFSET_FROM_BOTTOM(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BOTTOM_MARGIN", "field_40389", "OFFSET_FROM_BOTTOM", "f_244226_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#REMOVAL_QUEUE_TICKS
    [[maybe_unused]] static jint get_field_REMOVAL_QUEUE_TICKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TIME_BEFORE_MESSAGE_DELETION", "field_40390", "REMOVAL_QUEUE_TICKS", "f_243892_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#REMOVAL_QUEUE_TICKS
    [[maybe_unused]] static void set_field_REMOVAL_QUEUE_TICKS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TIME_BEFORE_MESSAGE_DELETION", "field_40390", "REMOVAL_QUEUE_TICKS", "f_243892_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.ChatHud#DELETED_MARKER_TEXT
    [[maybe_unused]] static jobject get_field_DELETED_MARKER_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DELETED_CHAT_MESSAGE", "field_40391", "DELETED_MARKER_TEXT", "f_244190_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#DELETED_MARKER_TEXT
    [[maybe_unused]] static void set_field_DELETED_MARKER_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DELETED_CHAT_MESSAGE", "field_40391", "DELETED_MARKER_TEXT", "f_244190_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.ChatHud#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "minecraft", "field_2062", "client", "f_93758_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "minecraft", "field_2062", "client", "f_93758_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.ChatHud#messageHistory
    static jobject get_field_messageHistory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "recentChat", "field_2063", "messageHistory", "f_93759_"), "Laxb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#messageHistory
    static void set_field_messageHistory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "recentChat", "field_2063", "messageHistory", "f_93759_"), "Laxb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.ChatHud#messages
    static jobject get_field_messages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "allMessages", "field_2061", "messages", "f_93760_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#messages
    static void set_field_messages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "allMessages", "field_2061", "messages", "f_93760_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.ChatHud#visibleMessages
    static jobject get_field_visibleMessages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "trimmedMessages", "field_2064", "visibleMessages", "f_93761_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#visibleMessages
    static void set_field_visibleMessages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "trimmedMessages", "field_2064", "visibleMessages", "f_93761_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.ChatHud#scrolledLines
    static jint get_field_scrolledLines(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "chatScrollbarPos", "field_2066", "scrolledLines", "f_93763_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#scrolledLines
    static void set_field_scrolledLines(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "chatScrollbarPos", "field_2066", "scrolledLines", "f_93763_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.ChatHud#hasUnreadNewMessages
    static jboolean get_field_hasUnreadNewMessages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "newMessageSinceScroll", "field_2067", "hasUnreadNewMessages", "f_93764_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#hasUnreadNewMessages
    static void set_field_hasUnreadNewMessages(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "newMessageSinceScroll", "field_2067", "hasUnreadNewMessages", "f_93764_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.ChatHud#removalQueue
    static jobject get_field_removalQueue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "messageDeletionQueue", "field_40392", "removalQueue", "f_244052_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.ChatHud#removalQueue
    static void set_field_removalQueue(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "messageDeletionQueue", "field_40392", "removalQueue", "f_244052_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tickRemovalQueueIfExists() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_45584", "tickRemovalQueueIfExists", "m_246602_"), "()V");
    }

    static void tickRemovalQueueIfExists(const jobject& obj) {
                
       const auto methodID = methodID_tickRemovalQueueIfExists();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_1805", "render", "m_280165_"), "(Lfhz;IIIZ)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_drawIndicatorIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawTagIcon", "method_44719", "drawIndicatorIcon", "m_280134_"), "(Lfhz;IILfgj$a;)V");
    }

    static void drawIndicatorIcon(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_drawIndicatorIcon();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getIndicatorX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTagIconLeft", "method_44720", "getIndicatorX", "m_240495_"), "(Lfgi$a;)I");
    }

    static jint getIndicatorX(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getIndicatorX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isChatHidden() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "isChatHidden", "method_23677", "isChatHidden", "m_93817_"), "()Z");
    }

    static jboolean isChatHidden(const jobject& obj) {
                
       const auto methodID = methodID_isChatHidden();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMessageOpacityMultiplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getTimeFactor", "method_19348", "getMessageOpacityMultiplier", "m_93775_"), "(I)D");
    }

    static jdouble getMessageOpacityMultiplier(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getMessageOpacityMultiplier();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clearMessages", "method_1808", "clear", "m_93795_"), "(Z)V");
    }

    static void clear(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addMessage", "method_1812", "addMessage", "m_93785_"), "(Lwz;)V");
    }

    static void addMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__addMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addMessage", "method_44811", "addMessage", "m_240964_"), "(Lwz;Lxl;Lfgj;)V");
    }

    static void _addMessage(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__addMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_logChatMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "logChatMessage", "method_45027", "logChatMessage", "m_242648_"), "(Lfgi;)V");
    }

    static void logChatMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_logChatMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addVisibleMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addMessageToDisplayQueue", "method_1815", "addVisibleMessage", "m_320310_"), "(Lfgi;)V");
    }

    static void addVisibleMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addVisibleMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___addMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "addMessageToQueue", "method_58744", "addMessage", "m_319022_"), "(Lfgi;)V");
    }

    static void __addMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___addMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tickRemovalQueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "processMessageDeletionQueue", "method_45589", "tickRemovalQueue", "m_246025_"), "()V");
    }

    static void tickRemovalQueue(const jobject& obj) {
                
       const auto methodID = methodID_tickRemovalQueue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deleteMessage", "method_44812", "removeMessage", "m_240953_"), "(Lxl;)V");
    }

    static void removeMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_queueForRemoval() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "deleteMessageOrDelay", "method_45587", "queueForRemoval", "m_245423_"), "(Lxl;)Lfin$a;");
    }

    static jobject queueForRemoval(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_queueForRemoval();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createRemovalMarker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "createDeletedMarker", "method_45586", "createRemovalMarker", "m_246885_"), "(Lfgi;)Lfgi;");
    }

    static jobject createRemovalMarker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createRemovalMarker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_reset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "rescaleChat", "method_1817", "reset", "m_93769_"), "()V");
    }

    static void reset(const jobject& obj) {
                
       const auto methodID = methodID_reset();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_refresh() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "refreshTrimmedMessages", "method_44813", "refresh", "m_324364_"), "()V");
    }

    static void refresh(const jobject& obj) {
                
       const auto methodID = methodID_refresh();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMessageHistory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getRecentChat", "method_1809", "getMessageHistory", "m_93797_"), "()Laxb;");
    }

    static jobject getMessageHistory(const jobject& obj) {
                
       const auto methodID = methodID_getMessageHistory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_addToMessageHistory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addRecentChat", "method_1803", "addToMessageHistory", "m_93783_"), "(Ljava/lang/String;)V");
    }

    static void addToMessageHistory(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addToMessageHistory();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_resetScroll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "resetChatScroll", "method_1820", "resetScroll", "m_93810_"), "()V");
    }

    static void resetScroll(const jobject& obj) {
                
       const auto methodID = methodID_resetScroll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_scroll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scrollChat", "method_1802", "scroll", "m_205360_"), "(I)V");
    }

    static void scroll(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_scroll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChatQueueClicked", "method_27146", "mouseClicked", "m_93772_"), "(DD)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTextStyleAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getClickedComponentStyleAt", "method_1816", "getTextStyleAt", "m_93800_"), "(DD)Lxw;");
    }

    static jobject getTextStyleAt(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_getTextStyleAt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getIndicatorAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMessageTagAt", "method_44723", "getIndicatorAt", "m_240463_"), "(DD)Lfgj;");
    }

    static jobject getIndicatorAt(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_getIndicatorAt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isXInsideIndicatorIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasSelectedMessageTag", "method_44718", "isXInsideIndicatorIcon", "m_240447_"), "(DLfgi$a;Lfgj;)Z");
    }

    static jboolean isXInsideIndicatorIcon(const jobject& obj, const jdouble& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_isXInsideIndicatorIcon();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_toChatLineX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "screenToChatX", "method_44722", "toChatLineX", "m_240491_"), "(D)D");
    }

    static jdouble toChatLineX(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_toChatLineX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toChatLineY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "screenToChatY", "method_44724", "toChatLineY", "m_240485_"), "(D)D");
    }

    static jdouble toChatLineY(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_toChatLineY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMessageIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getMessageEndIndexAt", "method_45588", "getMessageIndex", "m_246107_"), "(DD)I");
    }

    static jint getMessageIndex(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_getMessageIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMessageLineIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getMessageLineIndexAt", "method_44725", "getMessageLineIndex", "m_247428_"), "(DD)I");
    }

    static jint getMessageLineIndex(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_getMessageLineIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isChatFocused() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isChatFocused", "method_1819", "isChatFocused", "m_93818_"), "()Z");
    }

    static jboolean isChatFocused(const jobject& obj) {
                
       const auto methodID = methodID_isChatFocused();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getWidth", "method_1811", "getWidth", "m_93813_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getHeight", "method_1810", "getHeight", "m_93814_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChatScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getScale", "method_1814", "getChatScale", "m_93815_"), "()D");
    }

    static jdouble getChatScale(const jobject& obj) {
                
       const auto methodID = methodID_getChatScale();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getWidth", "method_1806", "getWidth", "m_93798_"), "(D)I");
    }

    static jint _getWidth(const jdouble& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getWidth();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getHeight", "method_1818", "getHeight", "m_93811_"), "(D)I");
    }

    static jint _getHeight(const jdouble& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getHeight();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getDefaultUnfocusedHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("i", "defaultUnfocusedPct", "method_41831", "getDefaultUnfocusedHeight", "m_232477_"), "()D");
    }

    static jdouble getDefaultUnfocusedHeight() {
       const auto clazz = self();
       const auto methodID = methodID_getDefaultUnfocusedHeight();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getVisibleLineCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getLinesPerPage", "method_1813", "getVisibleLineCount", "m_93816_"), "()I");
    }

    static jint getVisibleLineCount(const jobject& obj) {
                
       const auto methodID = methodID_getVisibleLineCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLineHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getLineHeight", "method_44752", "getLineHeight", "m_240691_"), "()I");
    }

    static jint getLineHeight(const jobject& obj) {
                
       const auto methodID = methodID_getLineHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_toChatState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "storeState", "method_58745", "toChatState", "m_322825_"), "()Lfin$b;");
    }

    static jobject toChatState(const jobject& obj) {
                
       const auto methodID = methodID_toChatState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_restoreChatState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "restoreState", "method_58743", "restoreChatState", "m_324317_"), "(Lfin$b;)V");
    }

    static void restoreChatState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_restoreChatState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_CHATHUD_HPP