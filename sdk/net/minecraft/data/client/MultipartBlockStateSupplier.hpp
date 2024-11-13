// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_MULTIPARTBLOCKSTATESUPPLIER_HPP
#define NET_MINECRAFT_DATA_CLIENT_MULTIPARTBLOCKSTATESUPPLIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.MultipartBlockStateSupplier
 * Remapped: nt
 */
namespace MultipartBlockStateSupplier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("nt", "net/minecraft/data/models/blockstates/MultiPartGenerator", "net/minecraft/class_4922", "net/minecraft/data/client/MultipartBlockStateSupplier", "net/minecraft/src/C_4800_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.client.MultipartBlockStateSupplier#block
    static jobject get_field_block(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "block", "field_22855", "block", "f_125199_"), "Ldfy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.MultipartBlockStateSupplier#block
    static void set_field_block(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "block", "field_22855", "block", "f_125199_"), "Ldfy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.client.MultipartBlockStateSupplier#multiparts
    static jobject get_field_multiparts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "parts", "field_22856", "multiparts", "f_125200_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.MultipartBlockStateSupplier#multiparts
    static void set_field_multiparts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "parts", "field_22856", "multiparts", "f_125200_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlock", "method_25743", "getBlock", "m_6968_"), "()Ldfy;");
    }

    static jobject getBlock(const jobject& obj) {
                
       const auto methodID = methodID_getBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "multiPart", "method_25758", "create", "m_125204_"), "(Ldfy;)Lnt;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "with", "method_25764", "with", "m_125220_"), "(Ljava/util/List;)Lnt;");
    }

    static jobject with(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "with", "method_25763", "with", "m_125218_"), "(Lnx;)Lnt;");
    }

    static jobject _with(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "with", "method_25761", "with", "m_125212_"), "(Lns;Ljava/util/List;)Lnt;");
    }

    static jobject __with(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID____with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "with", "method_25762", "with", "m_125215_"), "(Lns;[Lnx;)Lnt;");
    }

    static jobject ___with(const jobject& obj, const jobject& arg0, const jarray& arg1, const jobject& arg2) {
                
       const auto methodID = methodID____with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_____with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "with", "method_25760", "with", "m_125209_"), "(Lns;Lnx;)Lnt;");
    }

    static jobject ____with(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_____with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get", "method_25765", "get", "get"), "()Lcom/google/gson/JsonElement;");
    }

    static jobject get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_MULTIPARTBLOCKSTATESUPPLIER_HPP