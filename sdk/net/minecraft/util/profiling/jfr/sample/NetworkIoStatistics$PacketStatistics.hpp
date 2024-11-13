// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_NETWORKIOSTATISTICS$PACKETSTATISTICS_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_NETWORKIOSTATISTICS$PACKETSTATISTICS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics$PacketStatistics
 * Remapped: boe$a
 */
namespace NetworkIoStatistics$PacketStatistics {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("boe$a", "net/minecraft/util/profiling/jfr/stats/IoSummary$CountAndSize", "net/minecraft/class_6767$class_6768", "net/minecraft/util/profiling/jfr/sample/NetworkIoStatistics$PacketStatistics", "net/minecraft/src/C_313480_$C_313339_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics$PacketStatistics#totalCount
    static jlong get_field_totalCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "totalCount", "comp_257", "totalCount", "f_314527_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics$PacketStatistics#totalCount
    static void set_field_totalCount(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "totalCount", "comp_257", "totalCount", "f_314527_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics$PacketStatistics#totalSize
    static jlong get_field_totalSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "totalSize", "comp_258", "totalSize", "f_316214_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics$PacketStatistics#totalSize
    static void set_field_totalSize(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "totalSize", "comp_258", "totalSize", "f_316214_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics$PacketStatistics#COMPARATOR
    [[maybe_unused]] static jobject get_field_COMPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIZE_THEN_COUNT", "field_35586", "COMPARATOR", "f_315757_"), "Ljava/util/Comparator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.util.profiling.jfr.sample.NetworkIoStatistics$PacketStatistics#COMPARATOR
    [[maybe_unused]] static void set_field_COMPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIZE_THEN_COUNT", "field_35586", "COMPARATOR", "f_315757_"), "Ljava/util/Comparator;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_39444", "add", "m_320497_"), "(Lboe$a;)Lboe$a;");
    }

    static jobject add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAverageSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "averageSize", "method_56986", "getAverageSize", "m_324761_"), "()F");
    }

    static jfloat getAverageSize(const jobject& obj) {
                
       const auto methodID = methodID_getAverageSize();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__totalCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "totalCount", "comp_257", "totalCount", "f_314527_"), "()J");
    }

    static jlong _totalCount(const jobject& obj) {
                
       const auto methodID = methodID__totalCount();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID__totalSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "totalSize", "comp_258", "totalSize", "f_316214_"), "()J");
    }

    static jlong _totalSize(const jobject& obj) {
                
       const auto methodID = methodID__totalSize();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_NETWORKIOSTATISTICS$PACKETSTATISTICS_HPP