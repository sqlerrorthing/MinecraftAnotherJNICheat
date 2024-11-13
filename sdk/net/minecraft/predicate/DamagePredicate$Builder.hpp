// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_DAMAGEPREDICATE$BUILDER_HPP
#define NET_MINECRAFT_PREDICATE_DAMAGEPREDICATE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.DamagePredicate$Builder
 * Remapped: bj$a
 */
namespace DamagePredicate$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bj$a", "net/minecraft/advancements/critereon/DamagePredicate$Builder", "net/minecraft/class_2019$class_2020", "net/minecraft/predicate/DamagePredicate$Builder", "net/minecraft/src/C_665_$C_666_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.DamagePredicate$Builder#dealt
    static jobject get_field_dealt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dealtDamage", "field_9530", "dealt", "f_24925_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.DamagePredicate$Builder#dealt
    static void set_field_dealt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dealtDamage", "field_9530", "dealt", "f_24925_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.DamagePredicate$Builder#taken
    static jobject get_field_taken(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "takenDamage", "field_9527", "taken", "f_24926_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.DamagePredicate$Builder#taken
    static void set_field_taken(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "takenDamage", "field_9527", "taken", "f_24926_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.DamagePredicate$Builder#sourceEntity
    static jobject get_field_sourceEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sourceEntity", "field_9528", "sourceEntity", "f_24927_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.DamagePredicate$Builder#sourceEntity
    static void set_field_sourceEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sourceEntity", "field_9528", "sourceEntity", "f_24927_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.DamagePredicate$Builder#blocked
    static jobject get_field_blocked(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blocked", "field_9526", "blocked", "f_24928_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.DamagePredicate$Builder#blocked
    static void set_field_blocked(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blocked", "field_9526", "blocked", "f_24928_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.DamagePredicate$Builder#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "type", "field_9529", "type", "f_24929_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.DamagePredicate$Builder#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "type", "field_9529", "type", "f_24929_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "damageInstance", "method_8844", "create", "m_24931_"), "()Lbj$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__dealt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dealtDamage", "method_35118", "dealt", "m_148145_"), "(Ldh$c;)Lbj$a;");
    }

    static jobject _dealt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__dealt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__taken() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "takenDamage", "method_35119", "taken", "m_148147_"), "(Ldh$c;)Lbj$a;");
    }

    static jobject _taken(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__taken();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__sourceEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sourceEntity", "method_35117", "sourceEntity", "m_148143_"), "(Lbv;)Lbj$a;");
    }

    static jobject _sourceEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__sourceEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__blocked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blocked", "method_8841", "blocked", "m_24934_"), "(Ljava/lang/Boolean;)Lbj$a;");
    }

    static jobject _blocked(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__blocked();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_35116", "type", "m_148141_"), "(Lbk;)Lbj$a;");
    }

    static jobject _type(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_8842", "type", "m_24932_"), "(Lbk$a;)Lbj$a;");
    }

    static jobject __type(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_8843", "build", "m_24936_"), "()Lbj;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_DAMAGEPREDICATE$BUILDER_HPP