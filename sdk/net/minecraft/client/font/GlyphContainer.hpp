// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_GLYPHCONTAINER_HPP
#define NET_MINECRAFT_CLIENT_FONT_GLYPHCONTAINER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.GlyphContainer
 * Remapped: fla
 */
namespace GlyphContainer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fla", "net/minecraft/client/gui/font/CodepointMap", "net/minecraft/class_8532", "net/minecraft/client/font/GlyphContainer", "net/minecraft/src/C_283725_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.font.GlyphContainer#ROW_SHIFT
    [[maybe_unused]] static jint get_field_ROW_SHIFT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOCK_BITS", "field_44749", "ROW_SHIFT", "f_283858_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#ROW_SHIFT
    [[maybe_unused]] static void set_field_ROW_SHIFT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOCK_BITS", "field_44749", "ROW_SHIFT", "f_283858_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.GlyphContainer#ENTRIES_PER_ROW
    [[maybe_unused]] static jint get_field_ENTRIES_PER_ROW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BLOCK_SIZE", "field_44750", "ENTRIES_PER_ROW", "f_283879_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#ENTRIES_PER_ROW
    [[maybe_unused]] static void set_field_ENTRIES_PER_ROW(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BLOCK_SIZE", "field_44750", "ENTRIES_PER_ROW", "f_283879_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.GlyphContainer#LAST_ENTRY_NUM_IN_ROW
    [[maybe_unused]] static jint get_field_LAST_ENTRY_NUM_IN_ROW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "IN_BLOCK_MASK", "field_44751", "LAST_ENTRY_NUM_IN_ROW", "f_283806_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#LAST_ENTRY_NUM_IN_ROW
    [[maybe_unused]] static void set_field_LAST_ENTRY_NUM_IN_ROW(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "IN_BLOCK_MASK", "field_44751", "LAST_ENTRY_NUM_IN_ROW", "f_283806_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.GlyphContainer#LAST_ROW_NUM
    [[maybe_unused]] static jint get_field_LAST_ROW_NUM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_BLOCK", "field_44752", "LAST_ROW_NUM", "f_283822_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#LAST_ROW_NUM
    [[maybe_unused]] static void set_field_LAST_ROW_NUM(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_BLOCK", "field_44752", "LAST_ROW_NUM", "f_283822_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.GlyphContainer#NUM_ROWS
    [[maybe_unused]] static jint get_field_NUM_ROWS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BLOCK_COUNT", "field_44753", "NUM_ROWS", "f_283789_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#NUM_ROWS
    [[maybe_unused]] static void set_field_NUM_ROWS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BLOCK_COUNT", "field_44753", "NUM_ROWS", "f_283789_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphContainer#defaultRow
    static jobject get_field_defaultRow(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "empty", "field_44754", "defaultRow", "f_283911_"), "[Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#defaultRow
    static void set_field_defaultRow(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "empty", "field_44754", "defaultRow", "f_283911_"), "[Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphContainer#rows
    static jobject get_field_rows(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "blockMap", "field_44755", "rows", "f_283938_"), "[[Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#rows
    static void set_field_rows(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "blockMap", "field_44755", "rows", "f_283938_"), "[[Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphContainer#makeRow
    static jobject get_field_makeRow(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "blockConstructor", "field_44756", "makeRow", "f_283773_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphContainer#makeRow
    static void set_field_makeRow(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "blockConstructor", "field_44756", "makeRow", "f_283773_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clear", "method_51597", "clear", "m_284192_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_51598", "get", "m_284412_"), "(I)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_put() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "put", "method_51599", "put", "m_284506_"), "(ILjava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject put(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_put();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_computeIfAbsent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "computeIfAbsent", "method_51600", "computeIfAbsent", "m_284450_"), "(ILjava/util/function/IntFunction;)Ljava/lang/Object;");
    }

    static jobject computeIfAbsent(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_computeIfAbsent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "remove", "method_51604", "remove", "m_284320_"), "(I)Ljava/lang/Object;");
    }

    static jobject remove(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_remove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_forEachGlyph() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "forEach", "method_51601", "forEachGlyph", "m_284150_"), "(Lfla$a;)V");
    }

    static void forEachGlyph(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachGlyph();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getProvidedGlyphs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "keySet", "method_51603", "getProvidedGlyphs", "m_284498_"), "()Lit/unimi/dsi/fastutil/ints/IntSet;");
    }

    static jobject getProvidedGlyphs(const jobject& obj) {
                
       const auto methodID = methodID_getProvidedGlyphs();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_GLYPHCONTAINER_HPP