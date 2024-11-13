// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_LEAVESFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_LEAVESFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.LeavesFix
 * Remapped: bfa
 */
namespace LeavesFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfa", "net/minecraft/util/datafix/fixes/LeavesFix", "net/minecraft/class_1191", "net/minecraft/datafixer/fix/LeavesFix", "net/minecraft/src/C_313_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29886
    [[maybe_unused]] static jint get_field_field_29886() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORTH_WEST_MASK", "field_29886", "field_29886", "f_145445_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29886
    [[maybe_unused]] static void set_field_field_29886(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORTH_WEST_MASK", "field_29886", "field_29886", "f_145445_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29887
    [[maybe_unused]] static jint get_field_field_29887() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WEST_MASK", "field_29887", "field_29887", "f_145446_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29887
    [[maybe_unused]] static void set_field_field_29887(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WEST_MASK", "field_29887", "field_29887", "f_145446_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29888
    [[maybe_unused]] static jint get_field_field_29888() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SOUTH_WEST_MASK", "field_29888", "field_29888", "f_145447_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29888
    [[maybe_unused]] static void set_field_field_29888(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SOUTH_WEST_MASK", "field_29888", "field_29888", "f_145447_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29889
    [[maybe_unused]] static jint get_field_field_29889() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SOUTH_MASK", "field_29889", "field_29889", "f_145448_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29889
    [[maybe_unused]] static void set_field_field_29889(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SOUTH_MASK", "field_29889", "field_29889", "f_145448_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29890
    [[maybe_unused]] static jint get_field_field_29890() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOUTH_EAST_MASK", "field_29890", "field_29890", "f_145449_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29890
    [[maybe_unused]] static void set_field_field_29890(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOUTH_EAST_MASK", "field_29890", "field_29890", "f_145449_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29891
    [[maybe_unused]] static jint get_field_field_29891() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EAST_MASK", "field_29891", "field_29891", "f_145450_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29891
    [[maybe_unused]] static void set_field_field_29891(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EAST_MASK", "field_29891", "field_29891", "f_145450_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29892
    [[maybe_unused]] static jint get_field_field_29892() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "NORTH_EAST_MASK", "field_29892", "field_29892", "f_145451_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29892
    [[maybe_unused]] static void set_field_field_29892(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "NORTH_EAST_MASK", "field_29892", "field_29892", "f_145451_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29893
    [[maybe_unused]] static jint get_field_field_29893() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NORTH_MASK", "field_29893", "field_29893", "f_145452_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29893
    [[maybe_unused]] static void set_field_field_29893(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NORTH_MASK", "field_29893", "field_29893", "f_145452_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#AXIAL_OFFSETS
    [[maybe_unused]] static jint get_field_AXIAL_OFFSETS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DIRECTIONS", "field_5687", "AXIAL_OFFSETS", "f_16200_"), "[[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#AXIAL_OFFSETS
    [[maybe_unused]] static void set_field_AXIAL_OFFSETS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DIRECTIONS", "field_5687", "AXIAL_OFFSETS", "f_16200_"), "[[I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29894
    [[maybe_unused]] static jint get_field_field_29894() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DECAY_DISTANCE", "field_29894", "field_29894", "f_145453_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29894
    [[maybe_unused]] static void set_field_field_29894(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DECAY_DISTANCE", "field_29894", "field_29894", "f_145453_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29895
    [[maybe_unused]] static jint get_field_field_29895() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SIZE_BITS", "field_29895", "field_29895", "f_145454_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29895
    [[maybe_unused]] static void set_field_field_29895(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SIZE_BITS", "field_29895", "field_29895", "f_145454_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29896
    [[maybe_unused]] static jint get_field_field_29896() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "SIZE", "field_29896", "field_29896", "f_145455_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix#field_29896
    [[maybe_unused]] static void set_field_field_29896(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "SIZE", "field_29896", "field_29896", "f_145455_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.LeavesFix#LEAVES_MAP
    [[maybe_unused]] static jobject get_field_LEAVES_MAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "LEAVES", "field_5688", "LEAVES_MAP", "f_16201_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.LeavesFix#LEAVES_MAP
    [[maybe_unused]] static void set_field_LEAVES_MAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "LEAVES", "field_5688", "LEAVES_MAP", "f_16201_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.LeavesFix#LOGS_MAP
    [[maybe_unused]] static jobject get_field_LOGS_MAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "LOGS", "field_5686", "LOGS_MAP", "f_16202_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.LeavesFix#LOGS_MAP
    [[maybe_unused]] static void set_field_LOGS_MAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "LOGS", "field_5686", "LOGS_MAP", "f_16202_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_packLocalPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getIndex", "method_5051", "packLocalPos", "m_16210_"), "(III)I");
    }

    static jint packLocalPos(const jint& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_packLocalPos();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getX", "method_5052", "getX", "m_16208_"), "(I)I");
    }

    static jint getX(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getY", "method_5062", "getY", "m_16245_"), "(I)I");
    }

    static jint getY(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getZ", "method_5050", "getZ", "m_16247_"), "(I)I");
    }

    static jint getZ(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBoundaryClassBit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSideMask", "method_5061", "getBoundaryClassBit", "m_16236_"), "(ZZZZ)I");
    }

    static jint getBoundaryClassBit(const jboolean& arg0, const jboolean& arg1, const jboolean& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getBoundaryClassBit();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_LEAVESFIX_HPP