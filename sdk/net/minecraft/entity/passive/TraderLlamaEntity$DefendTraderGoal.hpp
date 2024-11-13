// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_TRADERLLAMAENTITY$DEFENDTRADERGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_TRADERLLAMAENTITY$DEFENDTRADERGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.TraderLlamaEntity$DefendTraderGoal
 * Remapped: chq$a
 */
namespace TraderLlamaEntity$DefendTraderGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chq$a", "net/minecraft/world/entity/animal/horse/TraderLlama$TraderLlamaDefendWanderingTraderGoal", "net/minecraft/class_3986$class_3987", "net/minecraft/entity/passive/TraderLlamaEntity$DefendTraderGoal", "net/minecraft/src/C_939_$C_940_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.TraderLlamaEntity$DefendTraderGoal#llama
    static jobject get_field_llama(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "llama", "field_17718", "llama", "f_30962_"), "Lchl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TraderLlamaEntity$DefendTraderGoal#llama
    static void set_field_llama(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "llama", "field_17718", "llama", "f_30962_"), "Lchl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.TraderLlamaEntity$DefendTraderGoal#offender
    static jobject get_field_offender(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ownerLastHurtBy", "field_17719", "offender", "f_30963_"), "Lbtn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TraderLlamaEntity$DefendTraderGoal#offender
    static void set_field_offender(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ownerLastHurtBy", "field_17719", "offender", "f_30963_"), "Lbtn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.TraderLlamaEntity$DefendTraderGoal#traderLastAttackedTime
    static jint get_field_traderLastAttackedTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "timestamp", "field_17720", "traderLastAttackedTime", "f_30964_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TraderLlamaEntity$DefendTraderGoal#traderLastAttackedTime
    static void set_field_traderLastAttackedTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "timestamp", "field_17720", "traderLastAttackedTime", "f_30964_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
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

#endif // NET_MINECRAFT_ENTITY_PASSIVE_TRADERLLAMAENTITY$DEFENDTRADERGOAL_HPP