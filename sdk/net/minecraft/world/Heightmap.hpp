// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_HEIGHTMAP_HPP
#define NET_MINECRAFT_WORLD_HEIGHTMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.Heightmap
 * Remapped: dyy
 */
namespace Heightmap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyy", "net/minecraft/world/level/levelgen/Heightmap", "net/minecraft/class_2902", "net/minecraft/world/Heightmap", "net/minecraft/src/C_2190_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.Heightmap#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33770", "LOGGER", "f_158363_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.Heightmap#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33770", "LOGGER", "f_158363_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.world.Heightmap#NOT_AIR
    [[maybe_unused]] static jobject get_field_NOT_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NOT_AIR", "field_16744", "NOT_AIR", "f_64230_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.Heightmap#NOT_AIR
    [[maybe_unused]] static void set_field_NOT_AIR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NOT_AIR", "field_16744", "NOT_AIR", "f_64230_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.world.Heightmap#SUFFOCATES
    [[maybe_unused]] static jobject get_field_SUFFOCATES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MATERIAL_MOTION_BLOCKING", "field_16745", "SUFFOCATES", "f_64231_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.Heightmap#SUFFOCATES
    [[maybe_unused]] static void set_field_SUFFOCATES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MATERIAL_MOTION_BLOCKING", "field_16745", "SUFFOCATES", "f_64231_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.Heightmap#storage
    static jobject get_field_storage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "data", "field_13192", "storage", "f_64232_"), "Laxc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.Heightmap#storage
    static void set_field_storage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "data", "field_13192", "storage", "f_64232_"), "Laxc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.Heightmap#blockPredicate
    static jobject get_field_blockPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isOpaque", "field_13193", "blockPredicate", "f_64233_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.Heightmap#blockPredicate
    static void set_field_blockPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isOpaque", "field_13193", "blockPredicate", "f_64233_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.Heightmap#chunk
    static jobject get_field_chunk(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "chunk", "field_13191", "chunk", "f_64234_"), "Lduy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.Heightmap#chunk
    static void set_field_chunk(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "chunk", "field_13191", "chunk", "f_64234_"), "Lduy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_populateHeightmaps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "primeHeightmaps", "method_16684", "populateHeightmaps", "m_64256_"), "(Lduy;Ljava/util/Set;)V");
    }

    static void populateHeightmaps(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_populateHeightmaps();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_trackUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_12597", "trackUpdate", "m_64249_"), "(IIILdtc;)Z");
    }

    static jboolean trackUpdate(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_trackUpdate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFirstAvailable", "method_12603", "get", "m_64242_"), "(II)I");
    }

    static jint get(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_method_35334() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getHighestTaken", "method_35334", "method_35334", "m_158368_"), "(II)I");
    }

    static jint method_35334(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_method_35334();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFirstAvailable", "method_12601", "get", "m_64240_"), "(I)I");
    }

    static jint _get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setHeight", "method_12602", "set", "m_64245_"), "(III)V");
    }

    static void set(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRawData", "method_12600", "setTo", "m_158364_"), "(Lduy;Ldyy$a;[J)V");
    }

    static void setTo(const jobject& obj, const jobject& arg0, const jobject& arg1, const jarray& arg2, const jlong& arg3) {
                
       const auto methodID = methodID_setTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_asLongArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRawData", "method_12598", "asLongArray", "m_64239_"), "()[J");
    }

    static jlong asLongArray(const jobject& obj) {
                
       const auto methodID = methodID_asLongArray();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_toIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getIndex", "method_12595", "toIndex", "m_64265_"), "(II)I");
    }

    static jint toIndex(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_toIndex();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_HEIGHTMAP_HPP