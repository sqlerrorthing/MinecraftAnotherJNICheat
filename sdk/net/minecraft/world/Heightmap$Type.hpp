// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_HEIGHTMAP$TYPE_HPP
#define NET_MINECRAFT_WORLD_HEIGHTMAP$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.Heightmap$Type
 * Remapped: dyy$a
 */
namespace Heightmap$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyy$a", "net/minecraft/world/level/levelgen/Heightmap$Types", "net/minecraft/class_2902$class_2903", "net/minecraft/world/Heightmap$Type", "net/minecraft/src/C_2190_$C_2191_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.Heightmap$Type#WORLD_SURFACE_WG
    [[maybe_unused]] static jobject get_field_WORLD_SURFACE_WG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WORLD_SURFACE_WG", "field_13194", "WORLD_SURFACE_WG", "WORLD_SURFACE_WG"), "Ldyy$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.Heightmap$Type#WORLD_SURFACE_WG
    [[maybe_unused]] static void set_field_WORLD_SURFACE_WG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WORLD_SURFACE_WG", "field_13194", "WORLD_SURFACE_WG", "WORLD_SURFACE_WG"), "Ldyy$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.Heightmap$Type#WORLD_SURFACE
    [[maybe_unused]] static jobject get_field_WORLD_SURFACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORLD_SURFACE", "field_13202", "WORLD_SURFACE", "WORLD_SURFACE"), "Ldyy$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.Heightmap$Type#WORLD_SURFACE
    [[maybe_unused]] static void set_field_WORLD_SURFACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORLD_SURFACE", "field_13202", "WORLD_SURFACE", "WORLD_SURFACE"), "Ldyy$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.Heightmap$Type#OCEAN_FLOOR_WG
    [[maybe_unused]] static jobject get_field_OCEAN_FLOOR_WG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OCEAN_FLOOR_WG", "field_13195", "OCEAN_FLOOR_WG", "OCEAN_FLOOR_WG"), "Ldyy$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.Heightmap$Type#OCEAN_FLOOR_WG
    [[maybe_unused]] static void set_field_OCEAN_FLOOR_WG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OCEAN_FLOOR_WG", "field_13195", "OCEAN_FLOOR_WG", "OCEAN_FLOOR_WG"), "Ldyy$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.Heightmap$Type#OCEAN_FLOOR
    [[maybe_unused]] static jobject get_field_OCEAN_FLOOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OCEAN_FLOOR", "field_13200", "OCEAN_FLOOR", "OCEAN_FLOOR"), "Ldyy$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.Heightmap$Type#OCEAN_FLOOR
    [[maybe_unused]] static void set_field_OCEAN_FLOOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OCEAN_FLOOR", "field_13200", "OCEAN_FLOOR", "OCEAN_FLOOR"), "Ldyy$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.Heightmap$Type#MOTION_BLOCKING
    [[maybe_unused]] static jobject get_field_MOTION_BLOCKING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MOTION_BLOCKING", "field_13197", "MOTION_BLOCKING", "MOTION_BLOCKING"), "Ldyy$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.Heightmap$Type#MOTION_BLOCKING
    [[maybe_unused]] static void set_field_MOTION_BLOCKING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MOTION_BLOCKING", "field_13197", "MOTION_BLOCKING", "MOTION_BLOCKING"), "Ldyy$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.Heightmap$Type#MOTION_BLOCKING_NO_LEAVES
    [[maybe_unused]] static jobject get_field_MOTION_BLOCKING_NO_LEAVES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MOTION_BLOCKING_NO_LEAVES", "field_13203", "MOTION_BLOCKING_NO_LEAVES", "MOTION_BLOCKING_NO_LEAVES"), "Ldyy$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.Heightmap$Type#MOTION_BLOCKING_NO_LEAVES
    [[maybe_unused]] static void set_field_MOTION_BLOCKING_NO_LEAVES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MOTION_BLOCKING_NO_LEAVES", "field_13203", "MOTION_BLOCKING_NO_LEAVES", "MOTION_BLOCKING_NO_LEAVES"), "Ldyy$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.Heightmap$Type#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CODEC", "field_24772", "CODEC", "f_64274_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.Heightmap$Type#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CODEC", "field_24772", "CODEC", "f_64274_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.Heightmap$Type#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "serializationKey", "field_13204", "name", "f_64275_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.Heightmap$Type#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "serializationKey", "field_13204", "name", "f_64275_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.Heightmap$Type#purpose
    static jobject get_field_purpose(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "usage", "field_13198", "purpose", "f_64276_"), "Ldyy$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.Heightmap$Type#purpose
    static void set_field_purpose(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "usage", "field_13198", "purpose", "f_64276_"), "Ldyy$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.Heightmap$Type#blockPredicate
    static jobject get_field_blockPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "isOpaque", "field_16568", "blockPredicate", "f_64277_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.Heightmap$Type#blockPredicate
    static void set_field_blockPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "isOpaque", "field_16568", "blockPredicate", "f_64277_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldyy$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldyy$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSerializationKey", "method_12605", "getName", "m_64294_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldSendToClient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "sendToClient", "method_16137", "shouldSendToClient", "m_64297_"), "()Z");
    }

    static jboolean shouldSendToClient(const jobject& obj) {
                
       const auto methodID = methodID_shouldSendToClient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isStoredServerSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "keepAfterWorldgen", "method_20454", "isStoredServerSide", "m_64298_"), "()Z");
    }

    static jboolean isStoredServerSide(const jobject& obj) {
                
       const auto methodID = methodID_isStoredServerSide();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isOpaque", "method_16402", "getBlockPredicate", "m_64299_"), "()Ljava/util/function/Predicate;");
    }

    static jobject getBlockPredicate(const jobject& obj) {
                
       const auto methodID = methodID_getBlockPredicate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_HEIGHTMAP$TYPE_HPP