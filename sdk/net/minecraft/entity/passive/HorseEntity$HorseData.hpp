// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_HORSEENTITY$HORSEDATA_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_HORSEENTITY$HORSEDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.HorseEntity$HorseData
 * Remapped: chk$a
 */
namespace HorseEntity$HorseData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chk$a", "net/minecraft/world/entity/animal/horse/Horse$HorseGroupData", "net/minecraft/class_1498$class_1499", "net/minecraft/entity/passive/HorseEntity$HorseData", "net/minecraft/src/C_928_$C_929_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.entity.passive.HorseEntity$HorseData#color
    static jobject get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "variant", "field_6994", "color", "f_30738_"), "Lchr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.HorseEntity$HorseData#color
    static void set_field_color(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "variant", "field_6994", "color", "f_30738_"), "Lchr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_HORSEENTITY$HORSEDATA_HPP