// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TICK_TICKPRIORITY_HPP
#define NET_MINECRAFT_WORLD_TICK_TICKPRIORITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.tick.TickPriority
 * Remapped: eyx
 */
namespace TickPriority {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eyx", "net/minecraft/world/ticks/TickPriority", "net/minecraft/class_1953", "net/minecraft/world/tick/TickPriority", "net/minecraft/src/C_183052_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.tick.TickPriority#EXTREMELY_HIGH
    [[maybe_unused]] static jobject get_field_EXTREMELY_HIGH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXTREMELY_HIGH", "field_9315", "EXTREMELY_HIGH", "EXTREMELY_HIGH"), "Leyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickPriority#EXTREMELY_HIGH
    [[maybe_unused]] static void set_field_EXTREMELY_HIGH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXTREMELY_HIGH", "field_9315", "EXTREMELY_HIGH", "EXTREMELY_HIGH"), "Leyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.tick.TickPriority#VERY_HIGH
    [[maybe_unused]] static jobject get_field_VERY_HIGH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERY_HIGH", "field_9313", "VERY_HIGH", "VERY_HIGH"), "Leyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickPriority#VERY_HIGH
    [[maybe_unused]] static void set_field_VERY_HIGH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERY_HIGH", "field_9313", "VERY_HIGH", "VERY_HIGH"), "Leyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.tick.TickPriority#HIGH
    [[maybe_unused]] static jobject get_field_HIGH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HIGH", "field_9310", "HIGH", "HIGH"), "Leyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickPriority#HIGH
    [[maybe_unused]] static void set_field_HIGH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HIGH", "field_9310", "HIGH", "HIGH"), "Leyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.tick.TickPriority#NORMAL
    [[maybe_unused]] static jobject get_field_NORMAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NORMAL", "field_9314", "NORMAL", "NORMAL"), "Leyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickPriority#NORMAL
    [[maybe_unused]] static void set_field_NORMAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NORMAL", "field_9314", "NORMAL", "NORMAL"), "Leyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.tick.TickPriority#LOW
    [[maybe_unused]] static jobject get_field_LOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOW", "field_9316", "LOW", "LOW"), "Leyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickPriority#LOW
    [[maybe_unused]] static void set_field_LOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOW", "field_9316", "LOW", "LOW"), "Leyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.tick.TickPriority#VERY_LOW
    [[maybe_unused]] static jobject get_field_VERY_LOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "VERY_LOW", "field_9309", "VERY_LOW", "VERY_LOW"), "Leyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickPriority#VERY_LOW
    [[maybe_unused]] static void set_field_VERY_LOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "VERY_LOW", "field_9309", "VERY_LOW", "VERY_LOW"), "Leyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.tick.TickPriority#EXTREMELY_LOW
    [[maybe_unused]] static jobject get_field_EXTREMELY_LOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "EXTREMELY_LOW", "field_9311", "EXTREMELY_LOW", "EXTREMELY_LOW"), "Leyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickPriority#EXTREMELY_LOW
    [[maybe_unused]] static void set_field_EXTREMELY_LOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "EXTREMELY_LOW", "field_9311", "EXTREMELY_LOW", "EXTREMELY_LOW"), "Leyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.tick.TickPriority#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "value", "field_9308", "index", "f_193438_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.tick.TickPriority#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "value", "field_9308", "index", "f_193438_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Leyx;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Leyx;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_byIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byValue", "method_8680", "byIndex", "m_193446_"), "(I)Leyx;");
    }

    static jobject byIndex(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byIndex();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getValue", "method_8681", "getIndex", "m_193445_"), "()I");
    }

    static jint getIndex(const jobject& obj) {
                
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TICK_TICKPRIORITY_HPP