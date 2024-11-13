// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_CRACKS_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_CRACKS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.Cracks
 * Remapped: bsp
 */
namespace Cracks {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsp", "net/minecraft/world/entity/Crackiness", "net/minecraft/class_9273", "net/minecraft/entity/passive/Cracks", "net/minecraft/src/C_313410_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.Cracks#IRON_GOLEM
    [[maybe_unused]] static jobject get_field_IRON_GOLEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GOLEM", "field_49210", "IRON_GOLEM", "f_314390_"), "Lbsp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.Cracks#IRON_GOLEM
    [[maybe_unused]] static void set_field_IRON_GOLEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GOLEM", "field_49210", "IRON_GOLEM", "f_314390_"), "Lbsp;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.Cracks#WOLF_ARMOR
    [[maybe_unused]] static jobject get_field_WOLF_ARMOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WOLF_ARMOR", "field_49211", "WOLF_ARMOR", "f_315625_"), "Lbsp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.Cracks#WOLF_ARMOR
    [[maybe_unused]] static void set_field_WOLF_ARMOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WOLF_ARMOR", "field_49211", "WOLF_ARMOR", "f_315625_"), "Lbsp;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.Cracks#lowCrackThreshold
    static jfloat get_field_lowCrackThreshold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fractionLow", "field_49212", "lowCrackThreshold", "f_316649_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.Cracks#lowCrackThreshold
    static void set_field_lowCrackThreshold(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fractionLow", "field_49212", "lowCrackThreshold", "f_316649_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.Cracks#mediumCrackThreshold
    static jfloat get_field_mediumCrackThreshold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "fractionMedium", "field_49213", "mediumCrackThreshold", "f_314052_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.Cracks#mediumCrackThreshold
    static void set_field_mediumCrackThreshold(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "fractionMedium", "field_49213", "mediumCrackThreshold", "f_314052_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.Cracks#highCrackThreshold
    static jfloat get_field_highCrackThreshold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "fractionHigh", "field_49214", "highCrackThreshold", "f_314125_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.Cracks#highCrackThreshold
    static void set_field_highCrackThreshold(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "fractionHigh", "field_49214", "highCrackThreshold", "f_314125_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getCrackLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "byFraction", "method_57282", "getCrackLevel", "m_320179_"), "(F)Lbsp$a;");
    }

    static jobject getCrackLevel(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getCrackLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getCrackLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "byDamage", "method_57284", "getCrackLevel", "m_318874_"), "(Lcuq;)Lbsp$a;");
    }

    static jobject _getCrackLevel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getCrackLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___getCrackLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "byDamage", "method_57283", "getCrackLevel", "m_324753_"), "(II)Lbsp$a;");
    }

    static jobject __getCrackLevel(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID___getCrackLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_CRACKS_HPP