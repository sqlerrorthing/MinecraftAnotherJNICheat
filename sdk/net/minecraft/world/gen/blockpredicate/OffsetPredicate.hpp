// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_OFFSETPREDICATE_HPP
#define NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_OFFSETPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.blockpredicate.OffsetPredicate
 * Remapped: eaq
 */
namespace OffsetPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eaq", "net/minecraft/world/level/levelgen/blockpredicates/StateTestingPredicate", "net/minecraft/class_6679", "net/minecraft/world/gen/blockpredicate/OffsetPredicate", "net/minecraft/src/C_182975_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.world.gen.blockpredicate.OffsetPredicate#offset
    static jobject get_field_offset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "offset", "field_35157", "offset", "f_190539_"), "Lkh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.blockpredicate.OffsetPredicate#offset
    static void set_field_offset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "offset", "field_35157", "offset", "f_190539_"), "Lkh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_registerOffsetField() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "stateTestingCodec", "method_39013", "registerOffsetField", "m_190546_"), "(Lcom/mojang/serialization/codecs/RecordCodecBuilder$Instance;)Lcom/mojang/datafixers/Products$P1;");
    }

    static jobject registerOffsetField(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registerOffsetField();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_39012", "test", "test"), "(Ldds;Ljd;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_38893", "test", "m_183454_"), "(Ldtc;)Z");
    }

    static jboolean _test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_OFFSETPREDICATE_HPP