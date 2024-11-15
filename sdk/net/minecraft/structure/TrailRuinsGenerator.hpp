// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_TRAILRUINSGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_TRAILRUINSGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.TrailRuinsGenerator
 * Remapped: rg
 */
namespace TrailRuinsGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("rg", "net/minecraft/data/worldgen/TrailRuinsStructurePools", "net/minecraft/class_8256", "net/minecraft/structure/TrailRuinsGenerator", "net/minecraft/src/C_276389_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.TrailRuinsGenerator#TOWER
    [[maybe_unused]] static jobject get_field_TOWER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "START", "field_43386", "TOWER", "f_276659_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.TrailRuinsGenerator#TOWER
    [[maybe_unused]] static void set_field_TOWER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "START", "field_43386", "TOWER", "f_276659_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_49993", "bootstrap", "m_276974_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_TRAILRUINSGENERATOR_HPP