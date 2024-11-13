// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CARVER_CONFIGUREDCARVERS_HPP
#define NET_MINECRAFT_WORLD_GEN_CARVER_CONFIGUREDCARVERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.carver.ConfiguredCarvers
 * Remapped: qr
 */
namespace ConfiguredCarvers {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("qr", "net/minecraft/data/worldgen/Carvers", "net/minecraft/class_5463", "net/minecraft/world/gen/carver/ConfiguredCarvers", "net/minecraft/src/C_4862_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#CAVE
    [[maybe_unused]] static jobject get_field_CAVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CAVE", "field_33119", "CAVE", "f_126848_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#CAVE
    [[maybe_unused]] static void set_field_CAVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CAVE", "field_33119", "CAVE", "f_126848_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#CAVE_EXTRA_UNDERGROUND
    [[maybe_unused]] static jobject get_field_CAVE_EXTRA_UNDERGROUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CAVE_EXTRA_UNDERGROUND", "field_34968", "CAVE_EXTRA_UNDERGROUND", "f_194741_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#CAVE_EXTRA_UNDERGROUND
    [[maybe_unused]] static void set_field_CAVE_EXTRA_UNDERGROUND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CAVE_EXTRA_UNDERGROUND", "field_34968", "CAVE_EXTRA_UNDERGROUND", "f_194741_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#CANYON
    [[maybe_unused]] static jobject get_field_CANYON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CANYON", "field_33120", "CANYON", "f_126849_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#CANYON
    [[maybe_unused]] static void set_field_CANYON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CANYON", "field_33120", "CANYON", "f_126849_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#NETHER_CAVE
    [[maybe_unused]] static jobject get_field_NETHER_CAVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NETHER_CAVE", "field_25947", "NETHER_CAVE", "f_126853_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.ConfiguredCarvers#NETHER_CAVE
    [[maybe_unused]] static void set_field_NETHER_CAVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NETHER_CAVE", "field_25947", "NETHER_CAVE", "f_126853_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createKey", "method_30588", "register", "m_254992_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_46843", "bootstrap", "m_254873_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CARVER_CONFIGUREDCARVERS_HPP