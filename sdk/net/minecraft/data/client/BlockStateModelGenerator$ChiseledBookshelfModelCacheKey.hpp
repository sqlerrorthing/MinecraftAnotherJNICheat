// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEMODELGENERATOR$CHISELEDBOOKSHELFMODELCACHEKEY_HPP
#define NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEMODELGENERATOR$CHISELEDBOOKSHELFMODELCACHEKEY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.BlockStateModelGenerator$ChiseledBookshelfModelCacheKey
 * Remapped: no$d
 */
namespace BlockStateModelGenerator$ChiseledBookshelfModelCacheKey {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("no$d", "net/minecraft/data/models/BlockModelGenerators$BookSlotModelCacheKey", "net/minecraft/class_4910$class_7987", "net/minecraft/data/client/BlockStateModelGenerator$ChiseledBookshelfModelCacheKey", "net/minecraft/src/C_4786_$C_260426_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.client.BlockStateModelGenerator$ChiseledBookshelfModelCacheKey#template
    static jobject get_field_template(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "template", "comp_1175", "template", "f_260721_"), "Lod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.BlockStateModelGenerator$ChiseledBookshelfModelCacheKey#template
    static void set_field_template(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "template", "comp_1175", "template", "f_260721_"), "Lod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.client.BlockStateModelGenerator$ChiseledBookshelfModelCacheKey#modelSuffix
    static jobject get_field_modelSuffix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modelSuffix", "comp_1176", "modelSuffix", "f_260626_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.BlockStateModelGenerator$ChiseledBookshelfModelCacheKey#modelSuffix
    static void set_field_modelSuffix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modelSuffix", "comp_1176", "modelSuffix", "f_260626_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__template() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "template", "comp_1175", "template", "f_260721_"), "()Lod;");
    }

    static jobject _template(const jobject& obj) {
                
       const auto methodID = methodID__template();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__modelSuffix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "modelSuffix", "comp_1176", "modelSuffix", "f_260626_"), "()Ljava/lang/String;");
    }

    static jobject _modelSuffix(const jobject& obj) {
                
       const auto methodID = methodID__modelSuffix();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_BLOCKSTATEMODELGENERATOR$CHISELEDBOOKSHELFMODELCACHEKEY_HPP