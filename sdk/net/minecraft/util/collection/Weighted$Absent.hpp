// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_COLLECTION_WEIGHTED$ABSENT_HPP
#define NET_MINECRAFT_UTIL_COLLECTION_WEIGHTED$ABSENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.collection.Weighted$Absent
 * Remapped: bpd$a
 */
namespace Weighted$Absent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bpd$a", "net/minecraft/util/random/WeightedEntry$IntrusiveBase", "net/minecraft/class_6008$class_6009", "net/minecraft/util/collection/Weighted$Absent", "net/minecraft/src/C_141037_$C_141038_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.collection.Weighted$Absent#weight
    static jobject get_field_weight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "weight", "field_29931", "weight", "f_146293_"), "Lbpc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.Weighted$Absent#weight
    static void set_field_weight(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "weight", "field_29931", "weight", "f_146293_"), "Lbpc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getWeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getWeight", "method_34979", "getWeight", "m_142631_"), "()Lbpc;");
    }

    static jobject getWeight(const jobject& obj) {
                
       const auto methodID = methodID_getWeight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_COLLECTION_WEIGHTED$ABSENT_HPP