// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_DEBUG_GOALSELECTORDEBUGRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_DEBUG_GOALSELECTORDEBUGRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.debug.GoalSelectorDebugRenderer
 * Remapped: gip
 */
namespace GoalSelectorDebugRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gip", "net/minecraft/client/renderer/debug/GoalSelectorDebugRenderer", "net/minecraft/class_4205", "net/minecraft/client/render/debug/GoalSelectorDebugRenderer", "net/minecraft/src/C_4291_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.debug.GoalSelectorDebugRenderer#RANGE
    [[maybe_unused]] static jint get_field_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_RENDER_DIST", "field_32902", "RANGE", "f_173887_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.GoalSelectorDebugRenderer#RANGE
    [[maybe_unused]] static void set_field_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_RENDER_DIST", "field_32902", "RANGE", "f_173887_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.debug.GoalSelectorDebugRenderer#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_18780", "client", "f_113543_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.GoalSelectorDebugRenderer#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_18780", "client", "f_113543_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.debug.GoalSelectorDebugRenderer#goalSelectors
    static jobject get_field_goalSelectors(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "goalSelectors", "field_18781", "goalSelectors", "f_113544_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.GoalSelectorDebugRenderer#goalSelectors
    static void set_field_goalSelectors(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "goalSelectors", "field_18781", "goalSelectors", "f_113544_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clear", "method_20414", "clear", "m_5630_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setGoalSelectorList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addGoalSelector", "method_19430", "setGoalSelectorList", "m_113548_"), "(ILjd;Ljava/util/List;)V");
    }

    static void setGoalSelectorList(const jobject& obj, const jint& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_setGoalSelectorList();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_removeGoalSelectorList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeGoalSelector", "method_35799", "removeGoalSelectorList", "m_173888_"), "(I)V");
    }

    static void removeGoalSelectorList(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_removeGoalSelectorList();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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

#endif // NET_MINECRAFT_CLIENT_RENDER_DEBUG_GOALSELECTORDEBUGRENDERER_HPP