// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$POTENTIALVALUESBASEDCALLBACKS_HPP
#define NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$POTENTIALVALUESBASEDCALLBACKS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.SimpleOption$PotentialValuesBasedCallbacks
 * Remapped: fgr$e
 */
namespace SimpleOption$PotentialValuesBasedCallbacks {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgr$e", "net/minecraft/client/OptionInstance$Enum", "net/minecraft/class_7172$class_7173", "net/minecraft/client/option/SimpleOption$PotentialValuesBasedCallbacks", "net/minecraft/src/C_213334_$C_213340_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.option.SimpleOption$PotentialValuesBasedCallbacks#values
    static jobject get_field_values(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "values", "comp_592", "values", "f_231625_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption$PotentialValuesBasedCallbacks#values
    static void set_field_values(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "values", "comp_592", "values", "f_231625_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.SimpleOption$PotentialValuesBasedCallbacks#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "codec", "comp_675", "codec", "f_231626_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption$PotentialValuesBasedCallbacks#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "codec", "comp_675", "codec", "f_231626_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validateValue", "method_41758", "validate", "m_214064_"), "(Ljava/lang/Object;)Ljava/util/Optional;");
    }

    static jobject validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getValues() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "valueListSupplier", "method_42721", "getValues", "m_213889_"), "()Lfit$c;");
    }

    static jobject getValues(const jobject& obj) {
                
       const auto methodID = methodID_getValues();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "values", "comp_592", "values", "f_231625_"), "()Ljava/util/List;");
    }

    static jobject _values(const jobject& obj) {
                
       const auto methodID = methodID__values();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "codec", "comp_675", "codec", "m_213664_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject _codec(const jobject& obj) {
                
       const auto methodID = methodID__codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$POTENTIALVALUESBASEDCALLBACKS_HPP