// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_LIGHT_PENDINGUPDATEQUEUE_HPP
#define NET_MINECRAFT_WORLD_CHUNK_LIGHT_PENDINGUPDATEQUEUE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.light.PendingUpdateQueue
 * Remapped: eou
 */
namespace PendingUpdateQueue {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eou", "net/minecraft/world/level/lighting/LeveledPriorityQueue", "net/minecraft/class_8257", "net/minecraft/world/chunk/light/PendingUpdateQueue", "net/minecraft/src/C_278114_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.chunk.light.PendingUpdateQueue#levelCount
    static jint get_field_levelCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "levelCount", "field_43399", "levelCount", "f_278119_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.light.PendingUpdateQueue#levelCount
    static void set_field_levelCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "levelCount", "field_43399", "levelCount", "f_278119_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.chunk.light.PendingUpdateQueue#pendingIdUpdatesByLevel
    static jobject get_field_pendingIdUpdatesByLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "queues", "field_43400", "pendingIdUpdatesByLevel", "f_278115_"), "[Lit/unimi/dsi/fastutil/longs/LongLinkedOpenHashSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.light.PendingUpdateQueue#pendingIdUpdatesByLevel
    static void set_field_pendingIdUpdatesByLevel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "queues", "field_43400", "pendingIdUpdatesByLevel", "f_278115_"), "[Lit/unimi/dsi/fastutil/longs/LongLinkedOpenHashSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.chunk.light.PendingUpdateQueue#minPendingLevel
    static jint get_field_minPendingLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "firstQueuedLevel", "field_43401", "minPendingLevel", "f_278122_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.light.PendingUpdateQueue#minPendingLevel
    static void set_field_minPendingLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "firstQueuedLevel", "field_43401", "minPendingLevel", "f_278122_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_dequeue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeFirstLong", "method_50019", "dequeue", "m_278178_"), "()J");
    }

    static jlong dequeue(const jobject& obj) {
                
       const auto methodID = methodID_dequeue();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isEmpty", "method_50023", "isEmpty", "m_278192_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dequeue", "method_50022", "remove", "m_278203_"), "(JII)V");
    }

    static void remove(const jobject& obj, const jlong& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_enqueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "enqueue", "method_50021", "enqueue", "m_278202_"), "(JI)V");
    }

    static void enqueue(const jobject& obj, const jlong& arg0, const jint& arg1) {
                
       const auto methodID = methodID_enqueue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_increaseMinPendingLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkFirstQueuedLevel", "method_50020", "increaseMinPendingLevel", "m_278149_"), "(I)V");
    }

    static void increaseMinPendingLevel(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_increaseMinPendingLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_LIGHT_PENDINGUPDATEQUEUE_HPP