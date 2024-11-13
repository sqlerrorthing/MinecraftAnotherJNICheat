// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERRESOURCEMETADATA_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERRESOURCEMETADATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.VillagerResourceMetadata
 * Remapped: grz
 */
namespace VillagerResourceMetadata {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grz", "net/minecraft/client/resources/metadata/animation/VillagerMetaDataSection", "net/minecraft/class_3888", "net/minecraft/client/render/entity/feature/VillagerResourceMetadata", "net/minecraft/src/C_4521_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.entity.feature.VillagerResourceMetadata#READER
    [[maybe_unused]] static jobject get_field_READER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SERIALIZER", "field_17158", "READER", "f_119065_"), "Lgsa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.feature.VillagerResourceMetadata#READER
    [[maybe_unused]] static void set_field_READER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SERIALIZER", "field_17158", "READER", "f_119065_"), "Lgsa;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.entity.feature.VillagerResourceMetadata#KEY
    [[maybe_unused]] static jobject get_field_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SECTION_NAME", "field_32977", "KEY", "f_174866_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.feature.VillagerResourceMetadata#KEY
    [[maybe_unused]] static void set_field_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SECTION_NAME", "field_32977", "KEY", "f_174866_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.VillagerResourceMetadata#hatType
    static jobject get_field_hatType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hat", "field_17159", "hatType", "f_119066_"), "Lgrz$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.VillagerResourceMetadata#hatType
    static void set_field_hatType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hat", "field_17159", "hatType", "f_119066_"), "Lgrz$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getHatType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHat", "method_17167", "getHatType", "m_119070_"), "()Lgrz$a;");
    }

    static jobject getHatType(const jobject& obj) {
                
       const auto methodID = methodID_getHatType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERRESOURCEMETADATA_HPP