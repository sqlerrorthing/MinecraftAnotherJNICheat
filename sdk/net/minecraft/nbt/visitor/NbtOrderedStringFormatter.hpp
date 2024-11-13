// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_VISITOR_NBTORDEREDSTRINGFORMATTER_HPP
#define NET_MINECRAFT_NBT_VISITOR_NBTORDEREDSTRINGFORMATTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.visitor.NbtOrderedStringFormatter
 * Remapped: uu
 */
namespace NbtOrderedStringFormatter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("uu", "net/minecraft/nbt/SnbtPrinterTagVisitor", "net/minecraft/class_5625", "net/minecraft/nbt/visitor/NbtOrderedStringFormatter", "net/minecraft/src/C_141836_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#ENTRY_ORDER_OVERRIDES
    [[maybe_unused]] static jobject get_field_ENTRY_ORDER_OVERRIDES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "KEY_ORDER", "field_27820", "ENTRY_ORDER_OVERRIDES", "f_178088_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#ENTRY_ORDER_OVERRIDES
    [[maybe_unused]] static void set_field_ENTRY_ORDER_OVERRIDES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "KEY_ORDER", "field_27820", "ENTRY_ORDER_OVERRIDES", "f_178088_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#IGNORED_PATHS
    [[maybe_unused]] static jobject get_field_IGNORED_PATHS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_INDENTATION", "field_27821", "IGNORED_PATHS", "f_178089_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#IGNORED_PATHS
    [[maybe_unused]] static void set_field_IGNORED_PATHS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_INDENTATION", "field_27821", "IGNORED_PATHS", "f_178089_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SIMPLE_NAME
    [[maybe_unused]] static jobject get_field_SIMPLE_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIMPLE_VALUE", "field_27822", "SIMPLE_NAME", "f_178090_"), "Ljava/util/regex/Pattern;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SIMPLE_NAME
    [[maybe_unused]] static void set_field_SIMPLE_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIMPLE_VALUE", "field_27822", "SIMPLE_NAME", "f_178090_"), "Ljava/util/regex/Pattern;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#KEY_VALUE_SEPARATOR
    [[maybe_unused]] static jobject get_field_KEY_VALUE_SEPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NAME_VALUE_SEPARATOR", "field_27823", "KEY_VALUE_SEPARATOR", "f_178091_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#KEY_VALUE_SEPARATOR
    [[maybe_unused]] static void set_field_KEY_VALUE_SEPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NAME_VALUE_SEPARATOR", "field_27823", "KEY_VALUE_SEPARATOR", "f_178091_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#ENTRY_SEPARATOR
    [[maybe_unused]] static jobject get_field_ENTRY_SEPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ELEMENT_SEPARATOR", "field_27824", "ENTRY_SEPARATOR", "f_178092_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#ENTRY_SEPARATOR
    [[maybe_unused]] static void set_field_ENTRY_SEPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ELEMENT_SEPARATOR", "field_27824", "ENTRY_SEPARATOR", "f_178092_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SQUARE_OPEN_BRACKET
    [[maybe_unused]] static jobject get_field_SQUARE_OPEN_BRACKET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LIST_OPEN", "field_33234", "SQUARE_OPEN_BRACKET", "f_178093_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SQUARE_OPEN_BRACKET
    [[maybe_unused]] static void set_field_SQUARE_OPEN_BRACKET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LIST_OPEN", "field_33234", "SQUARE_OPEN_BRACKET", "f_178093_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SQUARE_CLOSE_BRACKET
    [[maybe_unused]] static jobject get_field_SQUARE_CLOSE_BRACKET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LIST_CLOSE", "field_33235", "SQUARE_CLOSE_BRACKET", "f_178094_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SQUARE_CLOSE_BRACKET
    [[maybe_unused]] static void set_field_SQUARE_CLOSE_BRACKET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LIST_CLOSE", "field_33235", "SQUARE_CLOSE_BRACKET", "f_178094_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SEMICOLON
    [[maybe_unused]] static jobject get_field_SEMICOLON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LIST_TYPE_SEPARATOR", "field_33236", "SEMICOLON", "f_178095_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SEMICOLON
    [[maybe_unused]] static void set_field_SEMICOLON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LIST_TYPE_SEPARATOR", "field_33236", "SEMICOLON", "f_178095_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SPACE
    [[maybe_unused]] static jobject get_field_SPACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ELEMENT_SPACING", "field_33237", "SPACE", "f_178096_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#SPACE
    [[maybe_unused]] static void set_field_SPACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ELEMENT_SPACING", "field_33237", "SPACE", "f_178096_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#CURLY_OPEN_BRACKET
    [[maybe_unused]] static jobject get_field_CURLY_OPEN_BRACKET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "STRUCT_OPEN", "field_33238", "CURLY_OPEN_BRACKET", "f_178097_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#CURLY_OPEN_BRACKET
    [[maybe_unused]] static void set_field_CURLY_OPEN_BRACKET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "STRUCT_OPEN", "field_33238", "CURLY_OPEN_BRACKET", "f_178097_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#CURLY_CLOSE_BRACKET
    [[maybe_unused]] static jobject get_field_CURLY_CLOSE_BRACKET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "STRUCT_CLOSE", "field_33239", "CURLY_CLOSE_BRACKET", "f_178098_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#CURLY_CLOSE_BRACKET
    [[maybe_unused]] static void set_field_CURLY_CLOSE_BRACKET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "STRUCT_CLOSE", "field_33239", "CURLY_CLOSE_BRACKET", "f_178098_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#NEW_LINE
    [[maybe_unused]] static jobject get_field_NEW_LINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "NEWLINE", "field_33240", "NEW_LINE", "f_178099_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#NEW_LINE
    [[maybe_unused]] static void set_field_NEW_LINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "NEWLINE", "field_33240", "NEW_LINE", "f_178099_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#prefix
    static jobject get_field_prefix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "indentation", "field_27825", "prefix", "f_178100_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#prefix
    static void set_field_prefix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "indentation", "field_27825", "prefix", "f_178100_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#indentationLevel
    static jint get_field_indentationLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "depth", "field_27826", "indentationLevel", "f_178101_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#indentationLevel
    static void set_field_indentationLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "depth", "field_27826", "indentationLevel", "f_178101_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#pathParts
    static jobject get_field_pathParts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "path", "field_27827", "pathParts", "f_178102_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#pathParts
    static void set_field_pathParts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "path", "field_27827", "pathParts", "f_178102_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#result
    static jobject get_field_result(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "result", "field_27828", "result", "f_178103_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.NbtOrderedStringFormatter#result
    static void set_field_result(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "result", "field_27828", "result", "f_178103_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_32283", "apply", "m_178141_"), "(Luy;)Ljava/lang/String;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitString", "method_32302", "visitString", "m_142614_"), "(Luw;)V");
    }

    static void visitString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitString();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitByte() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitByte", "method_32291", "visitByte", "m_141946_"), "(Ltz;)V");
    }

    static void visitByte(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitByte();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitShort() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitShort", "method_32301", "visitShort", "m_142183_"), "(Lut;)V");
    }

    static void visitShort(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitShort();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitInt", "method_32297", "visitInt", "m_142045_"), "(Lug;)V");
    }

    static void visitInt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitInt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitLong", "method_32300", "visitLong", "m_142046_"), "(Luj;)V");
    }

    static void visitLong(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitLong();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitFloat", "method_32295", "visitFloat", "m_142181_"), "(Lue;)V");
    }

    static void visitFloat(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitFloat();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitDouble() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitDouble", "method_32293", "visitDouble", "m_142121_"), "(Luc;)V");
    }

    static void visitDouble(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitDouble();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitByteArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitByteArray", "method_32290", "visitByteArray", "m_142154_"), "(Lty;)V");
    }

    static void visitByteArray(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitByteArray();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitIntArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitIntArray", "method_32296", "visitIntArray", "m_142251_"), "(Luf;)V");
    }

    static void visitIntArray(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitIntArray();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitLongArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitLongArray", "method_32299", "visitLongArray", "m_142309_"), "(Lui;)V");
    }

    static void visitLongArray(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitLongArray();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitList", "method_32298", "visitList", "m_142447_"), "(Luh;)V");
    }

    static void visitList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitList();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitCompound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitCompound", "method_32292", "visitCompound", "m_142303_"), "(Lub;)V");
    }

    static void visitCompound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitCompound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_popPathPart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "popPath", "method_32284", "popPathPart", "m_178143_"), "()V");
    }

    static void popPathPart(const jobject& obj) {
                
       const auto methodID = methodID_popPathPart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_pushPathPart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "pushPath", "method_32285", "pushPathPart", "m_178144_"), "(Ljava/lang/String;)V");
    }

    static void pushPathPart(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_pushPathPart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSortedNames() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKeys", "method_32286", "getSortedNames", "m_178146_"), "(Lub;)Ljava/util/List;");
    }

    static jobject getSortedNames(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSortedNames();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_joinPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pathString", "method_32280", "joinPath", "m_178110_"), "()Ljava/lang/String;");
    }

    static jobject joinPath(const jobject& obj) {
                
       const auto methodID = methodID_joinPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_escapeName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "handleEscapePretty", "method_32281", "escapeName", "m_178111_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject escapeName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_escapeName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_visitEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitEnd", "method_32294", "visitEnd", "m_142384_"), "(Lud;)V");
    }

    static void visitEnd(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitEnd();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NBT_VISITOR_NBTORDEREDSTRINGFORMATTER_HPP