// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_TEXTVISITFACTORY_HPP
#define NET_MINECRAFT_TEXT_TEXTVISITFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.TextVisitFactory
 * Remapped: azj
 */
namespace TextVisitFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("azj", "net/minecraft/util/StringDecomposer", "net/minecraft/class_5223", "net/minecraft/text/TextVisitFactory", "net/minecraft/src/C_196_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.text.TextVisitFactory#REPLACEMENT_CHARACTER
    [[maybe_unused]] static jchar get_field_REPLACEMENT_CHARACTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPLACEMENT_CHAR", "field_29861", "REPLACEMENT_CHARACTER", "f_144984_"), "C");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticCharField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.text.TextVisitFactory#REPLACEMENT_CHARACTER
    [[maybe_unused]] static void set_field_REPLACEMENT_CHARACTER(const jchar &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REPLACEMENT_CHAR", "field_29861", "REPLACEMENT_CHARACTER", "f_144984_"), "C");
        return MinecraftSDK::env->SetStaticCharField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.text.TextVisitFactory#VISIT_TERMINATED
    [[maybe_unused]] static jobject get_field_VISIT_TERMINATED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STOP_ITERATION", "field_24215", "VISIT_TERMINATED", "f_14298_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.text.TextVisitFactory#VISIT_TERMINATED
    [[maybe_unused]] static void set_field_VISIT_TERMINATED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STOP_ITERATION", "field_24215", "VISIT_TERMINATED", "f_14298_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_visitRegularCharacter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "feedChar", "method_27477", "visitRegularCharacter", "m_14332_"), "(Lxw;Layb;IC)Z");
    }

    static jboolean visitRegularCharacter(const jobject& arg0, const jobject& arg1, const jint& arg2, const jchar& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_visitRegularCharacter();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_visitForwards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "iterate", "method_27474", "visitForwards", "m_14317_"), "(Ljava/lang/String;Lxw;Layb;)Z");
    }

    static jboolean visitForwards(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_visitForwards();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_visitBackwards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "iterateBackwards", "method_27478", "visitBackwards", "m_14337_"), "(Ljava/lang/String;Lxw;Layb;)Z");
    }

    static jboolean visitBackwards(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_visitBackwards();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_visitFormatted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "iterateFormatted", "method_27479", "visitFormatted", "m_14346_"), "(Ljava/lang/String;Lxw;Layb;)Z");
    }

    static jboolean visitFormatted(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_visitFormatted();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__visitFormatted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "iterateFormatted", "method_27472", "visitFormatted", "m_14306_"), "(Ljava/lang/String;ILxw;Layb;)Z");
    }

    static jboolean _visitFormatted(const jobject& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__visitFormatted();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID___visitFormatted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "iterateFormatted", "method_27473", "visitFormatted", "m_14311_"), "(Ljava/lang/String;ILxw;Lxw;Layb;)Z");
    }

    static jboolean __visitFormatted(const jobject& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID___visitFormatted();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID____visitFormatted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "iterateFormatted", "method_27476", "visitFormatted", "m_14328_"), "(Lxe;Lxw;Layb;)Z");
    }

    static jboolean ___visitFormatted(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID____visitFormatted();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_validateSurrogates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "filterBrokenSurrogates", "method_27471", "validateSurrogates", "m_14304_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject validateSurrogates(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_validateSurrogates();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_removeFormattingCodes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getPlainText", "method_31402", "removeFormattingCodes", "m_14326_"), "(Lxe;)Ljava/lang/String;");
    }

    static jobject removeFormattingCodes(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_removeFormattingCodes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_TEXT_TEXTVISITFACTORY_HPP