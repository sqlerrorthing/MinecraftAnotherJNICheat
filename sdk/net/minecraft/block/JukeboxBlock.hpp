// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_JUKEBOXBLOCK_HPP
#define NET_MINECRAFT_BLOCK_JUKEBOXBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.JukeboxBlock
 * Remapped: dkb
 */
namespace JukeboxBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dkb", "net/minecraft/world/level/block/JukeboxBlock", "net/minecraft/class_2387", "net/minecraft/block/JukeboxBlock", "net/minecraft/src/C_1820_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.JukeboxBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46377", "CODEC", "f_303074_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.JukeboxBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46377", "CODEC", "f_303074_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.JukeboxBlock#HAS_RECORD
    [[maybe_unused]] static jobject get_field_HAS_RECORD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HAS_RECORD", "field_11180", "HAS_RECORD", "f_54254_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.JukeboxBlock#HAS_RECORD
    [[maybe_unused]] static void set_field_HAS_RECORD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HAS_RECORD", "field_11180", "HAS_RECORD", "f_54254_"), "Ldtt;");
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
    
    static jmethodID methodID_onPlaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPlacedBy", "method_9567", "onPlaced", "m_6402_"), "(Ldcw;Ljd;Ldtc;Lbtn;Lcuq;)V");
    }

    static void onPlaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onPlaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useWithoutItem", "method_55766", "onUse", "m_6227_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lewy;)Lbqr;");
    }

    static jobject onUse(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onUse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onUseWithItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useItemOn", "method_55765", "onUseWithItem", "m_51273_"), "(Lcuq;Ldtc;Ldcw;Ljd;Lcmx;Lbqq;Lewy;)Lbqt;");
    }

    static jobject onUseWithItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_onUseWithItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_onStateReplaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onRemove", "method_9536", "onStateReplaced", "m_6810_"), "(Ldtc;Ldcw;Ljd;Ldtc;Z)V");
    }

    static void onStateReplaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_onStateReplaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_createBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newBlockEntity", "method_10123", "createBlockEntity", "m_142194_"), "(Ljd;Ldtc;)Ldqh;");
    }

    static jobject createBlockEntity(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_emitsRedstonePower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e_", "isSignalSource", "method_9506", "emitsRedstonePower", "m_7899_"), "(Ldtc;)Z");
    }

    static jboolean emitsRedstonePower(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_emitsRedstonePower();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWeakRedstonePower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSignal", "method_9524", "getWeakRedstonePower", "m_6378_"), "(Ldtc;Ldcc;Ljd;Lji;)I");
    }

    static jint getWeakRedstonePower(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getWeakRedstonePower();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3);
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
    
    static jmethodID methodID_getRenderType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getRenderShape", "method_9604", "getRenderType", "m_7514_"), "(Ldtc;)Ldmf;");
    }

    static jobject getRenderType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRenderType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTicker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTicker", "method_31645", "getTicker", "m_142354_"), "(Ldcw;Ldtc;Ldqj;)Ldqi;");
    }

    static jobject getTicker(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getTicker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_JUKEBOXBLOCK_HPP