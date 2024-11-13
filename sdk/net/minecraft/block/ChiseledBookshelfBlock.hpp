// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_CHISELEDBOOKSHELFBLOCK_HPP
#define NET_MINECRAFT_BLOCK_CHISELEDBOOKSHELFBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.ChiseledBookshelfBlock
 * Remapped: dhc
 */
namespace ChiseledBookshelfBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dhc", "net/minecraft/world/level/block/ChiseledBookShelfBlock", "net/minecraft/class_7714", "net/minecraft/block/ChiseledBookshelfBlock", "net/minecraft/src/C_243606_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.ChiseledBookshelfBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46312", "CODEC", "f_303870_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ChiseledBookshelfBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46312", "CODEC", "f_303870_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ChiseledBookshelfBlock#MAX_BOOK_COUNT
    [[maybe_unused]] static jint get_field_MAX_BOOK_COUNT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_BOOKS_IN_STORAGE", "field_41309", "MAX_BOOK_COUNT", "f_260522_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ChiseledBookshelfBlock#MAX_BOOK_COUNT
    [[maybe_unused]] static void set_field_MAX_BOOK_COUNT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_BOOKS_IN_STORAGE", "field_41309", "MAX_BOOK_COUNT", "f_260522_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ChiseledBookshelfBlock#BOOK_HEIGHT
    [[maybe_unused]] static jint get_field_BOOK_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOOKS_PER_ROW", "field_41307", "BOOK_HEIGHT", "f_260633_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ChiseledBookshelfBlock#BOOK_HEIGHT
    [[maybe_unused]] static void set_field_BOOK_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOOKS_PER_ROW", "field_41307", "BOOK_HEIGHT", "f_260633_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ChiseledBookshelfBlock#SLOT_OCCUPIED_PROPERTIES
    [[maybe_unused]] static jobject get_field_SLOT_OCCUPIED_PROPERTIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SLOT_OCCUPIED_PROPERTIES", "field_41308", "SLOT_OCCUPIED_PROPERTIES", "f_260698_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ChiseledBookshelfBlock#SLOT_OCCUPIED_PROPERTIES
    [[maybe_unused]] static void set_field_SLOT_OCCUPIED_PROPERTIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SLOT_OCCUPIED_PROPERTIES", "field_41308", "SLOT_OCCUPIED_PROPERTIES", "f_260698_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRenderType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getRenderShape", "method_9604", "getRenderType", "m_7514_"), "(Ldtc;)Ldmf;");
    }

    static jobject getRenderType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRenderType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUseWithItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useItemOn", "method_55765", "onUseWithItem", "m_51273_"), "(Lcuq;Ldtc;Ldcw;Ljd;Lcmx;Lbqq;Lewy;)Lbqt;");
    }

    static jobject onUseWithItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_onUseWithItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_onUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useWithoutItem", "method_55766", "onUse", "m_6227_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lewy;)Lbqr;");
    }

    static jobject onUse(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onUse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getSlotForHitPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHitSlot", "method_47580", "getSlotForHitPos", "m_261279_"), "(Lewy;Ldtc;)Ljava/util/OptionalInt;");
    }

    static jobject getSlotForHitPos(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getSlotForHitPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getHitPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRelativeHitCoordinatesForBlockFace", "method_47579", "getHitPos", "m_260871_"), "(Lewy;Lji;)Ljava/util/Optional;");
    }

    static jobject getHitPos(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getHitPos();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getColumn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSection", "method_47577", "getColumn", "m_261181_"), "(F)I");
    }

    static jint getColumn(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getColumn();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_tryAddBook() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addBook", "method_45458", "tryAddBook", "m_262410_"), "(Ldcw;Ljd;Lcmx;Ldqq;Lcuq;I)V");
    }

    static void tryAddBook(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_tryAddBook();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_tryRemoveBook() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "removeBook", "method_45457", "tryRemoveBook", "m_262380_"), "(Ldcw;Ljd;Lcmx;Ldqq;I)V");
    }

    static void tryRemoveBook(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_tryRemoveBook();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_createBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newBlockEntity", "method_10123", "createBlockEntity", "m_142194_"), "(Ljd;Ldtc;)Ldqh;");
    }

    static jobject createBlockEntity(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onStateReplaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onRemove", "method_9536", "onStateReplaced", "m_6810_"), "(Ldtc;Ldcw;Ljd;Ldtc;Z)V");
    }

    static void onStateReplaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_onStateReplaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_9605", "getPlacementState", "m_5573_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_rotate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rotate", "method_9598", "rotate", "m_6843_"), "(Ldtc;Ldmm;)Ldtc;");
    }

    static jobject rotate(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_rotate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_mirror() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mirror", "method_9569", "mirror", "m_6943_"), "(Ldtc;Ldkv;)Ldtc;");
    }

    static jobject mirror(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_mirror();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasComparatorOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c_", "hasAnalogOutputSignal", "method_9498", "hasComparatorOutput", "m_7278_"), "(Ldtc;)Z");
    }

    static jboolean hasComparatorOutput(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasComparatorOutput();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getComparatorOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAnalogOutputSignal", "method_9572", "getComparatorOutput", "m_6782_"), "(Ldtc;Ldcw;Ljd;)I");
    }

    static jint getComparatorOutput(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getComparatorOutput();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_CHISELEDBOOKSHELFBLOCK_HPP