// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_GENERATOROPTIONS_HPP
#define NET_MINECRAFT_WORLD_GEN_GENERATOROPTIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.GeneratorOptions
 * Remapped: dzw
 */
namespace GeneratorOptions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzw", "net/minecraft/world/level/levelgen/WorldOptions", "net/minecraft/class_5285", "net/minecraft/world/gen/GeneratorOptions", "net/minecraft/src/C_243453_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.GeneratorOptions#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24826", "CODEC", "f_244622_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.GeneratorOptions#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24826", "CODEC", "f_244622_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.GeneratorOptions#DEMO_OPTIONS
    [[maybe_unused]] static jobject get_field_DEMO_OPTIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEMO_OPTIONS", "field_40367", "DEMO_OPTIONS", "f_244225_"), "Ldzw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.GeneratorOptions#DEMO_OPTIONS
    [[maybe_unused]] static void set_field_DEMO_OPTIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEMO_OPTIONS", "field_40367", "DEMO_OPTIONS", "f_244225_"), "Ldzw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.GeneratorOptions#seed
    static jlong get_field_seed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "seed", "field_24526", "seed", "f_243816_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.GeneratorOptions#seed
    static void set_field_seed(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "seed", "field_24526", "seed", "f_243816_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.GeneratorOptions#generateStructures
    static jboolean get_field_generateStructures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "generateStructures", "field_24527", "generateStructures", "f_244001_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.GeneratorOptions#generateStructures
    static void set_field_generateStructures(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "generateStructures", "field_24527", "generateStructures", "f_244001_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.GeneratorOptions#bonusChest
    static jboolean get_field_bonusChest(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "generateBonusChest", "field_24528", "bonusChest", "f_244615_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.GeneratorOptions#bonusChest
    static void set_field_bonusChest(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "generateBonusChest", "field_24528", "bonusChest", "f_244615_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.GeneratorOptions#legacyCustomOptions
    static jobject get_field_legacyCustomOptions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "legacyCustomOptions", "field_24532", "legacyCustomOptions", "f_243984_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.GeneratorOptions#legacyCustomOptions
    static void set_field_legacyCustomOptions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "legacyCustomOptions", "field_24532", "legacyCustomOptions", "f_243984_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createRandom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "defaultWithRandomSeed", "method_45541", "createRandom", "m_247394_"), "()Ldzw;");
    }

    static jobject createRandom() {
       const auto clazz = self();
       const auto methodID = methodID_createRandom();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "seed", "method_28028", "getSeed", "m_245499_"), "()J");
    }

    static jlong getSeed(const jobject& obj) {
                
       const auto methodID = methodID_getSeed();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldGenerateStructures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "generateStructures", "method_28029", "shouldGenerateStructures", "m_247749_"), "()Z");
    }

    static jboolean shouldGenerateStructures(const jobject& obj) {
                
       const auto methodID = methodID_shouldGenerateStructures();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasBonusChest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "generateBonusChest", "method_28030", "hasBonusChest", "m_245100_"), "()Z");
    }

    static jboolean hasBonusChest(const jobject& obj) {
                
       const auto methodID = methodID_hasBonusChest();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isLegacyCustomizedType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isOldCustomizedWorld", "method_28035", "isLegacyCustomizedType", "m_247070_"), "()Z");
    }

    static jboolean isLegacyCustomizedType(const jobject& obj) {
                
       const auto methodID = methodID_isLegacyCustomizedType();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_withBonusChest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withBonusChest", "method_28036", "withBonusChest", "m_247325_"), "(Z)Ldzw;");
    }

    static jobject withBonusChest(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_withBonusChest();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withStructures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "withStructures", "method_45542", "withStructures", "m_247283_"), "(Z)Ldzw;");
    }

    static jobject withStructures(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_withStructures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withSeed", "method_28024", "withSeed", "m_261051_"), "(Ljava/util/OptionalLong;)Ldzw;");
    }

    static jobject withSeed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withSeed();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_parseSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parseSeed", "method_46720", "parseSeed", "m_261063_"), "(Ljava/lang/String;)Ljava/util/OptionalLong;");
    }

    static jobject parseSeed(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_parseSeed();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getRandomSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "randomSeed", "method_46721", "getRandomSeed", "m_255240_"), "()J");
    }

    static jlong getRandomSeed() {
       const auto clazz = self();
       const auto methodID = methodID_getRandomSeed();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_GENERATOROPTIONS_HPP