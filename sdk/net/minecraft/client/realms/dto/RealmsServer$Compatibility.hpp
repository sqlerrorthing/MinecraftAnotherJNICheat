// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$COMPATIBILITY_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$COMPATIBILITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RealmsServer$Compatibility
 * Remapped: fcp$a
 */
namespace RealmsServer$Compatibility {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcp$a", "com/mojang/realmsclient/dto/RealmsServer$Compatibility", "net/minecraft/class_4877$class_8842", "net/minecraft/client/realms/dto/RealmsServer$Compatibility", "net/minecraft/src/C_3244_$C_301945_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#UNVERIFIABLE
    [[maybe_unused]] static jobject get_field_UNVERIFIABLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNVERIFIABLE", "field_46697", "UNVERIFIABLE", "UNVERIFIABLE"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#UNVERIFIABLE
    [[maybe_unused]] static void set_field_UNVERIFIABLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNVERIFIABLE", "field_46697", "UNVERIFIABLE", "UNVERIFIABLE"), "Lfcp$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#INCOMPATIBLE
    [[maybe_unused]] static jobject get_field_INCOMPATIBLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INCOMPATIBLE", "field_46698", "INCOMPATIBLE", "INCOMPATIBLE"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#INCOMPATIBLE
    [[maybe_unused]] static void set_field_INCOMPATIBLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INCOMPATIBLE", "field_46698", "INCOMPATIBLE", "INCOMPATIBLE"), "Lfcp$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#RELEASE_TYPE_INCOMPATIBLE
    [[maybe_unused]] static jobject get_field_RELEASE_TYPE_INCOMPATIBLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RELEASE_TYPE_INCOMPATIBLE", "field_51817", "RELEASE_TYPE_INCOMPATIBLE", "RELEASE_TYPE_INCOMPATIBLE"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#RELEASE_TYPE_INCOMPATIBLE
    [[maybe_unused]] static void set_field_RELEASE_TYPE_INCOMPATIBLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RELEASE_TYPE_INCOMPATIBLE", "field_51817", "RELEASE_TYPE_INCOMPATIBLE", "RELEASE_TYPE_INCOMPATIBLE"), "Lfcp$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#NEEDS_DOWNGRADE
    [[maybe_unused]] static jobject get_field_NEEDS_DOWNGRADE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NEEDS_DOWNGRADE", "field_46699", "NEEDS_DOWNGRADE", "NEEDS_DOWNGRADE"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#NEEDS_DOWNGRADE
    [[maybe_unused]] static void set_field_NEEDS_DOWNGRADE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NEEDS_DOWNGRADE", "field_46699", "NEEDS_DOWNGRADE", "NEEDS_DOWNGRADE"), "Lfcp$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#NEEDS_UPGRADE
    [[maybe_unused]] static jobject get_field_NEEDS_UPGRADE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NEEDS_UPGRADE", "field_46700", "NEEDS_UPGRADE", "NEEDS_UPGRADE"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#NEEDS_UPGRADE
    [[maybe_unused]] static void set_field_NEEDS_UPGRADE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NEEDS_UPGRADE", "field_46700", "NEEDS_UPGRADE", "NEEDS_UPGRADE"), "Lfcp$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#COMPATIBLE
    [[maybe_unused]] static jobject get_field_COMPATIBLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COMPATIBLE", "field_46701", "COMPATIBLE", "COMPATIBLE"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$Compatibility#COMPATIBLE
    [[maybe_unused]] static void set_field_COMPATIBLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COMPATIBLE", "field_46701", "COMPATIBLE", "COMPATIBLE"), "Lfcp$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfcp$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfcp$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isCompatible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isCompatible", "method_54568", "isCompatible", "m_307186_"), "()Z");
    }

    static jboolean isCompatible(const jobject& obj) {
                
       const auto methodID = methodID_isCompatible();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_needsUpgrade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "needsUpgrade", "method_54569", "needsUpgrade", "m_307884_"), "()Z");
    }

    static jboolean needsUpgrade(const jobject& obj) {
                
       const auto methodID = methodID_needsUpgrade();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_needsDowngrade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "needsDowngrade", "method_54570", "needsDowngrade", "m_305397_"), "()Z");
    }

    static jboolean needsDowngrade(const jobject& obj) {
                
       const auto methodID = methodID_needsDowngrade();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$COMPATIBILITY_HPP