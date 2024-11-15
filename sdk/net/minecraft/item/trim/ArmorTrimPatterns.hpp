// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_TRIM_ARMORTRIMPATTERNS_HPP
#define NET_MINECRAFT_ITEM_TRIM_ARMORTRIMPATTERNS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.trim.ArmorTrimPatterns
 * Remapped: cxb
 */
namespace ArmorTrimPatterns {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cxb", "net/minecraft/world/item/armortrim/TrimPatterns", "net/minecraft/class_8057", "net/minecraft/item/trim/ArmorTrimPatterns", "net/minecraft/src/C_265830_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SENTRY
    [[maybe_unused]] static jobject get_field_SENTRY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SENTRY", "field_42016", "SENTRY", "f_265866_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SENTRY
    [[maybe_unused]] static void set_field_SENTRY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SENTRY", "field_42016", "SENTRY", "f_265866_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#DUNE
    [[maybe_unused]] static jobject get_field_DUNE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DUNE", "field_42017", "DUNE", "f_265941_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#DUNE
    [[maybe_unused]] static void set_field_DUNE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DUNE", "field_42017", "DUNE", "f_265941_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#COAST
    [[maybe_unused]] static jobject get_field_COAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COAST", "field_42018", "COAST", "f_265901_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#COAST
    [[maybe_unused]] static void set_field_COAST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COAST", "field_42018", "COAST", "f_265901_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#WILD
    [[maybe_unused]] static jobject get_field_WILD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WILD", "field_42019", "WILD", "f_266087_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#WILD
    [[maybe_unused]] static void set_field_WILD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WILD", "field_42019", "WILD", "f_266087_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#WARD
    [[maybe_unused]] static jobject get_field_WARD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WARD", "field_42020", "WARD", "f_266074_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#WARD
    [[maybe_unused]] static void set_field_WARD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WARD", "field_42020", "WARD", "f_266074_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#EYE
    [[maybe_unused]] static jobject get_field_EYE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EYE", "field_42021", "EYE", "f_266091_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#EYE
    [[maybe_unused]] static void set_field_EYE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EYE", "field_42021", "EYE", "f_266091_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#VEX
    [[maybe_unused]] static jobject get_field_VEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VEX", "field_42022", "VEX", "f_266039_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#VEX
    [[maybe_unused]] static void set_field_VEX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VEX", "field_42022", "VEX", "f_266039_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#TIDE
    [[maybe_unused]] static jobject get_field_TIDE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TIDE", "field_42023", "TIDE", "f_266069_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#TIDE
    [[maybe_unused]] static void set_field_TIDE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TIDE", "field_42023", "TIDE", "f_266069_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SNOUT
    [[maybe_unused]] static jobject get_field_SNOUT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SNOUT", "field_42024", "SNOUT", "f_266083_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SNOUT
    [[maybe_unused]] static void set_field_SNOUT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SNOUT", "field_42024", "SNOUT", "f_266083_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#RIB
    [[maybe_unused]] static jobject get_field_RIB() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "RIB", "field_42025", "RIB", "f_266089_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#RIB
    [[maybe_unused]] static void set_field_RIB(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "RIB", "field_42025", "RIB", "f_266089_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SPIRE
    [[maybe_unused]] static jobject get_field_SPIRE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SPIRE", "field_42026", "SPIRE", "f_265976_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SPIRE
    [[maybe_unused]] static void set_field_SPIRE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SPIRE", "field_42026", "SPIRE", "f_265976_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#WAYFINDER
    [[maybe_unused]] static jobject get_field_WAYFINDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "WAYFINDER", "field_43221", "WAYFINDER", "f_276615_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#WAYFINDER
    [[maybe_unused]] static void set_field_WAYFINDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "WAYFINDER", "field_43221", "WAYFINDER", "f_276615_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SHAPER
    [[maybe_unused]] static jobject get_field_SHAPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SHAPER", "field_43222", "SHAPER", "f_276604_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SHAPER
    [[maybe_unused]] static void set_field_SHAPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SHAPER", "field_43222", "SHAPER", "f_276604_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SILENCE
    [[maybe_unused]] static jobject get_field_SILENCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SILENCE", "field_43223", "SILENCE", "f_276510_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#SILENCE
    [[maybe_unused]] static void set_field_SILENCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SILENCE", "field_43223", "SILENCE", "f_276510_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#RAISER
    [[maybe_unused]] static jobject get_field_RAISER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "RAISER", "field_43224", "RAISER", "f_276435_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#RAISER
    [[maybe_unused]] static void set_field_RAISER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "RAISER", "field_43224", "RAISER", "f_276435_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#HOST
    [[maybe_unused]] static jobject get_field_HOST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "HOST", "field_43225", "HOST", "f_276573_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#HOST
    [[maybe_unused]] static void set_field_HOST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "HOST", "field_43225", "HOST", "f_276573_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#FLOW
    [[maybe_unused]] static jobject get_field_FLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "FLOW", "field_49827", "FLOW", "f_316919_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#FLOW
    [[maybe_unused]] static void set_field_FLOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "FLOW", "field_49827", "FLOW", "f_316919_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimPatterns#BOLT
    [[maybe_unused]] static jobject get_field_BOLT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BOLT", "field_49828", "BOLT", "f_317041_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimPatterns#BOLT
    [[maybe_unused]] static void set_field_BOLT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BOLT", "field_49828", "BOLT", "f_317041_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_48450", "bootstrap", "m_266400_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getFromTemplate", "method_48448", "get", "m_266468_"), "(Ljo$a;Lcuq;)Ljava/util/Optional;");
    }

    static jobject get(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_48451", "register", "m_266160_"), "(Lqq;Lcul;Lakq;)V");
    }

    static void register(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "registryKey", "method_48449", "of", "m_266452_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_TRIM_ARMORTRIMPATTERNS_HPP