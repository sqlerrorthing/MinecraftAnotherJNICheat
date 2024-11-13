// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_DEBUG_NEIGHBORUPDATEDEBUGRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_DEBUG_NEIGHBORUPDATEDEBUGRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.debug.NeighborUpdateDebugRenderer
 * Remapped: git
 */
namespace NeighborUpdateDebugRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("git", "net/minecraft/client/renderer/debug/NeighborsUpdateRenderer", "net/minecraft/class_869", "net/minecraft/client/render/debug/NeighborUpdateDebugRenderer", "net/minecraft/src/C_4296_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.debug.NeighborUpdateDebugRenderer#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "minecraft", "field_4622", "client", "f_113592_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.NeighborUpdateDebugRenderer#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "minecraft", "field_4622", "client", "f_113592_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.debug.NeighborUpdateDebugRenderer#neighborUpdates
    static jobject get_field_neighborUpdates(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lastUpdate", "field_4623", "neighborUpdates", "f_113593_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.NeighborUpdateDebugRenderer#neighborUpdates
    static void set_field_neighborUpdates(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lastUpdate", "field_4623", "neighborUpdates", "f_113593_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addNeighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addUpdate", "method_3870", "addNeighborUpdate", "m_113596_"), "(JLjd;)V");
    }

    static void addNeighborUpdate(const jobject& obj, const jlong& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addNeighborUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_23109", "render", "m_7790_"), "(Lfbi;Lgez;DDD)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_DEBUG_NEIGHBORUPDATEDEBUGRENDERER_HPP