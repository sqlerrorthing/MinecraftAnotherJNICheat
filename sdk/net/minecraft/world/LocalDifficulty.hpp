// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_LOCALDIFFICULTY_HPP
#define NET_MINECRAFT_WORLD_LOCALDIFFICULTY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.LocalDifficulty
 * Remapped: bqp
 */
namespace LocalDifficulty {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bqp", "net/minecraft/world/DifficultyInstance", "net/minecraft/class_1266", "net/minecraft/world/LocalDifficulty", "net/minecraft/src/C_469_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.LocalDifficulty#field_29953
    [[maybe_unused]] static jfloat get_field_field_29953() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIFFICULTY_TIME_GLOBAL_OFFSET", "field_29953", "field_29953", "f_146646_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.LocalDifficulty#field_29953
    [[maybe_unused]] static void set_field_field_29953(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIFFICULTY_TIME_GLOBAL_OFFSET", "field_29953", "field_29953", "f_146646_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.LocalDifficulty#field_29954
    [[maybe_unused]] static jfloat get_field_field_29954() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_DIFFICULTY_TIME_GLOBAL", "field_29954", "field_29954", "f_146647_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.LocalDifficulty#field_29954
    [[maybe_unused]] static void set_field_field_29954(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_DIFFICULTY_TIME_GLOBAL", "field_29954", "field_29954", "f_146647_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.LocalDifficulty#field_29955
    [[maybe_unused]] static jfloat get_field_field_29955() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_DIFFICULTY_TIME_LOCAL", "field_29955", "field_29955", "f_146648_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.LocalDifficulty#field_29955
    [[maybe_unused]] static void set_field_field_29955(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_DIFFICULTY_TIME_LOCAL", "field_29955", "field_29955", "f_146648_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.LocalDifficulty#globalDifficulty
    static jobject get_field_globalDifficulty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "base", "field_5798", "globalDifficulty", "f_19041_"), "Lbqo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.LocalDifficulty#globalDifficulty
    static void set_field_globalDifficulty(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "base", "field_5798", "globalDifficulty", "f_19041_"), "Lbqo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.LocalDifficulty#localDifficulty
    static jfloat get_field_localDifficulty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "effectiveDifficulty", "field_5799", "localDifficulty", "f_19042_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.LocalDifficulty#localDifficulty
    static void set_field_localDifficulty(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "effectiveDifficulty", "field_5799", "localDifficulty", "f_19042_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getGlobalDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDifficulty", "method_5454", "getGlobalDifficulty", "m_19048_"), "()Lbqo;");
    }

    static jobject getGlobalDifficulty(const jobject& obj) {
                
       const auto methodID = methodID_getGlobalDifficulty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLocalDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getEffectiveDifficulty", "method_5457", "getLocalDifficulty", "m_19056_"), "()F");
    }

    static jfloat getLocalDifficulty(const jobject& obj) {
                
       const auto methodID = methodID_getLocalDifficulty();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_isAtLeastHard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isHard", "method_35020", "isAtLeastHard", "m_146649_"), "()Z");
    }

    static jboolean isAtLeastHard(const jobject& obj) {
                
       const auto methodID = methodID_isAtLeastHard();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isHarderThan() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isHarderThan", "method_5455", "isHarderThan", "m_19049_"), "(F)Z");
    }

    static jboolean isHarderThan(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_isHarderThan();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getClampedLocalDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getSpecialMultiplier", "method_5458", "getClampedLocalDifficulty", "m_19057_"), "()F");
    }

    static jfloat getClampedLocalDifficulty(const jobject& obj) {
                
       const auto methodID = methodID_getClampedLocalDifficulty();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLocalDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateDifficulty", "method_5456", "setLocalDifficulty", "m_19051_"), "(Lbqo;JJF)F");
    }

    static jfloat setLocalDifficulty(const jobject& obj, const jobject& arg0, const jlong& arg1, const jlong& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_setLocalDifficulty();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_LOCALDIFFICULTY_HPP