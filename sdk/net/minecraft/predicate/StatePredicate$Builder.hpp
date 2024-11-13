// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_STATEPREDICATE$BUILDER_HPP
#define NET_MINECRAFT_PREDICATE_STATEPREDICATE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.StatePredicate$Builder
 * Remapped: eb$a
 */
namespace StatePredicate$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eb$a", "net/minecraft/advancements/critereon/StatePropertiesPredicate$Builder", "net/minecraft/class_4559$class_4560", "net/minecraft/predicate/StatePredicate$Builder", "net/minecraft/src/C_2332_$C_2334_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.StatePredicate$Builder#conditions
    static jobject get_field_conditions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "matchers", "field_20738", "conditions", "f_67691_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.StatePredicate$Builder#conditions
    static void set_field_conditions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "matchers", "field_20738", "conditions", "f_67691_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "properties", "method_22523", "create", "m_67693_"), "()Leb$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_exactMatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasProperty", "method_22526", "exactMatch", "m_67700_"), "(Lduf;Ljava/lang/String;)Leb$a;");
    }

    static jobject exactMatch(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_exactMatch();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__exactMatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasProperty", "method_22524", "exactMatch", "m_67694_"), "(Lduf;I)Leb$a;");
    }

    static jobject _exactMatch(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__exactMatch();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___exactMatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasProperty", "method_22527", "exactMatch", "m_67703_"), "(Lduf;Z)Leb$a;");
    }

    static jobject __exactMatch(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID___exactMatch();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID____exactMatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasProperty", "method_22525", "exactMatch", "m_67697_"), "(Lduf;Ljava/lang/Comparable;)Leb$a;");
    }

    static jobject ___exactMatch(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID____exactMatch();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_22528", "build", "m_67706_"), "()Ljava/util/Optional;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_STATEPREDICATE$BUILDER_HPP