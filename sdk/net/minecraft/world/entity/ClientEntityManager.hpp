// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_ENTITY_CLIENTENTITYMANAGER_HPP
#define NET_MINECRAFT_WORLD_ENTITY_CLIENTENTITYMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.entity.ClientEntityManager
 * Remapped: dxs
 */
namespace ClientEntityManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxs", "net/minecraft/world/level/entity/TransientEntitySectionManager", "net/minecraft/class_5582", "net/minecraft/world/entity/ClientEntityManager", "net/minecraft/src/C_141298_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.world.entity.ClientEntityManager#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27279", "LOGGER", "f_157635_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.entity.ClientEntityManager#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27279", "LOGGER", "f_157635_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.world.entity.ClientEntityManager#handler
    static jobject get_field_handler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "callbacks", "field_27280", "handler", "f_157636_"), "Ldxo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.entity.ClientEntityManager#handler
    static void set_field_handler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "callbacks", "field_27280", "handler", "f_157636_"), "Ldxo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.entity.ClientEntityManager#index
    static jobject get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entityStorage", "field_27281", "index", "f_157637_"), "Ldxi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.entity.ClientEntityManager#index
    static void set_field_index(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entityStorage", "field_27281", "index", "f_157637_"), "Ldxi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.entity.ClientEntityManager#cache
    static jobject get_field_cache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sectionStorage", "field_27282", "cache", "f_157638_"), "Ldxl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.entity.ClientEntityManager#cache
    static void set_field_cache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sectionStorage", "field_27282", "cache", "f_157638_"), "Ldxl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.entity.ClientEntityManager#tickingChunkSections
    static jobject get_field_tickingChunkSections(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "tickingChunks", "field_27283", "tickingChunkSections", "f_157639_"), "Lit/unimi/dsi/fastutil/longs/LongSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.ClientEntityManager#tickingChunkSections
    static void set_field_tickingChunkSections(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "tickingChunks", "field_27283", "tickingChunkSections", "f_157639_"), "Lit/unimi/dsi/fastutil/longs/LongSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.entity.ClientEntityManager#lookup
    static jobject get_field_lookup(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "entityGetter", "field_27284", "lookup", "f_157640_"), "Ldxp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.ClientEntityManager#lookup
    static void set_field_lookup(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "entityGetter", "field_27284", "lookup", "f_157640_"), "Ldxp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_startTicking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "startTicking", "method_31869", "startTicking", "m_157651_"), "(Ldcd;)V");
    }

    static void startTicking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_startTicking();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stopTicking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stopTicking", "method_31875", "stopTicking", "m_157658_"), "(Ldcd;)V");
    }

    static void stopTicking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stopTicking();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntityGetter", "method_31866", "getLookup", "m_157645_"), "()Ldxp;");
    }

    static jobject getLookup(const jobject& obj) {
                
       const auto methodID = methodID_getLookup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_addEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addEntity", "method_31870", "addEntity", "m_157653_"), "(Ldxg;)V");
    }

    static void addEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEntityCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "count", "method_31874", "getEntityCount", "m_157657_"), "()I");
    }

    static jint getEntityCount(const jobject& obj) {
                
       const auto methodID = methodID_getEntityCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeIfEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeSectionIfEmpty", "method_31868", "removeIfEmpty", "m_157648_"), "(JLdxk;)V");
    }

    static void removeIfEmpty(const jobject& obj, const jlong& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_removeIfEmpty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getDebugString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "gatherStats", "method_31879", "getDebugString", "m_157664_"), "()Ljava/lang/String;");
    }

    static jobject getDebugString(const jobject& obj) {
                
       const auto methodID = methodID_getDebugString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_ENTITY_CLIENTENTITYMANAGER_HPP