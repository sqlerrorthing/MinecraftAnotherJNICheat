// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PLAYER_PLAYERABILITIES_HPP
#define NET_MINECRAFT_ENTITY_PLAYER_PLAYERABILITIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.player.PlayerAbilities
 * Remapped: cmu
 */
namespace PlayerAbilities {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmu", "net/minecraft/world/entity/player/Abilities", "net/minecraft/class_1656", "net/minecraft/entity/player/PlayerAbilities", "net/minecraft/src/C_1138_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.entity.player.PlayerAbilities#invulnerable
    static jboolean get_field_invulnerable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "invulnerable", "field_7480", "invulnerable", "f_35934_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerAbilities#invulnerable
    static void set_field_invulnerable(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "invulnerable", "field_7480", "invulnerable", "f_35934_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerAbilities#flying
    static jboolean get_field_flying(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flying", "field_7479", "flying", "f_35935_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerAbilities#flying
    static void set_field_flying(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flying", "field_7479", "flying", "f_35935_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerAbilities#allowFlying
    static jboolean get_field_allowFlying(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mayfly", "field_7478", "allowFlying", "f_35936_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerAbilities#allowFlying
    static void set_field_allowFlying(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mayfly", "field_7478", "allowFlying", "f_35936_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerAbilities#creativeMode
    static jboolean get_field_creativeMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "instabuild", "field_7477", "creativeMode", "f_35937_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerAbilities#creativeMode
    static void set_field_creativeMode(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "instabuild", "field_7477", "creativeMode", "f_35937_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerAbilities#allowModifyWorld
    static jboolean get_field_allowModifyWorld(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "mayBuild", "field_7476", "allowModifyWorld", "f_35938_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerAbilities#allowModifyWorld
    static void set_field_allowModifyWorld(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "mayBuild", "field_7476", "allowModifyWorld", "f_35938_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.PlayerAbilities#flySpeed
    static jfloat get_field_flySpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "flyingSpeed", "field_7481", "flySpeed", "f_35939_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.PlayerAbilities#flySpeed
    static void set_field_flySpeed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "flyingSpeed", "field_7481", "flySpeed", "f_35939_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.PlayerAbilities#walkSpeed
    static jfloat get_field_walkSpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "walkingSpeed", "field_7482", "walkSpeed", "f_35940_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.PlayerAbilities#walkSpeed
    static void set_field_walkSpeed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "walkingSpeed", "field_7482", "walkSpeed", "f_35940_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addSaveData", "method_7251", "writeNbt", "m_35945_"), "(Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "loadSaveData", "method_7249", "readNbt", "m_35950_"), "(Lub;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFlySpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFlyingSpeed", "method_7252", "getFlySpeed", "m_35942_"), "()F");
    }

    static jfloat getFlySpeed(const jobject& obj) {
                
       const auto methodID = methodID_getFlySpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_setFlySpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFlyingSpeed", "method_7248", "setFlySpeed", "m_35943_"), "(F)V");
    }

    static void setFlySpeed(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setFlySpeed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWalkSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getWalkingSpeed", "method_7253", "getWalkSpeed", "m_35947_"), "()F");
    }

    static jfloat getWalkSpeed(const jobject& obj) {
                
       const auto methodID = methodID_getWalkSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_setWalkSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setWalkingSpeed", "method_7250", "setWalkSpeed", "m_35948_"), "(F)V");
    }

    static void setWalkSpeed(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setWalkSpeed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PLAYER_PLAYERABILITIES_HPP