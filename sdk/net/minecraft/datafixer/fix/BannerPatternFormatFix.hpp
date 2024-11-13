// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_BANNERPATTERNFORMATFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_BANNERPATTERNFORMATFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.BannerPatternFormatFix
 * Remapped: bam
 */
namespace BannerPatternFormatFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bam", "net/minecraft/util/datafix/fixes/BannerPatternFormatFix", "net/minecraft/class_9264", "net/minecraft/datafixer/fix/BannerPatternFormatFix", "net/minecraft/src/C_313396_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.BannerPatternFormatFix#OLD_TO_NEW_PATTERNS
    [[maybe_unused]] static jobject get_field_OLD_TO_NEW_PATTERNS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PATTERN_ID_MAP", "field_49187", "OLD_TO_NEW_PATTERNS", "f_314037_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.BannerPatternFormatFix#OLD_TO_NEW_PATTERNS
    [[maybe_unused]] static void set_field_OLD_TO_NEW_PATTERNS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PATTERN_ID_MAP", "field_49187", "OLD_TO_NEW_PATTERNS", "f_314037_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_transform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_5105", "transform", "m_7504_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject transform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_replacePatterns() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixTag", "method_57193", "replacePatterns", "m_318907_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject replacePatterns(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_replacePatterns();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_replacePatternAndColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixLayer", "method_57195", "replacePatternAndColor", "m_321308_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject replacePatternAndColor(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_replacePatternAndColor();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getColorFromInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixColor", "method_57192", "getColorFromInt", "m_322288_"), "(I)Ljava/lang/String;");
    }

    static jobject getColorFromInt(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getColorFromInt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_BANNERPATTERNFORMATFIX_HPP