// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTINSTANCE$PARAMETERS_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTINSTANCE$PARAMETERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.StatusEffectInstance$Parameters
 * Remapped: brz$b
 */
namespace StatusEffectInstance$Parameters {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("brz$b", "net/minecraft/world/effect/MobEffectInstance$Details", "net/minecraft/class_1293$class_9195", "net/minecraft/entity/effect/StatusEffectInstance$Parameters", "net/minecraft/src/C_498_$C_313420_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#amplifier
    static jint get_field_amplifier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "amplifier", "comp_2292", "amplifier", "f_316534_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#amplifier
    static void set_field_amplifier(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "amplifier", "comp_2292", "amplifier", "f_316534_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#duration
    static jint get_field_duration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "duration", "comp_2293", "duration", "f_316574_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#duration
    static void set_field_duration(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "duration", "comp_2293", "duration", "f_316574_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#ambient
    static jboolean get_field_ambient(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "ambient", "comp_2294", "ambient", "f_314727_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#ambient
    static void set_field_ambient(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "ambient", "comp_2294", "ambient", "f_314727_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#showParticles
    static jboolean get_field_showParticles(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "showParticles", "comp_2295", "showParticles", "f_314365_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#showParticles
    static void set_field_showParticles(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "showParticles", "comp_2295", "showParticles", "f_314365_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#showIcon
    static jboolean get_field_showIcon(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "showIcon", "comp_2296", "showIcon", "f_314718_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#showIcon
    static void set_field_showIcon(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "showIcon", "comp_2296", "showIcon", "f_314718_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#hiddenEffect
    static jobject get_field_hiddenEffect(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hiddenEffect", "comp_2297", "hiddenEffect", "f_315812_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectInstance$Parameters#hiddenEffect
    static void set_field_hiddenEffect(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hiddenEffect", "comp_2297", "hiddenEffect", "f_315812_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectInstance$Parameters#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_48822", "CODEC", "f_316395_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectInstance$Parameters#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_48822", "CODEC", "f_316395_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectInstance$Parameters#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_49208", "PACKET_CODEC", "f_315344_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectInstance$Parameters#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_49208", "PACKET_CODEC", "f_315344_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_56669", "create", "m_323128_"), "(IIZZLjava/util/Optional;Ljava/util/Optional;)Lbrz$b;");
    }

    static jobject create(const jint& arg0, const jint& arg1, const jboolean& arg2, const jboolean& arg3, const jobject& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID__amplifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "amplifier", "comp_2292", "amplifier", "f_316534_"), "()I");
    }

    static jint _amplifier(const jobject& obj) {
                
       const auto methodID = methodID__amplifier();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__duration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "duration", "comp_2293", "duration", "f_316574_"), "()I");
    }

    static jint _duration(const jobject& obj) {
                
       const auto methodID = methodID__duration();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__ambient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "ambient", "comp_2294", "ambient", "f_314727_"), "()Z");
    }

    static jboolean _ambient(const jobject& obj) {
                
       const auto methodID = methodID__ambient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__showParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "showParticles", "comp_2295", "showParticles", "f_314365_"), "()Z");
    }

    static jboolean _showParticles(const jobject& obj) {
                
       const auto methodID = methodID__showParticles();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__showIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "showIcon", "comp_2296", "showIcon", "f_314718_"), "()Z");
    }

    static jboolean _showIcon(const jobject& obj) {
                
       const auto methodID = methodID__showIcon();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__hiddenEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hiddenEffect", "comp_2297", "hiddenEffect", "f_315812_"), "()Ljava/util/Optional;");
    }

    static jobject _hiddenEffect(const jobject& obj) {
                
       const auto methodID = methodID__hiddenEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTINSTANCE$PARAMETERS_HPP