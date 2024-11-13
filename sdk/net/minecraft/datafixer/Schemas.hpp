// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMAS_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMAS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.Schemas
 * Remapped: azx
 */
namespace Schemas {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("azx", "net/minecraft/util/datafix/DataFixers", "net/minecraft/class_3551", "net/minecraft/datafixer/Schemas", "net/minecraft/src/C_209_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.Schemas#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SAME", "field_15776", "EMPTY", "f_14508_"), "Ljava/util/function/BiFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.Schemas#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SAME", "field_15776", "EMPTY", "f_14508_"), "Ljava/util/function/BiFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.Schemas#EMPTY_IDENTIFIER_NORMALIZE
    [[maybe_unused]] static jobject get_field_EMPTY_IDENTIFIER_NORMALIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SAME_NAMESPACED", "field_15775", "EMPTY_IDENTIFIER_NORMALIZE", "f_14509_"), "Ljava/util/function/BiFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.Schemas#EMPTY_IDENTIFIER_NORMALIZE
    [[maybe_unused]] static void set_field_EMPTY_IDENTIFIER_NORMALIZE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SAME_NAMESPACED", "field_15775", "EMPTY_IDENTIFIER_NORMALIZE", "f_14509_"), "Ljava/util/function/BiFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.Schemas#FIXER
    [[maybe_unused]] static jobject get_field_FIXER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_FIXER", "field_15777", "FIXER", "f_337609_"), "Lcom/mojang/datafixers/DataFixerBuilder$Result;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.Schemas#FIXER
    [[maybe_unused]] static void set_field_FIXER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_FIXER", "field_15777", "FIXER", "f_337609_"), "Lcom/mojang/datafixers/DataFixerBuilder$Result;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.datafixer.Schemas#field_38844
    [[maybe_unused]] static jint get_field_field_38844() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLENDING_VERSION", "field_38844", "field_38844", "f_216512_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.datafixer.Schemas#field_38844
    [[maybe_unused]] static void set_field_field_38844(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLENDING_VERSION", "field_38844", "field_38844", "f_216512_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getFixer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDataFixer", "method_15450", "getFixer", "m_14512_"), "()Lcom/mojang/datafixers/DataFixer;");
    }

    static jobject getFixer() {
       const auto clazz = self();
       const auto methodID = methodID_getFixer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createFixerUpper", "method_15471", "create", "m_274588_"), "()Lcom/mojang/datafixers/DataFixerBuilder$Result;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_optimize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "optimize", "method_60487", "optimize", "m_340166_"), "(Ljava/util/Set;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject optimize(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_optimize();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addFixers", "method_15451", "build", "m_14513_"), "(Lcom/mojang/datafixers/DataFixerBuilder;)V");
    }

    static void build(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_build();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_replacingRaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createRenamerNoNamespace", "method_57075", "replacingRaw", "m_322870_"), "(Ljava/util/Map;)Ljava/util/function/UnaryOperator;");
    }

    static jobject replacingRaw(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_replacingRaw();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_replacing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createRenamer", "method_30070", "replacing", "m_14524_"), "(Ljava/util/Map;)Ljava/util/function/UnaryOperator;");
    }

    static jobject replacing(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_replacing();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__replacing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createRenamer", "method_30068", "replacing", "m_14517_"), "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/function/UnaryOperator;");
    }

    static jobject _replacing(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__replacing();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_SCHEMAS_HPP