// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_ENTITY_ENTITYLIKE_HPP
#define NET_MINECRAFT_WORLD_ENTITY_ENTITYLIKE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.entity.EntityLike
 * Remapped: dxg
 */
namespace EntityLike {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxg", "net/minecraft/world/level/entity/EntityAccess", "net/minecraft/class_5568", "net/minecraft/world/entity/EntityLike", "net/minecraft/src/C_141279_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("an", "getId", "method_5628", "getId", "m_19879_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getUuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cz", "getUUID", "method_5667", "getUuid", "m_20148_"), "()Ljava/util/UUID;");
    }

    static jobject getUuid(const jobject& obj) {
                
       const auto methodID = methodID_getUuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("do", "blockPosition", "method_24515", "getBlockPos", "m_20183_"), "()Ljd;");
    }

    static jobject getBlockPos(const jobject& obj) {
                
       const auto methodID = methodID_getBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBoundingBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cK", "getBoundingBox", "method_5829", "getBoundingBox", "m_20191_"), "()Lewx;");
    }

    static jobject getBoundingBox(const jobject& obj) {
                
       const auto methodID = methodID_getBoundingBox();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setChangeListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLevelCallback", "method_31744", "setChangeListener", "m_141960_"), "(Ldxh;)V");
    }

    static void setChangeListener(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setChangeListener();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamSelfAndPassengers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cU", "getSelfAndPassengers", "method_24204", "streamSelfAndPassengers", "m_20199_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamSelfAndPassengers(const jobject& obj) {
                
       const auto methodID = methodID_streamSelfAndPassengers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_streamPassengersAndSelf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cV", "getPassengersAndSelf", "method_31748", "streamPassengersAndSelf", "m_142429_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamPassengersAndSelf(const jobject& obj) {
                
       const auto methodID = methodID_streamPassengersAndSelf();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setRemoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setRemoved", "method_31745", "setRemoved", "m_142467_"), "(Lbsr$c;)V");
    }

    static void setRemoved(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setRemoved();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldSave() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dM", "shouldBeSaved", "method_31746", "shouldSave", "m_142391_"), "()Z");
    }

    static jboolean shouldSave(const jobject& obj) {
                
       const auto methodID = methodID_shouldSave();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dN", "isAlwaysTicking", "method_31747", "isPlayer", "m_142389_"), "()Z");
    }

    static jboolean isPlayer(const jobject& obj) {
                
       const auto methodID = methodID_isPlayer();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_ENTITY_ENTITYLIKE_HPP