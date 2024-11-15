// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_ENTITYEFFECTPREDICATE$BUILDER_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_ENTITYEFFECTPREDICATE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.EntityEffectPredicate$Builder
 * Remapped: di$a
 */
namespace EntityEffectPredicate$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("di$a", "net/minecraft/advancements/critereon/MobEffectsPredicate$Builder", "net/minecraft/class_2102$class_8748", "net/minecraft/predicate/entity/EntityEffectPredicate$Builder", "net/minecraft/src/C_1907_$C_290056_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.entity.EntityEffectPredicate$Builder#EFFECTS
    static jobject get_field_EFFECTS(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "effectMap", "field_45765", "EFFECTS", "f_291595_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityEffectPredicate$Builder#EFFECTS
    static void set_field_EFFECTS(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "effectMap", "field_45765", "EFFECTS", "f_291595_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "effects", "method_53200", "create", "m_292978_"), "()Ldi$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_addEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "and", "method_53201", "addEffect", "m_293102_"), "(Ljm;)Ldi$a;");
    }

    static jobject addEffect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__addEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "and", "method_53202", "addEffect", "m_295001_"), "(Ljm;Ldi$b;)Ldi$a;");
    }

    static jobject _addEffect(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__addEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_53203", "build", "m_294201_"), "()Ljava/util/Optional;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_ENTITYEFFECTPREDICATE$BUILDER_HPP