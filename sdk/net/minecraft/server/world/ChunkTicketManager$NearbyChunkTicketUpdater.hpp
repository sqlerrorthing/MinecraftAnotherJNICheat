// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_CHUNKTICKETMANAGER$NEARBYCHUNKTICKETUPDATER_HPP
#define NET_MINECRAFT_SERVER_WORLD_CHUNKTICKETMANAGER$NEARBYCHUNKTICKETUPDATER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.ChunkTicketManager$NearbyChunkTicketUpdater
 * Remapped: aqk$c
 */
namespace ChunkTicketManager$NearbyChunkTicketUpdater {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqk$c", "net/minecraft/server/level/DistanceManager$PlayerTicketTracker", "net/minecraft/class_3204$class_3948", "net/minecraft/server/world/ChunkTicketManager$NearbyChunkTicketUpdater", "net/minecraft/src/C_5442_$C_5445_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.world.ChunkTicketManager$NearbyChunkTicketUpdater#watchDistance
    static jint get_field_watchDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "viewDistance", "field_17464", "watchDistance", "f_140905_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkTicketManager$NearbyChunkTicketUpdater#watchDistance
    static void set_field_watchDistance(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "viewDistance", "field_17464", "watchDistance", "f_140905_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.world.ChunkTicketManager$NearbyChunkTicketUpdater#distances
    static jobject get_field_distances(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "queueLevels", "field_17465", "distances", "f_140906_"), "Lit/unimi/dsi/fastutil/longs/Long2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkTicketManager$NearbyChunkTicketUpdater#distances
    static void set_field_distances(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "queueLevels", "field_17465", "distances", "f_140906_"), "Lit/unimi/dsi/fastutil/longs/Long2IntMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.world.ChunkTicketManager$NearbyChunkTicketUpdater#positionsAffected
    static jobject get_field_positionsAffected(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "toUpdate", "field_17466", "positionsAffected", "f_140907_"), "Lit/unimi/dsi/fastutil/longs/LongSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkTicketManager$NearbyChunkTicketUpdater#positionsAffected
    static void set_field_positionsAffected(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "toUpdate", "field_17466", "positionsAffected", "f_140907_"), "Lit/unimi/dsi/fastutil/longs/LongSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_onDistanceChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onLevelChange", "method_17657", "onDistanceChange", "m_8002_"), "(JII)V");
    }

    static void onDistanceChange(const jobject& obj, const jlong& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_onDistanceChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setWatchDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateViewDistance", "method_17658", "setWatchDistance", "m_140912_"), "(I)V");
    }

    static void setWatchDistance(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setWatchDistance();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateTicket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onLevelChange", "method_17660", "updateTicket", "m_140918_"), "(JIZZ)V");
    }

    static void updateTicket(const jobject& obj, const jlong& arg0, const jint& arg1, const jboolean& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_updateTicket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_updateLevels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runAllUpdates", "method_14057", "updateLevels", "m_6410_"), "()V");
    }

    static void updateLevels(const jobject& obj) {
                
       const auto methodID = methodID_updateLevels();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isWithinViewDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "haveTicketFor", "method_17664", "isWithinViewDistance", "m_140932_"), "(I)Z");
    }

    static jboolean isWithinViewDistance(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_isWithinViewDistance();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_CHUNKTICKETMANAGER$NEARBYCHUNKTICKETUPDATER_HPP