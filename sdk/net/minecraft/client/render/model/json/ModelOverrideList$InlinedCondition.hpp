// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDELIST$INLINEDCONDITION_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDELIST$INLINEDCONDITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelOverrideList$InlinedCondition
 * Remapped: ggg$b
 */
namespace ModelOverrideList$InlinedCondition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggg$b", "net/minecraft/client/renderer/block/model/ItemOverrides$PropertyMatcher", "net/minecraft/class_806$class_5828", "net/minecraft/client/render/model/json/ModelOverrideList$InlinedCondition", "net/minecraft/src/C_4219_$C_141727_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.render.model.json.ModelOverrideList$InlinedCondition#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "index", "field_28796", "index", "f_173487_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelOverrideList$InlinedCondition#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "index", "field_28796", "index", "f_173487_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.model.json.ModelOverrideList$InlinedCondition#threshold
    static jfloat get_field_threshold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_28797", "threshold", "f_173488_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelOverrideList$InlinedCondition#threshold
    static void set_field_threshold(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_28797", "threshold", "f_173488_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELOVERRIDELIST$INLINEDCONDITION_HPP