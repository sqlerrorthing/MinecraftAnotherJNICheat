// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_POOL_ALIAS_STRUCTUREPOOLALIASLOOKUP_HPP
#define NET_MINECRAFT_STRUCTURE_POOL_ALIAS_STRUCTUREPOOLALIASLOOKUP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.pool.alias.StructurePoolAliasLookup
 * Remapped: elf
 */
namespace StructurePoolAliasLookup {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elf", "net/minecraft/world/level/levelgen/structure/pools/alias/PoolAliasLookup", "net/minecraft/class_8891", "net/minecraft/structure/pool/alias/StructurePoolAliasLookup", "net/minecraft/src/C_302046_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.pool.alias.StructurePoolAliasLookup#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_46826", "EMPTY", "f_303598_"), "Lelf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.pool.alias.StructurePoolAliasLookup#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_46826", "EMPTY", "f_303598_"), "Lelf;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_lookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("lookup", "lookup", "lookup", "lookup", "m_307301_"), "(Lakq;)Lakq;");
    }

    static jobject lookup(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_lookup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("create", "create", "create", "create", "m_307806_"), "(Ljava/util/List;Ljd;J)Lelf;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jlong& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_POOL_ALIAS_STRUCTUREPOOLALIASLOOKUP_HPP