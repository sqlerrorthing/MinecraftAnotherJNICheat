// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_BAKEDQUADFACTORY_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_BAKEDQUADFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.BakedQuadFactory
 * Remapped: ggd
 */
namespace BakedQuadFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggd", "net/minecraft/client/renderer/block/model/FaceBakery", "net/minecraft/class_796", "net/minecraft/client/render/model/BakedQuadFactory", "net/minecraft/src/C_4211_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.model.BakedQuadFactory#field_32796
    [[maybe_unused]] static jint get_field_field_32796() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VERTEX_INT_SIZE", "field_32796", "field_32796", "f_173433_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.BakedQuadFactory#field_32796
    [[maybe_unused]] static void set_field_field_32796(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VERTEX_INT_SIZE", "field_32796", "field_32796", "f_173433_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.BakedQuadFactory#MIN_SCALE
    [[maybe_unused]] static jfloat get_field_MIN_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "RESCALE_22_5", "field_4260", "MIN_SCALE", "f_111569_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.BakedQuadFactory#MIN_SCALE
    [[maybe_unused]] static void set_field_MIN_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "RESCALE_22_5", "field_4260", "MIN_SCALE", "f_111569_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.BakedQuadFactory#MAX_SCALE
    [[maybe_unused]] static jfloat get_field_MAX_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RESCALE_45", "field_4259", "MAX_SCALE", "f_111570_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.BakedQuadFactory#MAX_SCALE
    [[maybe_unused]] static void set_field_MAX_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RESCALE_45", "field_4259", "MAX_SCALE", "f_111570_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.BakedQuadFactory#field_32797
    [[maybe_unused]] static jint get_field_field_32797() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERTEX_COUNT", "field_32797", "field_32797", "f_173434_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.BakedQuadFactory#field_32797
    [[maybe_unused]] static void set_field_field_32797(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERTEX_COUNT", "field_32797", "field_32797", "f_173434_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.BakedQuadFactory#field_32799
    [[maybe_unused]] static jint get_field_field_32799() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COLOR_INDEX", "field_32799", "field_32799", "f_173436_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.BakedQuadFactory#field_32799
    [[maybe_unused]] static void set_field_field_32799(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COLOR_INDEX", "field_32799", "field_32799", "f_173436_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.BakedQuadFactory#field_32798
    [[maybe_unused]] static jint get_field_field_32798() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UV_INDEX", "field_32798", "field_32798", "f_173435_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.BakedQuadFactory#field_32798
    [[maybe_unused]] static void set_field_field_32798(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UV_INDEX", "field_32798", "field_32798", "f_173435_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_bake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bakeQuad", "method_3468", "bake", "m_111600_"), "(Lorg/joml/Vector3f;Lorg/joml/Vector3f;Lgfy;Lgql;Lji;Lgsv;Lgfz;Z)Lgfw;");
    }

    static jobject bake(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jboolean& arg7) {
                
       const auto methodID = methodID_bake();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_uvLock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "recomputeUVs", "method_3454", "uvLock", "m_111581_"), "(Lgga;Lji;Lj;)Lgga;");
    }

    static jobject uvLock(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_uvLock();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_packVertexData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeVertices", "method_3458", "packVertexData", "m_111573_"), "(Lgga;Lgql;Lji;[FLj;Lgfz;Z)[I");
    }

    static jint packVertexData(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jarray& arg3, const jfloat& arg4, const jobject& arg5, const jobject& arg6, const jboolean& arg7) {
                
       const auto methodID = methodID_packVertexData();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_getPositionMatrix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupShape", "method_3459", "getPositionMatrix", "m_111592_"), "(Lorg/joml/Vector3f;Lorg/joml/Vector3f;)[F");
    }

    static jfloat getPositionMatrix(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getPositionMatrix();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__packVertexData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bakeVertex", "method_3461", "packVertexData", "m_111620_"), "([IILji;Lgga;[FLgql;Lj;Lgfz;Z)V");
    }

    static void _packVertexData(const jobject& obj, const jarray& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4, const jarray& arg5, const jfloat& arg6, const jobject& arg7, const jobject& arg8, const jobject& arg9, const jboolean& arg10) {
                
       const auto methodID = methodID__packVertexData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    };
    
    static jmethodID methodID___packVertexData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillVertex", "method_3460", "packVertexData", "m_111614_"), "([IILorg/joml/Vector3f;Lgql;Lgga;)V");
    }

    static void __packVertexData(const jobject& obj, const jarray& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID___packVertexData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_rotateVertex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyElementRotation", "method_3463", "rotateVertex", "m_252985_"), "(Lorg/joml/Vector3f;Lgfz;)V");
    }

    static void rotateVertex(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_rotateVertex();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_transformVertex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyModelRotation", "method_3455", "transformVertex", "m_253132_"), "(Lorg/joml/Vector3f;Lj;)V");
    }

    static void transformVertex(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_transformVertex();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__transformVertex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rotateVertexBy", "method_3464", "transformVertex", "m_252821_"), "(Lorg/joml/Vector3f;Lorg/joml/Vector3f;Lorg/joml/Matrix4f;Lorg/joml/Vector3f;)V");
    }

    static void _transformVertex(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID__transformVertex();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_decodeDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateFacing", "method_3467", "decodeDirection", "m_111612_"), "([I)Lji;");
    }

    static jobject decodeDirection(const jarray& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_decodeDirection();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_encodeDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recalculateWinding", "method_3462", "encodeDirection", "m_111630_"), "([ILji;)V");
    }

    static void encodeDirection(const jobject& obj, const jarray& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_encodeDirection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_BAKEDQUADFACTORY_HPP