// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_VILLAGE_VILLAGERDATA_HPP
#define NET_MINECRAFT_VILLAGE_VILLAGERDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.village.VillagerData
 * Remapped: cml
 */
namespace VillagerData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cml", "net/minecraft/world/entity/npc/VillagerData", "net/minecraft/class_3850", "net/minecraft/village/VillagerData", "net/minecraft/src/C_1119_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.village.VillagerData#MIN_LEVEL
    [[maybe_unused]] static jint get_field_MIN_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_VILLAGER_LEVEL", "field_30613", "MIN_LEVEL", "f_150017_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerData#MIN_LEVEL
    [[maybe_unused]] static void set_field_MIN_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_VILLAGER_LEVEL", "field_30613", "MIN_LEVEL", "f_150017_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerData#MAX_LEVEL
    [[maybe_unused]] static jint get_field_MAX_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_VILLAGER_LEVEL", "field_30614", "MAX_LEVEL", "f_150018_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerData#MAX_LEVEL
    [[maybe_unused]] static void set_field_MAX_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_VILLAGER_LEVEL", "field_30614", "MAX_LEVEL", "f_150018_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.village.VillagerData#LEVEL_BASE_EXPERIENCE
    [[maybe_unused]] static jint get_field_LEVEL_BASE_EXPERIENCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NEXT_LEVEL_XP_THRESHOLDS", "field_18540", "LEVEL_BASE_EXPERIENCE", "f_35551_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerData#LEVEL_BASE_EXPERIENCE
    [[maybe_unused]] static void set_field_LEVEL_BASE_EXPERIENCE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NEXT_LEVEL_XP_THRESHOLDS", "field_18540", "LEVEL_BASE_EXPERIENCE", "f_35551_"), "[I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerData#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24669", "CODEC", "f_35550_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerData#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24669", "CODEC", "f_35550_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerData#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_48345", "PACKET_CODEC", "f_314537_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerData#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_48345", "PACKET_CODEC", "f_314537_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerData#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "type", "field_17048", "type", "f_35552_"), "Lcmp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerData#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "type", "field_17048", "type", "f_35552_"), "Lcmp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerData#profession
    static jobject get_field_profession(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "profession", "field_17049", "profession", "f_35553_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerData#profession
    static void set_field_profession(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "profession", "field_17049", "profession", "f_35553_"), "Lcmn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerData#level
    static jint get_field_level(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "level", "field_17050", "level", "f_35554_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerData#level
    static void set_field_level(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "level", "field_17050", "level", "f_35554_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_16919", "getType", "m_35560_"), "()Lcmp;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProfession() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getProfession", "method_16924", "getProfession", "m_35571_"), "()Lcmn;");
    }

    static jobject getProfession(const jobject& obj) {
                
       const auto methodID = methodID_getProfession();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getLevel", "method_16925", "getLevel", "m_35576_"), "()I");
    }

    static jint getLevel(const jobject& obj) {
                
       const auto methodID = methodID_getLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_withType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setType", "method_16922", "withType", "m_35567_"), "(Lcmp;)Lcml;");
    }

    static jobject withType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withProfession() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setProfession", "method_16921", "withProfession", "m_35565_"), "(Lcmn;)Lcml;");
    }

    static jobject withProfession(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withProfession();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLevel", "method_16920", "withLevel", "m_35561_"), "(I)Lcml;");
    }

    static jobject withLevel(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_withLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLowerLevelExperience() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getMinXpPerLevel", "method_19194", "getLowerLevelExperience", "m_35572_"), "(I)I");
    }

    static jint getLowerLevelExperience(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLowerLevelExperience();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getUpperLevelExperience() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getMaxXpPerLevel", "method_19195", "getUpperLevelExperience", "m_35577_"), "(I)I");
    }

    static jint getUpperLevelExperience(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getUpperLevelExperience();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_canLevelUp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "canLevelUp", "method_19196", "canLevelUp", "m_35582_"), "(I)Z");
    }

    static jboolean canLevelUp(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_canLevelUp();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_VILLAGE_VILLAGERDATA_HPP