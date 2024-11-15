// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$GROWCROPSGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$GROWCROPSGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.BeeEntity$GrowCropsGoal
 * Remapped: cff$g
 */
namespace BeeEntity$GrowCropsGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cff$g", "net/minecraft/world/entity/animal/Bee$BeeGrowCropGoal", "net/minecraft/class_4466$class_4474", "net/minecraft/entity/passive/BeeEntity$GrowCropsGoal", "net/minecraft/src/C_805_$C_813_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.entity.passive.BeeEntity$GrowCropsGoal#field_30299
    [[maybe_unused]] static jint get_field_field_30299() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GROW_CHANCE", "field_30299", "field_30299", "f_148808_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.entity.passive.BeeEntity$GrowCropsGoal#field_30299
    [[maybe_unused]] static void set_field_field_30299(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GROW_CHANCE", "field_30299", "field_30299", "f_148808_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
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
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$GROWCROPSGOAL_HPP