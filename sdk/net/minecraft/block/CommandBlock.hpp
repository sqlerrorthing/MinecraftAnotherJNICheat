// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_COMMANDBLOCK_HPP
#define NET_MINECRAFT_BLOCK_COMMANDBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.CommandBlock
 * Remapped: dhh
 */
namespace CommandBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dhh", "net/minecraft/world/level/block/CommandBlock", "net/minecraft/class_2288", "net/minecraft/block/CommandBlock", "net/minecraft/src/C_1738_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.CommandBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46318", "CODEC", "f_302419_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CommandBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46318", "CODEC", "f_302419_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.CommandBlock#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_10792", "LOGGER", "f_51795_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.CommandBlock#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_10792", "LOGGER", "f_51795_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.CommandBlock#FACING
    [[maybe_unused]] static jobject get_field_FACING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FACING", "field_10791", "FACING", "f_51793_"), "Ldtw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CommandBlock#FACING
    [[maybe_unused]] static void set_field_FACING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FACING", "field_10791", "FACING", "f_51793_"), "Ldtw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.CommandBlock#CONDITIONAL
    [[maybe_unused]] static jobject get_field_CONDITIONAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CONDITIONAL", "field_10793", "CONDITIONAL", "f_51794_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CommandBlock#CONDITIONAL
    [[maybe_unused]] static void set_field_CONDITIONAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CONDITIONAL", "field_10793", "CONDITIONAL", "f_51794_"), "Ldtt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.CommandBlock#auto
    static jboolean get_field_auto(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "automatic", "field_27192", "auto", "f_153078_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.CommandBlock#auto
    static void set_field_auto(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "automatic", "field_27192", "auto", "f_153078_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newBlockEntity", "method_10123", "createBlockEntity", "m_142194_"), "(Ljd;Ldtc;)Ldqh;");
    }

    static jobject createBlockEntity(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_neighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "neighborChanged", "method_9612", "neighborUpdate", "m_6861_"), "(Ldtc;Ldcw;Ljd;Ldfy;Ljd;Z)V");
    }

    static void neighborUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5) {
                
       const auto methodID = methodID_neighborUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_scheduledTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_9588", "scheduledTick", "m_213897_"), "(Ldtc;Laqu;Ljd;Layw;)V");
    }

    static void scheduledTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_scheduledTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "execute", "method_9780", "execute", "m_51831_"), "(Ldtc;Ldcw;Ljd;Ldbx;Z)V");
    }

    static void execute(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_execute();
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
    
    static jmethodID methodID_onPlaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPlacedBy", "method_9567", "onPlaced", "m_6402_"), "(Ldcw;Ljd;Ldtc;Lbtn;Lcuq;)V");
    }

    static void onPlaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onPlaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
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
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_9605", "getPlacementState", "m_5573_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_executeCommandChain() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "executeChain", "method_9779", "executeCommandChain", "m_51809_"), "(Ldcw;Ljd;Lji;)V");
    }

    static void executeCommandChain(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_executeCommandChain();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_COMMANDBLOCK_HPP