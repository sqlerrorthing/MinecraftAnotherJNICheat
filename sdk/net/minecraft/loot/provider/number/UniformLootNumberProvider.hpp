// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_PROVIDER_NUMBER_UNIFORMLOOTNUMBERPROVIDER_HPP
#define NET_MINECRAFT_LOOT_PROVIDER_NUMBER_UNIFORMLOOTNUMBERPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.provider.number.UniformLootNumberProvider
 * Remapped: ewc
 */
namespace UniformLootNumberProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ewc", "net/minecraft/world/level/storage/loot/providers/number/UniformGenerator", "net/minecraft/class_5662", "net/minecraft/loot/provider/number/UniformLootNumberProvider", "net/minecraft/src/C_141505_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.provider.number.UniformLootNumberProvider#min
    static jobject get_field_min(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "min", "comp_1900", "min", "f_165774_"), "Levy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.provider.number.UniformLootNumberProvider#min
    static void set_field_min(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "min", "comp_1900", "min", "f_165774_"), "Levy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.provider.number.UniformLootNumberProvider#max
    static jobject get_field_max(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "max", "comp_1901", "max", "f_165775_"), "Levy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.provider.number.UniformLootNumberProvider#max
    static void set_field_max(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "max", "comp_1901", "max", "f_165775_"), "Levy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.provider.number.UniformLootNumberProvider#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45891", "CODEC", "f_291637_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.provider.number.UniformLootNumberProvider#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45891", "CODEC", "f_291637_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getType", "method_365", "getType", "m_142587_"), "()Levx;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "between", "method_32462", "create", "m_165780_"), "(FF)Lewc;");
    }

    static jobject create(const jfloat& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_nextInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getInt", "method_366", "nextInt", "m_142683_"), "(Lerr;)I");
    }

    static jint nextInt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_nextInt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_nextFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getFloat", "method_32454", "nextFloat", "m_142688_"), "(Lerr;)F");
    }

    static jfloat nextFloat(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_nextFloat();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRequiredParameters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getReferencedContextParams", "method_293", "getRequiredParameters", "m_6231_"), "()Ljava/util/Set;");
    }

    static jobject getRequiredParameters(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredParameters();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__min() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "min", "comp_1900", "min", "f_165774_"), "()Levy;");
    }

    static jobject _min(const jobject& obj) {
                
       const auto methodID = methodID__min();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__max() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "max", "comp_1901", "max", "f_165775_"), "()Levy;");
    }

    static jobject _max(const jobject& obj) {
                
       const auto methodID = methodID__max();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_PROVIDER_NUMBER_UNIFORMLOOTNUMBERPROVIDER_HPP