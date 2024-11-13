// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_CAULDRON_CAULDRONBEHAVIOR_HPP
#define NET_MINECRAFT_BLOCK_CAULDRON_CAULDRONBEHAVIOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.cauldron.CauldronBehavior
 * Remapped: kj
 */
namespace CauldronBehavior {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kj", "net/minecraft/core/cauldron/CauldronInteraction", "net/minecraft/class_5620", "net/minecraft/block/cauldron/CauldronBehavior", "net/minecraft/src/C_141784_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#BEHAVIOR_MAPS
    [[maybe_unused]] static jobject get_field_BEHAVIOR_MAPS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INTERACTIONS", "field_46589", "BEHAVIOR_MAPS", "f_303208_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#BEHAVIOR_MAPS
    [[maybe_unused]] static void set_field_BEHAVIOR_MAPS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INTERACTIONS", "field_46589", "BEHAVIOR_MAPS", "f_303208_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_46590", "CODEC", "f_303824_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_46590", "CODEC", "f_303824_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#EMPTY_CAULDRON_BEHAVIOR
    [[maybe_unused]] static jobject get_field_EMPTY_CAULDRON_BEHAVIOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EMPTY", "field_27775", "EMPTY_CAULDRON_BEHAVIOR", "f_175606_"), "Lkj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#EMPTY_CAULDRON_BEHAVIOR
    [[maybe_unused]] static void set_field_EMPTY_CAULDRON_BEHAVIOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EMPTY", "field_27775", "EMPTY_CAULDRON_BEHAVIOR", "f_175606_"), "Lkj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#WATER_CAULDRON_BEHAVIOR
    [[maybe_unused]] static jobject get_field_WATER_CAULDRON_BEHAVIOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WATER", "field_27776", "WATER_CAULDRON_BEHAVIOR", "f_175607_"), "Lkj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#WATER_CAULDRON_BEHAVIOR
    [[maybe_unused]] static void set_field_WATER_CAULDRON_BEHAVIOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WATER", "field_27776", "WATER_CAULDRON_BEHAVIOR", "f_175607_"), "Lkj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#LAVA_CAULDRON_BEHAVIOR
    [[maybe_unused]] static jobject get_field_LAVA_CAULDRON_BEHAVIOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LAVA", "field_27777", "LAVA_CAULDRON_BEHAVIOR", "f_175608_"), "Lkj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#LAVA_CAULDRON_BEHAVIOR
    [[maybe_unused]] static void set_field_LAVA_CAULDRON_BEHAVIOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LAVA", "field_27777", "LAVA_CAULDRON_BEHAVIOR", "f_175608_"), "Lkj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#POWDER_SNOW_CAULDRON_BEHAVIOR
    [[maybe_unused]] static jobject get_field_POWDER_SNOW_CAULDRON_BEHAVIOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWDER_SNOW", "field_28011", "POWDER_SNOW_CAULDRON_BEHAVIOR", "f_175609_"), "Lkj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#POWDER_SNOW_CAULDRON_BEHAVIOR
    [[maybe_unused]] static void set_field_POWDER_SNOW_CAULDRON_BEHAVIOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWDER_SNOW", "field_28011", "POWDER_SNOW_CAULDRON_BEHAVIOR", "f_175609_"), "Lkj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#FILL_WITH_WATER
    [[maybe_unused]] static jobject get_field_FILL_WITH_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FILL_WATER", "field_27778", "FILL_WITH_WATER", "f_175610_"), "Lkj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#FILL_WITH_WATER
    [[maybe_unused]] static void set_field_FILL_WITH_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FILL_WATER", "field_27778", "FILL_WITH_WATER", "f_175610_"), "Lkj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#FILL_WITH_LAVA
    [[maybe_unused]] static jobject get_field_FILL_WITH_LAVA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FILL_LAVA", "field_27779", "FILL_WITH_LAVA", "f_175611_"), "Lkj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#FILL_WITH_LAVA
    [[maybe_unused]] static void set_field_FILL_WITH_LAVA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FILL_LAVA", "field_27779", "FILL_WITH_LAVA", "f_175611_"), "Lkj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#FILL_WITH_POWDER_SNOW
    [[maybe_unused]] static jobject get_field_FILL_WITH_POWDER_SNOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FILL_POWDER_SNOW", "field_28012", "FILL_WITH_POWDER_SNOW", "f_175612_"), "Lkj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#FILL_WITH_POWDER_SNOW
    [[maybe_unused]] static void set_field_FILL_WITH_POWDER_SNOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FILL_POWDER_SNOW", "field_28012", "FILL_WITH_POWDER_SNOW", "f_175612_"), "Lkj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#CLEAN_SHULKER_BOX
    [[maybe_unused]] static jobject get_field_CLEAN_SHULKER_BOX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SHULKER_BOX", "field_27780", "CLEAN_SHULKER_BOX", "f_175613_"), "Lkj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#CLEAN_SHULKER_BOX
    [[maybe_unused]] static void set_field_CLEAN_SHULKER_BOX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SHULKER_BOX", "field_27780", "CLEAN_SHULKER_BOX", "f_175613_"), "Lkj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#CLEAN_BANNER
    [[maybe_unused]] static jobject get_field_CLEAN_BANNER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BANNER", "field_27781", "CLEAN_BANNER", "f_175614_"), "Lkj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#CLEAN_BANNER
    [[maybe_unused]] static void set_field_CLEAN_BANNER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BANNER", "field_27781", "CLEAN_BANNER", "f_175614_"), "Lkj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.cauldron.CauldronBehavior#CLEAN_DYEABLE_ITEM
    [[maybe_unused]] static jobject get_field_CLEAN_DYEABLE_ITEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DYED_ITEM", "field_27782", "CLEAN_DYEABLE_ITEM", "f_175615_"), "Lkj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.cauldron.CauldronBehavior#CLEAN_DYEABLE_ITEM
    [[maybe_unused]] static void set_field_CLEAN_DYEABLE_ITEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DYED_ITEM", "field_27782", "CLEAN_DYEABLE_ITEM", "f_175615_"), "Lkj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "newInteractionMap", "method_32206", "createMap", "m_175617_"), "(Ljava/lang/String;)Lkj$a;");
    }

    static jobject createMap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createMap();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_interact() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("interact", "interact", "interact", "interact", "m_175710_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lbqq;Lcuq;)Lbqt;");
    }

    static jobject interact(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_interact();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_registerBehavior() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootStrap", "method_32212", "registerBehavior", "m_175649_"), "()V");
    }

    static void registerBehavior() {
       const auto clazz = self();
       const auto methodID = methodID_registerBehavior();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_registerBucketBehavior() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addDefaultInteractions", "method_34850", "registerBucketBehavior", "m_175647_"), "(Ljava/util/Map;)V");
    }

    static void registerBucketBehavior(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registerBucketBehavior();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_emptyCauldron() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fillBucket", "method_32210", "emptyCauldron", "m_175635_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lbqq;Lcuq;Lcuq;Ljava/util/function/Predicate;Lavo;)Lbqt;");
    }

    static jobject emptyCauldron(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jobject& arg8) {
       const auto clazz = self();
       const auto methodID = methodID_emptyCauldron();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_fillCauldron() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "emptyBucket", "method_32207", "fillCauldron", "m_175618_"), "(Ldcw;Ljd;Lcmx;Lbqq;Lcuq;Ldtc;Lavo;)Lbqt;");
    }

    static jobject fillCauldron(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_fillCauldron();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_CAULDRON_CAULDRONBEHAVIOR_HPP