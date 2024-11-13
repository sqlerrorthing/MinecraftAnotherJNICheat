// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_SHULKERBOXBLOCK_HPP
#define NET_MINECRAFT_BLOCK_SHULKERBOXBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.ShulkerBoxBlock
 * Remapped: dmy
 */
namespace ShulkerBoxBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dmy", "net/minecraft/world/level/block/ShulkerBoxBlock", "net/minecraft/class_2480", "net/minecraft/block/ShulkerBoxBlock", "net/minecraft/src/C_1893_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.ShulkerBoxBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46440", "CODEC", "f_303219_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ShulkerBoxBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46440", "CODEC", "f_303219_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#UNKNOWN_CONTENTS_TEXT
    [[maybe_unused]] static jobject get_field_UNKNOWN_CONTENTS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNKNOWN_CONTENTS", "field_49401", "UNKNOWN_CONTENTS_TEXT", "f_315728_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#UNKNOWN_CONTENTS_TEXT
    [[maybe_unused]] static void set_field_UNKNOWN_CONTENTS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNKNOWN_CONTENTS", "field_49401", "UNKNOWN_CONTENTS_TEXT", "f_315728_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#field_41075
    [[maybe_unused]] static jfloat get_field_field_41075() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OPEN_AABB_SIZE", "field_41075", "field_41075", "f_256820_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#field_41075
    [[maybe_unused]] static void set_field_field_41075(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OPEN_AABB_SIZE", "field_41075", "field_41075", "f_256820_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#UP_SHAPE
    [[maybe_unused]] static jobject get_field_UP_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "UP_OPEN_AABB", "field_41076", "UP_SHAPE", "f_256853_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#UP_SHAPE
    [[maybe_unused]] static void set_field_UP_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "UP_OPEN_AABB", "field_41076", "UP_SHAPE", "f_256853_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#DOWN_SHAPE
    [[maybe_unused]] static jobject get_field_DOWN_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DOWN_OPEN_AABB", "field_41077", "DOWN_SHAPE", "f_256795_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#DOWN_SHAPE
    [[maybe_unused]] static void set_field_DOWN_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DOWN_OPEN_AABB", "field_41077", "DOWN_SHAPE", "f_256795_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#WEST_SHAPE
    [[maybe_unused]] static jobject get_field_WEST_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "WES_OPEN_AABB", "field_41078", "WEST_SHAPE", "f_256800_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#WEST_SHAPE
    [[maybe_unused]] static void set_field_WEST_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "WES_OPEN_AABB", "field_41078", "WEST_SHAPE", "f_256800_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#EAST_SHAPE
    [[maybe_unused]] static jobject get_field_EAST_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "EAST_OPEN_AABB", "field_41079", "EAST_SHAPE", "f_257037_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#EAST_SHAPE
    [[maybe_unused]] static void set_field_EAST_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "EAST_OPEN_AABB", "field_41079", "EAST_SHAPE", "f_257037_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#NORTH_SHAPE
    [[maybe_unused]] static jobject get_field_NORTH_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NORTH_OPEN_AABB", "field_41080", "NORTH_SHAPE", "f_256867_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#NORTH_SHAPE
    [[maybe_unused]] static void set_field_NORTH_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NORTH_OPEN_AABB", "field_41080", "NORTH_SHAPE", "f_256867_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#SOUTH_SHAPE
    [[maybe_unused]] static jobject get_field_SOUTH_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SOUTH_OPEN_AABB", "field_41081", "SOUTH_SHAPE", "f_256794_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#SOUTH_SHAPE
    [[maybe_unused]] static void set_field_SOUTH_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SOUTH_OPEN_AABB", "field_41081", "SOUTH_SHAPE", "f_256794_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ShulkerBoxBlock#SIDES_SHAPES
    [[maybe_unused]] static jobject get_field_SIDES_SHAPES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "OPEN_SHAPE_BY_DIRECTION", "field_41082", "SIDES_SHAPES", "f_256830_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#SIDES_SHAPES
    [[maybe_unused]] static void set_field_SIDES_SHAPES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "OPEN_SHAPE_BY_DIRECTION", "field_41082", "SIDES_SHAPES", "f_256830_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ShulkerBoxBlock#FACING
    [[maybe_unused]] static jobject get_field_FACING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FACING", "field_11496", "FACING", "f_56183_"), "Ldua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ShulkerBoxBlock#FACING
    [[maybe_unused]] static void set_field_FACING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FACING", "field_11496", "FACING", "f_56183_"), "Ldua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ShulkerBoxBlock#CONTENTS_DYNAMIC_DROP_ID
    [[maybe_unused]] static jobject get_field_CONTENTS_DYNAMIC_DROP_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CONTENTS", "field_11495", "CONTENTS_DYNAMIC_DROP_ID", "f_56184_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ShulkerBoxBlock#CONTENTS_DYNAMIC_DROP_ID
    [[maybe_unused]] static void set_field_CONTENTS_DYNAMIC_DROP_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CONTENTS", "field_11495", "CONTENTS_DYNAMIC_DROP_ID", "f_56184_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.ShulkerBoxBlock#color
    static jobject get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "color", "field_11494", "color", "f_56185_"), "Lcti;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.ShulkerBoxBlock#color
    static void set_field_color(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "color", "field_11494", "color", "f_56185_"), "Lcti;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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
    
    static jmethodID methodID_getTicker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTicker", "method_31645", "getTicker", "m_142354_"), "(Ldcw;Ldtc;Ldqj;)Ldqi;");
    }

    static jobject getTicker(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getTicker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getRenderType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getRenderShape", "method_9604", "getRenderType", "m_7514_"), "(Ldtc;)Ldmf;");
    }

    static jobject getRenderType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRenderType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useWithoutItem", "method_55766", "onUse", "m_6227_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lewy;)Lbqr;");
    }

    static jobject onUse(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onUse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_canOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "canOpen", "method_33383", "canOpen", "m_154546_"), "(Ldtc;Ldcw;Ljd;Ldrr;)Z");
    }

    static jboolean canOpen(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_canOpen();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_9605", "getPlacementState", "m_5573_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
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
    
    static jmethodID methodID_onBreak() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playerWillDestroy", "method_9576", "onBreak", "m_5707_"), "(Ldcw;Ljd;Ldtc;Lcmx;)Ldtc;");
    }

    static jobject onBreak(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onBreak();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getDroppedStacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDrops", "method_9560", "getDroppedStacks", "m_49635_"), "(Ldtc;Leru$a;)Ljava/util/List;");
    }

    static jobject getDroppedStacks(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getDroppedStacks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onStateReplaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onRemove", "method_9536", "onStateReplaced", "m_6810_"), "(Ldtc;Ldcw;Ljd;Ldtc;Z)V");
    }

    static void onStateReplaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_onStateReplaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_appendTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendHoverText", "method_9568", "appendTooltip", "m_5871_"), "(Lcuq;Lcul$b;Ljava/util/List;Lcwm;)V");
    }

    static void appendTooltip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_appendTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getSidesShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "getBlockSupportShape", "method_25959", "getSidesShape", "m_7947_"), "(Ldtc;Ldcc;Ljd;)Lexv;");
    }

    static jobject getSidesShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getSidesShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getOutlineShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShape", "method_9530", "getOutlineShape", "m_5940_"), "(Ldtc;Ldcc;Ljd;Lexh;)Lexv;");
    }

    static jobject getOutlineShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getOutlineShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isTransparent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "propagatesSkylightDown", "method_9579", "isTransparent", "m_49099_"), "(Ldtc;Ldcc;Ljd;)Z");
    }

    static jboolean isTransparent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_isTransparent();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
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
    
    static jmethodID methodID_getPickStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCloneItemStack", "method_9574", "getPickStack", "m_7397_"), "(Ldcz;Ljd;Ldtc;)Lcuq;");
    }

    static jobject getPickStack(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getPickStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getColorFromItem", "method_10527", "getColor", "m_56252_"), "(Lcul;)Lcti;");
    }

    static jobject getColor(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getColorFromBlock", "method_10526", "getColor", "m_56262_"), "(Ldfy;)Lcti;");
    }

    static jobject _getColor(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getColor();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockByColor", "method_10525", "get", "m_56190_"), "(Lcti;)Ldfy;");
    }

    static jobject get(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID___getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getColor", "method_10528", "getColor", "m_56261_"), "()Lcti;");
    }

    static jobject __getColor(const jobject& obj) {
                
       const auto methodID = methodID___getColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getItemStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getColoredItemStack", "method_10529", "getItemStack", "m_56250_"), "(Lcti;)Lcuq;");
    }

    static jobject getItemStack(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getItemStack();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
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
    
};

#endif // NET_MINECRAFT_BLOCK_SHULKERBOXBLOCK_HPP