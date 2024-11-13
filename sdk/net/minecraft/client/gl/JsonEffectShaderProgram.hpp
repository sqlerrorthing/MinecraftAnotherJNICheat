// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GL_JSONEFFECTSHADERPROGRAM_HPP
#define NET_MINECRAFT_CLIENT_GL_JSONEFFECTSHADERPROGRAM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gl.JsonEffectShaderProgram
 * Remapped: gep
 */
namespace JsonEffectShaderProgram {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gep", "net/minecraft/client/renderer/EffectInstance", "net/minecraft/class_280", "net/minecraft/client/gl/JsonEffectShaderProgram", "net/minecraft/src/C_4117_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#PROGRAM_DIRECTORY
    [[maybe_unused]] static jobject get_field_PROGRAM_DIRECTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EFFECT_SHADER_PATH", "field_32682", "PROGRAM_DIRECTORY", "f_172564_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#PROGRAM_DIRECTORY
    [[maybe_unused]] static void set_field_PROGRAM_DIRECTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EFFECT_SHADER_PATH", "field_32682", "PROGRAM_DIRECTORY", "f_172564_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_1514", "LOGGER", "f_108921_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_1514", "LOGGER", "f_108921_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#DEFAULT_UNIFORM
    [[maybe_unused]] static jobject get_field_DEFAULT_UNIFORM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DUMMY_UNIFORM", "field_1520", "DEFAULT_UNIFORM", "f_108922_"), "Lfar;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#DEFAULT_UNIFORM
    [[maybe_unused]] static void set_field_DEFAULT_UNIFORM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DUMMY_UNIFORM", "field_1520", "DEFAULT_UNIFORM", "f_108922_"), "Lfar;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#field_32683
    [[maybe_unused]] static jboolean get_field_field_32683() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ALWAYS_REAPPLY", "field_32683", "field_32683", "f_172565_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticBooleanField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#field_32683
    [[maybe_unused]] static void set_field_field_32683(const jboolean &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ALWAYS_REAPPLY", "field_32683", "field_32683", "f_172565_"), "Z");
        return MinecraftSDK::env->SetStaticBooleanField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#activeProgram
    [[maybe_unused]] static jobject get_field_activeProgram() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "lastAppliedEffect", "field_1512", "activeProgram", "f_108923_"), "Lgep;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#activeProgram
    [[maybe_unused]] static void set_field_activeProgram(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "lastAppliedEffect", "field_1512", "activeProgram", "f_108923_"), "Lgep;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#activeProgramGlRef
    [[maybe_unused]] static jint get_field_activeProgramGlRef() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "lastProgramId", "field_1505", "activeProgramGlRef", "f_108924_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#activeProgramGlRef
    [[maybe_unused]] static void set_field_activeProgramGlRef(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "lastProgramId", "field_1505", "activeProgramGlRef", "f_108924_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#samplerBinds
    static jobject get_field_samplerBinds(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "samplerMap", "field_1516", "samplerBinds", "f_108925_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#samplerBinds
    static void set_field_samplerBinds(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "samplerMap", "field_1516", "samplerBinds", "f_108925_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#samplerNames
    static jobject get_field_samplerNames(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "samplerNames", "field_1503", "samplerNames", "f_108926_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#samplerNames
    static void set_field_samplerNames(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "samplerNames", "field_1503", "samplerNames", "f_108926_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#samplerLocations
    static jobject get_field_samplerLocations(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "samplerLocations", "field_1506", "samplerLocations", "f_108927_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#samplerLocations
    static void set_field_samplerLocations(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "samplerLocations", "field_1506", "samplerLocations", "f_108927_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformData
    static jobject get_field_uniformData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "uniforms", "field_1515", "uniformData", "f_108928_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformData
    static void set_field_uniformData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "uniforms", "field_1515", "uniformData", "f_108928_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformLocations
    static jobject get_field_uniformLocations(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "uniformLocations", "field_1507", "uniformLocations", "f_108929_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformLocations
    static void set_field_uniformLocations(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "uniformLocations", "field_1507", "uniformLocations", "f_108929_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformByName
    static jobject get_field_uniformByName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "uniformMap", "field_1510", "uniformByName", "f_108930_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformByName
    static void set_field_uniformByName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "uniformMap", "field_1510", "uniformByName", "f_108930_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#glRef
    static jint get_field_glRef(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "programId", "field_1521", "glRef", "f_108931_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#glRef
    static void set_field_glRef(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "programId", "field_1521", "glRef", "f_108931_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "name", "field_1509", "name", "f_108932_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "name", "field_1509", "name", "f_108932_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformStateDirty
    static jboolean get_field_uniformStateDirty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "dirty", "field_1511", "uniformStateDirty", "f_108933_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#uniformStateDirty
    static void set_field_uniformStateDirty(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "dirty", "field_1511", "uniformStateDirty", "f_108933_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#blendState
    static jobject get_field_blendState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "blend", "field_1517", "blendState", "f_108934_"), "Lfas;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#blendState
    static void set_field_blendState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "blend", "field_1517", "blendState", "f_108934_"), "Lfas;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#attributeLocations
    static jobject get_field_attributeLocations(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "attributes", "field_1518", "attributeLocations", "f_108935_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#attributeLocations
    static void set_field_attributeLocations(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "attributes", "field_1518", "attributeLocations", "f_108935_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#attributeNames
    static jobject get_field_attributeNames(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "attributeNames", "field_1504", "attributeNames", "f_108936_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#attributeNames
    static void set_field_attributeNames(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "attributeNames", "field_1504", "attributeNames", "f_108936_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#vertexShader
    static jobject get_field_vertexShader(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "vertexProgram", "field_1508", "vertexShader", "f_108937_"), "Lfau;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#vertexShader
    static void set_field_vertexShader(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "vertexProgram", "field_1508", "vertexShader", "f_108937_"), "Lfau;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gl.JsonEffectShaderProgram#fragmentShader
    static jobject get_field_fragmentShader(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "fragmentProgram", "field_1519", "fragmentShader", "f_108938_"), "Lfau;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.JsonEffectShaderProgram#fragmentShader
    static void set_field_fragmentShader(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "fragmentProgram", "field_1519", "fragmentShader", "f_108938_"), "Lfau;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_loadEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrCreate", "method_16036", "loadEffect", "m_172566_"), "(Lauh;Lfaw$a;Ljava/lang/String;)Lfau;");
    }

    static jobject loadEffect(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_loadEffect();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_deserializeBlendState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parseBlendNode", "method_16035", "deserializeBlendState", "m_108950_"), "(Lcom/google/gson/JsonObject;)Lfas;");
    }

    static jobject deserializeBlendState(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_deserializeBlendState();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_disable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "clear", "method_1273", "disable", "m_108965_"), "()V");
    }

    static void disable(const jobject& obj) {
                
       const auto methodID = methodID_disable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_enable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "apply", "method_1277", "enable", "m_108966_"), "()V");
    }

    static void enable(const jobject& obj) {
                
       const auto methodID = methodID_enable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_markUniformsDirty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "markDirty", "method_1279", "markUniformsDirty", "m_108957_"), "()V");
    }

    static void markUniformsDirty(const jobject& obj) {
                
       const auto methodID = methodID_markUniformsDirty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getUniformByName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUniform", "method_1271", "getUniformByName", "m_108952_"), "(Ljava/lang/String;)Lfaz;");
    }

    static jobject getUniformByName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getUniformByName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getUniformByNameOrDummy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "safeGetUniform", "method_1275", "getUniformByNameOrDummy", "m_108960_"), "(Ljava/lang/String;)Lfar;");
    }

    static jobject getUniformByNameOrDummy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getUniformByNameOrDummy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_finalizeUniformsAndSamplers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "updateLocations", "method_1268", "finalizeUniformsAndSamplers", "m_108967_"), "()V");
    }

    static void finalizeUniformsAndSamplers(const jobject& obj) {
                
       const auto methodID = methodID_finalizeUniformsAndSamplers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addSampler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parseSamplerNode", "method_1276", "addSampler", "m_108948_"), "(Lcom/google/gson/JsonElement;)V");
    }

    static void addSampler(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addSampler();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_bindSampler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSampler", "method_1269", "bindSampler", "m_108954_"), "(Ljava/lang/String;Ljava/util/function/IntSupplier;)V");
    }

    static void bindSampler(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_bindSampler();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addUniform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "parseUniformNode", "method_1272", "addUniform", "m_108958_"), "(Lcom/google/gson/JsonElement;)V");
    }

    static void addUniform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addUniform();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getVertexShader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getVertexProgram", "method_1274", "getVertexShader", "m_108962_"), "()Lfaw;");
    }

    static jobject getVertexShader(const jobject& obj) {
                
       const auto methodID = methodID_getVertexShader();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFragmentShader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getFragmentProgram", "method_1278", "getFragmentShader", "m_108964_"), "()Lfaw;");
    }

    static jobject getFragmentShader(const jobject& obj) {
                
       const auto methodID = methodID_getFragmentShader();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_attachReferencedShaders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "attachToProgram", "method_34418", "attachReferencedShaders", "m_142662_"), "()V");
    }

    static void attachReferencedShaders(const jobject& obj) {
                
       const auto methodID = methodID_attachReferencedShaders();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getName", "method_35763", "getName", "m_172571_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGlRef() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_1270", "getGlRef", "m_108943_"), "()I");
    }

    static jint getGlRef(const jobject& obj) {
                
       const auto methodID = methodID_getGlRef();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GL_JSONEFFECTSHADERPROGRAM_HPP