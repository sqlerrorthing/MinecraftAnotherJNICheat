// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BLOCK_CHAINRESTRICTEDNEIGHBORUPDATER_HPP
#define NET_MINECRAFT_WORLD_BLOCK_CHAINRESTRICTEDNEIGHBORUPDATER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.block.ChainRestrictedNeighborUpdater
 * Remapped: eqg
 */
namespace ChainRestrictedNeighborUpdater {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqg", "net/minecraft/world/level/redstone/CollectingNeighborUpdater", "net/minecraft/class_7159", "net/minecraft/world/block/ChainRestrictedNeighborUpdater", "net/minecraft/src/C_213310_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_37829", "LOGGER", "f_230635_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_37829", "LOGGER", "f_230635_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "level", "field_37830", "world", "f_230636_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "level", "field_37830", "world", "f_230636_"), "Ldcw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#maxChainDepth
    static jint get_field_maxChainDepth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxChainedNeighborUpdates", "field_38276", "maxChainDepth", "f_230637_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#maxChainDepth
    static void set_field_maxChainDepth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxChainedNeighborUpdates", "field_38276", "maxChainDepth", "f_230637_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#queue
    static jobject get_field_queue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "stack", "field_37831", "queue", "f_230638_"), "Ljava/util/ArrayDeque;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#queue
    static void set_field_queue(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "stack", "field_37831", "queue", "f_230638_"), "Ljava/util/ArrayDeque;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#pending
    static jobject get_field_pending(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "addedThisLayer", "field_37832", "pending", "f_230639_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#pending
    static void set_field_pending(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "addedThisLayer", "field_37832", "pending", "f_230639_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#depth
    static jint get_field_depth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "count", "field_37833", "depth", "f_230640_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater#depth
    static void set_field_depth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "count", "field_37833", "depth", "f_230640_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_replaceWithStateForNeighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shapeUpdate", "method_42392", "replaceWithStateForNeighborUpdate", "m_213547_"), "(Lji;Ldtc;Ljd;Ljd;II)V");
    }

    static void replaceWithStateForNeighborUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_replaceWithStateForNeighborUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_updateNeighbor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "neighborChanged", "method_41704", "updateNeighbor", "m_214026_"), "(Ljd;Ldfy;Ljd;)V");
    }

    static void updateNeighbor(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_updateNeighbor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__updateNeighbor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "neighborChanged", "method_41703", "updateNeighbor", "m_213858_"), "(Ldtc;Ljd;Ldfy;Ljd;Z)V");
    }

    static void _updateNeighbor(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID__updateNeighbor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_updateNeighbors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateNeighborsAtExceptFromFacing", "method_41705", "updateNeighbors", "m_214152_"), "(Ljd;Ldfy;Lji;)V");
    }

    static void updateNeighbors(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_updateNeighbors();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_enqueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addAndRun", "method_41706", "enqueue", "m_230660_"), "(Ljd;Leqg$c;)V");
    }

    static void enqueue(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_enqueue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_runQueuedUpdates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runUpdates", "method_41702", "runQueuedUpdates", "m_230645_"), "()V");
    }

    static void runQueuedUpdates(const jobject& obj) {
                
       const auto methodID = methodID_runQueuedUpdates();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BLOCK_CHAINRESTRICTEDNEIGHBORUPDATER_HPP