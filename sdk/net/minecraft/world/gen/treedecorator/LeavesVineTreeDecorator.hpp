// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_LEAVESVINETREEDECORATOR_HPP
#define NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_LEAVESVINETREEDECORATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.treedecorator.LeavesVineTreeDecorator
 * Remapped: egz
 */
namespace LeavesVineTreeDecorator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("egz", "net/minecraft/world/level/levelgen/feature/treedecorators/LeaveVineDecorator", "net/minecraft/class_4661", "net/minecraft/world/gen/treedecorator/LeavesVineTreeDecorator", "net/minecraft/src/C_2415_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.treedecorator.LeavesVineTreeDecorator#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24960", "CODEC", "f_69996_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.treedecorator.LeavesVineTreeDecorator#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24960", "CODEC", "f_69996_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.treedecorator.LeavesVineTreeDecorator#probability
    static jfloat get_field_probability(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "probability", "field_38790", "probability", "f_226029_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.treedecorator.LeavesVineTreeDecorator#probability
    static void set_field_probability(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "probability", "field_38790", "probability", "f_226029_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28893", "getType", "m_6663_"), "()Lehb;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_23469", "generate", "m_214187_"), "(Leha$a;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_placeVines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addHangingVine", "method_23467", "placeVines", "m_226040_"), "(Ljd;Ldtt;Leha$a;)V");
    }

    static void placeVines(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_placeVines();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_LEAVESVINETREEDECORATOR_HPP