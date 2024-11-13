// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_CHUNKTICKETMANAGER$TICKETDISTANCELEVELPROPAGATOR_HPP
#define NET_MINECRAFT_SERVER_WORLD_CHUNKTICKETMANAGER$TICKETDISTANCELEVELPROPAGATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.ChunkTicketManager$TicketDistanceLevelPropagator
 * Remapped: aqk$a
 */
namespace ChunkTicketManager$TicketDistanceLevelPropagator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqk$a", "net/minecraft/server/level/DistanceManager$ChunkTicketTracker", "net/minecraft/class_3204$class_4077", "net/minecraft/server/world/ChunkTicketManager$TicketDistanceLevelPropagator", "net/minecraft/src/C_5442_$C_5443_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.world.ChunkTicketManager$TicketDistanceLevelPropagator#UNLOADED
    [[maybe_unused]] static jint get_field_UNLOADED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_LEVEL", "field_44854", "UNLOADED", "f_286988_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkTicketManager$TicketDistanceLevelPropagator#UNLOADED
    [[maybe_unused]] static void set_field_UNLOADED(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_LEVEL", "field_44854", "UNLOADED", "f_286988_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getInitialLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLevelFromSource", "method_14028", "getInitialLevel", "m_7031_"), "(J)I");
    }

    static jint getInitialLevel(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_getInitialLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getLevel", "method_15480", "getLevel", "m_6172_"), "(J)I");
    }

    static jint getLevel(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_getLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLevel", "method_15485", "setLevel", "m_7351_"), "(JI)V");
    }

    static void setLevel(const jobject& obj, const jlong& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runDistanceUpdates", "method_18746", "update", "m_140877_"), "(I)I");
    }

    static jint update(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_update();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_CHUNKTICKETMANAGER$TICKETDISTANCELEVELPROPAGATOR_HPP