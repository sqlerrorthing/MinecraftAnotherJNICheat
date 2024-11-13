// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_COMPOSTERBLOCK_HPP
#define NET_MINECRAFT_BLOCK_COMPOSTERBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.ComposterBlock
 * Remapped: dhj
 */
namespace ComposterBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dhj", "net/minecraft/world/level/block/ComposterBlock", "net/minecraft/class_3962", "net/minecraft/block/ComposterBlock", "net/minecraft/src/C_1740_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.ComposterBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46320", "CODEC", "f_303608_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ComposterBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46320", "CODEC", "f_303608_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ComposterBlock#NUM_LEVELS
    [[maybe_unused]] static jint get_field_NUM_LEVELS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "READY", "field_31071", "NUM_LEVELS", "f_153088_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ComposterBlock#NUM_LEVELS
    [[maybe_unused]] static void set_field_NUM_LEVELS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "READY", "field_31071", "NUM_LEVELS", "f_153088_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ComposterBlock#MIN_LEVEL
    [[maybe_unused]] static jint get_field_MIN_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MIN_LEVEL", "field_31072", "MIN_LEVEL", "f_153089_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ComposterBlock#MIN_LEVEL
    [[maybe_unused]] static void set_field_MIN_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MIN_LEVEL", "field_31072", "MIN_LEVEL", "f_153089_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ComposterBlock#MAX_LEVEL
    [[maybe_unused]] static jint get_field_MAX_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_LEVEL", "field_31073", "MAX_LEVEL", "f_153090_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ComposterBlock#MAX_LEVEL
    [[maybe_unused]] static void set_field_MAX_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_LEVEL", "field_31073", "MAX_LEVEL", "f_153090_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ComposterBlock#LEVEL
    [[maybe_unused]] static jobject get_field_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LEVEL", "field_17565", "LEVEL", "f_51913_"), "Lduc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ComposterBlock#LEVEL
    [[maybe_unused]] static void set_field_LEVEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LEVEL", "field_17565", "LEVEL", "f_51913_"), "Lduc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.ComposterBlock#ITEM_TO_LEVEL_INCREASE_CHANCE
    [[maybe_unused]] static jobject get_field_ITEM_TO_LEVEL_INCREASE_CHANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COMPOSTABLES", "field_17566", "ITEM_TO_LEVEL_INCREASE_CHANCE", "f_51914_"), "Lit/unimi/dsi/fastutil/objects/Object2FloatMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.ComposterBlock#ITEM_TO_LEVEL_INCREASE_CHANCE
    [[maybe_unused]] static void set_field_ITEM_TO_LEVEL_INCREASE_CHANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COMPOSTABLES", "field_17566", "ITEM_TO_LEVEL_INCREASE_CHANCE", "f_51914_"), "Lit/unimi/dsi/fastutil/objects/Object2FloatMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ComposterBlock#field_31074
    [[maybe_unused]] static jint get_field_field_31074() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "AABB_SIDE_THICKNESS", "field_31074", "field_31074", "f_153091_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ComposterBlock#field_31074
    [[maybe_unused]] static void set_field_field_31074(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "AABB_SIDE_THICKNESS", "field_31074", "field_31074", "f_153091_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ComposterBlock#RAYCAST_SHAPE
    [[maybe_unused]] static jobject get_field_RAYCAST_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "OUTER_SHAPE", "field_17567", "RAYCAST_SHAPE", "f_51915_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ComposterBlock#RAYCAST_SHAPE
    [[maybe_unused]] static void set_field_RAYCAST_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "OUTER_SHAPE", "field_17567", "RAYCAST_SHAPE", "f_51915_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.ComposterBlock#LEVEL_TO_COLLISION_SHAPE
    [[maybe_unused]] static jobject get_field_LEVEL_TO_COLLISION_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SHAPES", "field_17568", "LEVEL_TO_COLLISION_SHAPE", "f_51916_"), "[Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.ComposterBlock#LEVEL_TO_COLLISION_SHAPE
    [[maybe_unused]] static void set_field_LEVEL_TO_COLLISION_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SHAPES", "field_17568", "LEVEL_TO_COLLISION_SHAPE", "f_51916_"), "[Lexv;");
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
    
    static jmethodID methodID_registerDefaultCompostableItems() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "bootStrap", "method_17758", "registerDefaultCompostableItems", "m_51988_"), "()V");
    }

    static void registerDefaultCompostableItems() {
       const auto clazz = self();
       const auto methodID = methodID_registerDefaultCompostableItems();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_registerCompostableItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_17753", "registerCompostableItem", "m_51920_"), "(FLdcv;)V");
    }

    static void registerCompostableItem(const jfloat& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_registerCompostableItem();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_playEffects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "handleFill", "method_18027", "playEffects", "m_51923_"), "(Ldcw;Ljd;Z)V");
    }

    static void playEffects(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_playEffects();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getOutlineShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShape", "method_9530", "getOutlineShape", "m_5940_"), "(Ldtc;Ldcc;Ljd;Lexh;)Lexv;");
    }

    static jobject getOutlineShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getOutlineShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getRaycastShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getInteractionShape", "method_9584", "getRaycastShape", "m_6079_"), "(Ldtc;Ldcc;Ljd;)Lexv;");
    }

    static jobject getRaycastShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getRaycastShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getCollisionShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCollisionShape", "method_9549", "getCollisionShape", "m_5939_"), "(Ldtc;Ldcc;Ljd;Lexh;)Lexv;");
    }

    static jobject getCollisionShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getCollisionShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onBlockAdded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onPlace", "method_9615", "onBlockAdded", "m_6807_"), "(Ldtc;Ldcw;Ljd;Ldtc;Z)V");
    }

    static void onBlockAdded(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_onBlockAdded();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
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
    
    static jmethodID methodID_compost() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "insertItem", "method_26373", "compost", "m_268990_"), "(Lbsr;Ldtc;Laqu;Lcuq;Ljd;)Ldtc;");
    }

    static jobject compost(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_compost();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_emptyFullComposter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "extractProduce", "method_26374", "emptyFullComposter", "m_51998_"), "(Lbsr;Ldtc;Ldcw;Ljd;)Ldtc;");
    }

    static jobject emptyFullComposter(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_emptyFullComposter();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_emptyComposter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "empty", "method_17759", "emptyComposter", "m_269590_"), "(Lbsr;Ldtc;Ldcx;Ljd;)Ldtc;");
    }

    static jobject emptyComposter(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_emptyComposter();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_addToComposter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addItem", "method_17756", "addToComposter", "m_269330_"), "(Lbsr;Ldtc;Ldcx;Ljd;Lcuq;)Ldtc;");
    }

    static jobject addToComposter(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_addToComposter();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_scheduledTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_9588", "scheduledTick", "m_213897_"), "(Ldtc;Laqu;Ljd;Layw;)V");
    }

    static void scheduledTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_scheduledTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
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
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canPathfindThrough() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isPathfindable", "method_9516", "canPathfindThrough", "m_7357_"), "(Ldtc;Lept;)Z");
    }

    static jboolean canPathfindThrough(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canPathfindThrough();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getInventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getContainer", "method_17680", "getInventory", "m_5840_"), "(Ldtc;Ldcx;Ljd;)Lbrd;");
    }

    static jobject getInventory(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getInventory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_COMPOSTERBLOCK_HPP