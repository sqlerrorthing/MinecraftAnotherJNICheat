// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_CHUNKBUILDERMODE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_CHUNKBUILDERMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.ChunkBuilderMode
 * Remapped: fgv
 */
namespace ChunkBuilderMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgv", "net/minecraft/client/PrioritizeChunkUpdates", "net/minecraft/class_6597", "net/minecraft/client/render/ChunkBuilderMode", "net/minecraft/src/C_183059_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.ChunkBuilderMode#NONE
    [[maybe_unused]] static jobject get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_34788", "NONE", "NONE"), "Lfgv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.ChunkBuilderMode#NONE
    [[maybe_unused]] static void set_field_NONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_34788", "NONE", "NONE"), "Lfgv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.ChunkBuilderMode#PLAYER_AFFECTED
    [[maybe_unused]] static jobject get_field_PLAYER_AFFECTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLAYER_AFFECTED", "field_34789", "PLAYER_AFFECTED", "PLAYER_AFFECTED"), "Lfgv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.ChunkBuilderMode#PLAYER_AFFECTED
    [[maybe_unused]] static void set_field_PLAYER_AFFECTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLAYER_AFFECTED", "field_34789", "PLAYER_AFFECTED", "PLAYER_AFFECTED"), "Lfgv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.ChunkBuilderMode#NEARBY
    [[maybe_unused]] static jobject get_field_NEARBY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEARBY", "field_34790", "NEARBY", "NEARBY"), "Lfgv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.ChunkBuilderMode#NEARBY
    [[maybe_unused]] static void set_field_NEARBY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEARBY", "field_34790", "NEARBY", "NEARBY"), "Lfgv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.ChunkBuilderMode#BY_ID
    [[maybe_unused]] static jobject get_field_BY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_34791", "BY_ID", "f_193776_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.ChunkBuilderMode#BY_ID
    [[maybe_unused]] static void set_field_BY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_34791", "BY_ID", "f_193776_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.ChunkBuilderMode#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_34792", "id", "f_193777_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.ChunkBuilderMode#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_34792", "id", "f_193777_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.ChunkBuilderMode#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "key", "field_34793", "name", "f_193778_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.ChunkBuilderMode#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "key", "field_34793", "name", "f_193778_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfgv;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfgv;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_7362", "getId", "m_35965_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKey", "method_7359", "getTranslationKey", "m_35968_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byId", "method_38523", "get", "m_193787_"), "(I)Lfgv;");
    }

    static jobject get(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_CHUNKBUILDERMODE_HPP