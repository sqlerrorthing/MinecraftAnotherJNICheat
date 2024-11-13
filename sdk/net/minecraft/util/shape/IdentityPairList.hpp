// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_SHAPE_IDENTITYPAIRLIST_HPP
#define NET_MINECRAFT_UTIL_SHAPE_IDENTITYPAIRLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.shape.IdentityPairList
 * Remapped: exn
 */
namespace IdentityPairList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("exn", "net/minecraft/world/phys/shapes/IdenticalMerger", "net/minecraft/class_250", "net/minecraft/util/shape/IdentityPairList", "net/minecraft/src/C_3060_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.shape.IdentityPairList#merged
    static jobject get_field_merged(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "coords", "field_1371", "merged", "f_82901_"), "Lit/unimi/dsi/fastutil/doubles/DoubleList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.shape.IdentityPairList#merged
    static void set_field_merged(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "coords", "field_1371", "merged", "f_82901_"), "Lit/unimi/dsi/fastutil/doubles/DoubleList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_forEachPair() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "forMergedIndexes", "method_1065", "forEachPair", "m_6200_"), "(Lexo$a;)Z");
    }

    static jboolean forEachPair(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachPair();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("size", "size", "", "", "size"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPairs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getList", "method_1066", "getPairs", "m_6241_"), "()Lit/unimi/dsi/fastutil/doubles/DoubleList;");
    }

    static jobject getPairs(const jobject& obj) {
                
       const auto methodID = methodID_getPairs();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_SHAPE_IDENTITYPAIRLIST_HPP