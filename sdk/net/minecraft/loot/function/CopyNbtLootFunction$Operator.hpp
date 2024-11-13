// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_COPYNBTLOOTFUNCTION$OPERATOR_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_COPYNBTLOOTFUNCTION$OPERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.CopyNbtLootFunction$Operator
 * Remapped: ess$c
 */
namespace CopyNbtLootFunction$Operator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ess$c", "net/minecraft/world/level/storage/loot/functions/CopyCustomDataFunction$MergeStrategy", "net/minecraft/class_3837$class_3841", "net/minecraft/loot/function/CopyNbtLootFunction$Operator", "net/minecraft/src/C_313426_$C_313502_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#REPLACE
    [[maybe_unused]] static jobject get_field_REPLACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPLACE", "field_17032", "REPLACE", "REPLACE"), "Less$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#REPLACE
    [[maybe_unused]] static void set_field_REPLACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPLACE", "field_17032", "REPLACE", "REPLACE"), "Less$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#APPEND
    [[maybe_unused]] static jobject get_field_APPEND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "APPEND", "field_17033", "APPEND", "APPEND"), "Less$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#APPEND
    [[maybe_unused]] static void set_field_APPEND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "APPEND", "field_17033", "APPEND", "APPEND"), "Less$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#MERGE
    [[maybe_unused]] static jobject get_field_MERGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MERGE", "field_17034", "MERGE", "MERGE"), "Less$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#MERGE
    [[maybe_unused]] static void set_field_MERGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MERGE", "field_17034", "MERGE", "MERGE"), "Less$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_45821", "CODEC", "f_316527_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNbtLootFunction$Operator#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_45821", "CODEC", "f_316527_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.CopyNbtLootFunction$Operator#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_17035", "name", "f_314564_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.CopyNbtLootFunction$Operator#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_17035", "name", "f_314564_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Less$c;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Less$c;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_merge() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "merge", "method_16864", "merge", "m_321897_"), "(Luy;Lfl$g;Ljava/util/List;)V");
    }

    static void merge(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_merge();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_COPYNBTLOOTFUNCTION$OPERATOR_HPP