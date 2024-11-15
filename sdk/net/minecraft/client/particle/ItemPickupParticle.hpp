// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_ITEMPICKUPPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_ITEMPICKUPPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.ItemPickupParticle
 * Remapped: gch
 */
namespace ItemPickupParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gch", "net/minecraft/client/particle/ItemPickupParticle", "net/minecraft/class_693", "net/minecraft/client/particle/ItemPickupParticle", "net/minecraft/src/C_4009_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.particle.ItemPickupParticle#field_32656
    [[maybe_unused]] static jint get_field_field_32656() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LIFE_TIME", "field_32656", "field_32656", "f_172257_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#field_32656
    [[maybe_unused]] static void set_field_field_32656(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LIFE_TIME", "field_32656", "field_32656", "f_172257_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#bufferStorage
    static jobject get_field_bufferStorage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "renderBuffers", "field_20944", "bufferStorage", "f_107020_"), "Lgff;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#bufferStorage
    static void set_field_bufferStorage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "renderBuffers", "field_20944", "bufferStorage", "f_107020_"), "Lgff;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#itemEntity
    static jobject get_field_itemEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "itemEntity", "field_3823", "itemEntity", "f_107021_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#itemEntity
    static void set_field_itemEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "itemEntity", "field_3823", "itemEntity", "f_107021_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#interactingEntity
    static jobject get_field_interactingEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "target", "field_3821", "interactingEntity", "f_107017_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#interactingEntity
    static void set_field_interactingEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "target", "field_3821", "interactingEntity", "f_107017_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#ticksExisted
    static jint get_field_ticksExisted(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "life", "field_3826", "ticksExisted", "f_107018_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#ticksExisted
    static void set_field_ticksExisted(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "life", "field_3826", "ticksExisted", "f_107018_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#dispatcher
    static jobject get_field_dispatcher(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "entityRenderDispatcher", "field_3824", "dispatcher", "f_107019_"), "Lgkh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#dispatcher
    static void set_field_dispatcher(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "entityRenderDispatcher", "field_3824", "dispatcher", "f_107019_"), "Lgkh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#targetX
    static jdouble get_field_targetX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "targetX", "field_47684", "targetX", "f_302522_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#targetX
    static void set_field_targetX(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "targetX", "field_47684", "targetX", "f_302522_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#targetY
    static jdouble get_field_targetY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "targetY", "field_47685", "targetY", "f_302758_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#targetY
    static void set_field_targetY(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "targetY", "field_47685", "targetY", "f_302758_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#targetZ
    static jdouble get_field_targetZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "targetZ", "field_47686", "targetZ", "f_303670_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#targetZ
    static void set_field_targetZ(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "targetZ", "field_47686", "targetZ", "f_303670_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#lastTargetX
    static jdouble get_field_lastTargetX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "targetXOld", "field_47687", "lastTargetX", "f_303041_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#lastTargetX
    static void set_field_lastTargetX(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "targetXOld", "field_47687", "lastTargetX", "f_303041_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#lastTargetY
    static jdouble get_field_lastTargetY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "targetYOld", "field_47688", "lastTargetY", "f_302502_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#lastTargetY
    static void set_field_lastTargetY(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "targetYOld", "field_47688", "lastTargetY", "f_302502_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.ItemPickupParticle#lastTargetZ
    static jdouble get_field_lastTargetZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "targetZOld", "field_47689", "lastTargetZ", "f_302216_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ItemPickupParticle#lastTargetZ
    static void set_field_lastTargetZ(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "targetZOld", "field_47689", "lastTargetZ", "f_302216_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_getOrCopy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSafeCopy", "method_29358", "getOrCopy", "m_107036_"), "(Lbsr;)Lbsr;");
    }

    static jobject getOrCopy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrCopy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRenderType", "method_18122", "getType", "m_7556_"), "()Lgcr;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_buildGeometry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_3074", "buildGeometry", "m_5744_"), "(Lfbm;Lffy;F)V");
    }

    static void buildGeometry(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_buildGeometry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_3070", "tick", "m_5989_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateTargetPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "updatePosition", "method_55617", "updateTargetPos", "m_306961_"), "()V");
    }

    static void updateTargetPos(const jobject& obj) {
                
       const auto methodID = methodID_updateTargetPos();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateLastTargetPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "saveOldPosition", "method_55618", "updateLastTargetPos", "m_307839_"), "()V");
    }

    static void updateLastTargetPos(const jobject& obj) {
                
       const auto methodID = methodID_updateLastTargetPos();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_ITEMPICKUPPARTICLE_HPP