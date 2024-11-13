// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_TAG_VALUELOOKUPTAGPROVIDER_HPP
#define NET_MINECRAFT_DATA_SERVER_TAG_VALUELOOKUPTAGPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.tag.ValueLookupTagProvider
 * Remapped: pu
 */
namespace ValueLookupTagProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("pu", "net/minecraft/data/tags/IntrinsicHolderTagsProvider", "net/minecraft/class_7889", "net/minecraft/data/server/tag/ValueLookupTagProvider", "net/minecraft/src/C_254572_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.server.tag.ValueLookupTagProvider#valueToKey
    static jobject get_field_valueToKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "keyExtractor", "field_40954", "valueToKey", "f_254687_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.tag.ValueLookupTagProvider#valueToKey
    static void set_field_valueToKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "keyExtractor", "field_40954", "valueToKey", "f_254687_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getOrCreateTagBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tag", "method_46827", "getOrCreateTagBuilder", "m_206424_"), "(Lawu;)Lpu$a;");
    }

    static jobject getOrCreateTagBuilder(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrCreateTagBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_TAG_VALUELOOKUPTAGPROVIDER_HPP