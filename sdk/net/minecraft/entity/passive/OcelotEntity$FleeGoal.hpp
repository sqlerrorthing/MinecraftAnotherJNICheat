// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_OCELOTENTITY$FLEEGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_OCELOTENTITY$FLEEGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.OcelotEntity$FleeGoal
 * Remapped: cfs$a
 */
namespace OcelotEntity$FleeGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfs$a", "net/minecraft/world/entity/animal/Ocelot$OcelotAvoidEntityGoal", "net/minecraft/class_3701$class_3702", "net/minecraft/entity/passive/OcelotEntity$FleeGoal", "net/minecraft/src/C_861_$C_862_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.OcelotEntity$FleeGoal#ocelot
    static jobject get_field_ocelot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ocelot", "field_16303", "ocelot", "f_29049_"), "Lcfs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.OcelotEntity$FleeGoal#ocelot
    static void set_field_ocelot(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ocelot", "field_16303", "ocelot", "f_29049_"), "Lcfs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldContinue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canContinueToUse", "method_6266", "shouldContinue", "m_8045_"), "()Z");
    }

    static jboolean shouldContinue(const jobject& obj) {
                
       const auto methodID = methodID_shouldContinue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_OCELOTENTITY$FLEEGOAL_HPP