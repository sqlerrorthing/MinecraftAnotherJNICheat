// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_FISHENTITY$FISHMOVECONTROL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_FISHENTITY$FISHMOVECONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.FishEntity$FishMoveControl
 * Remapped: cfb$a
 */
namespace FishEntity$FishMoveControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfb$a", "net/minecraft/world/entity/animal/AbstractFish$FishMoveControl", "net/minecraft/class_1422$class_1423", "net/minecraft/entity/passive/FishEntity$FishMoveControl", "net/minecraft/src/C_795_$C_796_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.FishEntity$FishMoveControl#fish
    static jobject get_field_fish(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "fish", "field_6731", "fish", "f_27499_"), "Lcfb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FishEntity$FishMoveControl#fish
    static void set_field_fish(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "fish", "field_6731", "fish", "f_27499_"), "Lcfb;");
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

#endif // NET_MINECRAFT_ENTITY_PASSIVE_FISHENTITY$FISHMOVECONTROL_HPP