// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_RENAMEBLOCKENTITYFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_RENAMEBLOCKENTITYFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.RenameBlockEntityFix
 * Remapped: baz
 */
namespace RenameBlockEntityFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("baz", "net/minecraft/util/datafix/fixes/BlockEntityRenameFix", "net/minecraft/class_8220", "net/minecraft/datafixer/fix/RenameBlockEntityFix", "net/minecraft/src/C_276399_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.RenameBlockEntityFix#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_43174", "name", "f_276471_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.RenameBlockEntityFix#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_43174", "name", "f_276471_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.RenameBlockEntityFix#renamer
    static jobject get_field_renamer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "nameChangeLookup", "field_43175", "renamer", "f_276461_"), "Ljava/util/function/UnaryOperator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.RenameBlockEntityFix#renamer
    static void set_field_renamer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "nameChangeLookup", "field_43175", "renamer", "f_276461_"), "Ljava/util/function/UnaryOperator;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_49756", "create", "m_276995_"), "(Lcom/mojang/datafixers/schemas/Schema;Ljava/lang/String;Ljava/util/function/UnaryOperator;)Lcom/mojang/datafixers/DataFix;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_RENAMEBLOCKENTITYFIX_HPP