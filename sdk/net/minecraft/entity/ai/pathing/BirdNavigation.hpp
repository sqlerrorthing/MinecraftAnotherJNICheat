// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_PATHING_BIRDNAVIGATION_HPP
#define NET_MINECRAFT_ENTITY_AI_PATHING_BIRDNAVIGATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.pathing.BirdNavigation
 * Remapped: ccy
 */
namespace BirdNavigation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ccy", "net/minecraft/world/entity/ai/navigation/FlyingPathNavigation", "net/minecraft/class_1407", "net/minecraft/entity/ai/pathing/BirdNavigation", "net/minecraft/src/C_756_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createPathNodeNavigator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createPathFinder", "method_6336", "createPathNodeNavigator", "m_5532_"), "(I)Lepu;");
    }

    static jobject createPathNodeNavigator(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_createPathNodeNavigator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canPathDirectlyThrough() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canMoveDirectly", "method_6341", "canPathDirectlyThrough", "m_183431_"), "(Lexc;Lexc;)Z");
    }

    static jboolean canPathDirectlyThrough(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canPathDirectlyThrough();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isAtValidPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canUpdatePath", "method_6358", "isAtValidPosition", "m_7632_"), "()Z");
    }

    static jboolean isAtValidPosition(const jobject& obj) {
                
       const auto methodID = methodID_isAtValidPosition();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getTempMobPos", "method_6347", "getPos", "m_7475_"), "()Lexc;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_findPathTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createPath", "method_6349", "findPathTo", "m_6570_"), "(Lbsr;I)Leps;");
    }

    static jobject findPathTo(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_findPathTo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tick", "method_6360", "tick", "m_7638_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setCanPathThroughDoors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setCanOpenDoors", "method_6332", "setCanPathThroughDoors", "m_26440_"), "(Z)V");
    }

    static void setCanPathThroughDoors(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setCanPathThroughDoors();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canEnterOpenDoors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "canPassDoors", "method_35128", "canEnterOpenDoors", "m_148212_"), "()Z");
    }

    static jboolean canEnterOpenDoors(const jobject& obj) {
                
       const auto methodID = methodID_canEnterOpenDoors();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setCanEnterOpenDoors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setCanPassDoors", "method_6331", "setCanEnterOpenDoors", "m_26443_"), "(Z)V");
    }

    static void setCanEnterOpenDoors(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setCanEnterOpenDoors();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_method_35129() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "canOpenDoors", "method_35129", "method_35129", "m_148213_"), "()Z");
    }

    static jboolean method_35129(const jobject& obj) {
                
       const auto methodID = methodID_method_35129();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isValidPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isStableDestination", "method_6333", "isValidPosition", "m_6342_"), "(Ljd;)Z");
    }

    static jboolean isValidPosition(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isValidPosition();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_PATHING_BIRDNAVIGATION_HPP