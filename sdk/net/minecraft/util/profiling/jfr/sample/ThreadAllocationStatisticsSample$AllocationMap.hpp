// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_THREADALLOCATIONSTATISTICSSAMPLE$ALLOCATIONMAP_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_THREADALLOCATIONSTATISTICSSAMPLE$ALLOCATIONMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample$AllocationMap
 * Remapped: bog$a
 */
namespace ThreadAllocationStatisticsSample$AllocationMap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bog$a", "net/minecraft/util/profiling/jfr/stats/ThreadAllocationStat$Summary", "net/minecraft/class_6530$class_6531", "net/minecraft/util/profiling/jfr/sample/ThreadAllocationStatisticsSample$AllocationMap", "net/minecraft/src/C_182835_$C_182836_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample$AllocationMap#allocations
    static jobject get_field_allocations(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "allocationsPerSecondByThread", "comp_51", "allocations", "f_185811_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.sample.ThreadAllocationStatisticsSample$AllocationMap#allocations
    static void set_field_allocations(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "allocationsPerSecondByThread", "comp_51", "allocations", "f_185811_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__allocations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "allocationsPerSecondByThread", "comp_51", "allocations", "f_185811_"), "()Ljava/util/Map;");
    }

    static jobject _allocations(const jobject& obj) {
                
       const auto methodID = methodID__allocations();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_SAMPLE_THREADALLOCATIONSTATISTICSSAMPLE$ALLOCATIONMAP_HPP