// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTE$CATEGORY_HPP
#define NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTE$CATEGORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.attribute.EntityAttribute$Category
 * Remapped: bur$a
 */
namespace EntityAttribute$Category {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bur$a", "net/minecraft/world/entity/ai/attributes/Attribute$Sentiment", "net/minecraft/class_1320$class_9764", "net/minecraft/entity/attribute/EntityAttribute$Category", "net/minecraft/src/C_552_$C_336496_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttribute$Category#POSITIVE
    [[maybe_unused]] static jobject get_field_POSITIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POSITIVE", "field_51885", "POSITIVE", "POSITIVE"), "Lbur$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttribute$Category#POSITIVE
    [[maybe_unused]] static void set_field_POSITIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POSITIVE", "field_51885", "POSITIVE", "POSITIVE"), "Lbur$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttribute$Category#NEUTRAL
    [[maybe_unused]] static jobject get_field_NEUTRAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NEUTRAL", "field_51886", "NEUTRAL", "NEUTRAL"), "Lbur$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttribute$Category#NEUTRAL
    [[maybe_unused]] static void set_field_NEUTRAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NEUTRAL", "field_51886", "NEUTRAL", "NEUTRAL"), "Lbur$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttribute$Category#NEGATIVE
    [[maybe_unused]] static jobject get_field_NEGATIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEGATIVE", "field_51887", "NEGATIVE", "NEGATIVE"), "Lbur$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttribute$Category#NEGATIVE
    [[maybe_unused]] static void set_field_NEGATIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEGATIVE", "field_51887", "NEGATIVE", "NEGATIVE"), "Lbur$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbur$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbur$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFormatting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStyle", "method_60496", "getFormatting", "m_340148_"), "(Z)Ln;");
    }

    static jobject getFormatting(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getFormatting();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTE$CATEGORY_HPP