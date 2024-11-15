// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_WOODTYPE_HPP
#define NET_MINECRAFT_BLOCK_WOODTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.WoodType
 * Remapped: dup
 */
namespace WoodType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dup", "net/minecraft/world/level/block/state/properties/WoodType", "net/minecraft/class_4719", "net/minecraft/block/WoodType", "net/minecraft/src/C_2106_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.WoodType#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "name", "comp_1299", "name", "f_61839_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.WoodType#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "name", "comp_1299", "name", "f_61839_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.WoodType#setType
    static jobject get_field_setType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "setType", "comp_1300", "setType", "f_271340_"), "Ldtr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.WoodType#setType
    static void set_field_setType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "setType", "comp_1300", "setType", "f_271340_"), "Ldtr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.WoodType#soundType
    static jobject get_field_soundType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "soundType", "comp_1301", "soundType", "f_271317_"), "Ldnm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.WoodType#soundType
    static void set_field_soundType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "soundType", "comp_1301", "soundType", "f_271317_"), "Ldnm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.WoodType#hangingSignSoundType
    static jobject get_field_hangingSignSoundType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "hangingSignSoundType", "comp_1302", "hangingSignSoundType", "f_271309_"), "Ldnm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.WoodType#hangingSignSoundType
    static void set_field_hangingSignSoundType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "hangingSignSoundType", "comp_1302", "hangingSignSoundType", "f_271309_"), "Ldnm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.WoodType#fenceGateClose
    static jobject get_field_fenceGateClose(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "fenceGateClose", "comp_1303", "fenceGateClose", "f_271365_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.WoodType#fenceGateClose
    static void set_field_fenceGateClose(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "fenceGateClose", "comp_1303", "fenceGateClose", "f_271365_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.WoodType#fenceGateOpen
    static jobject get_field_fenceGateOpen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "fenceGateOpen", "comp_1304", "fenceGateOpen", "f_271162_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.WoodType#fenceGateOpen
    static void set_field_fenceGateOpen(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "fenceGateOpen", "comp_1304", "fenceGateOpen", "f_271162_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.block.WoodType#VALUES
    [[maybe_unused]] static jobject get_field_VALUES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "TYPES", "field_46536", "VALUES", "f_303289_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.WoodType#VALUES
    [[maybe_unused]] static void set_field_VALUES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "TYPES", "field_46536", "VALUES", "f_303289_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46535", "CODEC", "f_303492_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46535", "CODEC", "f_303492_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#OAK
    [[maybe_unused]] static jobject get_field_OAK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OAK", "field_21676", "OAK", "f_61830_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#OAK
    [[maybe_unused]] static void set_field_OAK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OAK", "field_21676", "OAK", "f_61830_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#SPRUCE
    [[maybe_unused]] static jobject get_field_SPRUCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPRUCE", "field_21677", "SPRUCE", "f_61831_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#SPRUCE
    [[maybe_unused]] static void set_field_SPRUCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPRUCE", "field_21677", "SPRUCE", "f_61831_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#BIRCH
    [[maybe_unused]] static jobject get_field_BIRCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BIRCH", "field_21678", "BIRCH", "f_61832_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#BIRCH
    [[maybe_unused]] static void set_field_BIRCH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BIRCH", "field_21678", "BIRCH", "f_61832_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#ACACIA
    [[maybe_unused]] static jobject get_field_ACACIA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ACACIA", "field_21679", "ACACIA", "f_61833_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#ACACIA
    [[maybe_unused]] static void set_field_ACACIA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ACACIA", "field_21679", "ACACIA", "f_61833_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#CHERRY
    [[maybe_unused]] static jobject get_field_CHERRY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHERRY", "field_42837", "CHERRY", "f_271224_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#CHERRY
    [[maybe_unused]] static void set_field_CHERRY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHERRY", "field_42837", "CHERRY", "f_271224_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#JUNGLE
    [[maybe_unused]] static jobject get_field_JUNGLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "JUNGLE", "field_21680", "JUNGLE", "f_61834_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#JUNGLE
    [[maybe_unused]] static void set_field_JUNGLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "JUNGLE", "field_21680", "JUNGLE", "f_61834_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#DARK_OAK
    [[maybe_unused]] static jobject get_field_DARK_OAK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DARK_OAK", "field_21681", "DARK_OAK", "f_61835_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#DARK_OAK
    [[maybe_unused]] static void set_field_DARK_OAK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DARK_OAK", "field_21681", "DARK_OAK", "f_61835_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#CRIMSON
    [[maybe_unused]] static jobject get_field_CRIMSON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CRIMSON", "field_22183", "CRIMSON", "f_61836_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#CRIMSON
    [[maybe_unused]] static void set_field_CRIMSON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CRIMSON", "field_22183", "CRIMSON", "f_61836_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#WARPED
    [[maybe_unused]] static jobject get_field_WARPED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WARPED", "field_22184", "WARPED", "f_61837_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#WARPED
    [[maybe_unused]] static void set_field_WARPED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WARPED", "field_22184", "WARPED", "f_61837_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#MANGROVE
    [[maybe_unused]] static jobject get_field_MANGROVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "MANGROVE", "field_37657", "MANGROVE", "f_223002_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#MANGROVE
    [[maybe_unused]] static void set_field_MANGROVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "MANGROVE", "field_37657", "MANGROVE", "f_223002_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WoodType#BAMBOO
    [[maybe_unused]] static jobject get_field_BAMBOO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BAMBOO", "field_40350", "BAMBOO", "f_244200_"), "Ldup;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WoodType#BAMBOO
    [[maybe_unused]] static void set_field_BAMBOO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BAMBOO", "field_40350", "BAMBOO", "f_244200_"), "Ldup;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_24027", "register", "m_61844_"), "(Ldup;)Ldup;");
    }

    static jobject register(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "values", "method_24026", "stream", "m_61843_"), "()Ljava/util/stream/Stream;");
    }

    static jobject stream() {
       const auto clazz = self();
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "name", "comp_1299", "name", "f_61839_"), "()Ljava/lang/String;");
    }

    static jobject _name(const jobject& obj) {
                
       const auto methodID = methodID__name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__setType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setType", "comp_1300", "setType", "f_271340_"), "()Ldtr;");
    }

    static jobject _setType(const jobject& obj) {
                
       const auto methodID = methodID__setType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__soundType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "soundType", "comp_1301", "soundType", "f_271317_"), "()Ldnm;");
    }

    static jobject _soundType(const jobject& obj) {
                
       const auto methodID = methodID__soundType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__hangingSignSoundType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "hangingSignSoundType", "comp_1302", "hangingSignSoundType", "f_271309_"), "()Ldnm;");
    }

    static jobject _hangingSignSoundType(const jobject& obj) {
                
       const auto methodID = methodID__hangingSignSoundType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__fenceGateClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "fenceGateClose", "comp_1303", "fenceGateClose", "f_271365_"), "()Lavo;");
    }

    static jobject _fenceGateClose(const jobject& obj) {
                
       const auto methodID = methodID__fenceGateClose();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__fenceGateOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "fenceGateOpen", "comp_1304", "fenceGateOpen", "f_271162_"), "()Lavo;");
    }

    static jobject _fenceGateOpen(const jobject& obj) {
                
       const auto methodID = methodID__fenceGateOpen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_WOODTYPE_HPP