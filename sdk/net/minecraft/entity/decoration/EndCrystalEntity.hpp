// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_ENDCRYSTALENTITY_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_ENDCRYSTALENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.EndCrystalEntity
 * Remapped: chz
 */
namespace EndCrystalEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chz", "net/minecraft/world/entity/boss/enderdragon/EndCrystal", "net/minecraft/class_1511", "net/minecraft/entity/decoration/EndCrystalEntity", "net/minecraft/src/C_944_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.decoration.EndCrystalEntity#BEAM_TARGET
    [[maybe_unused]] static jobject get_field_BEAM_TARGET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DATA_BEAM_TARGET", "field_7033", "BEAM_TARGET", "f_31033_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.EndCrystalEntity#BEAM_TARGET
    [[maybe_unused]] static void set_field_BEAM_TARGET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DATA_BEAM_TARGET", "field_7033", "BEAM_TARGET", "f_31033_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.decoration.EndCrystalEntity#SHOW_BOTTOM
    [[maybe_unused]] static jobject get_field_SHOW_BOTTOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_SHOW_BOTTOM", "field_7035", "SHOW_BOTTOM", "f_31034_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.EndCrystalEntity#SHOW_BOTTOM
    [[maybe_unused]] static void set_field_SHOW_BOTTOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_SHOW_BOTTOM", "field_7035", "SHOW_BOTTOM", "f_31034_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.entity.decoration.EndCrystalEntity#endCrystalAge
    static jint get_field_endCrystalAge(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "field_7034", "endCrystalAge", "f_31032_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.decoration.EndCrystalEntity#endCrystalAge
    static void set_field_endCrystalAge(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "field_7034", "endCrystalAge", "f_31032_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getMoveEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bc", "getMovementEmission", "method_33570", "getMoveEffect", "m_142319_"), "()Lbsr$b;");
    }

    static jobject getMoveEffect(const jobject& obj) {
                
       const auto methodID = methodID_getMoveEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bA", "isPickable", "method_5863", "canHit", "m_6087_"), "()Z");
    }

    static jboolean canHit(const jobject& obj) {
                
       const auto methodID = methodID_canHit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_damage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hurt", "method_5643", "damage", "m_6469_"), "(Lbrk;F)Z");
    }

    static jboolean damage(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_damage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_kill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ap", "kill", "method_5768", "kill", "m_6074_"), "()V");
    }

    static void kill(const jobject& obj) {
                
       const auto methodID = methodID_kill();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_crystalDestroyed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onDestroyedBy", "method_6835", "crystalDestroyed", "m_31047_"), "(Lbrk;)V");
    }

    static void crystalDestroyed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_crystalDestroyed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setBeamTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBeamTarget", "method_6837", "setBeamTarget", "m_31052_"), "(Ljd;)V");
    }

    static void setBeamTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBeamTarget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBeamTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getBeamTarget", "method_6838", "getBeamTarget", "m_31064_"), "()Ljd;");
    }

    static jobject getBeamTarget(const jobject& obj) {
                
       const auto methodID = methodID_getBeamTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setShowBottom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setShowBottom", "method_6839", "setShowBottom", "m_31056_"), "(Z)V");
    }

    static void setShowBottom(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setShowBottom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldShowBottom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "showsBottom", "method_6836", "shouldShowBottom", "m_31065_"), "()Z");
    }

    static jboolean shouldShowBottom(const jobject& obj) {
                
       const auto methodID = methodID_shouldShowBottom();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldRender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldRenderAtSqrDistance", "method_5640", "shouldRender", "m_6783_"), "(D)Z");
    }

    static jboolean shouldRender(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_shouldRender();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPickBlockStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dB", "getPickResult", "method_31480", "getPickBlockStack", "m_142340_"), "()Lcuq;");
    }

    static jobject getPickBlockStack(const jobject& obj) {
                
       const auto methodID = methodID_getPickBlockStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_ENDCRYSTALENTITY_HPP