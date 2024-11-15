// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_BITSTORAGEALIGNFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_BITSTORAGEALIGNFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.BitStorageAlignFix
 * Remapped: baq
 */
namespace BitStorageAlignFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("baq", "net/minecraft/util/datafix/fixes/BitStorageAlignFix", "net/minecraft/class_5196", "net/minecraft/datafixer/fix/BitStorageAlignFix", "net/minecraft/src/C_222_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#ELEMENT_BIT_SHIFT
    [[maybe_unused]] static jint get_field_ELEMENT_BIT_SHIFT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BIT_TO_LONG_SHIFT", "field_29863", "ELEMENT_BIT_SHIFT", "f_145092_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#ELEMENT_BIT_SHIFT
    [[maybe_unused]] static void set_field_ELEMENT_BIT_SHIFT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BIT_TO_LONG_SHIFT", "field_29863", "ELEMENT_BIT_SHIFT", "f_145092_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#CHUNK_WIDTH
    [[maybe_unused]] static jint get_field_CHUNK_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SECTION_WIDTH", "field_29864", "CHUNK_WIDTH", "f_145093_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#CHUNK_WIDTH
    [[maybe_unused]] static void set_field_CHUNK_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SECTION_WIDTH", "field_29864", "CHUNK_WIDTH", "f_145093_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#CHUNK_LENGTH
    [[maybe_unused]] static jint get_field_CHUNK_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SECTION_HEIGHT", "field_29865", "CHUNK_LENGTH", "f_145094_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#CHUNK_LENGTH
    [[maybe_unused]] static void set_field_CHUNK_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SECTION_HEIGHT", "field_29865", "CHUNK_LENGTH", "f_145094_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#MAX_BLOCK_STATE_ID
    [[maybe_unused]] static jint get_field_MAX_BLOCK_STATE_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SECTION_SIZE", "field_29866", "MAX_BLOCK_STATE_ID", "f_145095_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#MAX_BLOCK_STATE_ID
    [[maybe_unused]] static void set_field_MAX_BLOCK_STATE_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SECTION_SIZE", "field_29866", "MAX_BLOCK_STATE_ID", "f_145095_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#HEIGHT_VALUE_BITS
    [[maybe_unused]] static jint get_field_HEIGHT_VALUE_BITS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "HEIGHTMAP_BITS", "field_29867", "HEIGHT_VALUE_BITS", "f_145096_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#HEIGHT_VALUE_BITS
    [[maybe_unused]] static void set_field_HEIGHT_VALUE_BITS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "HEIGHTMAP_BITS", "field_29867", "HEIGHT_VALUE_BITS", "f_145096_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#MAX_HEIGHT_VALUE
    [[maybe_unused]] static jint get_field_MAX_HEIGHT_VALUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEIGHTMAP_SIZE", "field_29868", "MAX_HEIGHT_VALUE", "f_145097_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.BitStorageAlignFix#MAX_HEIGHT_VALUE
    [[maybe_unused]] static void set_field_MAX_HEIGHT_VALUE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEIGHTMAP_SIZE", "field_29868", "MAX_HEIGHT_VALUE", "f_145097_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixHeightmaps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateHeightmaps", "method_27775", "fixHeightmaps", "m_14762_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject fixHeightmaps(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixHeightmaps();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fixLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateSections", "method_27774", "fixLevel", "m_14750_"), "(Lcom/mojang/datafixers/OpticFinder;Lcom/mojang/datafixers/OpticFinder;Lcom/mojang/datafixers/OpticFinder;Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject fixLevel(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_fixLevel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_fixBitStorageArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateBitStorage", "method_27772", "fixBitStorageArray", "m_14776_"), "(Lcom/mojang/serialization/Dynamic;Lcom/mojang/serialization/Dynamic;II)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixBitStorageArray(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_fixBitStorageArray();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_resizePackedIntArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addPadding", "method_27288", "resizePackedIntArray", "m_14737_"), "(II[J)[J");
    }

    static jlong resizePackedIntArray(const jint& arg0, const jint& arg1, const jarray& arg2, const jlong& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_resizePackedIntArray();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_BITSTORAGEALIGNFIX_HPP