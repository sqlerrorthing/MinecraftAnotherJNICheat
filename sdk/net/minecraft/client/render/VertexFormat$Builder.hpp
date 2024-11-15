// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMAT$BUILDER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMAT$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.VertexFormat$Builder
 * Remapped: fbn$a
 */
namespace VertexFormat$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbn$a", "com/mojang/blaze3d/vertex/VertexFormat$Builder", "net/minecraft/class_293$class_9803", "net/minecraft/client/render/VertexFormat$Builder", "net/minecraft/src/C_3188_$C_336503_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.VertexFormat$Builder#elements
    static jobject get_field_elements(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "elements", "field_52103", "elements", "f_337231_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.VertexFormat$Builder#elements
    static void set_field_elements(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "elements", "field_52103", "elements", "f_337231_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.VertexFormat$Builder#offsets
    static jobject get_field_offsets(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "offsets", "field_52104", "offsets", "f_337307_"), "Lit/unimi/dsi/fastutil/ints/IntList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.VertexFormat$Builder#offsets
    static void set_field_offsets(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "offsets", "field_52104", "offsets", "f_337307_"), "Lit/unimi/dsi/fastutil/ints/IntList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.VertexFormat$Builder#currentOffset
    static jint get_field_currentOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "offset", "field_52105", "currentOffset", "f_336835_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.VertexFormat$Builder#currentOffset
    static void set_field_currentOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "offset", "field_52105", "currentOffset", "f_336835_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_60842", "add", "m_339091_"), "(Ljava/lang/String;Lfbo;)Lfbn$a;");
    }

    static jobject add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_skip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "padding", "method_60841", "skip", "m_339010_"), "(I)Lfbn$a;");
    }

    static jobject skip(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_skip();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_60840", "build", "m_339368_"), "()Lfbn;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMAT$BUILDER_HPP