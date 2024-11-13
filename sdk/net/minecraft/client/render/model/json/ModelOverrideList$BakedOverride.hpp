// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDELIST$BAKEDOVERRIDE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDELIST$BAKEDOVERRIDE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelOverrideList$BakedOverride
 * Remapped: ggg$a
 */
namespace ModelOverrideList$BakedOverride {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggg$a", "net/minecraft/client/renderer/block/model/ItemOverrides$BakedOverride", "net/minecraft/class_806$class_5827", "net/minecraft/client/render/model/json/ModelOverrideList$BakedOverride", "net/minecraft/src/C_4219_$C_141726_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.model.json.ModelOverrideList$BakedOverride#conditions
    static jobject get_field_conditions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "matchers", "field_28794", "conditions", "f_173480_"), "[Lggg$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelOverrideList$BakedOverride#conditions
    static void set_field_conditions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "matchers", "field_28794", "conditions", "f_173480_"), "[Lggg$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.model.json.ModelOverrideList$BakedOverride#model
    static jobject get_field_model(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "model", "field_28795", "model", "f_173481_"), "Lgsm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.json.ModelOverrideList$BakedOverride#model
    static void set_field_model(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "model", "field_28795", "model", "f_173481_"), "Lgsm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_33700", "test", "m_173485_"), "([F)Z");
    }

    static jboolean test(const jobject& obj, const jarray& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDELIST$BAKEDOVERRIDE_HPP