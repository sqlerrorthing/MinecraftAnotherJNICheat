// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_ENTITY_ENTITYTRACKINGSECTION_HPP
#define NET_MINECRAFT_WORLD_ENTITY_ENTITYTRACKINGSECTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.entity.EntityTrackingSection
 * Remapped: dxk
 */
namespace EntityTrackingSection {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxk", "net/minecraft/world/level/entity/EntitySection", "net/minecraft/class_5572", "net/minecraft/world/entity/EntityTrackingSection", "net/minecraft/src/C_141284_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.entity.EntityTrackingSection#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27247", "LOGGER", "f_156826_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.EntityTrackingSection#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27247", "LOGGER", "f_156826_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.entity.EntityTrackingSection#collection
    static jobject get_field_collection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "storage", "field_27248", "collection", "f_156827_"), "Laxf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.EntityTrackingSection#collection
    static void set_field_collection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "storage", "field_27248", "collection", "f_156827_"), "Laxf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.entity.EntityTrackingSection#status
    static jobject get_field_status(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkStatus", "field_27249", "status", "f_156828_"), "Ldxt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.entity.EntityTrackingSection#status
    static void set_field_status(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkStatus", "field_27249", "status", "f_156828_"), "Ldxt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_31764", "add", "m_188346_"), "(Ldxg;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "remove", "method_31767", "remove", "m_188355_"), "(Ldxg;)Z");
    }

    static jboolean remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_forEach() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntities", "method_31765", "forEach", "m_260830_"), "(Lewx;Laxa;)Laxa$a;");
    }

    static jobject forEach(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_forEach();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__forEach() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntities", "method_31762", "forEach", "m_188348_"), "(Ldxn;Lewx;Laxa;)Laxa$a;");
    }

    static jobject _forEach(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__forEach();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isEmpty", "method_31761", "isEmpty", "m_156833_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getEntities", "method_31766", "stream", "m_156845_"), "()Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getStatus", "method_31768", "getStatus", "m_156848_"), "()Ldxt;");
    }

    static jobject getStatus(const jobject& obj) {
                
       const auto methodID = methodID_getStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_swapStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateChunkStatus", "method_31763", "swapStatus", "m_156838_"), "(Ldxt;)Ldxt;");
    }

    static jobject swapStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_swapStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "size", "method_31769", "size", "m_156849_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_ENTITY_ENTITYTRACKINGSECTION_HPP