// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_SPAWNHELPER$INFO_HPP
#define NET_MINECRAFT_WORLD_SPAWNHELPER$INFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.SpawnHelper$Info
 * Remapped: ddh$d
 */
namespace SpawnHelper$Info {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddh$d", "net/minecraft/world/level/NaturalSpawner$SpawnState", "net/minecraft/class_1948$class_5262", "net/minecraft/world/SpawnHelper$Info", "net/minecraft/src/C_1608_$C_1613_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#spawningChunkCount
    static jint get_field_spawningChunkCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "spawnableChunkCount", "field_24394", "spawningChunkCount", "f_47110_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#spawningChunkCount
    static void set_field_spawningChunkCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "spawnableChunkCount", "field_24394", "spawningChunkCount", "f_47110_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#groupToCount
    static jobject get_field_groupToCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mobCategoryCounts", "field_24395", "groupToCount", "f_47111_"), "Lit/unimi/dsi/fastutil/objects/Object2IntOpenHashMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#groupToCount
    static void set_field_groupToCount(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mobCategoryCounts", "field_24395", "groupToCount", "f_47111_"), "Lit/unimi/dsi/fastutil/objects/Object2IntOpenHashMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#densityField
    static jobject get_field_densityField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "spawnPotential", "field_24396", "densityField", "f_47112_"), "Lddk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#densityField
    static void set_field_densityField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "spawnPotential", "field_24396", "densityField", "f_47112_"), "Lddk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#groupToCountView
    static jobject get_field_groupToCountView(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "unmodifiableMobCategoryCounts", "field_24397", "groupToCountView", "f_47113_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#groupToCountView
    static void set_field_groupToCountView(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "unmodifiableMobCategoryCounts", "field_24397", "groupToCountView", "f_47113_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#densityCapper
    static jobject get_field_densityCapper(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "localMobCapCalculator", "field_34459", "densityCapper", "f_186542_"), "Lddg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#densityCapper
    static void set_field_densityCapper(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "localMobCapCalculator", "field_34459", "densityCapper", "f_186542_"), "Lddg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#cachedPos
    static jobject get_field_cachedPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastCheckedPos", "field_24398", "cachedPos", "f_47114_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#cachedPos
    static void set_field_cachedPos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastCheckedPos", "field_24398", "cachedPos", "f_47114_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#cachedEntityType
    static jobject get_field_cachedEntityType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastCheckedType", "field_24399", "cachedEntityType", "f_47115_"), "Lbsx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#cachedEntityType
    static void set_field_cachedEntityType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastCheckedType", "field_24399", "cachedEntityType", "f_47115_"), "Lbsx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.SpawnHelper$Info#cachedDensityMass
    static jdouble get_field_cachedDensityMass(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "lastCharge", "field_24400", "cachedDensityMass", "f_47116_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.SpawnHelper$Info#cachedDensityMass
    static void set_field_cachedDensityMass(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "lastCharge", "field_24400", "cachedDensityMass", "f_47116_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canSpawn", "method_27824", "test", "m_47127_"), "(Lbsx;Ljd;Lduy;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "afterSpawn", "method_27825", "run", "m_47131_"), "(Lbtp;Lduy;)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSpawningChunkCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSpawnableChunkCount", "method_27823", "getSpawningChunkCount", "m_47126_"), "()I");
    }

    static jint getSpawningChunkCount(const jobject& obj) {
                
       const auto methodID = methodID_getSpawningChunkCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGroupToCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMobCategoryCounts", "method_27830", "getGroupToCount", "m_47148_"), "()Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
    }

    static jobject getGroupToCount(const jobject& obj) {
                
       const auto methodID = methodID_getGroupToCount();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isBelowCap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canSpawnForCategory", "method_27826", "isBelowCap", "m_186548_"), "(Lbtq;Ldcd;)Z");
    }

    static jboolean isBelowCap(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isBelowCap();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_SPAWNHELPER$INFO_HPP