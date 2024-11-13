// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_SERVERENTITYMANAGER$LISTENER_HPP
#define NET_MINECRAFT_SERVER_WORLD_SERVERENTITYMANAGER$LISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.ServerEntityManager$Listener
 * Remapped: dxr$a
 */
namespace ServerEntityManager$Listener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxr$a", "net/minecraft/world/level/entity/PersistentEntitySectionManager$Callback", "net/minecraft/class_5579$class_5580", "net/minecraft/server/world/ServerEntityManager$Listener", "net/minecraft/src/C_141295_$C_141296_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.world.ServerEntityManager$Listener#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entity", "field_27272", "entity", "f_157609_"), "Ldxg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ServerEntityManager$Listener#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entity", "field_27272", "entity", "f_157609_"), "Ldxg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.world.ServerEntityManager$Listener#sectionPos
    static jlong get_field_sectionPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentSectionKey", "field_27273", "sectionPos", "f_157610_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ServerEntityManager$Listener#sectionPos
    static void set_field_sectionPos(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentSectionKey", "field_27273", "sectionPos", "f_157610_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.world.ServerEntityManager$Listener#section
    static jobject get_field_section(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "currentSection", "field_27274", "section", "f_157611_"), "Ldxk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ServerEntityManager$Listener#section
    static void set_field_section(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "currentSection", "field_27274", "section", "f_157611_"), "Ldxk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_updateEntityPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onMove", "method_31749", "updateEntityPosition", "m_142044_"), "()V");
    }

    static void updateEntityPosition(const jobject& obj) {
                
       const auto methodID = methodID_updateEntityPosition();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateLoadStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateStatus", "method_31865", "updateLoadStatus", "m_157620_"), "(Ldxt;Ldxt;)V");
    }

    static void updateLoadStatus(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateLoadStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onRemove", "method_31750", "remove", "m_142472_"), "(Lbsr$c;)V");
    }

    static void remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_SERVERENTITYMANAGER$LISTENER_HPP