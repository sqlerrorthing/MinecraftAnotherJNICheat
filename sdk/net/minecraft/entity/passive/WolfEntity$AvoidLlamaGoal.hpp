// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY$AVOIDLLAMAGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY$AVOIDLLAMAGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.WolfEntity$AvoidLlamaGoal
 * Remapped: cgh$a
 */
namespace WolfEntity$AvoidLlamaGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgh$a", "net/minecraft/world/entity/animal/Wolf$WolfAvoidEntityGoal", "net/minecraft/class_1493$class_1494", "net/minecraft/entity/passive/WolfEntity$AvoidLlamaGoal", "net/minecraft/src/C_922_$C_923_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.WolfEntity$AvoidLlamaGoal#wolf
    static jobject get_field_wolf(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "wolf", "field_6954", "wolf", "f_30451_"), "Lcgh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfEntity$AvoidLlamaGoal#wolf
    static void set_field_wolf(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "wolf", "field_6954", "wolf", "f_30451_"), "Lcgh;");
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
    
    static jmethodID methodID_isScaredOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "avoidLlama", "method_6720", "isScaredOf", "m_30460_"), "(Lchl;)Z");
    }

    static jboolean isScaredOf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isScaredOf();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_WOLFENTITY$AVOIDLLAMAGOAL_HPP