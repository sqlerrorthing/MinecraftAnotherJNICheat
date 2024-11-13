// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_EMPTYCHUNK_HPP
#define NET_MINECRAFT_WORLD_CHUNK_EMPTYCHUNK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.EmptyChunk
 * Remapped: dve
 */
namespace EmptyChunk {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dve", "net/minecraft/world/level/chunk/EmptyLevelChunk", "net/minecraft/class_2812", "net/minecraft/world/chunk/EmptyChunk", "net/minecraft/src/C_2132_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.chunk.EmptyChunk#biomeEntry
    static jobject get_field_biomeEntry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "biome", "field_36407", "biomeEntry", "f_204420_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.EmptyChunk#biomeEntry
    static void set_field_biomeEntry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "biome", "field_36407", "biomeEntry", "f_204420_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getBlockState", "method_8320", "getBlockState", "m_8055_"), "(Ljd;)Ldtc;");
    }

    static jobject getBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlockState", "method_12010", "setBlockState", "m_6978_"), "(Ljd;Ldtc;Z)Ldtc;");
    }

    static jobject setBlockState(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_setBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getFluidState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "getFluidState", "method_8316", "getFluidState", "m_6425_"), "(Ljd;)Lepe;");
    }

    static jobject getFluidState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFluidState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLuminance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getLightEmission", "method_8317", "getLuminance", "m_7146_"), "(Ljd;)I");
    }

    static jint getLuminance(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLuminance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockEntity", "method_12201", "getBlockEntity", "m_5685_"), "(Ljd;Ldvi$b;)Ldqh;");
    }

    static jobject getBlockEntity(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAndRegisterBlockEntity", "method_12216", "addBlockEntity", "m_142170_"), "(Ldqh;)V");
    }

    static void addBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addBlockEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlockEntity", "method_12007", "setBlockEntity", "m_142169_"), "(Ldqh;)V");
    }

    static void setBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBlockEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_removeBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "removeBlockEntity", "method_12041", "removeBlockEntity", "m_8114_"), "(Ljd;)V");
    }

    static void removeBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeBlockEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "isEmpty", "method_12223", "isEmpty", "m_6430_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_areSectionsEmptyBetween() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isYSpaceEmpty", "method_12228", "areSectionsEmptyBetween", "m_5566_"), "(II)Z");
    }

    static jboolean areSectionsEmptyBetween(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_areSectionsEmptyBetween();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isSectionEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isSectionEmpty", "method_60791", "isSectionEmpty", "m_339293_"), "(I)Z");
    }

    static jboolean isSectionEmpty(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_isSectionEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLevelType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "getFullStatus", "method_12225", "getLevelType", "m_287138_"), "()Laql;");
    }

    static jobject getLevelType(const jobject& obj) {
                
       const auto methodID = methodID_getLevelType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiomeForNoiseGen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getNoiseBiome", "getNoiseBiome", "method_16359", "getBiomeForNoiseGen", "m_203495_"), "(III)Ljm;");
    }

    static jobject getBiomeForNoiseGen(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getBiomeForNoiseGen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_EMPTYCHUNK_HPP