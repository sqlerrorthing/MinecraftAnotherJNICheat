// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_POOL_ALIAS_RANDOMGROUPSTRUCTUREPOOLALIASBINDING_HPP
#define NET_MINECRAFT_STRUCTURE_POOL_ALIAS_RANDOMGROUPSTRUCTUREPOOLALIASBINDING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.pool.alias.RandomGroupStructurePoolAliasBinding
 * Remapped: elh
 */
namespace RandomGroupStructurePoolAliasBinding {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elh", "net/minecraft/world/level/levelgen/structure/pools/alias/RandomGroup", "net/minecraft/class_8893", "net/minecraft/structure/pool/alias/RandomGroupStructurePoolAliasBinding", "net/minecraft/src/C_302150_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.structure.pool.alias.RandomGroupStructurePoolAliasBinding#groups
    static jobject get_field_groups(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "groups", "comp_2007", "groups", "f_302986_"), "Lbpb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.alias.RandomGroupStructurePoolAliasBinding#groups
    static void set_field_groups(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "groups", "comp_2007", "groups", "f_302986_"), "Lbpb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.pool.alias.RandomGroupStructurePoolAliasBinding#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46828", "CODEC", "f_302191_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.pool.alias.RandomGroupStructurePoolAliasBinding#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46828", "CODEC", "f_302191_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_forEach() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "forEachResolved", "method_54500", "forEach", "m_305333_"), "(Layw;Ljava/util/function/BiConsumer;)V");
    }

    static void forEach(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_forEach();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_streamTargets() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "allTargets", "method_54499", "streamTargets", "m_304920_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamTargets(const jobject& obj) {
                
       const auto methodID = methodID_streamTargets();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "codec", "method_54502", "getCodec", "m_304964_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__groups() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "groups", "comp_2007", "groups", "f_302986_"), "()Lbpb;");
    }

    static jobject _groups(const jobject& obj) {
                
       const auto methodID = methodID__groups();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_POOL_ALIAS_RANDOMGROUPSTRUCTUREPOOLALIASBINDING_HPP