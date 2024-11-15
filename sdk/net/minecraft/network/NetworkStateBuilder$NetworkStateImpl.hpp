// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_NETWORKSTATEBUILDER$NETWORKSTATEIMPL_HPP
#define NET_MINECRAFT_NETWORK_NETWORKSTATEBUILDER$NETWORKSTATEIMPL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.NetworkStateBuilder$NetworkStateImpl
 * Remapped: zl$b
 */
namespace NetworkStateBuilder$NetworkStateImpl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("zl$b", "net/minecraft/network/protocol/ProtocolInfoBuilder$Implementation", "net/minecraft/class_9147$class_9149", "net/minecraft/network/NetworkStateBuilder$NetworkStateImpl", "net/minecraft/src/C_313614_$C_313353_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_2234", "id", "f_316542_"), "Lvu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_2234", "id", "f_316542_"), "Lvu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#side
    static jobject get_field_side(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flow", "comp_2235", "side", "f_314614_"), "Lzh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#side
    static void set_field_side(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flow", "comp_2235", "side", "f_314614_"), "Lzh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "codec", "comp_2236", "codec", "f_314239_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "codec", "comp_2236", "codec", "f_314239_"), "Lyx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#bundleHandler
    static jobject get_field_bundleHandler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "bundlerInfo", "comp_2237", "bundleHandler", "f_313910_"), "Lzf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.NetworkStateBuilder$NetworkStateImpl#bundleHandler
    static void set_field_bundleHandler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "bundlerInfo", "comp_2237", "bundleHandler", "f_313910_"), "Lzf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__bundleHandler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "bundlerInfo", "comp_2237", "bundleHandler", "m_320896_"), "()Lzf;");
    }

    static jobject _bundleHandler(const jobject& obj) {
                
       const auto methodID = methodID__bundleHandler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_2234", "id", "m_320326_"), "()Lvu;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__side() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "flow", "comp_2235", "side", "m_319133_"), "()Lzh;");
    }

    static jobject _side(const jobject& obj) {
                
       const auto methodID = methodID__side();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "codec", "comp_2236", "codec", "m_319098_"), "()Lyx;");
    }

    static jobject _codec(const jobject& obj) {
                
       const auto methodID = methodID__codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_NETWORKSTATEBUILDER$NETWORKSTATEIMPL_HPP