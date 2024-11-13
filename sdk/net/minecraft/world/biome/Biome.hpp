// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_BIOME_HPP
#define NET_MINECRAFT_WORLD_BIOME_BIOME_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.Biome
 * Remapped: ddw
 */
namespace Biome {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddw", "net/minecraft/world/level/biome/Biome", "net/minecraft/class_1959", "net/minecraft/world/biome/Biome", "net/minecraft/src/C_1629_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.biome.Biome#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_25819", "CODEC", "f_47429_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.Biome#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_25819", "CODEC", "f_47429_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.Biome#NETWORK_CODEC
    [[maybe_unused]] static jobject get_field_NETWORK_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETWORK_CODEC", "field_26633", "NETWORK_CODEC", "f_47430_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.Biome#NETWORK_CODEC
    [[maybe_unused]] static void set_field_NETWORK_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETWORK_CODEC", "field_26633", "NETWORK_CODEC", "f_47430_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.Biome#REGISTRY_CODEC
    [[maybe_unused]] static jobject get_field_REGISTRY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24677", "REGISTRY_CODEC", "f_47431_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.Biome#REGISTRY_CODEC
    [[maybe_unused]] static void set_field_REGISTRY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24677", "REGISTRY_CODEC", "f_47431_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.Biome#REGISTRY_ENTRY_LIST_CODEC
    [[maybe_unused]] static jobject get_field_REGISTRY_ENTRY_LIST_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIST_CODEC", "field_26750", "REGISTRY_ENTRY_LIST_CODEC", "f_47432_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.Biome#REGISTRY_ENTRY_LIST_CODEC
    [[maybe_unused]] static void set_field_REGISTRY_ENTRY_LIST_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIST_CODEC", "field_26750", "REGISTRY_ENTRY_LIST_CODEC", "f_47432_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.biome.Biome#TEMPERATURE_NOISE
    [[maybe_unused]] static jobject get_field_TEMPERATURE_NOISE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TEMPERATURE_NOISE", "field_9335", "TEMPERATURE_NOISE", "f_47435_"), "Leoj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.Biome#TEMPERATURE_NOISE
    [[maybe_unused]] static void set_field_TEMPERATURE_NOISE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TEMPERATURE_NOISE", "field_9335", "TEMPERATURE_NOISE", "f_47435_"), "Leoj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.world.biome.Biome#FROZEN_OCEAN_NOISE
    [[maybe_unused]] static jobject get_field_FROZEN_OCEAN_NOISE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FROZEN_TEMPERATURE_NOISE", "field_26392", "FROZEN_OCEAN_NOISE", "f_47436_"), "Leoj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.biome.Biome#FROZEN_OCEAN_NOISE
    [[maybe_unused]] static void set_field_FROZEN_OCEAN_NOISE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FROZEN_TEMPERATURE_NOISE", "field_26392", "FROZEN_OCEAN_NOISE", "f_47436_"), "Leoj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.biome.Biome#FOLIAGE_NOISE
    [[maybe_unused]] static jobject get_field_FOLIAGE_NOISE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BIOME_INFO_NOISE", "field_9324", "FOLIAGE_NOISE", "f_47433_"), "Leoj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.biome.Biome#FOLIAGE_NOISE
    [[maybe_unused]] static void set_field_FOLIAGE_NOISE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BIOME_INFO_NOISE", "field_9324", "FOLIAGE_NOISE", "f_47433_"), "Leoj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.biome.Biome#MAX_TEMPERATURE_CACHE_SIZE
    [[maybe_unused]] static jint get_field_MAX_TEMPERATURE_CACHE_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TEMPERATURE_CACHE_SIZE", "field_30978", "MAX_TEMPERATURE_CACHE_SIZE", "f_151655_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.Biome#MAX_TEMPERATURE_CACHE_SIZE
    [[maybe_unused]] static void set_field_MAX_TEMPERATURE_CACHE_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TEMPERATURE_CACHE_SIZE", "field_30978", "MAX_TEMPERATURE_CACHE_SIZE", "f_151655_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.Biome#weather
    static jobject get_field_weather(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "climateSettings", "field_26393", "weather", "f_47437_"), "Lddw$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.Biome#weather
    static void set_field_weather(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "climateSettings", "field_26393", "weather", "f_47437_"), "Lddw$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.Biome#generationSettings
    static jobject get_field_generationSettings(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "generationSettings", "field_26635", "generationSettings", "f_47438_"), "Lddx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.Biome#generationSettings
    static void set_field_generationSettings(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "generationSettings", "field_26635", "generationSettings", "f_47438_"), "Lddx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.Biome#spawnSettings
    static jobject get_field_spawnSettings(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "mobSettings", "field_26395", "spawnSettings", "f_47439_"), "Ldei;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.Biome#spawnSettings
    static void set_field_spawnSettings(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "mobSettings", "field_26395", "spawnSettings", "f_47439_"), "Ldei;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.Biome#effects
    static jobject get_field_effects(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "specialEffects", "field_22039", "effects", "f_47443_"), "Ldec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.Biome#effects
    static void set_field_effects(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "specialEffects", "field_22039", "effects", "f_47443_"), "Ldec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.biome.Biome#temperatureCache
    static jobject get_field_temperatureCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "temperatureCache", "field_20335", "temperatureCache", "f_47444_"), "Ljava/lang/ThreadLocal;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.Biome#temperatureCache
    static void set_field_temperatureCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "temperatureCache", "field_20335", "temperatureCache", "f_47444_"), "Ljava/lang/ThreadLocal;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSkyColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSkyColor", "method_8697", "getSkyColor", "m_47463_"), "()I");
    }

    static jint getSkyColor(const jobject& obj) {
                
       const auto methodID = methodID_getSkyColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpawnSettings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMobSettings", "method_30966", "getSpawnSettings", "m_47518_"), "()Ldei;");
    }

    static jobject getSpawnSettings(const jobject& obj) {
                
       const auto methodID = methodID_getSpawnSettings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasPrecipitation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasPrecipitation", "method_48163", "hasPrecipitation", "m_264473_"), "()Z");
    }

    static jboolean hasPrecipitation(const jobject& obj) {
                
       const auto methodID = methodID_hasPrecipitation();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPrecipitation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPrecipitationAt", "method_48162", "getPrecipitation", "m_264600_"), "(Ljd;)Lddw$c;");
    }

    static jobject getPrecipitation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPrecipitation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_computeTemperature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getHeightAdjustedTemperature", "method_8707", "computeTemperature", "m_47528_"), "(Ljd;)F");
    }

    static jfloat computeTemperature(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_computeTemperature();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTemperature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getTemperature", "method_21740", "getTemperature", "m_47505_"), "(Ljd;)F");
    }

    static jfloat getTemperature(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTemperature();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canSetIce() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldFreeze", "method_8705", "canSetIce", "m_47477_"), "(Ldcz;Ljd;)Z");
    }

    static jboolean canSetIce(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canSetIce();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__canSetIce() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldFreeze", "method_8685", "canSetIce", "m_47480_"), "(Ldcz;Ljd;Z)Z");
    }

    static jboolean _canSetIce(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID__canSetIce();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isCold() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "coldEnoughToSnow", "method_33599", "isCold", "m_198904_"), "(Ljd;)Z");
    }

    static jboolean isCold(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isCold();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_doesNotSnow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "warmEnoughToRain", "method_39927", "doesNotSnow", "m_198906_"), "(Ljd;)Z");
    }

    static jboolean doesNotSnow(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_doesNotSnow();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldGenerateLowerFrozenOceanSurface() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "shouldMeltFrozenOceanIcebergSlightly", "method_39928", "shouldGenerateLowerFrozenOceanSurface", "m_198908_"), "(Ljd;)Z");
    }

    static jboolean shouldGenerateLowerFrozenOceanSurface(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_shouldGenerateLowerFrozenOceanSurface();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canSetSnow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "shouldSnow", "method_8696", "canSetSnow", "m_47519_"), "(Ldcz;Ljd;)Z");
    }

    static jboolean canSetSnow(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canSetSnow();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getGenerationSettings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getGenerationSettings", "method_30970", "getGenerationSettings", "m_47536_"), "()Lddx;");
    }

    static jobject getGenerationSettings(const jobject& obj) {
                
       const auto methodID = methodID_getGenerationSettings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFogColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getFogColor", "method_24376", "getFogColor", "m_47539_"), "()I");
    }

    static jint getFogColor(const jobject& obj) {
                
       const auto methodID = methodID_getFogColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGrassColorAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getGrassColor", "method_8711", "getGrassColorAt", "m_47464_"), "(DD)I");
    }

    static jint getGrassColorAt(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_getGrassColorAt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getDefaultGrassColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getGrassColorFromTexture", "method_30773", "getDefaultGrassColor", "m_47570_"), "()I");
    }

    static jint getDefaultGrassColor(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultGrassColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFoliageColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getFoliageColor", "method_8698", "getFoliageColor", "m_47542_"), "()I");
    }

    static jint getFoliageColor(const jobject& obj) {
                
       const auto methodID = methodID_getFoliageColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDefaultFoliageColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "getFoliageColorFromTexture", "method_30774", "getDefaultFoliageColor", "m_47571_"), "()I");
    }

    static jint getDefaultFoliageColor(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultFoliageColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__getTemperature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getBaseTemperature", "method_8712", "getTemperature", "m_47554_"), "()F");
    }

    static jfloat _getTemperature(const jobject& obj) {
                
       const auto methodID = methodID__getTemperature();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEffects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getSpecialEffects", "method_24377", "getEffects", "m_47557_"), "()Ldec;");
    }

    static jobject getEffects(const jobject& obj) {
                
       const auto methodID = methodID_getEffects();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWaterColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getWaterColor", "method_8687", "getWaterColor", "m_47560_"), "()I");
    }

    static jint getWaterColor(const jobject& obj) {
                
       const auto methodID = methodID_getWaterColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWaterFogColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getWaterFogColor", "method_8713", "getWaterFogColor", "m_47561_"), "()I");
    }

    static jint getWaterFogColor(const jobject& obj) {
                
       const auto methodID = methodID_getWaterFogColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getParticleConfig() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getAmbientParticle", "method_24378", "getParticleConfig", "m_47562_"), "()Ljava/util/Optional;");
    }

    static jobject getParticleConfig(const jobject& obj) {
                
       const auto methodID = methodID_getParticleConfig();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLoopSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getAmbientLoop", "method_24935", "getLoopSound", "m_47563_"), "()Ljava/util/Optional;");
    }

    static jobject getLoopSound(const jobject& obj) {
                
       const auto methodID = methodID_getLoopSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMoodSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getAmbientMood", "method_24936", "getMoodSound", "m_47564_"), "()Ljava/util/Optional;");
    }

    static jobject getMoodSound(const jobject& obj) {
                
       const auto methodID = methodID_getMoodSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAdditionsSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "getAmbientAdditions", "method_24937", "getAdditionsSound", "m_47565_"), "()Ljava/util/Optional;");
    }

    static jobject getAdditionsSound(const jobject& obj) {
                
       const auto methodID = methodID_getAdditionsSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMusic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getBackgroundMusic", "method_27343", "getMusic", "m_47566_"), "()Ljava/util/Optional;");
    }

    static jobject getMusic(const jobject& obj) {
                
       const auto methodID = methodID_getMusic();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_BIOME_HPP