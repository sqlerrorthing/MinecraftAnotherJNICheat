// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONDITION_LOOTCONDITIONTYPE_HPP
#define NET_MINECRAFT_LOOT_CONDITION_LOOTCONDITIONTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.condition.LootConditionType
 * Remapped: evd
 */
namespace LootConditionType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("evd", "net/minecraft/world/level/storage/loot/predicates/LootItemConditionType", "net/minecraft/class_5342", "net/minecraft/loot/condition/LootConditionType", "net/minecraft/src/C_3006_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.condition.LootConditionType#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "codec", "comp_1878", "codec", "f_291306_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.condition.LootConditionType#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "codec", "comp_1878", "codec", "f_291306_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "comp_1878", "codec", "f_291306_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject _codec(const jobject& obj) {
                
       const auto methodID = methodID__codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONDITION_LOOTCONDITIONTYPE_HPP