// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_VANILLADATAPACKPROVIDER_HPP
#define NET_MINECRAFT_RESOURCE_VANILLADATAPACKPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.VanillaDataPackProvider
 * Remapped: ats
 */
namespace VanillaDataPackProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ats", "net/minecraft/server/packs/repository/ServerPacksSource", "net/minecraft/class_3286", "net/minecraft/resource/VanillaDataPackProvider", "net/minecraft/src/C_65_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.VanillaDataPackProvider#METADATA
    [[maybe_unused]] static jobject get_field_METADATA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VERSION_METADATA_SECTION", "field_40051", "METADATA", "f_244259_"), "Latf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.VanillaDataPackProvider#METADATA
    [[maybe_unused]] static void set_field_METADATA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VERSION_METADATA_SECTION", "field_40051", "METADATA", "f_244259_"), "Latf;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.VanillaDataPackProvider#FEATURE_FLAGS
    [[maybe_unused]] static jobject get_field_FEATURE_FLAGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FEATURE_FLAGS_METADATA_SECTION", "field_40052", "FEATURE_FLAGS", "f_244456_"), "Lasm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.VanillaDataPackProvider#FEATURE_FLAGS
    [[maybe_unused]] static void set_field_FEATURE_FLAGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FEATURE_FLAGS_METADATA_SECTION", "field_40052", "FEATURE_FLAGS", "f_244456_"), "Lasm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.VanillaDataPackProvider#METADATA_MAP
    [[maybe_unused]] static jobject get_field_METADATA_MAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BUILT_IN_METADATA", "field_26939", "METADATA_MAP", "f_143904_"), "Lasi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.VanillaDataPackProvider#METADATA_MAP
    [[maybe_unused]] static void set_field_METADATA_MAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BUILT_IN_METADATA", "field_26939", "METADATA_MAP", "f_143904_"), "Lasi;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.VanillaDataPackProvider#INFO
    [[maybe_unused]] static jobject get_field_INFO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "VANILLA_PACK_INFO", "field_49040", "INFO", "f_316407_"), "Lasp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.VanillaDataPackProvider#INFO
    [[maybe_unused]] static void set_field_INFO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "VANILLA_PACK_INFO", "field_49040", "INFO", "f_316407_"), "Lasp;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.VanillaDataPackProvider#BOTTOM_POSITION
    [[maybe_unused]] static jobject get_field_BOTTOM_POSITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VANILLA_SELECTION_CONFIG", "field_49041", "BOTTOM_POSITION", "f_316252_"), "Lasr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.VanillaDataPackProvider#BOTTOM_POSITION
    [[maybe_unused]] static void set_field_BOTTOM_POSITION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VANILLA_SELECTION_CONFIG", "field_49041", "BOTTOM_POSITION", "f_316252_"), "Lasr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.VanillaDataPackProvider#TOP_POSITION
    [[maybe_unused]] static jobject get_field_TOP_POSITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FEATURE_SELECTION_CONFIG", "field_49042", "TOP_POSITION", "f_315861_"), "Lasr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.VanillaDataPackProvider#TOP_POSITION
    [[maybe_unused]] static void set_field_TOP_POSITION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FEATURE_SELECTION_CONFIG", "field_49042", "TOP_POSITION", "f_315861_"), "Lasr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.VanillaDataPackProvider#ID
    [[maybe_unused]] static jobject get_field_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PACKS_DIR", "field_40053", "ID", "f_244487_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.VanillaDataPackProvider#ID
    [[maybe_unused]] static void set_field_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PACKS_DIR", "field_40053", "ID", "f_244487_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBuiltInPackLocation", "method_56935", "createInfo", "m_321450_"), "(Ljava/lang/String;Lwz;)Lasp;");
    }

    static jobject createInfo(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createInfo();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createDefaultPack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createVanillaPackSource", "method_45287", "createDefaultPack", "m_246173_"), "()Lasu;");
    }

    static jobject createDefaultPack() {
       const auto clazz = self();
       const auto methodID = methodID_createDefaultPack();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPackTitle", "method_45259", "getDisplayName", "m_245328_"), "(Ljava/lang/String;)Lwz;");
    }

    static jobject getDisplayName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getDisplayName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createVanillaPack", "method_45257", "createDefault", "m_245806_"), "(Lasq;)Latm;");
    }

    static jobject createDefault(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createDefault();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBuiltinPack", "method_45260", "create", "m_246091_"), "(Ljava/lang/String;Latm$c;Lwz;)Latm;");
    }

    static jobject create(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createPackRepository", "method_45286", "createManager", "m_245786_"), "(Ljava/nio/file/Path;Lews;)Latp;");
    }

    static jobject createManager(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createManager();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createClientManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "createVanillaTrustedRepository", "method_52443", "createClientManager", "m_293411_"), "()Latp;");
    }

    static jobject createClientManager() {
       const auto clazz = self();
       const auto methodID = methodID_createClientManager();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__createManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createPackRepository", "method_45285", "createManager", "m_247728_"), "(Lerf$c;)Latp;");
    }

    static jobject _createManager(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__createManager();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_VANILLADATAPACKPROVIDER_HPP