// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_FOXENTITY$FOXDATA_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_FOXENTITY$FOXDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.FoxEntity$FoxData
 * Remapped: cfo$i
 */
namespace FoxEntity$FoxData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfo$i", "net/minecraft/world/entity/animal/Fox$FoxGroupData", "net/minecraft/class_4019$class_4027", "net/minecraft/entity/passive/FoxEntity$FoxData", "net/minecraft/src/C_833_$C_843_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.entity.passive.FoxEntity$FoxData#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "field_17977", "type", "f_28701_"), "Lcfo$v;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.FoxEntity$FoxData#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "field_17977", "type", "f_28701_"), "Lcfo$v;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_FOXENTITY$FOXDATA_HPP