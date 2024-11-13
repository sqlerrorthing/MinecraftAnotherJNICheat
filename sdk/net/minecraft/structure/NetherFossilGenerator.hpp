// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_NETHERFOSSILGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_NETHERFOSSILGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.NetherFossilGenerator
 * Remapped: elz
 */
namespace NetherFossilGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elz", "net/minecraft/world/level/levelgen/structure/structures/NetherFossilPieces", "net/minecraft/class_4787", "net/minecraft/structure/NetherFossilGenerator", "net/minecraft/src/C_213227_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.structure.NetherFossilGenerator#FOSSILS
    [[maybe_unused]] static jobject get_field_FOSSILS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FOSSILS", "field_22197", "FOSSILS", "f_228531_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.NetherFossilGenerator#FOSSILS
    [[maybe_unused]] static void set_field_FOSSILS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FOSSILS", "field_22197", "FOSSILS", "f_228531_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_addPieces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addPieces", "method_24453", "addPieces", "m_228534_"), "(Lenu;Lejw;Layw;Ljd;)V");
    }

    static void addPieces(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_addPieces();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_NETHERFOSSILGENERATOR_HPP