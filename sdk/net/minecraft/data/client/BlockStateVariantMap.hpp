// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEVARIANTMAP_HPP
#define NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEVARIANTMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.BlockStateVariantMap
 * Remapped: nv
 */
namespace BlockStateVariantMap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("nv", "net/minecraft/data/models/blockstates/PropertyDispatch", "net/minecraft/class_4926", "net/minecraft/data/client/BlockStateVariantMap", "net/minecraft/src/C_4805_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.client.BlockStateVariantMap#variants
    static jobject get_field_variants(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "values", "field_22863", "variants", "f_125291_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.BlockStateVariantMap#variants
    static void set_field_variants(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "values", "field_22863", "variants", "f_125291_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "putValue", "method_25790", "register", "m_125319_"), "(Lnw;Ljava/util/List;)V");
    }

    static void register(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getVariants() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntries", "method_25782", "getVariants", "m_125293_"), "()Ljava/util/Map;");
    }

    static jobject getVariants(const jobject& obj) {
                
       const auto methodID = methodID_getVariants();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_checkAllPropertyDefinitions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "verifyComplete", "method_25792", "checkAllPropertyDefinitions", "m_125322_"), "()V");
    }

    static void checkAllPropertyDefinitions(const jobject& obj) {
                
       const auto methodID = methodID_checkAllPropertyDefinitions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDefinedProperties", "method_25791", "getProperties", "m_7336_"), "()Ljava/util/List;");
    }

    static jobject getProperties(const jobject& obj) {
                
       const auto methodID = methodID_getProperties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "property", "method_25783", "create", "m_125294_"), "(Lduf;)Lnv$a;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "properties", "method_25784", "create", "m_125296_"), "(Lduf;Lduf;)Lnv$b;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "properties", "method_25785", "create", "m_125299_"), "(Lduf;Lduf;Lduf;)Lnv$c;");
    }

    static jobject __create(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID____create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "properties", "method_25786", "create", "m_125303_"), "(Lduf;Lduf;Lduf;Lduf;)Lnv$d;");
    }

    static jobject ___create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID____create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_____create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "properties", "method_25787", "create", "m_125308_"), "(Lduf;Lduf;Lduf;Lduf;Lduf;)Lnv$e;");
    }

    static jobject ____create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_____create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEVARIANTMAP_HPP