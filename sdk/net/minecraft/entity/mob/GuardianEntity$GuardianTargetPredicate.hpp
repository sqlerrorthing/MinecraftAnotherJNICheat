// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_GUARDIANENTITY$GUARDIANTARGETPREDICATE_HPP
#define NET_MINECRAFT_ENTITY_MOB_GUARDIANENTITY$GUARDIANTARGETPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.GuardianEntity$GuardianTargetPredicate
 * Remapped: cjz$b
 */
namespace GuardianEntity$GuardianTargetPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjz$b", "net/minecraft/world/entity/monster/Guardian$GuardianAttackSelector", "net/minecraft/class_1577$class_1579", "net/minecraft/entity/mob/GuardianEntity$GuardianTargetPredicate", "net/minecraft/src/C_1017_$C_1019_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.GuardianEntity$GuardianTargetPredicate#owner
    static jobject get_field_owner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "guardian", "field_7294", "owner", "f_32877_"), "Lcjz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.GuardianEntity$GuardianTargetPredicate#owner
    static void set_field_owner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "guardian", "field_7294", "owner", "f_32877_"), "Lcjz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_7064", "test", "test"), "(Lbtn;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_GUARDIANENTITY$GUARDIANTARGETPREDICATE_HPP