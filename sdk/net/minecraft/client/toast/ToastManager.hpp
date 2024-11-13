// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TOAST_TOASTMANAGER_HPP
#define NET_MINECRAFT_CLIENT_TOAST_TOASTMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.toast.ToastManager
 * Remapped: fkw
 */
namespace ToastManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fkw", "net/minecraft/client/gui/components/toasts/ToastComponent", "net/minecraft/class_374", "net/minecraft/client/toast/ToastManager", "net/minecraft/src/C_3503_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.toast.ToastManager#SPACES
    [[maybe_unused]] static jint get_field_SPACES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SLOT_COUNT", "field_39929", "SPACES", "f_243005_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.toast.ToastManager#SPACES
    [[maybe_unused]] static void set_field_SPACES(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SLOT_COUNT", "field_39929", "SPACES", "f_243005_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.toast.ToastManager#ALL_OCCUPIED
    [[maybe_unused]] static jint get_field_ALL_OCCUPIED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_SPACE", "field_39930", "ALL_OCCUPIED", "f_243024_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.toast.ToastManager#ALL_OCCUPIED
    [[maybe_unused]] static void set_field_ALL_OCCUPIED(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_SPACE", "field_39930", "ALL_OCCUPIED", "f_243024_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.client.toast.ToastManager#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minecraft", "field_2238", "client", "f_94914_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.toast.ToastManager#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minecraft", "field_2238", "client", "f_94914_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.toast.ToastManager#visibleEntries
    static jobject get_field_visibleEntries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "visible", "field_2239", "visibleEntries", "f_94915_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.toast.ToastManager#visibleEntries
    static void set_field_visibleEntries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "visible", "field_2239", "visibleEntries", "f_94915_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.toast.ToastManager#occupiedSpaces
    static jobject get_field_occupiedSpaces(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "occupiedSlots", "field_39931", "occupiedSpaces", "f_242998_"), "Ljava/util/BitSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.toast.ToastManager#occupiedSpaces
    static void set_field_occupiedSpaces(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "occupiedSlots", "field_39931", "occupiedSpaces", "f_242998_"), "Ljava/util/BitSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.toast.ToastManager#toastQueue
    static jobject get_field_toastQueue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "queued", "field_2240", "toastQueue", "f_94916_"), "Ljava/util/Deque;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.toast.ToastManager#toastQueue
    static void set_field_toastQueue(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "queued", "field_2240", "toastQueue", "f_94916_"), "Ljava/util/Deque;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_1996", "draw", "m_94920_"), "(Lfhz;)V");
    }

    static void draw(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTopIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findFreeIndex", "method_45073", "getTopIndex", "m_243100_"), "(I)I");
    }

    static jint getTopIndex(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getTopIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEmptySpaceCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "freeSlots", "method_45076", "getEmptySpaceCount", "m_243097_"), "()I");
    }

    static jint getEmptySpaceCount(const jobject& obj) {
                
       const auto methodID = methodID_getEmptySpaceCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getToast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getToast", "method_1997", "getToast", "m_94926_"), "(Ljava/lang/Class;Ljava/lang/Object;)Lfkv;");
    }

    static jobject getToast(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getToast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clear", "method_2000", "clear", "m_94919_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addToast", "method_1999", "add", "m_94922_"), "(Lfkv;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getClient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMinecraft", "method_1995", "getClient", "m_94929_"), "()Lfgo;");
    }

    static jobject getClient(const jobject& obj) {
                
       const auto methodID = methodID_getClient();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNotificationDisplayTimeMultiplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getNotificationDisplayTimeMultiplier", "method_48221", "getNotificationDisplayTimeMultiplier", "m_264542_"), "()D");
    }

    static jdouble getNotificationDisplayTimeMultiplier(const jobject& obj) {
                
       const auto methodID = methodID_getNotificationDisplayTimeMultiplier();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TOAST_TOASTMANAGER_HPP