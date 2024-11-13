// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_VERTEXCONSUMERPROVIDER$IMMEDIATE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_VERTEXCONSUMERPROVIDER$IMMEDIATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.VertexConsumerProvider$Immediate
 * Remapped: gez$a
 */
namespace VertexConsumerProvider$Immediate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gez$a", "net/minecraft/client/renderer/MultiBufferSource$BufferSource", "net/minecraft/class_4597$class_4598", "net/minecraft/client/render/VertexConsumerProvider$Immediate", "net/minecraft/src/C_4139_$C_4140_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#allocator
    static jobject get_field_allocator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sharedBuffer", "field_52156", "allocator", "f_336798_"), "Lfbf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#allocator
    static void set_field_allocator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sharedBuffer", "field_52156", "allocator", "f_336798_"), "Lfbf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#layerBuffers
    static jobject get_field_layerBuffers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fixedBuffers", "field_20953", "layerBuffers", "f_109905_"), "Ljava/util/SequencedMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#layerBuffers
    static void set_field_layerBuffers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fixedBuffers", "field_20953", "layerBuffers", "f_109905_"), "Ljava/util/SequencedMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#pending
    static jobject get_field_pending(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "startedBuilders", "field_52157", "pending", "f_337045_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#pending
    static void set_field_pending(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "startedBuilders", "field_52157", "pending", "f_337045_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#currentLayer
    static jobject get_field_currentLayer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lastSharedType", "field_52158", "currentLayer", "f_336667_"), "Lgfh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.VertexConsumerProvider$Immediate#currentLayer
    static void set_field_currentLayer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lastSharedType", "field_52158", "currentLayer", "f_336667_"), "Lgfh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBuffer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getBuffer", "getBuffer", "getBuffer", "getBuffer", "m_6299_"), "(Lgfh;)Lfbm;");
    }

    static jobject getBuffer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBuffer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_drawCurrentLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "endLastBatch", "method_37104", "drawCurrentLayer", "m_173043_"), "()V");
    }

    static void drawCurrentLayer(const jobject& obj) {
                
       const auto methodID = methodID_drawCurrentLayer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "endBatch", "method_22993", "draw", "m_109911_"), "()V");
    }

    static void draw(const jobject& obj) {
                
       const auto methodID = methodID_draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "endBatch", "method_22994", "draw", "m_109912_"), "(Lgfh;)V");
    }

    static void _draw(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "endBatch", "method_60893", "draw", "m_338789_"), "(Lgfh;Lfbd;)V");
    }

    static void __draw(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_VERTEXCONSUMERPROVIDER$IMMEDIATE_HPP