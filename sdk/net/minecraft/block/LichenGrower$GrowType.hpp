// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_LICHENGROWER$GROWTYPE_HPP
#define NET_MINECRAFT_BLOCK_LICHENGROWER$GROWTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.LichenGrower$GrowType
 * Remapped: dkz$e
 */
namespace LichenGrower$GrowType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dkz$e", "net/minecraft/world/level/block/MultifaceSpreader$SpreadType", "net/minecraft/class_7118$class_7123", "net/minecraft/block/LichenGrower$GrowType", "net/minecraft/src/C_213099_$C_213104_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.LichenGrower$GrowType#SAME_POSITION
    [[maybe_unused]] static jobject get_field_SAME_POSITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SAME_POSITION", "field_37598", "SAME_POSITION", "SAME_POSITION"), "Ldkz$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.LichenGrower$GrowType#SAME_POSITION
    [[maybe_unused]] static void set_field_SAME_POSITION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SAME_POSITION", "field_37598", "SAME_POSITION", "SAME_POSITION"), "Ldkz$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.LichenGrower$GrowType#SAME_PLANE
    [[maybe_unused]] static jobject get_field_SAME_PLANE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SAME_PLANE", "field_37599", "SAME_PLANE", "SAME_PLANE"), "Ldkz$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.LichenGrower$GrowType#SAME_PLANE
    [[maybe_unused]] static void set_field_SAME_PLANE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SAME_PLANE", "field_37599", "SAME_PLANE", "SAME_PLANE"), "Ldkz$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.LichenGrower$GrowType#WRAP_AROUND
    [[maybe_unused]] static jobject get_field_WRAP_AROUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WRAP_AROUND", "field_37600", "WRAP_AROUND", "WRAP_AROUND"), "Ldkz$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.LichenGrower$GrowType#WRAP_AROUND
    [[maybe_unused]] static void set_field_WRAP_AROUND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WRAP_AROUND", "field_37600", "WRAP_AROUND", "WRAP_AROUND"), "Ldkz$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldkz$e;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldkz$e;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getGrowPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSpreadPos", "method_41466", "getGrowPos", "m_213941_"), "(Ljd;Lji;Lji;)Ldkz$c;");
    }

    static jobject getGrowPos(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getGrowPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_LICHENGROWER$GROWTYPE_HPP