// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_ENTITYSUBPREDICATETYPES$DYNAMICVARIANTTYPE_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_ENTITYSUBPREDICATETYPES$DYNAMICVARIANTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.EntitySubPredicateTypes$DynamicVariantType
 * Remapped: bx$a
 */
namespace EntitySubPredicateTypes$DynamicVariantType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bx$a", "net/minecraft/advancements/critereon/EntitySubPredicates$EntityHolderVariantPredicateType", "net/minecraft/class_7378$class_9419", "net/minecraft/predicate/entity/EntitySubPredicateTypes$DynamicVariantType", "net/minecraft/src/C_313349_$C_313706_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.predicate.entity.EntitySubPredicateTypes$DynamicVariantType#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "codec", "field_49974", "codec", "f_314467_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.predicate.entity.EntitySubPredicateTypes$DynamicVariantType#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "codec", "field_49974", "codec", "f_314467_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.predicate.entity.EntitySubPredicateTypes$DynamicVariantType#variantGetter
    static jobject get_field_variantGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "getter", "field_49975", "variantGetter", "f_315554_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.predicate.entity.EntitySubPredicateTypes$DynamicVariantType#variantGetter
    static void set_field_variantGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "getter", "field_49975", "variantGetter", "f_315554_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_58354", "create", "m_319287_"), "(Lakq;Ljava/util/function/Function;)Lbx$a;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createPredicate", "method_58356", "createPredicate", "m_318835_"), "(Ljq;)Lbw;");
    }

    static jobject createPredicate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createPredicate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_ENTITYSUBPREDICATETYPES$DYNAMICVARIANTTYPE_HPP