// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_BEACONBLOCKENTITY$BEAMSEGMENT_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_BEACONBLOCKENTITY$BEAMSEGMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.BeaconBlockEntity$BeamSegment
 * Remapped: dqc$a
 */
namespace BeaconBlockEntity$BeamSegment {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqc$a", "net/minecraft/world/level/block/entity/BeaconBlockEntity$BeaconBeamSection", "net/minecraft/class_2580$class_2581", "net/minecraft/block/entity/BeaconBlockEntity$BeamSegment", "net/minecraft/src/C_1981_$C_1983_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.block.entity.BeaconBlockEntity$BeamSegment#color
    static jint get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_11805", "color", "f_58715_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.block.entity.BeaconBlockEntity$BeamSegment#color
    static void set_field_color(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_11805", "color", "f_58715_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.BeaconBlockEntity$BeamSegment#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_11804", "height", "f_58716_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.BeaconBlockEntity$BeamSegment#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_11804", "height", "f_58716_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_increaseHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "increaseHeight", "method_10942", "increaseHeight", "m_58719_"), "()V");
    }

    static void increaseHeight(const jobject& obj) {
                
       const auto methodID = methodID_increaseHeight();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getColor", "method_10944", "getColor", "m_58722_"), "()I");
    }

    static jint getColor(const jobject& obj) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getHeight", "method_10943", "getHeight", "m_58723_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_BEACONBLOCKENTITY$BEAMSEGMENT_HPP