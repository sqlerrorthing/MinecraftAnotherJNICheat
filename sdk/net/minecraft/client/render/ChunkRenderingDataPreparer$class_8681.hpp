// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$CLASS_8681_HPP
#define NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$CLASS_8681_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.ChunkRenderingDataPreparer$class_8681
 * Remapped: gfm$b
 */
namespace ChunkRenderingDataPreparer$class_8681 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfm$b", "net/minecraft/client/renderer/SectionOcclusionGraph$GraphState", "net/minecraft/class_8679$class_8681", "net/minecraft/client/render/ChunkRenderingDataPreparer$class_8681", "net/minecraft/src/C_290263_$C_290246_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.render.ChunkRenderingDataPreparer$class_8681#storage
    static jobject get_field_storage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "storage", "comp_1620", "storage", "f_290555_"), "Lgfm$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.ChunkRenderingDataPreparer$class_8681#storage
    static void set_field_storage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "storage", "comp_1620", "storage", "f_290555_"), "Lgfm$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.ChunkRenderingDataPreparer$class_8681#events
    static jobject get_field_events(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "events", "comp_1621", "events", "f_291329_"), "Lgfm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.ChunkRenderingDataPreparer$class_8681#events
    static void set_field_events(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "events", "comp_1621", "events", "f_291329_"), "Lgfm$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__storage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "storage", "comp_1620", "storage", "f_290555_"), "()Lgfm$c;");
    }

    static jobject _storage(const jobject& obj) {
                
       const auto methodID = methodID__storage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__events() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "events", "comp_1621", "events", "f_291329_"), "()Lgfm$a;");
    }

    static jobject _events(const jobject& obj) {
                
       const auto methodID = methodID__events();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$CLASS_8681_HPP