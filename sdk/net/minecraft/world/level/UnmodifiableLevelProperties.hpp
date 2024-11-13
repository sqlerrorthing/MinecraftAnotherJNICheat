// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_LEVEL_UNMODIFIABLELEVELPROPERTIES_HPP
#define NET_MINECRAFT_WORLD_LEVEL_UNMODIFIABLELEVELPROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.level.UnmodifiableLevelProperties
 * Remapped: eqy
 */
namespace UnmodifiableLevelProperties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqy", "net/minecraft/world/level/storage/DerivedLevelData", "net/minecraft/class_27", "net/minecraft/world/level/UnmodifiableLevelProperties", "net/minecraft/src/C_2780_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.level.UnmodifiableLevelProperties#saveProperties
    static jobject get_field_saveProperties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worldData", "field_24179", "saveProperties", "f_78076_"), "Lerl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.UnmodifiableLevelProperties#saveProperties
    static void set_field_saveProperties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worldData", "field_24179", "saveProperties", "f_78076_"), "Lerl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.UnmodifiableLevelProperties#worldProperties
    static jobject get_field_worldProperties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "wrapped", "field_139", "worldProperties", "f_78077_"), "Lerk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.UnmodifiableLevelProperties#worldProperties
    static void set_field_worldProperties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "wrapped", "field_139", "worldProperties", "f_78077_"), "Lerk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSpawnPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSpawnPos", "method_56126", "getSpawnPos", "m_318766_"), "()Ljd;");
    }

    static jobject getSpawnPos(const jobject& obj) {
                
       const auto methodID = methodID_getSpawnPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpawnAngle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSpawnAngle", "method_30656", "getSpawnAngle", "m_6790_"), "()F");
    }

    static jfloat getSpawnAngle(const jobject& obj) {
                
       const auto methodID = methodID_getSpawnAngle();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getGameTime", "method_188", "getTime", "m_6793_"), "()J");
    }

    static jlong getTime(const jobject& obj) {
                
       const auto methodID = methodID_getTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTimeOfDay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getDayTime", "method_217", "getTimeOfDay", "m_6792_"), "()J");
    }

    static jlong getTimeOfDay(const jobject& obj) {
                
       const auto methodID = methodID_getTimeOfDay();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLevelName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getLevelName", "method_150", "getLevelName", "m_5462_"), "()Ljava/lang/String;");
    }

    static jobject getLevelName(const jobject& obj) {
                
       const auto methodID = methodID_getLevelName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getClearWeatherTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getClearWeatherTime", "method_155", "getClearWeatherTime", "m_6537_"), "()I");
    }

    static jint getClearWeatherTime(const jobject& obj) {
                
       const auto methodID = methodID_getClearWeatherTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setClearWeatherTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setClearWeatherTime", "method_167", "setClearWeatherTime", "m_6393_"), "(I)V");
    }

    static void setClearWeatherTime(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setClearWeatherTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isThundering() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "isThundering", "method_203", "isThundering", "m_6534_"), "()Z");
    }

    static jboolean isThundering(const jobject& obj) {
                
       const auto methodID = methodID_isThundering();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getThunderTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getThunderTime", "method_145", "getThunderTime", "m_6558_"), "()I");
    }

    static jint getThunderTime(const jobject& obj) {
                
       const auto methodID = methodID_getThunderTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRaining() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isRaining", "method_156", "isRaining", "m_6533_"), "()Z");
    }

    static jboolean isRaining(const jobject& obj) {
                
       const auto methodID = methodID_isRaining();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRainTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getRainTime", "method_190", "getRainTime", "m_6531_"), "()I");
    }

    static jint getRainTime(const jobject& obj) {
                
       const auto methodID = methodID_getRainTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGameMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getGameType", "method_210", "getGameMode", "m_5464_"), "()Ldct;");
    }

    static jobject getGameMode(const jobject& obj) {
                
       const auto methodID = methodID_getGameMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setGameTime", "method_29034", "setTime", "m_6253_"), "(J)V");
    }

    static void setTime(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTimeOfDay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setDayTime", "method_29035", "setTimeOfDay", "m_6247_"), "(J)V");
    }

    static void setTimeOfDay(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setTimeOfDay();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setSpawnPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSpawn", "method_187", "setSpawnPos", "m_7250_"), "(Ljd;F)V");
    }

    static void setSpawnPos(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_setSpawnPos();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setThundering() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setThundering", "method_147", "setThundering", "m_5557_"), "(Z)V");
    }

    static void setThundering(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setThundering();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setThunderTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setThunderTime", "method_173", "setThunderTime", "m_6398_"), "(I)V");
    }

    static void setThunderTime(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setThunderTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setRaining() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setRaining", "method_157", "setRaining", "m_5565_"), "(Z)V");
    }

    static void setRaining(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setRaining();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setRainTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setRainTime", "method_164", "setRainTime", "m_6399_"), "(I)V");
    }

    static void setRainTime(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setRainTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setGameMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setGameType", "method_193", "setGameMode", "m_5458_"), "(Ldct;)V");
    }

    static void setGameMode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setGameMode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isHardcore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "isHardcore", "method_152", "isHardcore", "m_5466_"), "()Z");
    }

    static jboolean isHardcore(const jobject& obj) {
                
       const auto methodID = methodID_isHardcore();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_areCommandsAllowed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "isAllowCommands", "method_194", "areCommandsAllowed", "m_5468_"), "()Z");
    }

    static jboolean areCommandsAllowed(const jobject& obj) {
                
       const auto methodID = methodID_areCommandsAllowed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isInitialized() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "isInitialized", "method_222", "isInitialized", "m_6535_"), "()Z");
    }

    static jboolean isInitialized(const jobject& obj) {
                
       const auto methodID = methodID_isInitialized();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setInitialized() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setInitialized", "method_223", "setInitialized", "m_5555_"), "(Z)V");
    }

    static void setInitialized(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setInitialized();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getGameRules() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getGameRules", "method_146", "getGameRules", "m_5470_"), "()Ldcs;");
    }

    static jobject getGameRules(const jobject& obj) {
                
       const auto methodID = methodID_getGameRules();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWorldBorder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getWorldBorder", "method_27422", "getWorldBorder", "m_5813_"), "()Ldut$c;");
    }

    static jobject getWorldBorder(const jobject& obj) {
                
       const auto methodID = methodID_getWorldBorder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setWorldBorder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setWorldBorder", "method_27415", "setWorldBorder", "m_7831_"), "(Ldut$c;)V");
    }

    static void setWorldBorder(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setWorldBorder();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "getDifficulty", "method_207", "getDifficulty", "m_5472_"), "()Lbqo;");
    }

    static jobject getDifficulty(const jobject& obj) {
                
       const auto methodID = methodID_getDifficulty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isDifficultyLocked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "isDifficultyLocked", "method_197", "isDifficultyLocked", "m_5474_"), "()Z");
    }

    static jboolean isDifficultyLocked(const jobject& obj) {
                
       const auto methodID = methodID_isDifficultyLocked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getScheduledEvents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "getScheduledEvents", "method_143", "getScheduledEvents", "m_7540_"), "()Lewp;");
    }

    static jobject getScheduledEvents(const jobject& obj) {
                
       const auto methodID = methodID_getScheduledEvents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWanderingTraderSpawnDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getWanderingTraderSpawnDelay", "method_18038", "getWanderingTraderSpawnDelay", "m_6530_"), "()I");
    }

    static jint getWanderingTraderSpawnDelay(const jobject& obj) {
                
       const auto methodID = methodID_getWanderingTraderSpawnDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setWanderingTraderSpawnDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setWanderingTraderSpawnDelay", "method_18041", "setWanderingTraderSpawnDelay", "m_6391_"), "(I)V");
    }

    static void setWanderingTraderSpawnDelay(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setWanderingTraderSpawnDelay();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWanderingTraderSpawnChance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "getWanderingTraderSpawnChance", "method_18039", "getWanderingTraderSpawnChance", "m_6528_"), "()I");
    }

    static jint getWanderingTraderSpawnChance(const jobject& obj) {
                
       const auto methodID = methodID_getWanderingTraderSpawnChance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setWanderingTraderSpawnChance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setWanderingTraderSpawnChance", "method_18042", "setWanderingTraderSpawnChance", "m_6387_"), "(I)V");
    }

    static void setWanderingTraderSpawnChance(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setWanderingTraderSpawnChance();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWanderingTraderId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getWanderingTraderId", "method_35506", "getWanderingTraderId", "m_142403_"), "()Ljava/util/UUID;");
    }

    static jobject getWanderingTraderId(const jobject& obj) {
                
       const auto methodID = methodID_getWanderingTraderId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setWanderingTraderId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setWanderingTraderId", "method_18040", "setWanderingTraderId", "m_8115_"), "(Ljava/util/UUID;)V");
    }

    static void setWanderingTraderId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setWanderingTraderId();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_populateCrashReport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillCrashReportCategory", "method_151", "populateCrashReport", "m_142471_"), "(Lp;Ldcy;)V");
    }

    static void populateCrashReport(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_populateCrashReport();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_LEVEL_UNMODIFIABLELEVELPROPERTIES_HPP