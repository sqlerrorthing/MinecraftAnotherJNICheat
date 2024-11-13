// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_SETLORELOOTFUNCTION$BUILDER_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_SETLORELOOTFUNCTION$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.SetLoreLootFunction$Builder
 * Remapped: etz$a
 */
namespace SetLoreLootFunction$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("etz$a", "net/minecraft/world/level/storage/loot/functions/SetLoreFunction$Builder", "net/minecraft/class_3671$class_6159", "net/minecraft/loot/function/SetLoreLootFunction$Builder", "net/minecraft/src/C_2953_$C_141473_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.function.SetLoreLootFunction$Builder#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "resolutionContext", "field_31867", "target", "f_165445_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetLoreLootFunction$Builder#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "resolutionContext", "field_31867", "target", "f_165445_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetLoreLootFunction$Builder#lore
    static jobject get_field_lore(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lore", "field_31868", "lore", "f_165446_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetLoreLootFunction$Builder#lore
    static void set_field_lore(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lore", "field_31868", "lore", "f_165446_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetLoreLootFunction$Builder#operation
    static jobject get_field_operation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mode", "field_50025", "operation", "f_316042_"), "Letd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetLoreLootFunction$Builder#operation
    static void set_field_operation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mode", "field_50025", "operation", "f_316042_"), "Letd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__operation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setMode", "method_58460", "operation", "m_324170_"), "(Letd;)Letz$a;");
    }

    static jobject _operation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__operation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__target() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setResolutionContext", "method_35546", "target", "m_165449_"), "(Lerr$b;)Letz$a;");
    }

    static jobject _target(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__target();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__lore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addLine", "method_35547", "lore", "m_165451_"), "(Lwz;)Letz$a;");
    }

    static jobject _lore(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__lore();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getThisBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThis", "method_35545", "getThisBuilder", "m_6477_"), "()Letz$a;");
    }

    static jobject getThisBuilder(const jobject& obj) {
                
       const auto methodID = methodID_getThisBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_515", "build", "m_7453_"), "()Letf;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_SETLORELOOTFUNCTION$BUILDER_HPP