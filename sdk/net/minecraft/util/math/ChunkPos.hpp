// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_CHUNKPOS_HPP
#define NET_MINECRAFT_UTIL_MATH_CHUNKPOS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.ChunkPos
 * Remapped: dcd
 */
namespace ChunkPos {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcd", "net/minecraft/world/level/ChunkPos", "net/minecraft/class_1923", "net/minecraft/util/math/ChunkPos", "net/minecraft/src/C_1560_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_36299
    [[maybe_unused]] static jint get_field_field_36299() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SAFETY_MARGIN", "field_36299", "field_36299", "f_199440_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_36299
    [[maybe_unused]] static void set_field_field_36299(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SAFETY_MARGIN", "field_36299", "field_36299", "f_199440_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.ChunkPos#MARKER
    [[maybe_unused]] static jlong get_field_MARKER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INVALID_CHUNK_POS", "field_17348", "MARKER", "f_45577_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.ChunkPos#MARKER
    [[maybe_unused]] static void set_field_MARKER(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INVALID_CHUNK_POS", "field_17348", "MARKER", "f_45577_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.ChunkPos#ORIGIN
    [[maybe_unused]] static jobject get_field_ORIGIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ZERO", "field_35107", "ORIGIN", "f_186419_"), "Ldcd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.ChunkPos#ORIGIN
    [[maybe_unused]] static void set_field_ORIGIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ZERO", "field_35107", "ORIGIN", "f_186419_"), "Ldcd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_30953
    [[maybe_unused]] static jlong get_field_field_30953() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "COORD_BITS", "field_30953", "field_30953", "f_151375_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_30953
    [[maybe_unused]] static void set_field_field_30953(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "COORD_BITS", "field_30953", "field_30953", "f_151375_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_30954
    [[maybe_unused]] static jlong get_field_field_30954() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "COORD_MASK", "field_30954", "field_30954", "f_151376_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_30954
    [[maybe_unused]] static void set_field_field_30954(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "COORD_MASK", "field_30954", "field_30954", "f_151376_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_30955
    [[maybe_unused]] static jint get_field_field_30955() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "REGION_BITS", "field_30955", "field_30955", "f_151377_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_30955
    [[maybe_unused]] static void set_field_field_30955(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "REGION_BITS", "field_30955", "field_30955", "f_151377_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.ChunkPos#field_38224
    [[maybe_unused]] static jint get_field_field_38224() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REGION_SIZE", "field_38224", "field_38224", "f_220335_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.ChunkPos#field_38224
    [[maybe_unused]] static void set_field_field_38224(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REGION_SIZE", "field_38224", "field_38224", "f_220335_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_30956
    [[maybe_unused]] static jint get_field_field_30956() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "REGION_MASK", "field_30956", "field_30956", "f_151378_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_30956
    [[maybe_unused]] static void set_field_field_30956(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "REGION_MASK", "field_30956", "field_30956", "f_151378_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.ChunkPos#field_38225
    [[maybe_unused]] static jint get_field_field_38225() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REGION_MAX_INDEX", "field_38225", "field_38225", "f_220336_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.ChunkPos#field_38225
    [[maybe_unused]] static void set_field_field_38225(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REGION_MAX_INDEX", "field_38225", "field_38225", "f_220336_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.util.math.ChunkPos#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "x", "field_9181", "x", "f_45578_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.math.ChunkPos#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "x", "field_9181", "x", "f_45578_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.util.math.ChunkPos#z
    static jint get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "z", "field_9180", "z", "f_45579_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.math.ChunkPos#z
    static void set_field_z(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "z", "field_9180", "z", "f_45579_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_30957
    [[maybe_unused]] static jint get_field_field_30957() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "HASH_A", "field_30957", "field_30957", "f_151379_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_30957
    [[maybe_unused]] static void set_field_field_30957(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "HASH_A", "field_30957", "field_30957", "f_151379_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_30958
    [[maybe_unused]] static jint get_field_field_30958() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "HASH_C", "field_30958", "field_30958", "f_151380_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_30958
    [[maybe_unused]] static void set_field_field_30958(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "HASH_C", "field_30958", "field_30958", "f_151380_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ChunkPos#field_30959
    [[maybe_unused]] static jint get_field_field_30959() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "HASH_Z_XOR", "field_30959", "field_30959", "f_151381_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ChunkPos#field_30959
    [[maybe_unused]] static void set_field_field_30959(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "HASH_Z_XOR", "field_30959", "field_30959", "f_151381_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_fromRegion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "minFromRegion", "method_42305", "fromRegion", "m_220337_"), "(II)Ldcd;");
    }

    static jobject fromRegion(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromRegion();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fromRegionCenter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "maxFromRegion", "method_42306", "fromRegionCenter", "m_220340_"), "(II)Ldcd;");
    }

    static jobject fromRegionCenter(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromRegionCenter();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_toLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "toLong", "method_8324", "toLong", "m_45588_"), "()J");
    }

    static jlong toLong(const jobject& obj) {
                
       const auto methodID = methodID_toLong();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID__toLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "asLong", "method_8331", "toLong", "m_45589_"), "(II)J");
    }

    static jlong _toLong(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__toLong();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___toLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "asLong", "method_37232", "toLong", "m_151388_"), "(Ljd;)J");
    }

    static jlong __toLong(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID___toLong();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getPackedX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getX", "method_8325", "getPackedX", "m_45592_"), "(J)I");
    }

    static jint getPackedX(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getPackedX();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getPackedZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getZ", "method_8332", "getPackedZ", "m_45602_"), "(J)I");
    }

    static jint getPackedZ(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getPackedZ();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_hashCode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "hash", "method_42307", "hashCode", "m_220343_"), "(II)I");
    }

    static jint hashCode(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_hashCode();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCenterX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMiddleBlockX", "method_33940", "getCenterX", "m_151390_"), "()I");
    }

    static jint getCenterX(const jobject& obj) {
                
       const auto methodID = methodID_getCenterX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCenterZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMiddleBlockZ", "method_33942", "getCenterZ", "m_151393_"), "()I");
    }

    static jint getCenterZ(const jobject& obj) {
                
       const auto methodID = methodID_getCenterZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStartX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getMinBlockX", "method_8326", "getStartX", "m_45604_"), "()I");
    }

    static jint getStartX(const jobject& obj) {
                
       const auto methodID = methodID_getStartX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStartZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getMinBlockZ", "method_8328", "getStartZ", "m_45605_"), "()I");
    }

    static jint getStartZ(const jobject& obj) {
                
       const auto methodID = methodID_getStartZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEndX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getMaxBlockX", "method_8327", "getEndX", "m_45608_"), "()I");
    }

    static jint getEndX(const jobject& obj) {
                
       const auto methodID = methodID_getEndX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEndZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getMaxBlockZ", "method_8329", "getEndZ", "m_45609_"), "()I");
    }

    static jint getEndZ(const jobject& obj) {
                
       const auto methodID = methodID_getEndZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegionX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getRegionX", "method_17885", "getRegionX", "m_45610_"), "()I");
    }

    static jint getRegionX(const jobject& obj) {
                
       const auto methodID = methodID_getRegionX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegionZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getRegionZ", "method_17886", "getRegionZ", "m_45612_"), "()I");
    }

    static jint getRegionZ(const jobject& obj) {
                
       const auto methodID = methodID_getRegionZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegionRelativeX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getRegionLocalX", "method_17887", "getRegionRelativeX", "m_45613_"), "()I");
    }

    static jint getRegionRelativeX(const jobject& obj) {
                
       const auto methodID = methodID_getRegionRelativeX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegionRelativeZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getRegionLocalZ", "method_17888", "getRegionRelativeZ", "m_45614_"), "()I");
    }

    static jint getRegionRelativeZ(const jobject& obj) {
                
       const auto methodID = methodID_getRegionRelativeZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockAt", "method_35231", "getBlockPos", "m_151384_"), "(III)Ljd;");
    }

    static jobject getBlockPos(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getOffsetX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockX", "method_33939", "getOffsetX", "m_151382_"), "(I)I");
    }

    static jint getOffsetX(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getOffsetX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOffsetZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBlockZ", "method_33941", "getOffsetZ", "m_151391_"), "(I)I");
    }

    static jint getOffsetZ(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getOffsetZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCenterAtY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMiddleBlockPosition", "method_33943", "getCenterAtY", "m_151394_"), "(I)Ljd;");
    }

    static jobject getCenterAtY(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getCenterAtY();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStartPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getWorldPosition", "method_8323", "getStartPos", "m_45615_"), "()Ljd;");
    }

    static jobject getStartPos(const jobject& obj) {
                
       const auto methodID = methodID_getStartPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChebyshevDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChessboardDistance", "method_24022", "getChebyshevDistance", "m_45594_"), "(Ldcd;)I");
    }

    static jint getChebyshevDistance(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getChebyshevDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getChebyshevDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getChessboardDistance", "method_60510", "getChebyshevDistance", "m_340425_"), "(II)I");
    }

    static jint _getChebyshevDistance(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID__getChebyshevDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSquaredDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "distanceSquared", "method_52566", "getSquaredDistance", "m_293627_"), "(Ldcd;)I");
    }

    static jint getSquaredDistance(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSquaredDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getSquaredDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "distanceSquared", "method_52567", "getSquaredDistance", "m_294557_"), "(J)I");
    }

    static jint _getSquaredDistance(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID__getSquaredDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___getSquaredDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "distanceSquared", "method_52568", "getSquaredDistance", "m_292874_"), "(II)I");
    }

    static jint __getSquaredDistance(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID___getSquaredDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "rangeClosed", "method_19280", "stream", "m_45596_"), "(Ldcd;I)Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "rangeClosed", "method_19281", "stream", "m_45599_"), "(Ldcd;Ldcd;)Ljava/util/stream/Stream;");
    }

    static jobject _stream(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__stream();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_CHUNKPOS_HPP