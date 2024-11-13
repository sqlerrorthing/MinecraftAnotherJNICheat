// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_SHAPE_FRACTIONALDOUBLELIST_HPP
#define NET_MINECRAFT_UTIL_SHAPE_FRACTIONALDOUBLELIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.shape.FractionalDoubleList
 * Remapped: exi
 */
namespace FractionalDoubleList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("exi", "net/minecraft/world/phys/shapes/CubePointRange", "net/minecraft/class_246", "net/minecraft/util/shape/FractionalDoubleList", "net/minecraft/src/C_3052_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.shape.FractionalDoubleList#sectionCount
    static jint get_field_sectionCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parts", "field_1365", "sectionCount", "f_82758_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.shape.FractionalDoubleList#sectionCount
    static void set_field_sectionCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parts", "field_1365", "sectionCount", "f_82758_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getDouble() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getDouble", "getDouble", "getDouble", "getDouble", "getDouble"), "(I)D");
    }

    static jdouble getDouble(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getDouble();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("size", "size", "", "", "size"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_SHAPE_FRACTIONALDOUBLELIST_HPP