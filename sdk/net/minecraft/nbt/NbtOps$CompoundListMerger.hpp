// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTOPS$COMPOUNDLISTMERGER_HPP
#define NET_MINECRAFT_NBT_NBTOPS$COMPOUNDLISTMERGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtOps$CompoundListMerger
 * Remapped: up$b
 */
namespace NbtOps$CompoundListMerger {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("up$b", "net/minecraft/nbt/NbtOps$HeterogenousListCollector", "net/minecraft/class_2509$class_7809", "net/minecraft/nbt/NbtOps$CompoundListMerger", "net/minecraft/src/C_4940_$C_243538_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.nbt.NbtOps$CompoundListMerger#list
    static jobject get_field_list(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "result", "field_40669", "list", "f_244100_"), "Luh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtOps$CompoundListMerger#list
    static void set_field_list(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "result", "field_40669", "list", "f_244100_"), "Luh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_isMarker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isWrapper", "method_46244", "isMarker", "m_246400_"), "(Lub;)Z");
    }

    static jboolean isMarker(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isMarker();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeMarker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "wrapIfNeeded", "method_46245", "makeMarker", "m_247665_"), "(Luy;)Luy;");
    }

    static jobject makeMarker(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_makeMarker();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createMarkerNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "wrapElement", "method_46246", "createMarkerNbt", "m_247310_"), "(Luy;)Lub;");
    }

    static jobject createMarkerNbt(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createMarkerNbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_merge() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "accept", "method_46240", "merge", "m_246081_"), "(Luy;)Lup$f;");
    }

    static jobject merge(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_merge();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "result", "method_46239", "getResult", "m_245493_"), "()Luy;");
    }

    static jobject getResult(const jobject& obj) {
                
       const auto methodID = methodID_getResult();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NBT_NBTOPS$COMPOUNDLISTMERGER_HPP