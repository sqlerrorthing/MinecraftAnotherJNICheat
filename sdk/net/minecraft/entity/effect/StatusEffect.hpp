// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECT_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.StatusEffect
 * Remapped: brx
 */
namespace StatusEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("brx", "net/minecraft/world/effect/MobEffect", "net/minecraft/class_1291", "net/minecraft/entity/effect/StatusEffect", "net/minecraft/src/C_496_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffect#ENTRY_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51933", "ENTRY_CODEC", "f_337486_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffect#ENTRY_CODEC
    [[maybe_unused]] static void set_field_ENTRY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51933", "ENTRY_CODEC", "f_337486_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffect#ENTRY_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_51934", "ENTRY_PACKET_CODEC", "f_336968_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffect#ENTRY_PACKET_CODEC
    [[maybe_unused]] static void set_field_ENTRY_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_51934", "ENTRY_PACKET_CODEC", "f_336968_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.effect.StatusEffect#AMBIENT_PARTICLE_ALPHA
    [[maybe_unused]] static jint get_field_AMBIENT_PARTICLE_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "AMBIENT_ALPHA", "field_49789", "AMBIENT_PARTICLE_ALPHA", "f_314568_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#AMBIENT_PARTICLE_ALPHA
    [[maybe_unused]] static void set_field_AMBIENT_PARTICLE_ALPHA(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "AMBIENT_ALPHA", "field_49789", "AMBIENT_PARTICLE_ALPHA", "f_314568_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#attributeModifiers
    static jobject get_field_attributeModifiers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "attributeModifiers", "field_5885", "attributeModifiers", "f_19446_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#attributeModifiers
    static void set_field_attributeModifiers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "attributeModifiers", "field_5885", "attributeModifiers", "f_19446_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#category
    static jobject get_field_category(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "category", "field_18270", "category", "f_19447_"), "Lbry;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#category
    static void set_field_category(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "category", "field_18270", "category", "f_19447_"), "Lbry;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#color
    static jint get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "color", "field_5886", "color", "f_19448_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#color
    static void set_field_color(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "color", "field_5886", "color", "f_19448_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#particleFactory
    static jobject get_field_particleFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "particleFactory", "field_49790", "particleFactory", "f_314870_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#particleFactory
    static void set_field_particleFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "particleFactory", "field_49790", "particleFactory", "f_314870_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#translationKey
    static jobject get_field_translationKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "descriptionId", "field_5883", "translationKey", "f_19449_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#translationKey
    static void set_field_translationKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "descriptionId", "field_5883", "translationKey", "f_19449_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#fadeTicks
    static jint get_field_fadeTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "blendDurationTicks", "field_47738", "fadeTicks", "f_315239_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#fadeTicks
    static void set_field_fadeTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "blendDurationTicks", "field_47738", "fadeTicks", "f_315239_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#applySound
    static jobject get_field_applySound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "soundOnAdded", "field_50114", "applySound", "f_316316_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#applySound
    static void set_field_applySound(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "soundOnAdded", "field_50114", "applySound", "f_316316_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffect#requiredFeatures
    static jobject get_field_requiredFeatures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "requiredFeatures", "field_50115", "requiredFeatures", "f_316645_"), "Lcpl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffect#requiredFeatures
    static void set_field_requiredFeatures(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "requiredFeatures", "field_50115", "requiredFeatures", "f_316645_"), "Lcpl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getFadeTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBlendDurationTicks", "method_55652", "getFadeTicks", "m_323916_"), "()I");
    }

    static jint getFadeTicks(const jobject& obj) {
                
       const auto methodID = methodID_getFadeTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_applyUpdateEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyEffectTick", "method_5572", "applyUpdateEffect", "m_294194_"), "(Lbtn;I)Z");
    }

    static jboolean applyUpdateEffect(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_applyUpdateEffect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applyInstantEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyInstantenousEffect", "method_5564", "applyInstantEffect", "m_19461_"), "(Lbsr;Lbsr;Lbtn;ID)V");
    }

    static void applyInstantEffect(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_applyInstantEffect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_canApplyUpdateEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldApplyEffectTickThisTick", "method_5552", "canApplyUpdateEffect", "m_19443_"), "(II)Z");
    }

    static jboolean canApplyUpdateEffect(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_canApplyUpdateEffect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onApplied() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onEffectStarted", "method_52520", "onApplied", "m_292868_"), "(Lbtn;I)V");
    }

    static void onApplied(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onApplied();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_playApplySound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "onEffectAdded", "method_58620", "playApplySound", "m_325074_"), "(Lbtn;I)V");
    }

    static void playApplySound(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_playApplySound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onEntityRemoval() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onMobRemoved", "method_58617", "onEntityRemoval", "m_319157_"), "(Lbtn;ILbsr$c;)V");
    }

    static void onEntityRemoval(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onEntityRemoval();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onEntityDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onMobHurt", "method_58614", "onEntityDamage", "m_6742_"), "(Lbtn;ILbrk;F)V");
    }

    static void onEntityDamage(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_onEntityDamage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isInstant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isInstantenous", "method_5561", "isInstant", "m_8093_"), "()Z");
    }

    static jboolean isInstant(const jobject& obj) {
                
       const auto methodID = methodID_isInstant();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_loadTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getOrCreateDescriptionId", "method_5559", "loadTranslationKey", "m_19477_"), "()Ljava/lang/String;");
    }

    static jobject loadTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_loadTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getDescriptionId", "method_5567", "getTranslationKey", "m_19481_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getDisplayName", "method_5560", "getName", "m_19482_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCategory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getCategory", "method_18792", "getCategory", "m_19483_"), "()Lbry;");
    }

    static jobject getCategory(const jobject& obj) {
                
       const auto methodID = methodID_getCategory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getColor", "method_5556", "getColor", "m_19484_"), "()I");
    }

    static jint getColor(const jobject& obj) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_addAttributeModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addAttributeModifier", "method_5566", "addAttributeModifier", "m_19472_"), "(Ljm;Lakr;DLbuu$a;)Lbrx;");
    }

    static jobject addAttributeModifier(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_addAttributeModifier();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__fadeTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlendDuration", "method_55649", "fadeTicks", "m_321800_"), "(I)Lbrx;");
    }

    static jobject _fadeTicks(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__fadeTicks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_forEachAttributeModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createModifiers", "method_55650", "forEachAttributeModifier", "m_320407_"), "(ILjava/util/function/BiConsumer;)V");
    }

    static void forEachAttributeModifier(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_forEachAttributeModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onRemoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeAttributeModifiers", "method_5562", "onRemoved", "m_6386_"), "(Lbut;)V");
    }

    static void onRemoved(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onRemoved();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__onApplied() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addAttributeModifiers", "method_5555", "onApplied", "m_6385_"), "(Lbut;I)V");
    }

    static void _onApplied(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__onApplied();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isBeneficial() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isBeneficial", "method_5573", "isBeneficial", "m_19486_"), "()Z");
    }

    static jboolean isBeneficial(const jobject& obj) {
                
       const auto methodID = methodID_isBeneficial();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createParticleOptions", "method_58146", "createParticle", "m_321363_"), "(Lbrz;)Llk;");
    }

    static jobject createParticle(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__applySound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withSoundOnAdded", "method_58616", "applySound", "m_320304_"), "(Lavo;)Lbrx;");
    }

    static jobject _applySound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__applySound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_requires() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "requiredFeatures", "method_58619", "requires", "m_320974_"), "([Lcpj;)Lbrx;");
    }

    static jobject requires(const jobject& obj, const jarray& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_requires();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getRequiredFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "requiredFeatures", "method_45322", "getRequiredFeatures", "m_245183_"), "()Lcpl;");
    }

    static jobject getRequiredFeatures(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredFeatures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECT_HPP