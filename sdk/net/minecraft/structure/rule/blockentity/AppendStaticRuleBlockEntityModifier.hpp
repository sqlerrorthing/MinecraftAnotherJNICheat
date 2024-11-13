// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_RULE_BLOCKENTITY_APPENDSTATICRULEBLOCKENTITYMODIFIER_HPP
#define NET_MINECRAFT_STRUCTURE_RULE_BLOCKENTITY_APPENDSTATICRULEBLOCKENTITYMODIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.rule.blockentity.AppendStaticRuleBlockEntityModifier
 * Remapped: eny
 */
namespace AppendStaticRuleBlockEntityModifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eny", "net/minecraft/world/level/levelgen/structure/templatesystem/rule/blockentity/AppendStatic", "net/minecraft/class_8245", "net/minecraft/structure/rule/blockentity/AppendStaticRuleBlockEntityModifier", "net/minecraft/src/C_276382_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.rule.blockentity.AppendStaticRuleBlockEntityModifier#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_43339", "CODEC", "f_276564_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.rule.blockentity.AppendStaticRuleBlockEntityModifier#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_43339", "CODEC", "f_276564_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.rule.blockentity.AppendStaticRuleBlockEntityModifier#nbt
    static jobject get_field_nbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tag", "field_43340", "nbt", "f_276635_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.rule.blockentity.AppendStaticRuleBlockEntityModifier#nbt
    static void set_field_nbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tag", "field_43340", "nbt", "f_276635_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_modifyBlockEntityNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_49892", "modifyBlockEntityNbt", "m_276854_"), "(Layw;Lub;)Lub;");
    }

    static jobject modifyBlockEntityNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_modifyBlockEntityNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_49891", "getType", "m_276855_"), "()Leoc;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_RULE_BLOCKENTITY_APPENDSTATICRULEBLOCKENTITYMODIFIER_HPP