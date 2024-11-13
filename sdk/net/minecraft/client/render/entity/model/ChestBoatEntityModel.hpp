// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_CHESTBOATENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_CHESTBOATENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.ChestBoatEntityModel
 * Remapped: fuw
 */
namespace ChestBoatEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fuw", "net/minecraft/client/model/ChestBoatModel", "net/minecraft/class_7752", "net/minecraft/client/render/entity/model/ChestBoatEntityModel", "net/minecraft/src/C_243425_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.model.ChestBoatEntityModel#CHEST_BOTTOM
    [[maybe_unused]] static jobject get_field_CHEST_BOTTOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CHEST_BOTTOM", "field_40467", "CHEST_BOTTOM", "f_244355_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ChestBoatEntityModel#CHEST_BOTTOM
    [[maybe_unused]] static void set_field_CHEST_BOTTOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CHEST_BOTTOM", "field_40467", "CHEST_BOTTOM", "f_244355_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ChestBoatEntityModel#CHEST_LID
    [[maybe_unused]] static jobject get_field_CHEST_LID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHEST_LID", "field_40468", "CHEST_LID", "f_243894_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ChestBoatEntityModel#CHEST_LID
    [[maybe_unused]] static void set_field_CHEST_LID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHEST_LID", "field_40468", "CHEST_LID", "f_243894_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ChestBoatEntityModel#CHEST_LOCK
    [[maybe_unused]] static jobject get_field_CHEST_LOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHEST_LOCK", "field_40469", "CHEST_LOCK", "f_244136_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ChestBoatEntityModel#CHEST_LOCK
    [[maybe_unused]] static void set_field_CHEST_LOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHEST_LOCK", "field_40469", "CHEST_LOCK", "f_244136_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getParts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createPartsBuilder", "method_45702", "getParts", "m_245539_"), "(Lfyk;)Lcom/google/common/collect/ImmutableList$Builder;");
    }

    static jobject getParts(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getParts();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "createBodyModel", "method_45708", "getTexturedModelData", "m_247175_"), "()Lfyq;");
    }

    static jobject getTexturedModelData() {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_CHESTBOATENTITYMODEL_HPP