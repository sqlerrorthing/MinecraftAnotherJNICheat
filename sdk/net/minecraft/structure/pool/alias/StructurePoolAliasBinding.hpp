// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_POOL_ALIAS_STRUCTUREPOOLALIASBINDING_HPP
#define NET_MINECRAFT_STRUCTURE_POOL_ALIAS_STRUCTUREPOOLALIASBINDING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.pool.alias.StructurePoolAliasBinding
 * Remapped: eld
 */
namespace StructurePoolAliasBinding {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eld", "net/minecraft/world/level/levelgen/structure/pools/alias/PoolAliasBinding", "net/minecraft/class_8889", "net/minecraft/structure/pool/alias/StructurePoolAliasBinding", "net/minecraft/src/C_302067_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.pool.alias.StructurePoolAliasBinding#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_46825", "CODEC", "f_303072_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.pool.alias.StructurePoolAliasBinding#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_46825", "CODEC", "f_303072_"), "Lcom/mojang/serialization/Codec;");
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
    
    static jmethodID methodID_direct() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "direct", "method_54508", "direct", "m_305746_"), "(Ljava/lang/String;Ljava/lang/String;)Lelc;");
    }

    static jobject direct(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_direct();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__direct() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "direct", "method_54503", "direct", "m_304861_"), "(Lakq;Lakq;)Lelc;");
    }

    static jobject _direct(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__direct();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_random() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "random", "method_54507", "random", "m_305102_"), "(Ljava/lang/String;Lbpb;)Lelg;");
    }

    static jobject random(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_random();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__random() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "random", "method_54504", "random", "m_308009_"), "(Lakq;Lbpb;)Lelg;");
    }

    static jobject _random(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__random();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_randomGroup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "randomGroup", "method_54506", "randomGroup", "m_307343_"), "(Lbpb;)Lelh;");
    }

    static jobject randomGroup(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_randomGroup();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "codec", "method_54502", "getCodec", "m_304964_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_POOL_ALIAS_STRUCTUREPOOLALIASBINDING_HPP