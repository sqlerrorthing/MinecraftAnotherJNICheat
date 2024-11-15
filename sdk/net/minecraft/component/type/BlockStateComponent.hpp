// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_BLOCKSTATECOMPONENT_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_BLOCKSTATECOMPONENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.BlockStateComponent
 * Remapped: cxd
 */
namespace BlockStateComponent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cxd", "net/minecraft/world/item/component/BlockItemStateProperties", "net/minecraft/class_9275", "net/minecraft/component/type/BlockStateComponent", "net/minecraft/src/C_313335_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.component.type.BlockStateComponent#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "properties", "comp_2381", "properties", "f_316576_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.BlockStateComponent#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "properties", "comp_2381", "properties", "f_316576_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.BlockStateComponent#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49284", "DEFAULT", "f_314882_"), "Lcxd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.BlockStateComponent#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49284", "DEFAULT", "f_314882_"), "Lcxd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.BlockStateComponent#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49285", "CODEC", "f_315463_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.BlockStateComponent#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49285", "CODEC", "f_315463_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.component.type.BlockStateComponent#MAP_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_MAP_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PROPERTIES_STREAM_CODEC", "field_49287", "MAP_PACKET_CODEC", "f_314318_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.component.type.BlockStateComponent#MAP_PACKET_CODEC
    [[maybe_unused]] static void set_field_MAP_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PROPERTIES_STREAM_CODEC", "field_49287", "MAP_PACKET_CODEC", "f_314318_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.BlockStateComponent#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49286", "PACKET_CODEC", "f_317137_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.BlockStateComponent#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49286", "PACKET_CODEC", "f_317137_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "with", "method_57420", "with", "m_323763_"), "(Lduf;Ljava/lang/Comparable;)Lcxd;");
    }

    static jobject with(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "with", "method_57419", "with", "m_323660_"), "(Lduf;Ldtc;)Lcxd;");
    }

    static jobject _with(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_57418", "getValue", "m_321723_"), "(Lduf;)Ljava/lang/Comparable;");
    }

    static jobject getValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyToState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_57415", "applyToState", "m_323904_"), "(Ldtc;)Ldtc;");
    }

    static jobject applyToState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_applyToState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__applyToState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateState", "method_57417", "applyToState", "m_319877_"), "(Ldtc;Lduf;Ljava/lang/String;)Ldtc;");
    }

    static jobject _applyToState(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__applyToState();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isEmpty", "method_57414", "isEmpty", "m_322799_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__properties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "properties", "comp_2381", "properties", "f_316576_"), "()Ljava/util/Map;");
    }

    static jobject _properties(const jobject& obj) {
                
       const auto methodID = methodID__properties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_BLOCKSTATECOMPONENT_HPP