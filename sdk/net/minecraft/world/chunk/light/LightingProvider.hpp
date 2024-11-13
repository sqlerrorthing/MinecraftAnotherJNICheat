// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_LIGHT_LIGHTINGPROVIDER_HPP
#define NET_MINECRAFT_WORLD_CHUNK_LIGHT_LIGHTINGPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.light.LightingProvider
 * Remapped: eot
 */
namespace LightingProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eot", "net/minecraft/world/level/lighting/LevelLightEngine", "net/minecraft/class_3568", "net/minecraft/world/chunk/light/LightingProvider", "net/minecraft/src/C_2681_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.chunk.light.LightingProvider#field_31714
    [[maybe_unused]] static jint get_field_field_31714() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIGHT_SECTION_PADDING", "field_31714", "field_31714", "f_164444_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.chunk.light.LightingProvider#field_31714
    [[maybe_unused]] static void set_field_field_31714(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIGHT_SECTION_PADDING", "field_31714", "field_31714", "f_164444_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.world.chunk.light.LightingProvider#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "levelHeightAccessor", "field_27339", "world", "f_164445_"), "Ldcy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.chunk.light.LightingProvider#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "levelHeightAccessor", "field_27339", "world", "f_164445_"), "Ldcy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.chunk.light.LightingProvider#blockLightProvider
    static jobject get_field_blockLightProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockEngine", "field_15814", "blockLightProvider", "f_75802_"), "Leov;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.light.LightingProvider#blockLightProvider
    static void set_field_blockLightProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockEngine", "field_15814", "blockLightProvider", "f_75802_"), "Leov;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.chunk.light.LightingProvider#skyLightProvider
    static jobject get_field_skyLightProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "skyEngine", "field_15813", "skyLightProvider", "f_75803_"), "Leov;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.light.LightingProvider#skyLightProvider
    static void set_field_skyLightProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "skyEngine", "field_15813", "skyLightProvider", "f_75803_"), "Leov;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_checkBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkBlock", "method_15513", "checkBlock", "m_7174_"), "(Ljd;)V");
    }

    static void checkBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_checkBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasUpdates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("K_", "hasLightWork", "method_15518", "hasUpdates", "m_75808_"), "()Z");
    }

    static jboolean hasUpdates(const jobject& obj) {
                
       const auto methodID = methodID_hasUpdates();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_doLightUpdates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runLightUpdates", "method_15516", "doLightUpdates", "m_9323_"), "()I");
    }

    static jint doLightUpdates(const jobject& obj) {
                
       const auto methodID = methodID_doLightUpdates();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setSectionStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateSectionStatus", "method_15551", "setSectionStatus", "m_6191_"), "(Lkf;Z)V");
    }

    static void setSectionStatus(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setSectionStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setColumnEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLightEnabled", "method_15512", "setColumnEnabled", "m_9335_"), "(Ldcd;Z)V");
    }

    static void setColumnEnabled(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setColumnEnabled();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_propagateLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "propagateLightSources", "method_51471", "propagateLight", "m_142519_"), "(Ldcd;)V");
    }

    static void propagateLight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_propagateLight();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLayerListener", "method_15562", "get", "m_75814_"), "(Lddf;)Leor;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_displaySectionLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDebugData", "method_22876", "displaySectionLevel", "m_75816_"), "(Lddf;Lkf;)Ljava/lang/String;");
    }

    static jobject displaySectionLevel(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_displaySectionLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDebugSectionType", "method_51560", "getStatus", "m_284493_"), "(Lddf;Lkf;)Leos$b;");
    }

    static jobject getStatus(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_enqueueSectionData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "queueSectionData", "method_15558", "enqueueSectionData", "m_284126_"), "(Lddf;Lkf;Ldvd;)V");
    }

    static void enqueueSectionData(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_enqueueSectionData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setRetainData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "retainData", "method_20601", "setRetainData", "m_6462_"), "(Ldcd;Z)V");
    }

    static void setRetainData(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setRetainData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRawBrightness", "method_22363", "getLight", "m_75831_"), "(Ljd;I)I");
    }

    static jint getLight(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getLight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isLightingEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lightOnInSection", "method_51559", "isLightingEnabled", "m_284439_"), "(Lkf;)Z");
    }

    static jboolean isLightingEnabled(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isLightingEnabled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getLightSectionCount", "method_31928", "getHeight", "m_164446_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBottomY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getMinLightSection", "method_31929", "getBottomY", "m_164447_"), "()I");
    }

    static jint getBottomY(const jobject& obj) {
                
       const auto methodID = methodID_getBottomY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTopY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getMaxLightSection", "method_31930", "getTopY", "m_164448_"), "()I");
    }

    static jint getTopY(const jobject& obj) {
                
       const auto methodID = methodID_getTopY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_LIGHT_LIGHTINGPROVIDER_HPP