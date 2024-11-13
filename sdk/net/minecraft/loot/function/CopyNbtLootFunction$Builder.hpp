// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_COPYNBTLOOTFUNCTION$BUILDER_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_COPYNBTLOOTFUNCTION$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.CopyNbtLootFunction$Builder
 * Remapped: ess$a
 */
namespace CopyNbtLootFunction$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ess$a", "net/minecraft/world/level/storage/loot/functions/CopyCustomDataFunction$Builder", "net/minecraft/class_3837$class_3838", "net/minecraft/loot/function/CopyNbtLootFunction$Builder", "net/minecraft/src/C_313426_$C_313848_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.function.CopyNbtLootFunction$Builder#source
    static jobject get_field_source(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "source", "field_17017", "source", "f_314398_"), "Levq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.CopyNbtLootFunction$Builder#source
    static void set_field_source(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "source", "field_17017", "source", "f_314398_"), "Levq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.CopyNbtLootFunction$Builder#operations
    static jobject get_field_operations(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ops", "field_17018", "operations", "f_314900_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.CopyNbtLootFunction$Builder#operations
    static void set_field_operations(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ops", "field_17018", "operations", "f_314900_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_withOperation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copy", "method_16857", "withOperation", "m_322757_"), "(Ljava/lang/String;Ljava/lang/String;Less$c;)Less$a;");
    }

    static jobject withOperation(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_withOperation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__withOperation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copy", "method_16856", "withOperation", "m_320941_"), "(Ljava/lang/String;Ljava/lang/String;)Less$a;");
    }

    static jobject _withOperation(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__withOperation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getThisBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThis", "method_16855", "getThisBuilder", "m_6477_"), "()Less$a;");
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

#endif // NET_MINECRAFT_LOOT_FUNCTION_COPYNBTLOOTFUNCTION$BUILDER_HPP