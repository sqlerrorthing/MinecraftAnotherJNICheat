// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_RANDOM_CHUNKRANDOM$RANDOMPROVIDER_HPP
#define NET_MINECRAFT_UTIL_MATH_RANDOM_CHUNKRANDOM$RANDOMPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.random.ChunkRandom$RandomProvider
 * Remapped: dzx$a
 */
namespace ChunkRandom$RandomProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzx$a", "net/minecraft/world/level/levelgen/WorldgenRandom$Algorithm", "net/minecraft/class_2919$class_6675", "net/minecraft/util/math/random/ChunkRandom$RandomProvider", "net/minecraft/src/C_2202_$C_182951_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.math.random.ChunkRandom$RandomProvider#LEGACY
    [[maybe_unused]] static jobject get_field_LEGACY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LEGACY", "field_35142", "LEGACY", "LEGACY"), "Ldzx$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.random.ChunkRandom$RandomProvider#LEGACY
    [[maybe_unused]] static void set_field_LEGACY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LEGACY", "field_35142", "LEGACY", "LEGACY"), "Ldzx$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.random.ChunkRandom$RandomProvider#XOROSHIRO
    [[maybe_unused]] static jobject get_field_XOROSHIRO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "XOROSHIRO", "field_35143", "XOROSHIRO", "XOROSHIRO"), "Ldzx$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.random.ChunkRandom$RandomProvider#XOROSHIRO
    [[maybe_unused]] static void set_field_XOROSHIRO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "XOROSHIRO", "field_35143", "XOROSHIRO", "XOROSHIRO"), "Ldzx$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.random.ChunkRandom$RandomProvider#provider
    static jobject get_field_provider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "constructor", "field_35144", "provider", "f_190076_"), "Ljava/util/function/LongFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.random.ChunkRandom$RandomProvider#provider
    static void set_field_provider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "constructor", "field_35144", "provider", "f_190076_"), "Ljava/util/function/LongFunction;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldzx$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldzx$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newInstance", "method_39006", "create", "m_224687_"), "(J)Layw;");
    }

    static jobject create(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_RANDOM_CHUNKRANDOM$RANDOMPROVIDER_HPP