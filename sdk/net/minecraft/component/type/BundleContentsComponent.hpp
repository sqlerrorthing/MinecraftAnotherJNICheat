// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_BUNDLECONTENTSCOMPONENT_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_BUNDLECONTENTSCOMPONENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.BundleContentsComponent
 * Remapped: cxf
 */
namespace BundleContentsComponent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cxf", "net/minecraft/world/item/component/BundleContents", "net/minecraft/class_9276", "net/minecraft/component/type/BundleContentsComponent", "net/minecraft/src/C_313255_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.component.type.BundleContentsComponent#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49289", "DEFAULT", "f_316266_"), "Lcxf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.BundleContentsComponent#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49289", "DEFAULT", "f_316266_"), "Lcxf;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.BundleContentsComponent#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49290", "CODEC", "f_316485_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.BundleContentsComponent#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49290", "CODEC", "f_316485_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.BundleContentsComponent#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49291", "PACKET_CODEC", "f_316702_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.BundleContentsComponent#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49291", "PACKET_CODEC", "f_316702_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.component.type.BundleContentsComponent#NESTED_BUNDLE_OCCUPANCY
    [[maybe_unused]] static jobject get_field_NESTED_BUNDLE_OCCUPANCY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BUNDLE_IN_BUNDLE_WEIGHT", "field_49292", "NESTED_BUNDLE_OCCUPANCY", "f_314974_"), "Lorg/apache/commons/lang3/math/Fraction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.component.type.BundleContentsComponent#NESTED_BUNDLE_OCCUPANCY
    [[maybe_unused]] static void set_field_NESTED_BUNDLE_OCCUPANCY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BUNDLE_IN_BUNDLE_WEIGHT", "field_49292", "NESTED_BUNDLE_OCCUPANCY", "f_314974_"), "Lorg/apache/commons/lang3/math/Fraction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.component.type.BundleContentsComponent#ADD_TO_NEW_SLOT
    [[maybe_unused]] static jint get_field_ADD_TO_NEW_SLOT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_STACK_INDEX", "field_49293", "ADD_TO_NEW_SLOT", "f_314700_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.component.type.BundleContentsComponent#ADD_TO_NEW_SLOT
    [[maybe_unused]] static void set_field_ADD_TO_NEW_SLOT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_STACK_INDEX", "field_49293", "ADD_TO_NEW_SLOT", "f_314700_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.component.type.BundleContentsComponent#stacks
    static jobject get_field_stacks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "items", "field_49294", "stacks", "f_316519_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.component.type.BundleContentsComponent#stacks
    static void set_field_stacks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "items", "field_49294", "stacks", "f_316519_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.component.type.BundleContentsComponent#occupancy
    static jobject get_field_occupancy(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "weight", "field_49295", "occupancy", "f_314240_"), "Lorg/apache/commons/lang3/math/Fraction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.component.type.BundleContentsComponent#occupancy
    static void set_field_occupancy(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "weight", "field_49295", "occupancy", "f_314240_"), "Lorg/apache/commons/lang3/math/Fraction;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_calculateOccupancy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "computeContentWeight", "method_57425", "calculateOccupancy", "m_319074_"), "(Ljava/util/List;)Lorg/apache/commons/lang3/math/Fraction;");
    }

    static jobject calculateOccupancy(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_calculateOccupancy();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getOccupancy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getWeight", "method_57423", "getOccupancy", "m_323521_"), "(Lcuq;)Lorg/apache/commons/lang3/math/Fraction;");
    }

    static jobject getOccupancy(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getOccupancy();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItemUnsafe", "method_57422", "get", "m_321524_"), "(I)Lcuq;");
    }

    static jobject get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "itemCopyStream", "method_59707", "stream", "m_324878_"), "()Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_iterate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "items", "method_57421", "iterate", "m_323607_"), "()Ljava/lang/Iterable;");
    }

    static jobject iterate(const jobject& obj) {
                
       const auto methodID = methodID_iterate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_iterateCopy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "itemsCopy", "method_59708", "iterateCopy", "m_322107_"), "()Ljava/lang/Iterable;");
    }

    static jobject iterateCopy(const jobject& obj) {
                
       const auto methodID = methodID_iterateCopy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "size", "method_57426", "size", "m_321706_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__getOccupancy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "weight", "method_57428", "getOccupancy", "m_320631_"), "()Lorg/apache/commons/lang3/math/Fraction;");
    }

    static jobject _getOccupancy(const jobject& obj) {
                
       const auto methodID = methodID__getOccupancy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isEmpty", "method_57429", "isEmpty", "m_319610_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_BUNDLECONTENTSCOMPONENT_HPP