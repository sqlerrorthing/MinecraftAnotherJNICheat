// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_CHUNKTOPROTOCHUNKFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_CHUNKTOPROTOCHUNKFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ChunkToProtoChunkFix
 * Remapped: bbz
 */
namespace ChunkToProtoChunkFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bbz", "net/minecraft/util/datafix/fixes/ChunkToProtochunkFix", "net/minecraft/class_3591", "net/minecraft/datafixer/fix/ChunkToProtoChunkFix", "net/minecraft/src/C_253_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkToProtoChunkFix#field_29881
    [[maybe_unused]] static jint get_field_field_29881() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NUM_SECTIONS", "field_29881", "field_29881", "f_145239_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkToProtoChunkFix#field_29881
    [[maybe_unused]] static void set_field_field_29881(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NUM_SECTIONS", "field_29881", "field_29881", "f_145239_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixChunkData", "method_39943", "fixLevel", "m_199855_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixLevel(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixLevel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "repackBiomes", "method_39951", "fixBiomes", "m_199879_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixBiomes(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixBiomes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixTileTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "repackTicks", "method_39952", "fixTileTicks", "m_199881_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixTileTicks(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixTileTicks();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_packChunkSectionPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "packOffsetCoordinates", "method_15675", "packChunkSectionPos", "m_15290_"), "(III)S");
    }

    static jshort packChunkSectionPos(const jint& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_packChunkSectionPos();
       return MinecraftSDK::env->CallStaticShortMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_CHUNKTOPROTOCHUNKFIX_HPP