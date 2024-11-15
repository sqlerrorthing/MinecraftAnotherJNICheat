// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_ADVANCEMENT$BUILDER_HPP
#define NET_MINECRAFT_ADVANCEMENT_ADVANCEMENT$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.Advancement$Builder
 * Remapped: af$a
 */
namespace Advancement$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("af$a", "net/minecraft/advancements/Advancement$Builder", "net/minecraft/class_161$class_162", "net/minecraft/advancement/Advancement$Builder", "net/minecraft/src/C_5362_$C_5364_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.advancement.Advancement$Builder#parentObj
    static jobject get_field_parentObj(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parent", "field_1149", "parentObj", "f_138333_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.Advancement$Builder#parentObj
    static void set_field_parentObj(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parent", "field_1149", "parentObj", "f_138333_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.Advancement$Builder#display
    static jobject get_field_display(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "display", "field_1147", "display", "f_138334_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.Advancement$Builder#display
    static void set_field_display(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "display", "field_1147", "display", "f_138334_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.Advancement$Builder#rewards
    static jobject get_field_rewards(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "rewards", "field_1153", "rewards", "f_138335_"), "Lak;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.Advancement$Builder#rewards
    static void set_field_rewards(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "rewards", "field_1153", "rewards", "f_138335_"), "Lak;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.Advancement$Builder#criteria
    static jobject get_field_criteria(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "criteria", "field_1148", "criteria", "f_138336_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.Advancement$Builder#criteria
    static void set_field_criteria(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "criteria", "field_1148", "criteria", "f_138336_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.Advancement$Builder#requirements
    static jobject get_field_requirements(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "requirements", "field_1150", "requirements", "f_138337_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.Advancement$Builder#requirements
    static void set_field_requirements(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "requirements", "field_1150", "requirements", "f_138337_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.Advancement$Builder#merger
    static jobject get_field_merger(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "requirementsStrategy", "field_1151", "merger", "f_138338_"), "Laj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.Advancement$Builder#merger
    static void set_field_merger(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "requirementsStrategy", "field_1151", "merger", "f_138338_"), "Laj$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.Advancement$Builder#sendsTelemetryEvent
    static jboolean get_field_sendsTelemetryEvent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "sendsTelemetryEvent", "field_44783", "sendsTelemetryEvent", "f_285655_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.Advancement$Builder#sendsTelemetryEvent
    static void set_field_sendsTelemetryEvent(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "sendsTelemetryEvent", "field_44783", "sendsTelemetryEvent", "f_285655_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "advancement", "method_707", "create", "m_138353_"), "()Laf$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_createUntelemetered() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "recipeAdvancement", "method_51698", "createUntelemetered", "m_285878_"), "()Laf$a;");
    }

    static jobject createUntelemetered() {
       const auto clazz = self();
       const auto methodID = methodID_createUntelemetered();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_parent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parent", "method_701", "parent", "m_138398_"), "(Lag;)Laf$a;");
    }

    static jobject parent(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__parent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parent", "method_708", "parent", "m_138396_"), "(Lakr;)Laf$a;");
    }

    static jobject _parent(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__parent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__display() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "display", "method_20416", "display", "m_138362_"), "(Lcuq;Lwz;Lwz;Lakr;Lam;ZZZ)Laf$a;");
    }

    static jobject _display(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5, const jboolean& arg6, const jboolean& arg7) {
                
       const auto methodID = methodID__display();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID___display() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "display", "method_697", "display", "m_138371_"), "(Ldcv;Lwz;Lwz;Lakr;Lam;ZZZ)Laf$a;");
    }

    static jobject __display(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5, const jboolean& arg6, const jboolean& arg7) {
                
       const auto methodID = methodID___display();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID____display() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "display", "method_693", "display", "m_138358_"), "(Las;)Laf$a;");
    }

    static jobject ___display(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID____display();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__rewards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rewards", "method_703", "rewards", "m_138354_"), "(Lak$a;)Laf$a;");
    }

    static jobject _rewards(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__rewards();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___rewards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rewards", "method_706", "rewards", "m_138356_"), "(Lak;)Laf$a;");
    }

    static jobject __rewards(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___rewards();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_criterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCriterion", "method_705", "criterion", "m_138383_"), "(Ljava/lang/String;Lao;)Laf$a;");
    }

    static jobject criterion(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_criterion();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_criteriaMerger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "requirements", "method_704", "criteriaMerger", "m_138360_"), "(Laj$a;)Laf$a;");
    }

    static jobject criteriaMerger(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_criteriaMerger();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__requirements() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "requirements", "method_34884", "requirements", "m_143951_"), "(Laj;)Laf$a;");
    }

    static jobject _requirements(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__requirements();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__sendsTelemetryEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "sendsTelemetryEvent", "method_53634", "sendsTelemetryEvent", "m_293041_"), "()Laf$a;");
    }

    static jobject _sendsTelemetryEvent(const jobject& obj) {
                
       const auto methodID = methodID__sendsTelemetryEvent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_695", "build", "m_138403_"), "(Lakr;)Lag;");
    }

    static jobject build(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_694", "build", "m_138389_"), "(Ljava/util/function/Consumer;Ljava/lang/String;)Lag;");
    }

    static jobject _build(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_ADVANCEMENT$BUILDER_HPP