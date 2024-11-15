// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SOUND_SOUNDEVENT_HPP
#define NET_MINECRAFT_SOUND_SOUNDEVENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.sound.SoundEvent
 * Remapped: avo
 */
namespace SoundEvent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("avo", "net/minecraft/sounds/SoundEvent", "net/minecraft/class_3414", "net/minecraft/sound/SoundEvent", "net/minecraft/src/C_123_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.sound.SoundEvent#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_41698", "CODEC", "f_263124_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.SoundEvent#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_41698", "CODEC", "f_263124_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.sound.SoundEvent#ENTRY_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_41699", "ENTRY_CODEC", "f_263130_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.SoundEvent#ENTRY_CODEC
    [[maybe_unused]] static void set_field_ENTRY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_41699", "ENTRY_CODEC", "f_263130_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.sound.SoundEvent#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DIRECT_STREAM_CODEC", "field_48278", "PACKET_CODEC", "f_314575_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.SoundEvent#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DIRECT_STREAM_CODEC", "field_48278", "PACKET_CODEC", "f_314575_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.sound.SoundEvent#ENTRY_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_48279", "ENTRY_PACKET_CODEC", "f_314687_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.sound.SoundEvent#ENTRY_PACKET_CODEC
    [[maybe_unused]] static void set_field_ENTRY_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_48279", "ENTRY_PACKET_CODEC", "f_314687_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.sound.SoundEvent#DEFAULT_DISTANCE_TO_TRAVEL
    [[maybe_unused]] static jfloat get_field_DEFAULT_DISTANCE_TO_TRAVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_RANGE", "field_41661", "DEFAULT_DISTANCE_TO_TRAVEL", "f_262723_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.sound.SoundEvent#DEFAULT_DISTANCE_TO_TRAVEL
    [[maybe_unused]] static void set_field_DEFAULT_DISTANCE_TO_TRAVEL(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_RANGE", "field_41661", "DEFAULT_DISTANCE_TO_TRAVEL", "f_262723_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.sound.SoundEvent#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "location", "field_14533", "id", "f_11656_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.SoundEvent#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "location", "field_14533", "id", "f_11656_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.SoundEvent#distanceToTravel
    static jfloat get_field_distanceToTravel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "range", "field_38690", "distanceToTravel", "f_215659_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.SoundEvent#distanceToTravel
    static void set_field_distanceToTravel(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "range", "field_38690", "distanceToTravel", "f_215659_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.sound.SoundEvent#staticDistance
    static jboolean get_field_staticDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "newSystem", "field_38691", "staticDistance", "f_215660_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.sound.SoundEvent#staticDistance
    static void set_field_staticDistance(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "newSystem", "field_38691", "staticDistance", "f_215660_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47956", "of", "m_263227_"), "(Lakr;Ljava/util/Optional;)Lavo;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createVariableRangeEvent", "method_47908", "of", "m_262824_"), "(Lakr;)Lavo;");
    }

    static jobject _of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID___of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFixedRangeEvent", "method_47909", "of", "m_262856_"), "(Lakr;F)Lavo;");
    }

    static jobject __of(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID___of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLocation", "method_14833", "getId", "m_11660_"), "()Lakr;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDistanceToTravel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRange", "method_43044", "getDistanceToTravel", "m_215668_"), "(F)F");
    }

    static jfloat getDistanceToTravel(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getDistanceToTravel();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStaticDistanceToTravel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fixedRange", "method_47959", "getStaticDistanceToTravel", "m_263201_"), "()Ljava/util/Optional;");
    }

    static jobject getStaticDistanceToTravel(const jobject& obj) {
                
       const auto methodID = methodID_getStaticDistanceToTravel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SOUND_SOUNDEVENT_HPP