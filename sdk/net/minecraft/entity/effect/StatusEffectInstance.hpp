// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTINSTANCE_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTINSTANCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.StatusEffectInstance
 * Remapped: brz
 */
namespace StatusEffectInstance {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("brz", "net/minecraft/world/effect/MobEffectInstance", "net/minecraft/class_1293", "net/minecraft/entity/effect/StatusEffectInstance", "net/minecraft/src/C_498_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.effect.StatusEffectInstance#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_5897", "LOGGER", "f_19501_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_5897", "LOGGER", "f_19501_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectInstance#INFINITE
    [[maybe_unused]] static jint get_field_INFINITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INFINITE_DURATION", "field_42106", "INFINITE", "f_267388_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectInstance#INFINITE
    [[maybe_unused]] static void set_field_INFINITE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INFINITE_DURATION", "field_42106", "INFINITE", "f_267388_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectInstance#MIN_AMPLIFIER
    [[maybe_unused]] static jint get_field_MIN_AMPLIFIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MIN_AMPLIFIER", "field_49014", "MIN_AMPLIFIER", "f_316862_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectInstance#MIN_AMPLIFIER
    [[maybe_unused]] static void set_field_MIN_AMPLIFIER(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MIN_AMPLIFIER", "field_49014", "MIN_AMPLIFIER", "f_316862_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectInstance#MAX_AMPLIFIER
    [[maybe_unused]] static jint get_field_MAX_AMPLIFIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_AMPLIFIER", "field_49015", "MAX_AMPLIFIER", "f_316220_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectInstance#MAX_AMPLIFIER
    [[maybe_unused]] static void set_field_MAX_AMPLIFIER(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_AMPLIFIER", "field_49015", "MAX_AMPLIFIER", "f_316220_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectInstance#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_48821", "CODEC", "f_316026_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectInstance#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_48821", "CODEC", "f_316026_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectInstance#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "STREAM_CODEC", "field_49207", "PACKET_CODEC", "f_315755_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectInstance#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "STREAM_CODEC", "field_49207", "PACKET_CODEC", "f_315755_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "effect", "field_5896", "type", "f_19502_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "effect", "field_5896", "type", "f_19502_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#duration
    static jint get_field_duration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "duration", "field_5895", "duration", "f_19503_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#duration
    static void set_field_duration(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "duration", "field_5895", "duration", "f_19503_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#amplifier
    static jint get_field_amplifier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "amplifier", "field_5893", "amplifier", "f_19504_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#amplifier
    static void set_field_amplifier(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "amplifier", "field_5893", "amplifier", "f_19504_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#ambient
    static jboolean get_field_ambient(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "ambient", "field_5892", "ambient", "f_19506_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#ambient
    static void set_field_ambient(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "ambient", "field_5892", "ambient", "f_19506_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#showParticles
    static jboolean get_field_showParticles(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "visible", "field_5890", "showParticles", "f_19508_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#showParticles
    static void set_field_showParticles(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "visible", "field_5890", "showParticles", "f_19508_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#showIcon
    static jboolean get_field_showIcon(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "showIcon", "field_5889", "showIcon", "f_19509_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#showIcon
    static void set_field_showIcon(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "showIcon", "field_5889", "showIcon", "f_19509_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#hiddenEffect
    static jobject get_field_hiddenEffect(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "hiddenEffect", "field_21830", "hiddenEffect", "f_19510_"), "Lbrz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#hiddenEffect
    static void set_field_hiddenEffect(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "hiddenEffect", "field_21830", "hiddenEffect", "f_19510_"), "Lbrz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance#fading
    static jobject get_field_fading(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "blendState", "field_47739", "fading", "f_317081_"), "Lbrz$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance#fading
    static void set_field_fading(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "blendState", "field_47739", "fading", "f_317081_"), "Lbrz$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_asParameters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "asDetails", "method_56668", "asParameters", "m_324991_"), "()Lbrz$b;");
    }

    static jobject asParameters(const jobject& obj) {
                
       const auto methodID = methodID_asParameters();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFadeFactor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlendFactor", "method_55653", "getFadeFactor", "m_318631_"), "(Lbtn;F)F");
    }

    static jfloat getFadeFactor(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_getFadeFactor();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getParticleOptions", "method_58148", "createParticle", "m_319016_"), "()Llk;");
    }

    static jobject createParticle(const jobject& obj) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copyFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setDetailsFrom", "method_24276", "copyFrom", "m_19548_"), "(Lbrz;)V");
    }

    static void copyFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyFrom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_upgrade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "update", "method_5590", "upgrade", "m_19558_"), "(Lbrz;)Z");
    }

    static jboolean upgrade(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_upgrade();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_lastsShorterThan() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isShorterDurationThan", "method_48561", "lastsShorterThan", "m_267670_"), "(Lbrz;)Z");
    }

    static jboolean lastsShorterThan(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_lastsShorterThan();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isInfinite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isInfiniteDuration", "method_48559", "isInfinite", "m_267577_"), "()Z");
    }

    static jboolean isInfinite(const jobject& obj) {
                
       const auto methodID = methodID_isInfinite();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isDurationBelow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "endsWithin", "method_48557", "isDurationBelow", "m_267633_"), "(I)Z");
    }

    static jboolean isDurationBelow(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_isDurationBelow();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mapDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mapDuration", "method_48558", "mapDuration", "m_267696_"), "(Lit/unimi/dsi/fastutil/ints/Int2IntFunction;)I");
    }

    static jint mapDuration(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_mapDuration();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEffectType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getEffect", "method_5579", "getEffectType", "m_19544_"), "()Ljm;");
    }

    static jobject getEffectType(const jobject& obj) {
                
       const auto methodID = methodID_getEffectType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getDuration", "method_5584", "getDuration", "m_19557_"), "()I");
    }

    static jint getDuration(const jobject& obj) {
                
       const auto methodID = methodID_getDuration();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAmplifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getAmplifier", "method_5578", "getAmplifier", "m_19564_"), "()I");
    }

    static jint getAmplifier(const jobject& obj) {
                
       const auto methodID = methodID_getAmplifier();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isAmbient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isAmbient", "method_5591", "isAmbient", "m_19571_"), "()Z");
    }

    static jboolean isAmbient(const jobject& obj) {
                
       const auto methodID = methodID_isAmbient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldShowParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "isVisible", "method_5581", "shouldShowParticles", "m_19572_"), "()Z");
    }

    static jboolean shouldShowParticles(const jobject& obj) {
                
       const auto methodID = methodID_shouldShowParticles();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldShowIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "showIcon", "method_5592", "shouldShowIcon", "m_19575_"), "()Z");
    }

