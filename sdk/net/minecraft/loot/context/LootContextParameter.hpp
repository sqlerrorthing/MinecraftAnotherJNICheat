// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTPARAMETER_HPP
#define NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTPARAMETER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.context.LootContextParameter
 * Remapped: euk
 */
namespace LootContextParameter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("euk", "net/minecraft/world/level/storage/loot/parameters/LootContextParam", "net/minecraft/class_169", "net/minecraft/loot/context/LootContextParameter", "net/minecraft/src/C_2968_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.context.LootContextParameter#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_1162", "id", "f_81281_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.context.LootContextParameter#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_1162", "id", "f_81281_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_746", "getId", "m_81284_"), "()Lakr;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTPARAMETER_HPP