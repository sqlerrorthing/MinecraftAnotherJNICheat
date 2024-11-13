// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_TAG_ITEMTAGPROVIDER_HPP
#define NET_MINECRAFT_DATA_SERVER_TAG_ITEMTAGPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.tag.ItemTagProvider
 * Remapped: pv
 */
namespace ItemTagProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("pv", "net/minecraft/data/tags/ItemTagsProvider", "net/minecraft/class_7805", "net/minecraft/data/server/tag/ItemTagProvider", "net/minecraft/src/C_4850_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.server.tag.ItemTagProvider#blockTags
    static jobject get_field_blockTags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blockTags", "field_40664", "blockTags", "f_126528_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.tag.ItemTagProvider#blockTags
    static void set_field_blockTags(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blockTags", "field_40664", "blockTags", "f_126528_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.server.tag.ItemTagProvider#blockTagsToCopy
    static jobject get_field_blockTagsToCopy(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "tagsToCopy", "field_43092", "blockTagsToCopy", "f_273814_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.tag.ItemTagProvider#blockTagsToCopy
    static void set_field_blockTagsToCopy(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "tagsToCopy", "field_43092", "blockTagsToCopy", "f_273814_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copy", "method_46218", "copy", "m_206421_"), "(Lawu;Lawu;)V");
    }

    static void copy(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_copy();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getRegistryLookupFuture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createContentsProvider", "method_49651", "getRegistryLookupFuture", "m_274574_"), "()Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject getRegistryLookupFuture(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryLookupFuture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_TAG_ITEMTAGPROVIDER_HPP