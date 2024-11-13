// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ABSTRACTPLANTPARTBLOCK_HPP
#define NET_MINECRAFT_BLOCK_ABSTRACTPLANTPARTBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.AbstractPlantPartBlock
 * Remapped: djl
 */
namespace AbstractPlantPartBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("djl", "net/minecraft/world/level/block/GrowingPlantBlock", "net/minecraft/class_4863", "net/minecraft/block/AbstractPlantPartBlock", "net/minecraft/src/C_1806_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.block.AbstractPlantPartBlock#growthDirection
    static jobject get_field_growthDirection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "growthDirection", "field_22507", "growthDirection", "f_53859_"), "Lji;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.AbstractPlantPartBlock#growthDirection
    static void set_field_growthDirection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "growthDirection", "field_22507", "growthDirection", "f_53859_"), "Lji;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.AbstractPlantPartBlock#tickWater
    static jboolean get_field_tickWater(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "scheduleFluidTicks", "field_22508", "tickWater", "f_53860_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.AbstractPlantPartBlock#tickWater
    static void set_field_tickWater(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "scheduleFluidTicks", "field_22508", "tickWater", "f_53860_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.block.AbstractPlantPartBlock#outlineShape
    static jobject get_field_outlineShape(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "shape", "field_23080", "outlineShape", "f_53861_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.AbstractPlantPartBlock#outlineShape
    static void set_field_outlineShape(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "shape", "field_23080", "outlineShape", "f_53861_"), "Lexv;");
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
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_9605", "getPlacementState", "m_5573_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRandomGrowthState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_24948", "getRandomGrowthState", "m_7722_"), "(Ldcx;)Ldtc;");
    }

    static jobject getRandomGrowthState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRandomGrowthState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canPlaceAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canSurvive", "method_9558", "canPlaceAt", "m_7898_"), "(Ldtc;Ldcz;Ljd;)Z");
    }

    static jboolean canPlaceAt(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_canPlaceAt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_scheduledTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_9588", "scheduledTick", "m_213897_"), "(Ldtc;Laqu;Ljd;Layw;)V");
    }

    static void scheduledTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_scheduledTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canAttachTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "canAttachTo", "method_24947", "canAttachTo", "m_142209_"), "(Ldtc;)Z");
    }

    static jboolean canAttachTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canAttachTo();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOutlineShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShape", "method_9530", "getOutlineShape", "m_5940_"), "(Ldtc;Ldcc;Ljd;Lexh;)Lexv;");
    }

    static jobject getOutlineShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getOutlineShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getStem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getHeadBlock", "method_24945", "getStem", "m_7272_"), "()Ldjn;");
    }

    static jobject getStem(const jobject& obj) {
                
       const auto methodID = methodID_getStem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBodyBlock", "method_24946", "getPlant", "m_7777_"), "()Ldfy;");
    }

    static jobject getPlant(const jobject& obj) {
                
       const auto methodID = methodID_getPlant();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ABSTRACTPLANTPARTBLOCK_HPP