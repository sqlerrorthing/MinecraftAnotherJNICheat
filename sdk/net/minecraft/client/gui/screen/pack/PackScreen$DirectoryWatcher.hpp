// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_PACK_PACKSCREEN$DIRECTORYWATCHER_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_PACK_PACKSCREEN$DIRECTORYWATCHER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.pack.PackScreen$DirectoryWatcher
 * Remapped: frt$a
 */
namespace PackScreen$DirectoryWatcher {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("frt$a", "net/minecraft/client/gui/screens/packs/PackSelectionScreen$Watcher", "net/minecraft/class_5375$class_5426", "net/minecraft/client/gui/screen/pack/PackScreen$DirectoryWatcher", "net/minecraft/src/C_3706_$C_3707_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.pack.PackScreen$DirectoryWatcher#watchService
    static jobject get_field_watchService(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "watcher", "field_25790", "watchService", "f_100042_"), "Ljava/nio/file/WatchService;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.pack.PackScreen$DirectoryWatcher#watchService
    static void set_field_watchService(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "watcher", "field_25790", "watchService", "f_100042_"), "Ljava/nio/file/WatchService;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.pack.PackScreen$DirectoryWatcher#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "packPath", "field_25791", "path", "f_100043_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.pack.PackScreen$DirectoryWatcher#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "packPath", "field_25791", "path", "f_100043_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_30293", "create", "m_245748_"), "(Ljava/nio/file/Path;)Lfrt$a;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_watchDirectory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "watchDir", "method_30294", "watchDirectory", "m_100049_"), "(Ljava/nio/file/Path;)V");
    }

    static void watchDirectory(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_watchDirectory();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pollForChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pollForChanges", "method_30292", "pollForChange", "m_100046_"), "()Z");
    }

    static jboolean pollForChange(const jobject& obj) {
                
       const auto methodID = methodID_pollForChange();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_PACK_PACKSCREEN$DIRECTORYWATCHER_HPP