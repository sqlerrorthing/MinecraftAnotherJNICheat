// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_CRITERION$CONDITIONSCONTAINER_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_CRITERION$CONDITIONSCONTAINER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.Criterion$ConditionsContainer
 * Remapped: aq$a
 */
namespace Criterion$ConditionsContainer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aq$a", "net/minecraft/advancements/CriterionTrigger$Listener", "net/minecraft/class_179$class_180", "net/minecraft/advancement/criterion/Criterion$ConditionsContainer", "net/minecraft/src/C_176_$C_177_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.advancement.criterion.Criterion$ConditionsContainer#conditions
    static jobject get_field_conditions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "trigger", "comp_1925", "conditions", "f_13678_"), "Lar;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.Criterion$ConditionsContainer#conditions
    static void set_field_conditions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "trigger", "comp_1925", "conditions", "f_13678_"), "Lar;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.Criterion$ConditionsContainer#advancement
    static jobject get_field_advancement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "advancement", "comp_1926", "advancement", "f_13679_"), "Lag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.Criterion$ConditionsContainer#advancement
    static void set_field_advancement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "advancement", "comp_1926", "advancement", "f_13679_"), "Lag;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.Criterion$ConditionsContainer#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "criterion", "comp_1927", "id", "f_13680_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.Criterion$ConditionsContainer#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "criterion", "comp_1927", "id", "f_13680_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_grant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "run", "method_796", "grant", "m_13686_"), "(Lakz;)V");
    }

    static void grant(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_grant();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__conditions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "trigger", "comp_1925", "conditions", "f_13678_"), "()Lar;");
    }

    static jobject _conditions(const jobject& obj) {
                
       const auto methodID = methodID__conditions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__advancement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "advancement", "comp_1926", "advancement", "f_13679_"), "()Lag;");
    }

    static jobject _advancement(const jobject& obj) {
                
       const auto methodID = methodID__advancement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "criterion", "comp_1927", "id", "f_13680_"), "()Ljava/lang/String;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_CRITERION$CONDITIONSCONTAINER_HPP