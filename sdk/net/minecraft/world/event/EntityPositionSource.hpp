// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_EVENT_ENTITYPOSITIONSOURCE_HPP
#define NET_MINECRAFT_WORLD_EVENT_ENTITYPOSITIONSOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.event.EntityPositionSource
 * Remapped: dxx
 */
namespace EntityPositionSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxx", "net/minecraft/world/level/gameevent/EntityPositionSource", "net/minecraft/class_5709", "net/minecraft/world/event/EntityPositionSource", "net/minecraft/src/C_141304_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.event.EntityPositionSource#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28139", "CODEC", "f_157725_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.event.EntityPositionSource#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28139", "CODEC", "f_157725_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.event.EntityPositionSource#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48378", "PACKET_CODEC", "f_316100_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.event.EntityPositionSource#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48378", "PACKET_CODEC", "f_316100_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.EntityPositionSource#source
    static jobject get_field_source(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "entityOrUuidOrId", "field_38424", "source", "f_223645_"), "Lcom/mojang/datafixers/util/Either;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.EntityPositionSource#source
    static void set_field_source(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "entityOrUuidOrId", "field_38424", "source", "f_223645_"), "Lcom/mojang/datafixers/util/Either;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.EntityPositionSource#yOffset
    static jfloat get_field_yOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yOffset", "field_38242", "yOffset", "f_223646_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.EntityPositionSource#yOffset
    static void set_field_yOffset(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yOffset", "field_38242", "yOffset", "f_223646_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPosition", "method_32956", "getPos", "m_142502_"), "(Ldcw;)Ljava/util/Optional;");
    }

    static jobject getPos(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findEntityInWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "resolveEntity", "method_42681", "findEntityInWorld", "m_223677_"), "(Ldcw;)V");
    }

    static void findEntityInWorld(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findEntityInWorld();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getUuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getUuid", "method_42680", "getUuid", "m_223674_"), "()Ljava/util/UUID;");
    }

    static jobject getUuid(const jobject& obj) {
                
       const auto methodID = methodID_getUuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEntityId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getId", "method_42683", "getEntityId", "m_223681_"), "()I");
    }

    static jint getEntityId(const jobject& obj) {
                
       const auto methodID = methodID_getEntityId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_32955", "getType", "m_142510_"), "()Ldye;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_EVENT_ENTITYPOSITIONSOURCE_HPP