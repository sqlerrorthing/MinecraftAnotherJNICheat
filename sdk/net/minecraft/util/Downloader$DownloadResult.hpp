// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_DOWNLOADER$DOWNLOADRESULT_HPP
#define NET_MINECRAFT_UTIL_DOWNLOADER$DOWNLOADRESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Downloader$DownloadResult
 * Remapped: asl$b
 */
namespace Downloader$DownloadResult {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asl$b", "net/minecraft/server/packs/DownloadQueue$BatchResult", "net/minecraft/class_9028$class_9030", "net/minecraft/util/Downloader$DownloadResult", "net/minecraft/src/C_302050_$C_302164_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.Downloader$DownloadResult#downloaded
    static jobject get_field_downloaded(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "downloaded", "comp_2143", "downloaded", "f_302807_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.Downloader$DownloadResult#downloaded
    static void set_field_downloaded(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "downloaded", "comp_2143", "downloaded", "f_302807_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.Downloader$DownloadResult#failed
    static jobject get_field_failed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "failed", "comp_2144", "failed", "f_303809_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.Downloader$DownloadResult#failed
    static void set_field_failed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "failed", "comp_2144", "failed", "f_303809_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__downloaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "downloaded", "comp_2143", "downloaded", "f_302807_"), "()Ljava/util/Map;");
    }

    static jobject _downloaded(const jobject& obj) {
                
       const auto methodID = methodID__downloaded();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__failed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "failed", "comp_2144", "failed", "f_303809_"), "()Ljava/util/Set;");
    }

    static jobject _failed(const jobject& obj) {
                
       const auto methodID = methodID__failed();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_DOWNLOADER$DOWNLOADRESULT_HPP