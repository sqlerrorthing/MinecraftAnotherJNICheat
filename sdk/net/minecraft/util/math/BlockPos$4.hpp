// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_BLOCKPOS$4_HPP
#define NET_MINECRAFT_UTIL_MATH_BLOCKPOS$4_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.BlockPos$4
 * Remapped: jd$4
 */
namespace BlockPos$4 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jd$4", "net/minecraft/core/BlockPos$4", "net/minecraft/class_2338$4", "net/minecraft/util/math/BlockPos$4", "net/minecraft/src/C_4675_$C_4679_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.math.BlockPos$4#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "cursor", "field_48434", "pos", "f_122106_"), "Ljd$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.BlockPos$4#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "cursor", "field_48434", "pos", "f_122106_"), "Ljd$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.BlockPos$4#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "index", "field_48435", "index", "f_315569_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.BlockPos$4#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "index", "field_48435", "index", "f_315569_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_computeNext() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "computeNext", "method_30515", "computeNext", "computeNext"), "()Ljd;");
    }

    static jobject computeNext(const jobject& obj) {
                
       const auto methodID = methodID_computeNext();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_BLOCKPOS$4_HPP