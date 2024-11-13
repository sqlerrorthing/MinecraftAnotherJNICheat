// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_WORLD_CLIENTCHUNKMANAGER$CLIENTCHUNKMAP_HPP
#define NET_MINECRAFT_CLIENT_WORLD_CLIENTCHUNKMANAGER$CLIENTCHUNKMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.world.ClientChunkManager$ClientChunkMap
 * Remapped: fzb$a
 */
namespace ClientChunkManager$ClientChunkMap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzb$a", "net/minecraft/client/multiplayer/ClientChunkCache$Storage", "net/minecraft/class_631$class_3681", "net/minecraft/client/world/ClientChunkManager$ClientChunkMap", "net/minecraft/src/C_3895_$C_3897_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#chunks
    static jobject get_field_chunks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chunks", "field_16251", "chunks", "f_104466_"), "Ljava/util/concurrent/atomic/AtomicReferenceArray;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#chunks
    static void set_field_chunks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chunks", "field_16251", "chunks", "f_104466_"), "Ljava/util/concurrent/atomic/AtomicReferenceArray;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#radius
    static jint get_field_radius(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkRadius", "field_16253", "radius", "f_104467_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#radius
    static void set_field_radius(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkRadius", "field_16253", "radius", "f_104467_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#diameter
    static jint get_field_diameter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "viewRange", "field_16252", "diameter", "f_104468_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#diameter
    static void set_field_diameter(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "viewRange", "field_16252", "diameter", "f_104468_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#centerChunkX
    static jint get_field_centerChunkX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "viewCenterX", "field_19204", "centerChunkX", "f_104469_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#centerChunkX
    static void set_field_centerChunkX(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "viewCenterX", "field_19204", "centerChunkX", "f_104469_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#centerChunkZ
    static jint get_field_centerChunkZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "viewCenterZ", "field_19205", "centerChunkZ", "f_104470_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#centerChunkZ
    static void set_field_centerChunkZ(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "viewCenterZ", "field_19205", "centerChunkZ", "f_104470_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#loadedChunkCount
    static jint get_field_loadedChunkCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "chunkCount", "field_19143", "loadedChunkCount", "f_104471_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.world.ClientChunkManager$ClientChunkMap#loadedChunkCount
    static void set_field_loadedChunkCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "chunkCount", "field_19143", "loadedChunkCount", "f_104471_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getIndex", "method_16027", "getIndex", "m_104481_"), "(II)I");
    }

    static jint getIndex(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replace", "method_16031", "set", "m_104484_"), "(ILdvi;)V");
    }

    static void set(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_compareAndSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replace", "method_20183", "compareAndSet", "m_104487_"), "(ILdvi;Ldvi;)Ldvi;");
    }

    static jobject compareAndSet(const jobject& obj, const jint& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_compareAndSet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isInRadius() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "inRange", "method_16034", "isInRadius", "m_104500_"), "(II)Z");
    }

    static jboolean isInRadius(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_isInRadius();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChunk", "method_16033", "getChunk", "m_104479_"), "(I)Ldvi;");
    }

    static jobject getChunk(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writePositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dumpChunks", "method_35751", "writePositions", "m_171622_"), "(Ljava/lang/String;)V");
    }

    static void writePositions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writePositions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_WORLD_CLIENTCHUNKMANAGER$CLIENTCHUNKMAP_HPP