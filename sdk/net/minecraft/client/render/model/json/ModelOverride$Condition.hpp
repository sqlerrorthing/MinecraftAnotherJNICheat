// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDE$CONDITION_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDE$CONDITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelOverride$Condition
 * Remapped: ggf$b
 */
namespace ModelOverride$Condition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggf$b", "net/minecraft/client/renderer/block/model/ItemOverride$Predicate", "net/minecraft/class_799$class_5826", "net/minecraft/client/render/model/json/ModelOverride$Condition", "net/minecraft/src/C_4217_$C_141725_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.model.json.ModelOverride$Condition#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "property", "field_28790", "type", "f_173454_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelOverride$Condition#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "property", "field_28790", "type", "f_173454_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.json.ModelOverride$Condition#threshold
    static jfloat get_field_threshold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_28791", "threshold", "f_173455_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelOverride$Condition#threshold
    static void set_field_threshold(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_28791", "threshold", "f_173455_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getProperty", "method_33692", "getType", "m_173459_"), "()Lakr;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getThreshold() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getValue", "method_33693", "getThreshold", "m_173460_"), "()F");
    }

    static jfloat getThreshold(const jobject& obj) {
                
       const auto methodID = methodID_getThreshold();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDE$CONDITION_HPP