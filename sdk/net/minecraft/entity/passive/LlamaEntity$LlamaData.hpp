// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_LLAMAENTITY$LLAMADATA_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_LLAMAENTITY$LLAMADATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.LlamaEntity$LlamaData
 * Remapped: chl$b
 */
namespace LlamaEntity$LlamaData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chl$b", "net/minecraft/world/entity/animal/horse/Llama$LlamaGroupData", "net/minecraft/class_1501$class_1503", "net/minecraft/entity/passive/LlamaEntity$LlamaData", "net/minecraft/src/C_930_$C_933_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.entity.passive.LlamaEntity$LlamaData#variant
    static jobject get_field_variant(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "variant", "field_7001", "variant", "f_30847_"), "Lchl$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.LlamaEntity$LlamaData#variant
    static void set_field_variant(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "variant", "field_7001", "variant", "f_30847_"), "Lchl$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_LLAMAENTITY$LLAMADATA_HPP