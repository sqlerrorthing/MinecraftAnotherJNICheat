// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$CHUNKINFO_HPP
#define NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$CHUNKINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo
 * Remapped: gfm$d
 */
namespace ChunkRenderingDataPreparer$ChunkInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfm$d", "net/minecraft/client/renderer/SectionOcclusionGraph$Node", "net/minecraft/class_8679$class_762", "net/minecraft/client/render/ChunkRenderingDataPreparer$ChunkInfo", "net/minecraft/src/C_290263_$C_290165_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#chunk
    static jobject get_field_chunk(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "section", "field_4124", "chunk", "f_291755_"), "Lgia$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#chunk
    static void set_field_chunk(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "section", "field_4124", "chunk", "f_291755_"), "Lgia$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#direction
    static jbyte get_field_direction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sourceDirections", "field_4125", "direction", "f_291521_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#direction
    static void set_field_direction(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sourceDirections", "field_4125", "direction", "f_291521_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#cullingState
    static jbyte get_field_cullingState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "directions", "field_4126", "cullingState", "f_290314_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#cullingState
    static void set_field_cullingState(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "directions", "field_4126", "cullingState", "f_290314_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#propagationLevel
    static jint get_field_propagationLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "step", "field_4122", "propagationLevel", "f_291195_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.ChunkRenderingDataPreparer$ChunkInfo#propagationLevel
    static void set_field_propagationLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "step", "field_4122", "propagationLevel", "f_291195_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_updateCullingState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setDirections", "method_3299", "updateCullingState", "m_294589_"), "(BLji;)V");
    }

    static void updateCullingState(const jobject& obj, const jbyte& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateCullingState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canCull() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasDirection", "method_3298", "canCull", "m_294495_"), "(Lji;)Z");
    }

    static jboolean canCull(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canCull();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addSourceDirection", "method_34816", "addDirection", "m_293452_"), "(Lji;)V");
    }

    static void addDirection(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addDirection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasSourceDirection", "method_34814", "hasDirection", "m_295060_"), "(I)Z");
    }

    static jboolean hasDirection(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_hasDirection();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasAnyDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasSourceDirections", "method_34813", "hasAnyDirection", "m_292787_"), "()Z");
    }

    static jboolean hasAnyDirection(const jobject& obj) {
                
       const auto methodID = methodID_hasAnyDirection();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$CHUNKINFO_HPP