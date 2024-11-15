// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_SCULKCATALYSTBLOCKENTITY$LISTENER_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_SCULKCATALYSTBLOCKENTITY$LISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.SculkCatalystBlockEntity$Listener
 * Remapped: dro$a
 */
namespace SculkCatalystBlockEntity$Listener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dro$a", "net/minecraft/world/level/block/entity/SculkCatalystBlockEntity$CatalystListener", "net/minecraft/class_7132$class_8510", "net/minecraft/block/entity/SculkCatalystBlockEntity$Listener", "net/minecraft/src/C_213121_$C_279501_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#RANGE
    [[maybe_unused]] static jint get_field_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PULSE_TICKS", "field_44611", "RANGE", "f_279651_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#RANGE
    [[maybe_unused]] static void set_field_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PULSE_TICKS", "field_44611", "RANGE", "f_279651_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#spreadManager
    static jobject get_field_spreadManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sculkSpreader", "field_44612", "spreadManager", "f_279632_"), "Ldmu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#spreadManager
    static void set_field_spreadManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sculkSpreader", "field_44612", "spreadManager", "f_279632_"), "Ldmu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockState", "field_44613", "state", "f_279646_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockState", "field_44613", "state", "f_279646_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#positionSource
    static jobject get_field_positionSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "positionSource", "field_44614", "positionSource", "f_279622_"), "Ldyd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkCatalystBlockEntity$Listener#positionSource
    static void set_field_positionSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "positionSource", "field_44614", "positionSource", "f_279622_"), "Ldyd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPositionSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getListenerSource", "method_32946", "getPositionSource", "m_142460_"), "()Ldyd;");
    }

    static jobject getPositionSource(const jobject& obj) {
                
       const auto methodID = methodID_getPositionSource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getListenerRadius", "method_32948", "getRange", "m_142078_"), "()I");
    }

    static jint getRange(const jobject& obj) {
                
       const auto methodID = methodID_getRange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTriggerOrder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getDeliveryMode", "method_45472", "getTriggerOrder", "m_247514_"), "()Ldyb$a;");
    }

    static jobject getTriggerOrder(const jobject& obj) {
                
       const auto methodID = methodID_getTriggerOrder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_listen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleGameEvent", "method_32947", "listen", "m_214068_"), "(Laqu;Ljm;Ldxz$a;Lexc;)Z");
    }

    static jboolean listen(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_listen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getSpreadManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getSculkSpreader", "method_51362", "getSpreadManager", "m_280490_"), "()Ldmu;");
    }

    static jobject getSpreadManager(const jobject& obj) {
                
       const auto methodID = methodID_getSpreadManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_bloom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bloom", "method_51360", "bloom", "m_280309_"), "(Laqu;Ljd;Ldtc;Layw;)V");
    }

    static void bloom(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_bloom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_triggerCriteria() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryAwardItSpreadsAdvancement", "method_51361", "triggerCriteria", "m_280407_"), "(Ldcw;Lbtn;)V");
    }

    static void triggerCriteria(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_triggerCriteria();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_SCULKCATALYSTBLOCKENTITY$LISTENER_HPP