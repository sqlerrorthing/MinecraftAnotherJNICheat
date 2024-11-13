// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_PROTOCHUNKTICKLISTFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_PROTOCHUNKTICKLISTFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ProtoChunkTickListFix
 * Remapped: bbu
 */
namespace ProtoChunkTickListFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bbu", "net/minecraft/util/datafix/fixes/ChunkProtoTickListFix", "net/minecraft/class_6740", "net/minecraft/datafixer/fix/ProtoChunkTickListFix", "net/minecraft/src/C_182795_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.ProtoChunkTickListFix#CHUNK_EDGE_LENGTH
    [[maybe_unused]] static jint get_field_CHUNK_EDGE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SECTION_WIDTH", "field_35446", "CHUNK_EDGE_LENGTH", "f_184984_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ProtoChunkTickListFix#CHUNK_EDGE_LENGTH
    [[maybe_unused]] static void set_field_CHUNK_EDGE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SECTION_WIDTH", "field_35446", "CHUNK_EDGE_LENGTH", "f_184984_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ProtoChunkTickListFix#ALWAYS_WATERLOGGED_BLOCK_IDS
    [[maybe_unused]] static jobject get_field_ALWAYS_WATERLOGGED_BLOCK_IDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ALWAYS_WATERLOGGED", "field_35447", "ALWAYS_WATERLOGGED_BLOCK_IDS", "f_184985_"), "Lcom/google/common/collect/ImmutableSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ProtoChunkTickListFix#ALWAYS_WATERLOGGED_BLOCK_IDS
    [[maybe_unused]] static void set_field_ALWAYS_WATERLOGGED_BLOCK_IDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ALWAYS_WATERLOGGED", "field_35447", "ALWAYS_WATERLOGGED_BLOCK_IDS", "f_184985_"), "Lcom/google/common/collect/ImmutableSet;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixToBeTicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeTickList", "method_39254", "fixToBeTicked", "m_185036_"), "(Lcom/mojang/serialization/Dynamic;Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;BIILjava/lang/String;Ljava/util/function/Function;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixToBeTicked(const jobject& obj, const jobject& arg0, const jobject& arg1, const jbyte& arg2, const jint& arg3, const jint& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_fixToBeTicked();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getBlockIdToBeTicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlock", "method_39252", "getBlockIdToBeTicked", "m_185031_"), "(Lcom/mojang/serialization/Dynamic;)Ljava/lang/String;");
    }

    static jobject getBlockIdToBeTicked(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getBlockIdToBeTicked();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFluidBlockIdToBeTicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getLiquid", "method_39259", "getFluidBlockIdToBeTicked", "m_185068_"), "(Lcom/mojang/serialization/Dynamic;)Ljava/lang/String;");
    }

    static jobject getFluidBlockIdToBeTicked(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getFluidBlockIdToBeTicked();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createTileTickObject() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createTick", "method_39255", "createTileTickObject", "m_185044_"), "(Lcom/mojang/serialization/Dynamic;Ljava/util/function/Supplier;IIIILjava/util/function/Function;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject createTileTickObject(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_createTileTickObject();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_PROTOCHUNKTICKLISTFIX_HPP