// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_ENTITY_ENTITYINDEX_HPP
#define NET_MINECRAFT_WORLD_ENTITY_ENTITYINDEX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.entity.EntityIndex
 * Remapped: dxi
 */
namespace EntityIndex {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxi", "net/minecraft/world/level/entity/EntityLookup", "net/minecraft/class_5570", "net/minecraft/world/entity/EntityIndex", "net/minecraft/src/C_141282_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.entity.EntityIndex#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27244", "LOGGER", "f_156806_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.EntityIndex#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27244", "LOGGER", "f_156806_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.entity.EntityIndex#idToEntity
    static jobject get_field_idToEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "byId", "field_27245", "idToEntity", "f_156807_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.EntityIndex#idToEntity
    static void set_field_idToEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "byId", "field_27245", "idToEntity", "f_156807_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.entity.EntityIndex#uuidToEntity
    static jobject get_field_uuidToEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "byUuid", "field_27246", "uuidToEntity", "f_156808_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.EntityIndex#uuidToEntity
    static void set_field_uuidToEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "byUuid", "field_27246", "uuidToEntity", "f_156808_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_forEach() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntities", "method_31754", "forEach", "m_260822_"), "(Ldxn;Laxa;)V");
    }

    static void forEach(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_forEach();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_iterate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAllEntities", "method_31751", "iterate", "m_156811_"), "()Ljava/lang/Iterable;");
    }

    static jobject iterate(const jobject& obj) {
                
       const auto methodID = methodID_iterate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_31753", "add", "m_156814_"), "(Ldxg;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "remove", "method_31757", "remove", "m_156822_"), "(Ldxg;)V");
    }

    static void remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntity", "method_31752", "get", "m_156812_"), "(I)Ldxg;");
    }

    static jobject get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntity", "method_31755", "get", "m_156819_"), "(Ljava/util/UUID;)Ldxg;");
    }

    static jobject _get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "count", "method_31756", "size", "m_156821_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_ENTITY_ENTITYINDEX_HPP