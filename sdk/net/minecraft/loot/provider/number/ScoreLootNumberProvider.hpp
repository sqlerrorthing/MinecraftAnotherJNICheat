// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_PROVIDER_NUMBER_SCORELOOTNUMBERPROVIDER_HPP
#define NET_MINECRAFT_LOOT_PROVIDER_NUMBER_SCORELOOTNUMBERPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.provider.number.ScoreLootNumberProvider
 * Remapped: ewa
 */
namespace ScoreLootNumberProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ewa", "net/minecraft/world/level/storage/loot/providers/number/ScoreboardValue", "net/minecraft/class_5660", "net/minecraft/loot/provider/number/ScoreLootNumberProvider", "net/minecraft/src/C_141503_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.provider.number.ScoreLootNumberProvider#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "target", "comp_1897", "target", "f_165741_"), "Lewh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.provider.number.ScoreLootNumberProvider#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "target", "comp_1897", "target", "f_165741_"), "Lewh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.provider.number.ScoreLootNumberProvider#score
    static jobject get_field_score(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "score", "comp_1898", "score", "f_165742_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.provider.number.ScoreLootNumberProvider#score
    static void set_field_score(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "score", "comp_1898", "score", "f_165742_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.provider.number.ScoreLootNumberProvider#scale
    static jfloat get_field_scale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "scale", "comp_1899", "scale", "f_165743_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.provider.number.ScoreLootNumberProvider#scale
    static void set_field_scale(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "scale", "comp_1899", "scale", "f_165743_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.provider.number.ScoreLootNumberProvider#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45890", "CODEC", "f_290639_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.provider.number.ScoreLootNumberProvider#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45890", "CODEC", "f_290639_"), "Lcom/mojang/serialization/MapCodec;");
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
    
    static jmethodID methodID_getRequiredParameters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getReferencedContextParams", "method_293", "getRequiredParameters", "m_6231_"), "()Ljava/util/Set;");
    }

    static jobject getRequiredParameters(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredParameters();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromScoreboard", "method_35569", "create", "m_165749_"), "(Lerr$b;Ljava/lang/String;)Lewa;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromScoreboard", "method_35570", "create", "m_165752_"), "(Lerr$b;Ljava/lang/String;F)Lewa;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_nextFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getFloat", "method_32454", "nextFloat", "m_142688_"), "(Lerr;)F");
    }

    static jfloat nextFloat(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_nextFloat();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__target() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "target", "comp_1897", "target", "f_165741_"), "()Lewh;");
    }

    static jobject _target(const jobject& obj) {
                
       const auto methodID = methodID__target();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__score() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "score", "comp_1898", "score", "f_165742_"), "()Ljava/lang/String;");
    }

    static jobject _score(const jobject& obj) {
                
       const auto methodID = methodID__score();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__scale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "scale", "comp_1899", "scale", "f_165743_"), "()F");
    }

    static jfloat _scale(const jobject& obj) {
                
       const auto methodID = methodID__scale();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_PROVIDER_NUMBER_SCORELOOTNUMBERPROVIDER_HPP