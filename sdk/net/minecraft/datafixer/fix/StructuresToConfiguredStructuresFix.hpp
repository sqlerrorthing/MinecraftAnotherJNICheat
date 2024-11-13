// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_STRUCTURESTOCONFIGUREDSTRUCTURESFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_STRUCTURESTOCONFIGUREDSTRUCTURESFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.StructuresToConfiguredStructuresFix
 * Remapped: bhk
 */
namespace StructuresToConfiguredStructuresFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bhk", "net/minecraft/util/datafix/fixes/StructuresBecomeConfiguredFix", "net/minecraft/class_7046", "net/minecraft/datafixer/fix/StructuresToConfiguredStructuresFix", "net/minecraft/src/C_206960_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.StructuresToConfiguredStructuresFix#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_51349", "LOGGER", "f_314500_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.StructuresToConfiguredStructuresFix#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_51349", "LOGGER", "f_314500_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.StructuresToConfiguredStructuresFix#STRUCTURE_TO_CONFIGURED_STRUCTURES_MAPPING
    [[maybe_unused]] static jobject get_field_STRUCTURE_TO_CONFIGURED_STRUCTURES_MAPPING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CONVERSION_MAP", "field_37050", "STRUCTURE_TO_CONFIGURED_STRUCTURES_MAPPING", "f_207676_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.StructuresToConfiguredStructuresFix#STRUCTURE_TO_CONFIGURED_STRUCTURES_MAPPING
    [[maybe_unused]] static void set_field_STRUCTURE_TO_CONFIGURED_STRUCTURES_MAPPING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CONVERSION_MAP", "field_37050", "STRUCTURE_TO_CONFIGURED_STRUCTURES_MAPPING", "f_207676_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_41012", "fixChunk", "m_207691_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixChunk(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fixStructureStarts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateStarts", "method_41015", "fixStructureStarts", "m_207699_"), "(Lcom/mojang/serialization/Dynamic;Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixStructureStarts(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_fixStructureStarts();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixStructureReferences() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateReferences", "method_41020", "fixStructureReferences", "m_207716_"), "(Lcom/mojang/serialization/Dynamic;Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixStructureReferences(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_fixStructureReferences();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_mapStructureToConfiguredStructure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "findUpdatedStructureType", "method_41022", "mapStructureToConfiguredStructure", "m_207723_"), "(Lcom/mojang/serialization/Dynamic;Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject mapStructureToConfiguredStructure(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_mapStructureToConfiguredStructure();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBiomeRepresentativeStructure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "guessConfiguration", "method_41013", "getBiomeRepresentativeStructure", "m_207693_"), "(Lcom/mojang/serialization/Dynamic;Lbhk$a;)Ljava/util/Optional;");
    }

    static jobject getBiomeRepresentativeStructure(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getBiomeRepresentativeStructure();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_STRUCTURESTOCONFIGUREDSTRUCTURESFIX_HPP