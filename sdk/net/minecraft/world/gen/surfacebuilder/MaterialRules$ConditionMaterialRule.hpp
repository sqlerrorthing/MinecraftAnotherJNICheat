// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$CONDITIONMATERIALRULE_HPP
#define NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$CONDITIONMATERIALRULE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.surfacebuilder.MaterialRules$ConditionMaterialRule
 * Remapped: dzp$x
 */
namespace MaterialRules$ConditionMaterialRule {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzp$x", "net/minecraft/world/level/levelgen/SurfaceRules$TestRuleSource", "net/minecraft/class_6686$class_6718", "net/minecraft/world/gen/surfacebuilder/MaterialRules$ConditionMaterialRule", "net/minecraft/src/C_182910_$C_182943_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.surfacebuilder.MaterialRules$ConditionMaterialRule#ifTrue
    static jobject get_field_ifTrue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "ifTrue", "comp_215", "ifTrue", "f_189808_"), "Ldzp$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.surfacebuilder.MaterialRules$ConditionMaterialRule#ifTrue
    static void set_field_ifTrue(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "ifTrue", "comp_215", "ifTrue", "f_189808_"), "Ldzp$f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.surfacebuilder.MaterialRules$ConditionMaterialRule#thenRun
    static jobject get_field_thenRun(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "thenRun", "comp_216", "thenRun", "f_189809_"), "Ldzp$o;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.surfacebuilder.MaterialRules$ConditionMaterialRule#thenRun
    static void set_field_thenRun(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "thenRun", "comp_216", "thenRun", "f_189809_"), "Ldzp$o;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.world.gen.surfacebuilder.MaterialRules$ConditionMaterialRule#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_35263", "CODEC", "f_189810_"), "Layh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.surfacebuilder.MaterialRules$ConditionMaterialRule#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_35263", "CODEC", "f_189810_"), "Layh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_39061", "codec", "m_213795_"), "()Layh;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_39095", "apply", "apply"), "(Ldzp$g;)Ldzp$u;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__ifTrue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "ifTrue", "comp_215", "ifTrue", "f_189808_"), "()Ldzp$f;");
    }

    static jobject _ifTrue(const jobject& obj) {
                
       const auto methodID = methodID__ifTrue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__thenRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "thenRun", "comp_216", "thenRun", "f_189809_"), "()Ldzp$o;");
    }

    static jobject _thenRun(const jobject& obj) {
                
       const auto methodID = methodID__thenRun();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_SURFACEBUILDER_MATERIALRULES$CONDITIONMATERIALRULE_HPP