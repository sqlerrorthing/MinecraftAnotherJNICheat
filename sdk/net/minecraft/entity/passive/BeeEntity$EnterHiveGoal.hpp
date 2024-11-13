// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$ENTERHIVEGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$ENTERHIVEGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.BeeEntity$EnterHiveGoal
 * Remapped: cff$d
 */
namespace BeeEntity$EnterHiveGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cff$d", "net/minecraft/world/entity/animal/Bee$BeeEnterHiveGoal", "net/minecraft/class_4466$class_4470", "net/minecraft/entity/passive/BeeEntity$EnterHiveGoal", "net/minecraft/src/C_805_$C_810_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canBeeStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "canBeeUse", "method_21814", "canBeeStart", "m_7989_"), "()Z");
    }

    static jboolean canBeeStart(const jobject& obj) {
                
       const auto methodID = methodID_canBeeStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBeeContinue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "canBeeContinueToUse", "method_21815", "canBeeContinue", "m_8011_"), "()Z");
    }

    static jboolean canBeeContinue(const jobject& obj) {
                
       const auto methodID = methodID_canBeeContinue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$ENTERHIVEGOAL_HPP