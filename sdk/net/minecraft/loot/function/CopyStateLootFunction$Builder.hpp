// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_COPYSTATELOOTFUNCTION$BUILDER_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_COPYSTATELOOTFUNCTION$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.CopyStateLootFunction$Builder
 * Remapped: esq$a
 */
namespace CopyStateLootFunction$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("esq$a", "net/minecraft/world/level/storage/loot/functions/CopyBlockState$Builder", "net/minecraft/class_4488$class_4489", "net/minecraft/loot/function/CopyStateLootFunction$Builder", "net/minecraft/src/C_2885_$C_2887_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.function.CopyStateLootFunction$Builder#block
    static jobject get_field_block(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "block", "field_20451", "block", "f_80076_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.CopyStateLootFunction$Builder#block
    static void set_field_block(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "block", "field_20451", "block", "f_80076_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.CopyStateLootFunction$Builder#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "properties", "field_20452", "properties", "f_80077_"), "Lcom/google/common/collect/ImmutableSet$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.CopyStateLootFunction$Builder#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "properties", "field_20452", "properties", "f_80077_"), "Lcom/google/common/collect/ImmutableSet$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addProperty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copy", "method_21898", "addProperty", "m_80084_"), "(Lduf;)Lesq$a;");
    }

    static jobject addProperty(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addProperty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getThisBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThis", "method_21897", "getThisBuilder", "m_6477_"), "()Lesq$a;");
    }

    static jobject getThisBuilder(const jobject& obj) {
                
       const auto methodID = methodID_getThisBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_515", "build", "m_7453_"), "()Letf;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_COPYSTATELOOTFUNCTION$BUILDER_HPP