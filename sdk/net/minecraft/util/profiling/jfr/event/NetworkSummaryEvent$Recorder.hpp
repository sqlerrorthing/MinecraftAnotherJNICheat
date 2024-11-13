// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_NETWORKSUMMARYEVENT$RECORDER_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_NETWORKSUMMARYEVENT$RECORDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder
 * Remapped: net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$b
 */
namespace NetworkSummaryEvent$Recorder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$b", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$SumAggregation", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$class_6779", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$Recorder", "net/minecraft/util/profiling/jfr/event/NetworkSummaryEvent$C_183111_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#sentBytes
    static jobject get_field_sentBytes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sentBytes", "field_35647", "sentBytes", "f_195569_"), "Ljava/util/concurrent/atomic/AtomicLong;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#sentBytes
    static void set_field_sentBytes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sentBytes", "field_35647", "sentBytes", "f_195569_"), "Ljava/util/concurrent/atomic/AtomicLong;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#sentPackets
    static jobject get_field_sentPackets(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sentPackets", "field_35648", "sentPackets", "f_195570_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#sentPackets
    static void set_field_sentPackets(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sentPackets", "field_35648", "sentPackets", "f_195570_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#receivedBytes
    static jobject get_field_receivedBytes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "receivedBytes", "field_35649", "receivedBytes", "f_195571_"), "Ljava/util/concurrent/atomic/AtomicLong;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#receivedBytes
    static void set_field_receivedBytes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "receivedBytes", "field_35649", "receivedBytes", "f_195571_"), "Ljava/util/concurrent/atomic/AtomicLong;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#receivedPackets
    static jobject get_field_receivedPackets(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "receivedPackets", "field_35650", "receivedPackets", "f_195572_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#receivedPackets
    static void set_field_receivedPackets(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "receivedPackets", "field_35650", "receivedPackets", "f_195572_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#event
    static jobject get_field_event(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "event", "field_35651", "event", "f_195573_"), "Lnet/minecraft/util/profiling/jfr/event/NetworkSummaryEvent;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiling.jfr.event.NetworkSummaryEvent$Recorder#event
    static void set_field_event(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "event", "field_35651", "event", "f_195573_"), "Lnet/minecraft/util/profiling/jfr/event/NetworkSummaryEvent;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addSentPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "trackSentPacket", "method_39495", "addSentPacket", "m_195577_"), "(I)V");
    }

    static void addSentPacket(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_addSentPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addReceivedPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "trackReceivedPacket", "method_39496", "addReceivedPacket", "m_195579_"), "(I)V");
    }

    static void addReceivedPacket(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_addReceivedPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_commit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "commitEvent", "method_39494", "commit", "m_195576_"), "()V");
    }

    static void commit(const jobject& obj) {
                
       const auto methodID = methodID_commit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_NETWORKSUMMARYEVENT$RECORDER_HPP