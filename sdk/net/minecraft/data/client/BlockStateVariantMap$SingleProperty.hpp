// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEVARIANTMAP$SINGLEPROPERTY_HPP
#define NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEVARIANTMAP$SINGLEPROPERTY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.BlockStateVariantMap$SingleProperty
 * Remapped: nv$a
 */
namespace BlockStateVariantMap$SingleProperty {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("nv$a", "net/minecraft/data/models/blockstates/PropertyDispatch$C1", "net/minecraft/class_4926$class_4927", "net/minecraft/data/client/BlockStateVariantMap$SingleProperty", "net/minecraft/src/C_4805_$C_4807_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.client.BlockStateVariantMap$SingleProperty#property
    static jobject get_field_property(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "property1", "field_22864", "property", "f_125323_"), "Lduf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.BlockStateVariantMap$SingleProperty#property
    static void set_field_property(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "property1", "field_22864", "property", "f_125323_"), "Lduf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDefinedProperties", "method_25791", "getProperties", "m_7336_"), "()Ljava/util/List;");
    }

    static jobject getProperties(const jobject& obj) {
                
       const auto methodID = methodID_getProperties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "select", "method_25794", "register", "m_125332_"), "(Ljava/lang/Comparable;Ljava/util/List;)Lnv$a;");
    }

    static jobject register(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "select", "method_25793", "register", "m_125329_"), "(Ljava/lang/Comparable;Lnx;)Lnv$a;");
    }

    static jobject _register(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__register();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "generate", "method_25795", "register", "m_125335_"), "(Ljava/util/function/Function;)Lnv;");
    }

    static jobject __register(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___register();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_registerVariants() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "generateList", "method_35878", "registerVariants", "m_176313_"), "(Ljava/util/function/Function;)Lnv;");
    }

    static jobject registerVariants(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_registerVariants();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEVARIANTMAP$SINGLEPROPERTY_HPP