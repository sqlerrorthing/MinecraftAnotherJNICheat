// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_CONDITIONALLOOTFUNCTION$JOINER_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_CONDITIONALLOOTFUNCTION$JOINER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.ConditionalLootFunction$Joiner
 * Remapped: ete$b
 */
namespace ConditionalLootFunction$Joiner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ete$b", "net/minecraft/world/level/storage/loot/functions/LootItemConditionalFunction$DummyBuilder", "net/minecraft/class_120$class_122", "net/minecraft/loot/function/ConditionalLootFunction$Joiner", "net/minecraft/src/C_2924_$C_2926_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.function.ConditionalLootFunction$Joiner#joiner
    static jobject get_field_joiner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "constructor", "field_1050", "joiner", "f_80700_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ConditionalLootFunction$Joiner#joiner
    static void set_field_joiner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "constructor", "field_1050", "joiner", "f_80700_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getThisBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThis", "method_527", "getThisBuilder", "m_6477_"), "()Lete$b;");
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

#endif // NET_MINECRAFT_LOOT_FUNCTION_CONDITIONALLOOTFUNCTION$JOINER_HPP