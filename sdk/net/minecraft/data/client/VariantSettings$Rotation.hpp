// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_VARIANTSETTINGS$ROTATION_HPP
#define NET_MINECRAFT_DATA_CLIENT_VARIANTSETTINGS$ROTATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.VariantSettings$Rotation
 * Remapped: ny$a
 */
namespace VariantSettings$Rotation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ny$a", "net/minecraft/data/models/blockstates/VariantProperties$Rotation", "net/minecraft/class_4936$class_4937", "net/minecraft/data/client/VariantSettings$Rotation", "net/minecraft/src/C_4815_$C_4816_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.data.client.VariantSettings$Rotation#R0
    [[maybe_unused]] static jobject get_field_R0() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "R0", "field_22890", "R0", "R0"), "Lny$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.data.client.VariantSettings$Rotation#R0
    [[maybe_unused]] static void set_field_R0(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "R0", "field_22890", "R0", "R0"), "Lny$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.data.client.VariantSettings$Rotation#R90
    [[maybe_unused]] static jobject get_field_R90() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "R90", "field_22891", "R90", "R90"), "Lny$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.data.client.VariantSettings$Rotation#R90
    [[maybe_unused]] static void set_field_R90(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "R90", "field_22891", "R90", "R90"), "Lny$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.data.client.VariantSettings$Rotation#R180
    [[maybe_unused]] static jobject get_field_R180() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "R180", "field_22892", "R180", "R180"), "Lny$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.data.client.VariantSettings$Rotation#R180
    [[maybe_unused]] static void set_field_R180(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "R180", "field_22892", "R180", "R180"), "Lny$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.data.client.VariantSettings$Rotation#R270
    [[maybe_unused]] static jobject get_field_R270() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "R270", "field_22893", "R270", "R270"), "Lny$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.data.client.VariantSettings$Rotation#R270
    [[maybe_unused]] static void set_field_R270(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "R270", "field_22893", "R270", "R270"), "Lny$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.data.client.VariantSettings$Rotation#degrees
    static jint get_field_degrees(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "value", "field_22894", "degrees", "f_125534_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.data.client.VariantSettings$Rotation#degrees
    static void set_field_degrees(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "value", "field_22894", "degrees", "f_125534_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lny$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lny$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_VARIANTSETTINGS$ROTATION_HPP