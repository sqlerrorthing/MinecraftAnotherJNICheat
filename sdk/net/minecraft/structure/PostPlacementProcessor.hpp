// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_POSTPLACEMENTPROCESSOR_HPP
#define NET_MINECRAFT_STRUCTURE_POSTPLACEMENTPROCESSOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.PostPlacementProcessor
 * Remapped: ejo
 */
namespace PostPlacementProcessor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ejo", "net/minecraft/world/level/levelgen/structure/PostPlacementProcessor", "net/minecraft/class_6621", "net/minecraft/structure/PostPlacementProcessor", "net/minecraft/src/C_183025_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.PostPlacementProcessor#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_34938", "EMPTY", "f_192427_"), "Lejo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.PostPlacementProcessor#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_34938", "EMPTY", "f_192427_"), "Lejo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_afterPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("afterPlace", "afterPlace", "afterPlace", "afterPlace", "m_226525_"), "(Ldds;Lddq;Lduz;Layw;Lejj;Ldcd;Lekg;)V");
    }

    static void afterPlace(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_afterPlace();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_POSTPLACEMENTPROCESSOR_HPP