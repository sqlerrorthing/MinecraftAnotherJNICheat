// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_LEASHABLE_HPP
#define NET_MINECRAFT_ENTITY_LEASHABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.Leashable
 * Remapped: btk
 */
namespace Leashable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("btk", "net/minecraft/world/entity/Leashable", "net/minecraft/class_9817", "net/minecraft/entity/Leashable", "net/minecraft/src/C_336597_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.Leashable#LEASH_NBT_KEY
    [[maybe_unused]] static jobject get_field_LEASH_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b_", "LEASH_TAG", "field_52216", "LEASH_NBT_KEY", "f_337198_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.Leashable#LEASH_NBT_KEY
    [[maybe_unused]] static void set_field_LEASH_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b_", "LEASH_TAG", "field_52216", "LEASH_NBT_KEY", "f_337198_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.Leashable#field_52314
    [[maybe_unused]] static jdouble get_field_field_52314() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q_", "LEASH_TOO_FAR_DIST", "field_52314", "field_52314", "f_337376_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.Leashable#field_52314
    [[maybe_unused]] static void set_field_field_52314(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q_", "LEASH_TOO_FAR_DIST", "field_52314", "field_52314", "f_337376_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.Leashable#field_52315
    [[maybe_unused]] static jdouble get_field_field_52315() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r_", "LEASH_ELASTIC_DIST", "field_52315", "field_52315", "f_337592_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.Leashable#field_52315
    [[maybe_unused]] static void set_field_field_52315(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r_", "LEASH_ELASTIC_DIST", "field_52315", "field_52315", "f_337592_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    static jmethodID methodID_getLeashData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("X_", "getLeashData", "method_60955", "getLeashData", "m_338492_"), "()Lbtk$a;");
    }

    static jobject getLeashData(const jobject& obj) {
                
       const auto methodID = methodID_getLeashData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLeashData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLeashData", "method_60960", "setLeashData", "m_338401_"), "(Lbtk$a;)V");
    }

    static void setLeashData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setLeashData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isLeashed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("N_", "isLeashed", "method_60953", "isLeashed", "m_339418_"), "()Z");
    }

    static jboolean isLeashed(const jobject& obj) {
                
       const auto methodID = methodID_isLeashed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_mightBeLeashed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("O_", "mayBeLeashed", "method_60954", "mightBeLeashed", "m_340201_"), "()Z");
    }

    static jboolean mightBeLeashed(const jobject& obj) {
                
       const auto methodID = methodID_mightBeLeashed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canLeashAttachTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "canHaveALeashAttachedToIt", "method_60969", "canLeashAttachTo", "m_339445_"), "()Z");
    }

    static jboolean canLeashAttachTo(const jobject& obj) {
                
       const auto methodID = methodID_canLeashAttachTo();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBeLeashed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "canBeLeashed", "method_5931", "canBeLeashed", "m_6573_"), "()Z");
    }

    static jboolean canBeLeashed(const jobject& obj) {
                
       const auto methodID = methodID_canBeLeashed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setUnresolvedLeashHolderId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h_", "setDelayedLeashHolderId", "method_60968", "setUnresolvedLeashHolderId", "m_339199_"), "(I)V");
    }

    static void setUnresolvedLeashHolderId(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setUnresolvedLeashHolderId();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readLeashDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "readLeashData", "method_60967", "readLeashDataFromNbt", "m_340395_"), "(Lub;)Lbtk$a;");
    }

    static jobject readLeashDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readLeashDataFromNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeLeashDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "writeLeashData", "method_60962", "writeLeashDataToNbt", "m_339731_"), "(Lub;Lbtk$a;)V");
    }

    static void writeLeashDataToNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeLeashDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_resolveLeashData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "restoreLeashFromSave", "method_60958", "resolveLeashData", "m_340112_"), "(Lbsr;Lbtk$a;)V");
    }

    static void resolveLeashData(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_resolveLeashData();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_detachLeash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dropLeash", "method_5932", "detachLeash", "m_21455_"), "(ZZ)V");
    }

    static void detachLeash(const jobject& obj, const jboolean& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_detachLeash();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__detachLeash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "dropLeash", "method_60959", "detachLeash", "m_339838_"), "(Lbsr;ZZ)V");
    }

    static void _detachLeash(const jobject& arg0, const jboolean& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__detachLeash();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_tickLeash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b_", "tickLeash", "method_60965", "tickLeash", "m_338823_"), "(Lbsr;)V");
    }

    static void tickLeash(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_tickLeash();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldTickLeash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleLeashAtDistance", "method_60956", "shouldTickLeash", "m_338665_"), "(Lbsr;F)Z");
    }

    static jboolean shouldTickLeash(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_shouldTickLeash();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___detachLeash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("z", "leashTooFarBehaviour", "method_60970", "detachLeash", "m_339671_"), "()V");
    }

    static void __detachLeash(const jobject& obj) {
                
       const auto methodID = methodID___detachLeash();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onShortLeashTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "closeRangeLeashBehaviour", "method_60963", "onShortLeashTick", "m_338827_"), "(Lbsr;)V");
    }

    static void onShortLeashTick(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onShortLeashTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyLeashElasticity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "elasticRangeLeashBehaviour", "method_61162", "applyLeashElasticity", "m_338435_"), "(Lbsr;F)V");
    }

    static void applyLeashElasticity(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_applyLeashElasticity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__applyLeashElasticity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "legacyElasticRangeLeashBehaviour", "method_61161", "applyLeashElasticity", "m_338797_"), "(Lbsr;Lbsr;F)V");
    }

    static void _applyLeashElasticity(const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__applyLeashElasticity();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_attachLeash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setLeashedTo", "method_60964", "attachLeash", "m_340273_"), "(Lbsr;Z)V");
    }

    static void attachLeash(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_attachLeash();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__attachLeash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setLeashedTo", "method_60957", "attachLeash", "m_339256_"), "(Lbsr;Lbsr;Z)V");
    }

    static void _attachLeash(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__attachLeash();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLeashHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "getLeashHolder", "method_60952", "getLeashHolder", "m_340614_"), "()Lbsr;");
    }

    static jobject getLeashHolder(const jobject& obj) {
                
       const auto methodID = methodID_getLeashHolder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getLeashHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getLeashHolder", "method_60966", "getLeashHolder", "m_339450_"), "(Lbsr;)Lbsr;");
    }

    static jobject _getLeashHolder(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getLeashHolder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_LEASHABLE_HPP