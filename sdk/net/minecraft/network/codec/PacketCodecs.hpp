// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS_HPP
#define NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.codec.PacketCodecs
 * Remapped: yv
 */
namespace PacketCodecs {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yv", "net/minecraft/network/codec/ByteBufCodecs", "net/minecraft/class_9135", "net/minecraft/network/codec/PacketCodecs", "net/minecraft/src/C_313613_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#field_49674
    [[maybe_unused]] static jint get_field_field_49674() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_INITIAL_COLLECTION_SIZE", "field_49674", "field_49674", "f_317061_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#field_49674
    [[maybe_unused]] static void set_field_field_49674(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_INITIAL_COLLECTION_SIZE", "field_49674", "field_49674", "f_317061_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#BOOL
    [[maybe_unused]] static jobject get_field_BOOL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOOL", "field_48547", "BOOL", "f_315514_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#BOOL
    [[maybe_unused]] static void set_field_BOOL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOOL", "field_48547", "BOOL", "f_315514_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#BYTE
    [[maybe_unused]] static jobject get_field_BYTE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BYTE", "field_48548", "BYTE", "f_313954_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#BYTE
    [[maybe_unused]] static void set_field_BYTE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BYTE", "field_48548", "BYTE", "f_313954_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#SHORT
    [[maybe_unused]] static jobject get_field_SHORT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SHORT", "field_48549", "SHORT", "f_315014_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#SHORT
    [[maybe_unused]] static void set_field_SHORT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SHORT", "field_48549", "SHORT", "f_315014_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#UNSIGNED_SHORT
    [[maybe_unused]] static jobject get_field_UNSIGNED_SHORT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNSIGNED_SHORT", "field_51470", "UNSIGNED_SHORT", "f_315371_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#UNSIGNED_SHORT
    [[maybe_unused]] static void set_field_UNSIGNED_SHORT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNSIGNED_SHORT", "field_51470", "UNSIGNED_SHORT", "f_315371_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#INTEGER
    [[maybe_unused]] static jobject get_field_INTEGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "INT", "field_49675", "INTEGER", "f_316612_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#INTEGER
    [[maybe_unused]] static void set_field_INTEGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "INT", "field_49675", "INTEGER", "f_316612_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#VAR_INT
    [[maybe_unused]] static jobject get_field_VAR_INT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VAR_INT", "field_48550", "VAR_INT", "f_316730_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#VAR_INT
    [[maybe_unused]] static void set_field_VAR_INT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VAR_INT", "field_48550", "VAR_INT", "f_316730_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#VAR_LONG
    [[maybe_unused]] static jobject get_field_VAR_LONG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "VAR_LONG", "field_48551", "VAR_LONG", "f_315478_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#VAR_LONG
    [[maybe_unused]] static void set_field_VAR_LONG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "VAR_LONG", "field_48551", "VAR_LONG", "f_315478_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#FLOAT
    [[maybe_unused]] static jobject get_field_FLOAT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FLOAT", "field_48552", "FLOAT", "f_314734_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#FLOAT
    [[maybe_unused]] static void set_field_FLOAT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FLOAT", "field_48552", "FLOAT", "f_314734_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#DOUBLE
    [[maybe_unused]] static jobject get_field_DOUBLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DOUBLE", "field_48553", "DOUBLE", "f_315477_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#DOUBLE
    [[maybe_unused]] static void set_field_DOUBLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DOUBLE", "field_48553", "DOUBLE", "f_315477_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#BYTE_ARRAY
    [[maybe_unused]] static jobject get_field_BYTE_ARRAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BYTE_ARRAY", "field_48987", "BYTE_ARRAY", "f_315847_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#BYTE_ARRAY
    [[maybe_unused]] static void set_field_BYTE_ARRAY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BYTE_ARRAY", "field_48987", "BYTE_ARRAY", "f_315847_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#STRING
    [[maybe_unused]] static jobject get_field_STRING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "STRING_UTF8", "field_48554", "STRING", "f_315450_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#STRING
    [[maybe_unused]] static void set_field_STRING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "STRING_UTF8", "field_48554", "STRING", "f_315450_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#NBT_ELEMENT
    [[maybe_unused]] static jobject get_field_NBT_ELEMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "TAG", "field_48555", "NBT_ELEMENT", "f_316427_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#NBT_ELEMENT
    [[maybe_unused]] static void set_field_NBT_ELEMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "TAG", "field_48555", "NBT_ELEMENT", "f_316427_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#UNLIMITED_NBT_ELEMENT
    [[maybe_unused]] static jobject get_field_UNLIMITED_NBT_ELEMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "TRUSTED_TAG", "field_49676", "UNLIMITED_NBT_ELEMENT", "f_314848_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#UNLIMITED_NBT_ELEMENT
    [[maybe_unused]] static void set_field_UNLIMITED_NBT_ELEMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "TRUSTED_TAG", "field_49676", "UNLIMITED_NBT_ELEMENT", "f_314848_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#NBT_COMPOUND
    [[maybe_unused]] static jobject get_field_NBT_COMPOUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "COMPOUND_TAG", "field_48556", "NBT_COMPOUND", "f_314933_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#NBT_COMPOUND
    [[maybe_unused]] static void set_field_NBT_COMPOUND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "COMPOUND_TAG", "field_48556", "NBT_COMPOUND", "f_314933_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#UNLIMITED_NBT_COMPOUND
    [[maybe_unused]] static jobject get_field_UNLIMITED_NBT_COMPOUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TRUSTED_COMPOUND_TAG", "field_49677", "UNLIMITED_NBT_COMPOUND", "f_315964_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#UNLIMITED_NBT_COMPOUND
    [[maybe_unused]] static void set_field_UNLIMITED_NBT_COMPOUND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TRUSTED_COMPOUND_TAG", "field_49677", "UNLIMITED_NBT_COMPOUND", "f_315964_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#OPTIONAL_NBT
    [[maybe_unused]] static jobject get_field_OPTIONAL_NBT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "OPTIONAL_COMPOUND_TAG", "field_48557", "OPTIONAL_NBT", "f_314919_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#OPTIONAL_NBT
    [[maybe_unused]] static void set_field_OPTIONAL_NBT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "OPTIONAL_COMPOUND_TAG", "field_48557", "OPTIONAL_NBT", "f_314919_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#VECTOR3F
    [[maybe_unused]] static jobject get_field_VECTOR3F() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "VECTOR3F", "field_48558", "VECTOR3F", "f_314483_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#VECTOR3F
    [[maybe_unused]] static void set_field_VECTOR3F(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "VECTOR3F", "field_48558", "VECTOR3F", "f_314483_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#QUATERNIONF
    [[maybe_unused]] static jobject get_field_QUATERNIONF() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "QUATERNIONF", "field_48559", "QUATERNIONF", "f_313943_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#QUATERNIONF
    [[maybe_unused]] static void set_field_QUATERNIONF(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "QUATERNIONF", "field_48559", "QUATERNIONF", "f_313943_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#PROPERTY_MAP
    [[maybe_unused]] static jobject get_field_PROPERTY_MAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "GAME_PROFILE_PROPERTIES", "field_49678", "PROPERTY_MAP", "f_315576_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#PROPERTY_MAP
    [[maybe_unused]] static void set_field_PROPERTY_MAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "GAME_PROFILE_PROPERTIES", "field_49678", "PROPERTY_MAP", "f_315576_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.codec.PacketCodecs#GAME_PROFILE
    [[maybe_unused]] static jobject get_field_GAME_PROFILE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "GAME_PROFILE", "field_49679", "GAME_PROFILE", "f_314168_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.codec.PacketCodecs#GAME_PROFILE
    [[maybe_unused]] static void set_field_GAME_PROFILE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "GAME_PROFILE", "field_49679", "GAME_PROFILE", "f_314168_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_byteArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byteArray", "method_56895", "byteArray", "m_323478_"), "(I)Lyx;");
    }

