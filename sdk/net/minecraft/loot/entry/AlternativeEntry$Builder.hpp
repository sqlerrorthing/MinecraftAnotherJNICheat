// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_ENTRY_ALTERNATIVEENTRY$BUILDER_HPP
#define NET_MINECRAFT_LOOT_ENTRY_ALTERNATIVEENTRY$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.entry.AlternativeEntry$Builder
 * Remapped: ery$a
 */
namespace AlternativeEntry$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ery$a", "net/minecraft/world/level/storage/loot/entries/AlternativesEntry$Builder", "net/minecraft/class_65$class_66", "net/minecraft/loot/entry/AlternativeEntry$Builder", "net/minecraft/src/C_2838_$C_2839_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.entry.AlternativeEntry$Builder#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_979", "children", "f_79397_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.entry.AlternativeEntry$Builder#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_979", "children", "f_79397_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getThisBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThis", "method_388", "getThisBuilder", "m_6897_"), "()Lery$a;");
    }

    static jobject getThisBuilder(const jobject& obj) {
                
       const auto methodID = methodID_getThisBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_alternatively() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "otherwise", "method_417", "alternatively", "m_7170_"), "(Lesh$a;)Lery$a;");
    }

    static jobject alternatively(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_alternatively();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_419", "build", "m_7512_"), "()Lesh;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_ENTRY_ALTERNATIVEENTRY$BUILDER_HPP