// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY$WOLFDATA_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY$WOLFDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.WolfEntity$WolfData
 * Remapped: cgh$b
 */
namespace WolfEntity$WolfData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgh$b", "net/minecraft/world/entity/animal/Wolf$WolfPackData", "net/minecraft/class_1493$class_9345", "net/minecraft/entity/passive/WolfEntity$WolfData", "net/minecraft/src/C_922_$C_313714_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.entity.passive.WolfEntity$WolfData#variant
    static jobject get_field_variant(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "field_49723", "variant", "f_314325_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.WolfEntity$WolfData#variant
    static void set_field_variant(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "field_49723", "variant", "f_314325_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY$WOLFDATA_HPP