    static jobject byteArray(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byteArray();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_string() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "stringUtf8", "method_56364", "string", "m_319534_"), "(I)Lyx;");
    }

    static jobject string(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_string();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_nbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "tagCodec", "method_56378", "nbt", "m_322191_"), "(Ljava/util/function/Supplier;)Lyx;");
    }

    static jobject nbt(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_nbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_nbtCompound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "compoundTagCodec", "method_57998", "nbtCompound", "m_319469_"), "(Ljava/util/function/Supplier;)Lyx;");
    }

    static jobject nbtCompound(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_nbtCompound();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_unlimitedCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromCodecTrusted", "method_57987", "unlimitedCodec", "m_319482_"), "(Lcom/mojang/serialization/Codec;)Lyx;");
    }

    static jobject unlimitedCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_unlimitedCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fromCodec", "method_56368", "codec", "m_321502_"), "(Lcom/mojang/serialization/Codec;)Lyx;");
    }

    static jobject codec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromCodec", "method_57988", "codec", "m_322579_"), "(Lcom/mojang/serialization/Codec;Ljava/util/function/Supplier;)Lyx;");
    }

    static jobject _codec(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__codec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_unlimitedRegistryCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "fromCodecWithRegistriesTrusted", "method_58002", "unlimitedRegistryCodec", "m_322295_"), "(Lcom/mojang/serialization/Codec;)Lyx;");
    }

    static jobject unlimitedRegistryCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_unlimitedRegistryCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_registryCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "fromCodecWithRegistries", "method_56896", "registryCodec", "m_319284_"), "(Lcom/mojang/serialization/Codec;)Lyx;");
    }

    static jobject registryCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registryCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__registryCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fromCodecWithRegistries", "method_57997", "registryCodec", "m_320197_"), "(Lcom/mojang/serialization/Codec;Ljava/util/function/Supplier;)Lyx;");
    }

    static jobject _registryCodec(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__registryCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_optional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "optional", "method_56382", "optional", "m_319027_"), "(Lyx;)Lyx;");
    }

    static jobject optional(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_optional();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_readCollectionSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "readCount", "method_57989", "readCollectionSize", "m_319449_"), "(Lio/netty/buffer/ByteBuf;I)I");
    }

    static jint readCollectionSize(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_readCollectionSize();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeCollectionSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "writeCount", "method_57990", "writeCollectionSize", "m_324291_"), "(Lio/netty/buffer/ByteBuf;II)V");
    }

    static void writeCollectionSize(const jobject& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_writeCollectionSize();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_collection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "collection", "method_56376", "collection", "m_323861_"), "(Ljava/util/function/IntFunction;Lyx;)Lyx;");
    }

    static jobject collection(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_collection();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__collection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "collection", "method_57991", "collection", "m_324703_"), "(Ljava/util/function/IntFunction;Lyx;I)Lyx;");
    }

    static jobject _collection(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__collection();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_toCollection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "collection", "method_56374", "toCollection", "m_323312_"), "(Ljava/util/function/IntFunction;)Lyx$a;");
    }

    static jobject toCollection(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toCollection();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "list", "method_56363", "toList", "m_324765_"), "()Lyx$a;");
    }

    static jobject toList() {
       const auto clazz = self();
       const auto methodID = methodID_toList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__toList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "list", "method_58000", "toList", "m_319259_"), "(I)Lyx$a;");
    }

    static jobject _toList(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__toList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_map() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "map", "method_56377", "map", "m_322136_"), "(Ljava/util/function/IntFunction;Lyx;Lyx;)Lyx;");
    }

    static jobject map(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_map();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__map() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "map", "method_57992", "map", "m_319874_"), "(Ljava/util/function/IntFunction;Lyx;Lyx;I)Lyx;");
    }

    static jobject _map(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__map();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_either() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "either", "method_57995", "either", "m_319489_"), "(Lyx;Lyx;)Lyx;");
    }

    static jobject either(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_either();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_indexed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "idMapper", "method_56375", "indexed", "m_321301_"), "(Ljava/util/function/IntFunction;Ljava/util/function/ToIntFunction;)Lyx;");
    }

    static jobject indexed(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_indexed();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_entryOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "idMapper", "method_56371", "entryOf", "m_323411_"), "(Ljr;)Lyx;");
    }

    static jobject entryOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_entryOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_registry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "registry", "method_56366", "registry", "m_320301_"), "(Lakq;Ljava/util/function/Function;)Lyx;");
    }

    static jobject registry(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_registry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_registryValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "registry", "method_56365", "registryValue", "m_320159_"), "(Lakq;)Lyx;");
    }

    static jobject registryValue(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registryValue();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_registryEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "holderRegistry", "method_56383", "registryEntry", "m_322636_"), "(Lakq;)Lyx;");
    }

    static jobject registryEntry(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registryEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__registryEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "holder", "method_56367", "registryEntry", "m_321333_"), "(Lakq;Lyx;)Lyx;");
    }

    static jobject _registryEntry(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__registryEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_registryEntryList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "holderSet", "method_58001", "registryEntryList", "m_319169_"), "(Lakq;)Lyx;");
    }

    static jobject registryEntryList(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registryEntryList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_CODEC_PACKETCODECS_HPP