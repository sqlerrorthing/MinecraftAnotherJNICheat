// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BORDER_WORLDBORDER$PROPERTIES_HPP
#define NET_MINECRAFT_WORLD_BORDER_WORLDBORDER$PROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.border.WorldBorder$Properties
 * Remapped: dut$c
 */
namespace WorldBorder$Properties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dut$c", "net/minecraft/world/level/border/WorldBorder$Settings", "net/minecraft/class_2784$class_5200", "net/minecraft/world/border/WorldBorder$Properties", "net/minecraft/src/C_2110_$C_2114_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#centerX
    static jdouble get_field_centerX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "centerX", "field_24123", "centerX", "f_62001_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#centerX
    static void set_field_centerX(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "centerX", "field_24123", "centerX", "f_62001_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#centerZ
    static jdouble get_field_centerZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "centerZ", "field_24124", "centerZ", "f_62002_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#centerZ
    static void set_field_centerZ(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "centerZ", "field_24124", "centerZ", "f_62002_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#damagePerBlock
    static jdouble get_field_damagePerBlock(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "damagePerBlock", "field_24125", "damagePerBlock", "f_62003_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#damagePerBlock
    static void set_field_damagePerBlock(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "damagePerBlock", "field_24125", "damagePerBlock", "f_62003_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#safeZone
    static jdouble get_field_safeZone(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "safeZone", "field_24126", "safeZone", "f_62004_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#safeZone
    static void set_field_safeZone(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "safeZone", "field_24126", "safeZone", "f_62004_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#warningBlocks
    static jint get_field_warningBlocks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "warningBlocks", "field_24127", "warningBlocks", "f_62005_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#warningBlocks
    static void set_field_warningBlocks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "warningBlocks", "field_24127", "warningBlocks", "f_62005_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#warningTime
    static jint get_field_warningTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "warningTime", "field_24128", "warningTime", "f_62006_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#warningTime
    static void set_field_warningTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "warningTime", "field_24128", "warningTime", "f_62006_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#size
    static jdouble get_field_size(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "size", "field_24129", "size", "f_62007_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#size
    static void set_field_size(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "size", "field_24129", "size", "f_62007_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#sizeLerpTime
    static jlong get_field_sizeLerpTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "sizeLerpTime", "field_24130", "sizeLerpTime", "f_62008_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#sizeLerpTime
    static void set_field_sizeLerpTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "sizeLerpTime", "field_24130", "sizeLerpTime", "f_62008_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.border.WorldBorder$Properties#sizeLerpTarget
    static jdouble get_field_sizeLerpTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "sizeLerpTarget", "field_24131", "sizeLerpTarget", "f_62009_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.border.WorldBorder$Properties#sizeLerpTarget
    static void set_field_sizeLerpTarget(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "sizeLerpTarget", "field_24131", "sizeLerpTarget", "f_62009_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_getCenterX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCenterX", "method_27356", "getCenterX", "m_62036_"), "()D");
    }

    static jdouble getCenterX(const jobject& obj) {
                
       const auto methodID = methodID_getCenterX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCenterZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCenterZ", "method_27359", "getCenterZ", "m_62042_"), "()D");
    }

    static jdouble getCenterZ(const jobject& obj) {
                
       const auto methodID = methodID_getCenterZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDamagePerBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getDamagePerBlock", "method_27360", "getDamagePerBlock", "m_62043_"), "()D");
    }

    static jdouble getDamagePerBlock(const jobject& obj) {
                
       const auto methodID = methodID_getDamagePerBlock();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSafeZone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getSafeZone", "method_27361", "getSafeZone", "m_62044_"), "()D");
    }

    static jdouble getSafeZone(const jobject& obj) {
                
       const auto methodID = methodID_getSafeZone();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWarningBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getWarningBlocks", "method_27362", "getWarningBlocks", "m_62045_"), "()I");
    }

    static jint getWarningBlocks(const jobject& obj) {
                
       const auto methodID = methodID_getWarningBlocks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWarningTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getWarningTime", "method_27363", "getWarningTime", "m_62046_"), "()I");
    }

    static jint getWarningTime(const jobject& obj) {
                
       const auto methodID = methodID_getWarningTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getSize", "method_27364", "getSize", "m_62047_"), "()D");
    }

    static jdouble getSize(const jobject& obj) {
                
       const auto methodID = methodID_getSize();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSizeLerpTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getSizeLerpTime", "method_27365", "getSizeLerpTime", "m_62048_"), "()J");
    }

    static jlong getSizeLerpTime(const jobject& obj) {
                
       const auto methodID = methodID_getSizeLerpTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSizeLerpTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getSizeLerpTarget", "method_27366", "getSizeLerpTarget", "m_62049_"), "()D");
    }

    static jdouble getSizeLerpTarget(const jobject& obj) {
                
       const auto methodID = methodID_getSizeLerpTarget();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_fromDynamic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_27358", "fromDynamic", "m_62037_"), "(Lcom/mojang/serialization/DynamicLike;Ldut$c;)Ldut$c;");
    }

    static jobject fromDynamic(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromDynamic();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_27357", "writeNbt", "m_62040_"), "(Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BORDER_WORLDBORDER$PROPERTIES_HPP