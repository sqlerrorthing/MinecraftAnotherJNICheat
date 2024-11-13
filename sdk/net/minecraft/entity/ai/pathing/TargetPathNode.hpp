// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_PATHING_TARGETPATHNODE_HPP
#define NET_MINECRAFT_ENTITY_AI_PATHING_TARGETPATHNODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.pathing.TargetPathNode
 * Remapped: epz
 */
namespace TargetPathNode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("epz", "net/minecraft/world/level/pathfinder/Target", "net/minecraft/class_4459", "net/minecraft/entity/ai/pathing/TargetPathNode", "net/minecraft/src/C_2757_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.pathing.TargetPathNode#nearestNodeDistance
    static jfloat get_field_nearestNodeDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "bestHeuristic", "field_20304", "nearestNodeDistance", "f_77494_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.pathing.TargetPathNode#nearestNodeDistance
    static void set_field_nearestNodeDistance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "bestHeuristic", "field_20304", "nearestNodeDistance", "f_77494_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.pathing.TargetPathNode#nearestNode
    static jobject get_field_nearestNode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "bestNode", "field_20305", "nearestNode", "f_77495_"), "Lepq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.pathing.TargetPathNode#nearestNode
    static void set_field_nearestNode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "bestNode", "field_20305", "nearestNode", "f_77495_"), "Lepq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.pathing.TargetPathNode#reached
    static jboolean get_field_reached(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "reached", "field_20306", "reached", "f_77496_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.pathing.TargetPathNode#reached
    static void set_field_reached(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "reached", "field_20306", "reached", "f_77496_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_updateNearestNode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateBest", "method_21662", "updateNearestNode", "m_77503_"), "(FLepq;)V");
    }

    static void updateNearestNode(const jobject& obj, const jfloat& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateNearestNode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getNearestNode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getBestNode", "method_21664", "getNearestNode", "m_77508_"), "()Lepq;");
    }

    static jobject getNearestNode(const jobject& obj) {
                
       const auto methodID = methodID_getNearestNode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_markReached() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setReached", "method_21665", "markReached", "m_77509_"), "()V");
    }

    static void markReached(const jobject& obj) {
                
       const auto methodID = methodID_markReached();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isReached() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isReached", "method_35501", "isReached", "m_164723_"), "()Z");
    }

    static jboolean isReached(const jobject& obj) {
                
       const auto methodID = methodID_isReached();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_fromBuffer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "createFromStream", "method_21663", "fromBuffer", "m_77506_"), "(Lvw;)Lepz;");
    }

    static jobject fromBuffer(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromBuffer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_PATHING_TARGETPATHNODE_HPP