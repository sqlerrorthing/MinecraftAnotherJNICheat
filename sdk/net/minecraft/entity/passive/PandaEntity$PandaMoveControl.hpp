// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_PANDAENTITY$PANDAMOVECONTROL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_PANDAENTITY$PANDAMOVECONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.PandaEntity$PandaMoveControl
 * Remapped: cft$h
 */
namespace PandaEntity$PandaMoveControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cft$h", "net/minecraft/world/entity/animal/Panda$PandaMoveControl", "net/minecraft/class_1440$class_1446", "net/minecraft/entity/passive/PandaEntity$PandaMoveControl", "net/minecraft/src/C_864_$C_872_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.PandaEntity$PandaMoveControl#panda
    static jobject get_field_panda(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "panda", "field_6801", "panda", "f_29316_"), "Lcft;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.PandaEntity$PandaMoveControl#panda
    static void set_field_panda(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "panda", "field_6801", "panda", "f_29316_"), "Lcft;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6240", "tick", "m_8126_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_PANDAENTITY$PANDAMOVECONTROL_HPP