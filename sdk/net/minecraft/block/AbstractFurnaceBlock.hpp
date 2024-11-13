// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ABSTRACTFURNACEBLOCK_HPP
#define NET_MINECRAFT_BLOCK_ABSTRACTFURNACEBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.AbstractFurnaceBlock
 * Remapped: det
 */
namespace AbstractFurnaceBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("det", "net/minecraft/world/level/block/AbstractFurnaceBlock", "net/minecraft/class_2363", "net/minecraft/block/AbstractFurnaceBlock", "net/minecraft/src/C_1675_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.AbstractFurnaceBlock#FACING
    [[maybe_unused]] static jobject get_field_FACING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FACING", "field_11104", "FACING", "f_48683_"), "Ldtw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.AbstractFurnaceBlock#FACING
    [[maybe_unused]] static void set_field_FACING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FACING", "field_11104", "FACING", "f_48683_"), "Ldtw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.AbstractFurnaceBlock#LIT
    [[maybe_unused]] static jobject get_field_LIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIT", "field_11105", "LIT", "f_48684_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.AbstractFurnaceBlock#LIT
    [[maybe_unused]] static void set_field_LIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIT", "field_11105", "LIT", "f_48684_"), "Ldtt;");
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
    
    static jmethodID methodID_onUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useWithoutItem", "method_55766", "onUse", "m_6227_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lewy;)Lbqr;");
    }

    static jobject onUse(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onUse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_openScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openContainer", "method_17025", "openScreen", "m_7137_"), "(Ldcw;Ljd;Lcmx;)V");
    }

    static void openScreen(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_openScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_9605", "getPlacementState", "m_5573_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onStateReplaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onRemove", "method_9536", "onStateReplaced", "m_6810_"), "(Ldtc;Ldcw;Ljd;Ldtc;Z)V");
    }

    static void onStateReplaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_onStateReplaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
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
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_validateTicker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFurnaceTicker", "method_31617", "validateTicker", "m_151987_"), "(Ldcw;Ldqj;Ldqj;)Ldqi;");
    }

    static jobject validateTicker(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_validateTicker();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ABSTRACTFURNACEBLOCK_HPP