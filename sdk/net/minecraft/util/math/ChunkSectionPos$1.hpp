// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_CHUNKSECTIONPOS$1_HPP
#define NET_MINECRAFT_UTIL_MATH_CHUNKSECTIONPOS$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.ChunkSectionPos$1
 * Remapped: kf$1
 */
namespace ChunkSectionPos$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kf$1", "net/minecraft/core/SectionPos$1", "net/minecraft/class_4076$1", "net/minecraft/util/math/ChunkSectionPos$1", "net/minecraft/src/C_4710_$C_4711_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.math.ChunkSectionPos$1#iterator
    static jobject get_field_iterator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cursor", "field_19263", "iterator", "f_123254_"), "Ljf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.math.ChunkSectionPos$1#iterator
    static void set_field_iterator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cursor", "field_19263", "iterator", "f_123254_"), "Ljf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tryAdvance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("tryAdvance", "tryAdvance", "tryAdvance", "tryAdvance", "tryAdvance"), "(Ljava/util/function/Consumer;)Z");
    }

    static jboolean tryAdvance(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryAdvance();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_CHUNKSECTIONPOS$1_HPP