    static jboolean shouldShowIcon(const jobject& obj) {
                
       const auto methodID = methodID_shouldShowIcon();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_5585", "update", "m_19552_"), "(Lbtn;Ljava/lang/Runnable;)Z");
    }

    static jboolean update(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_update();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isActive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "hasRemainingDuration", "method_48562", "isActive", "m_267725_"), "()Z");
    }

    static jboolean isActive(const jobject& obj) {
                
       const auto methodID = methodID_isActive();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "tickDownDuration", "method_5588", "updateDuration", "m_19579_"), "()I");
    }

    static jint updateDuration(const jobject& obj) {
                
       const auto methodID = methodID_updateDuration();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_onApplied() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onEffectStarted", "method_52523", "onApplied", "m_292680_"), "(Lbtn;)V");
    }

    static void onApplied(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onApplied();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onEntityRemoval() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onMobRemoved", "method_58622", "onEntityRemoval", "m_325044_"), "(Lbtn;Lbsr$c;)V");
    }

    static void onEntityRemoval(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onEntityRemoval();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onEntityDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onMobHurt", "method_58621", "onEntityDamage", "m_321810_"), "(Lbtn;Lbrk;F)V");
    }

    static void onEntityDamage(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_onEntityDamage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getDescriptionId", "method_5586", "getTranslationKey", "m_19576_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDurationString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "describeDuration", "method_48563", "getDurationString", "m_267740_"), "()Ljava/lang/String;");
    }

    static jobject getDurationString(const jobject& obj) {
                
       const auto methodID = methodID_getDurationString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "save", "method_5582", "writeNbt", "m_19555_"), "()Luy;");
    }

    static jobject writeNbt(const jobject& obj) {
                
       const auto methodID = methodID_writeNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_5583", "fromNbt", "m_19560_"), "(Lub;)Lbrz;");
    }

    static jobject fromNbt(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromNbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_compareTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "compareTo", "method_5587", "compareTo", "compareTo"), "(Lbrz;)I");
    }

    static jint compareTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_compareTo();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playApplySound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onEffectAdded", "method_58623", "playApplySound", "m_322321_"), "(Lbtn;)V");
    }

    static void playApplySound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playApplySound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_equals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_55654", "equals", "m_323663_"), "(Ljm;)Z");
    }

    static jboolean equals(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_equals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyFadingFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "copyBlendState", "method_55656", "copyFadingFrom", "m_324193_"), "(Lbrz;)V");
    }

    static void copyFadingFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyFadingFrom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_skipFading() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "skipBlending", "method_55657", "skipFading", "m_320166_"), "()V");
    }

    static void skipFading(const jobject& obj) {
                
       const auto methodID = methodID_skipFading();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTINSTANCE_HPP