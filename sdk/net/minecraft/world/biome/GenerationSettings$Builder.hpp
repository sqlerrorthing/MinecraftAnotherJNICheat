// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_GENERATIONSETTINGS$BUILDER_HPP
#define NET_MINECRAFT_WORLD_BIOME_GENERATIONSETTINGS$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.GenerationSettings$Builder
 * Remapped: ddx$b
 */
namespace GenerationSettings$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddx$b", "net/minecraft/world/level/biome/BiomeGenerationSettings$PlainBuilder", "net/minecraft/class_5485$class_7868", "net/minecraft/world/biome/GenerationSettings$Builder", "net/minecraft/src/C_1639_$C_254616_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.biome.GenerationSettings$Builder#carverStepsToCarvers
    static jobject get_field_carverStepsToCarvers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "carvers", "field_40896", "carverStepsToCarvers", "f_254678_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.GenerationSettings$Builder#carverStepsToCarvers
    static void set_field_carverStepsToCarvers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "carvers", "field_40896", "carverStepsToCarvers", "f_254678_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.GenerationSettings$Builder#indexedFeaturesList
    static jobject get_field_indexedFeaturesList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "features", "field_40897", "indexedFeaturesList", "f_254648_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.GenerationSettings$Builder#indexedFeaturesList
    static void set_field_indexedFeaturesList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "features", "field_40897", "indexedFeaturesList", "f_254648_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_feature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addFeature", "method_46676", "feature", "m_255419_"), "(Ldyu$b;Ljm;)Lddx$b;");
    }

    static jobject feature(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_feature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addFeature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addFeature", "method_46673", "addFeature", "m_254982_"), "(ILjm;)Lddx$b;");
    }

    static jobject addFeature(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addFeature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_carver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCarver", "method_46675", "carver", "m_254863_"), "(Ldyu$a;Ljm;)Lddx$b;");
    }

    static jobject carver(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_carver();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fillFeaturesList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addFeatureStepsUpTo", "method_46672", "fillFeaturesList", "m_255276_"), "(I)V");
    }

    static void fillFeaturesList(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_fillFeaturesList();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_46671", "build", "m_255380_"), "()Lddx;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_GENERATIONSETTINGS$BUILDER_HPP