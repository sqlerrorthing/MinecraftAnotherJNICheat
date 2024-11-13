// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_RAWFILTEREDPAIR_HPP
#define NET_MINECRAFT_TEXT_RAWFILTEREDPAIR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.RawFilteredPair
 * Remapped: arl
 */
namespace RawFilteredPair {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("arl", "net/minecraft/server/network/Filterable", "net/minecraft/class_9262", "net/minecraft/text/RawFilteredPair", "net/minecraft/src/C_313766_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.text.RawFilteredPair#raw
    static jobject get_field_raw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "raw", "comp_2369", "raw", "f_315590_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.text.RawFilteredPair#raw
    static void set_field_raw(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "raw", "comp_2369", "raw", "f_315590_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.text.RawFilteredPair#filtered
    static jobject get_field_filtered(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "filtered", "comp_2370", "filtered", "f_316433_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.text.RawFilteredPair#filtered
    static void set_field_filtered(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "filtered", "comp_2370", "filtered", "f_316433_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_57135", "createCodec", "m_322486_"), "(Lcom/mojang/serialization/Codec;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createPacketCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "streamCodec", "method_57139", "createPacketCodec", "m_323964_"), "(Lyx;)Lyx;");
    }

    static jobject createPacketCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createPacketCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "passThrough", "method_57137", "of", "m_323001_"), "(Ljava/lang/Object;)Larl;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "from", "method_57134", "of", "m_320455_"), "(Larm;)Larl;");
    }

    static jobject _of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_57140", "get", "m_323302_"), "(Z)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_map() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "map", "method_57138", "map", "m_321832_"), "(Ljava/util/function/Function;)Larl;");
    }

    static jobject map(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_map();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_resolve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "resolve", "method_57141", "resolve", "m_320562_"), "(Ljava/util/function/Function;)Ljava/util/Optional;");
    }

    static jobject resolve(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_resolve();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__raw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "raw", "comp_2369", "raw", "f_315590_"), "()Ljava/lang/Object;");
    }

    static jobject _raw(const jobject& obj) {
                
       const auto methodID = methodID__raw();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__filtered() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "filtered", "comp_2370", "filtered", "f_316433_"), "()Ljava/util/Optional;");
    }

    static jobject _filtered(const jobject& obj) {
                
       const auto methodID = methodID__filtered();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEXT_RAWFILTEREDPAIR_HPP