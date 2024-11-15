// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_ENTRY_GROUPENTRY$BUILDER_HPP
#define NET_MINECRAFT_LOOT_ENTRY_GROUPENTRY$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.entry.GroupEntry$Builder
 * Remapped: esd$a
 */
namespace GroupEntry$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("esd$a", "net/minecraft/world/level/storage/loot/entries/EntryGroup$Builder", "net/minecraft/class_93$class_6152", "net/minecraft/loot/entry/GroupEntry$Builder", "net/minecraft/src/C_2850_$C_141462_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.entry.GroupEntry$Builder#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_31846", "entries", "f_165139_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.entry.GroupEntry$Builder#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_31846", "entries", "f_165139_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getThisBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThis", "method_35512", "getThisBuilder", "m_6897_"), "()Lesd$a;");
    }

    static jobject getThisBuilder(const jobject& obj) {
                
       const auto methodID = methodID_getThisBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_sequenceEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "append", "method_35513", "sequenceEntry", "m_142719_"), "(Lesh$a;)Lesd$a;");
    }

    static jobject sequenceEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sequenceEntry();
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

#endif // NET_MINECRAFT_LOOT_ENTRY_GROUPENTRY$BUILDER_HPP