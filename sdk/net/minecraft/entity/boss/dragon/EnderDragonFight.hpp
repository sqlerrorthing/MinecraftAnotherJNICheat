// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_ENDERDRAGONFIGHT_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_ENDERDRAGONFIGHT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.EnderDragonFight
 * Remapped: dxb
 */
namespace EnderDragonFight {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxb", "net/minecraft/world/level/dimension/end/EndDragonFight", "net/minecraft/class_2881", "net/minecraft/entity/boss/dragon/EnderDragonFight", "net/minecraft/src/C_2183_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_13112", "LOGGER", "f_64058_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_13112", "LOGGER", "f_64058_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#CHECK_DRAGON_SEEN_INTERVAL
    [[maybe_unused]] static jint get_field_CHECK_DRAGON_SEEN_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_TICKS_BEFORE_DRAGON_RESPAWN", "field_31443", "CHECK_DRAGON_SEEN_INTERVAL", "f_156737_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#CHECK_DRAGON_SEEN_INTERVAL
    [[maybe_unused]] static void set_field_CHECK_DRAGON_SEEN_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_TICKS_BEFORE_DRAGON_RESPAWN", "field_31443", "CHECK_DRAGON_SEEN_INTERVAL", "f_156737_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#CRYSTAL_COUNTING_INTERVAL
    [[maybe_unused]] static jint get_field_CRYSTAL_COUNTING_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TIME_BETWEEN_CRYSTAL_SCANS", "field_31444", "CRYSTAL_COUNTING_INTERVAL", "f_156738_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#CRYSTAL_COUNTING_INTERVAL
    [[maybe_unused]] static void set_field_CRYSTAL_COUNTING_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TIME_BETWEEN_CRYSTAL_SCANS", "field_31444", "CRYSTAL_COUNTING_INTERVAL", "f_156738_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.EnderDragonFight#field_31445
    [[maybe_unused]] static jint get_field_field_31445() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TIME_BETWEEN_PLAYER_SCANS", "field_31445", "field_31445", "f_156739_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.EnderDragonFight#field_31445
    [[maybe_unused]] static void set_field_field_31445(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TIME_BETWEEN_PLAYER_SCANS", "field_31445", "field_31445", "f_156739_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#ISLAND_SIZE
    [[maybe_unused]] static jint get_field_ISLAND_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ARENA_SIZE_CHUNKS", "field_31446", "ISLAND_SIZE", "f_156740_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#ISLAND_SIZE
    [[maybe_unused]] static void set_field_ISLAND_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ARENA_SIZE_CHUNKS", "field_31446", "ISLAND_SIZE", "f_156740_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.EnderDragonFight#field_31441
    [[maybe_unused]] static jint get_field_field_31441() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ARENA_TICKET_LEVEL", "field_31441", "field_31441", "f_156735_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.EnderDragonFight#field_31441
    [[maybe_unused]] static void set_field_field_31441(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ARENA_TICKET_LEVEL", "field_31441", "field_31441", "f_156735_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#PLAYER_COUNTING_INTERVAL
    [[maybe_unused]] static jint get_field_PLAYER_COUNTING_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GATEWAY_COUNT", "field_31447", "PLAYER_COUNTING_INTERVAL", "f_156741_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#PLAYER_COUNTING_INTERVAL
    [[maybe_unused]] static void set_field_PLAYER_COUNTING_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GATEWAY_COUNT", "field_31447", "PLAYER_COUNTING_INTERVAL", "f_156741_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#field_31448
    [[maybe_unused]] static jint get_field_field_31448() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GATEWAY_DISTANCE", "field_31448", "field_31448", "f_156742_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#field_31448
    [[maybe_unused]] static void set_field_field_31448(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GATEWAY_DISTANCE", "field_31448", "field_31448", "f_156742_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.boss.dragon.EnderDragonFight#SPAWN_Y
    [[maybe_unused]] static jint get_field_SPAWN_Y() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DRAGON_SPAWN_Y", "field_31442", "SPAWN_Y", "f_156736_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.boss.dragon.EnderDragonFight#SPAWN_Y
    [[maybe_unused]] static void set_field_SPAWN_Y(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DRAGON_SPAWN_Y", "field_31442", "SPAWN_Y", "f_156736_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#showBossBarPredicate
    static jobject get_field_showBossBarPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "validPlayer", "field_44876", "showBossBarPredicate", "f_286991_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#showBossBarPredicate
    static void set_field_showBossBarPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "validPlayer", "field_44876", "showBossBarPredicate", "f_286991_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#bossBar
    static jobject get_field_bossBar(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "dragonEvent", "field_13119", "bossBar", "f_64060_"), "Laqr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#bossBar
    static void set_field_bossBar(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "dragonEvent", "field_13119", "bossBar", "f_64060_"), "Laqr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "level", "field_13108", "world", "f_64061_"), "Laqu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "level", "field_13108", "world", "f_64061_"), "Laqu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#origin
    static jobject get_field_origin(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "origin", "field_44877", "origin", "f_286985_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#origin
    static void set_field_origin(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "origin", "field_44877", "origin", "f_286985_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#gateways
    static jobject get_field_gateways(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "gateways", "field_13121", "gateways", "f_64062_"), "Lit/unimi/dsi/fastutil/objects/ObjectArrayList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#gateways
    static void set_field_gateways(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "gateways", "field_13121", "gateways", "f_64062_"), "Lit/unimi/dsi/fastutil/objects/ObjectArrayList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#endPortalPattern
    static jobject get_field_endPortalPattern(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "exitPortalPattern", "field_13110", "endPortalPattern", "f_64063_"), "Ldth;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#endPortalPattern
    static void set_field_endPortalPattern(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "exitPortalPattern", "field_13110", "endPortalPattern", "f_64063_"), "Ldth;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonSeenTimer
    static jint get_field_dragonSeenTimer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "ticksSinceDragonSeen", "field_13107", "dragonSeenTimer", "f_64064_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonSeenTimer
    static void set_field_dragonSeenTimer(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "ticksSinceDragonSeen", "field_13107", "dragonSeenTimer", "f_64064_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#endCrystalsAlive
    static jint get_field_endCrystalsAlive(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "crystalsAlive", "field_13106", "endCrystalsAlive", "f_64065_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#endCrystalsAlive
    static void set_field_endCrystalsAlive(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "crystalsAlive", "field_13106", "endCrystalsAlive", "f_64065_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#crystalCountTimer
    static jint get_field_crystalCountTimer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "ticksSinceCrystalsScanned", "field_13105", "crystalCountTimer", "f_64066_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#crystalCountTimer
    static void set_field_crystalCountTimer(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "ticksSinceCrystalsScanned", "field_13105", "crystalCountTimer", "f_64066_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#playerUpdateTimer
    static jint get_field_playerUpdateTimer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "ticksSinceLastPlayerScan", "field_13122", "playerUpdateTimer", "f_64067_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#playerUpdateTimer
    static void set_field_playerUpdateTimer(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "ticksSinceLastPlayerScan", "field_13122", "playerUpdateTimer", "f_64067_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonKilled
    static jboolean get_field_dragonKilled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "dragonKilled", "field_13115", "dragonKilled", "f_64068_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonKilled
    static void set_field_dragonKilled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "dragonKilled", "field_13115", "dragonKilled", "f_64068_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#previouslyKilled
    static jboolean get_field_previouslyKilled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "previouslyKilled", "field_13114", "previouslyKilled", "f_64069_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#previouslyKilled
    static void set_field_previouslyKilled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "previouslyKilled", "field_13114", "previouslyKilled", "f_64069_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#skipChunksLoadedCheck
    static jboolean get_field_skipChunksLoadedCheck(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "skipArenaLoadedCheck", "field_44878", "skipChunksLoadedCheck", "f_286982_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#skipChunksLoadedCheck
    static void set_field_skipChunksLoadedCheck(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "skipArenaLoadedCheck", "field_44878", "skipChunksLoadedCheck", "f_286982_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonUuid
    static jobject get_field_dragonUuid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "dragonUUID", "field_13116", "dragonUuid", "f_64070_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonUuid
    static void set_field_dragonUuid(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "dragonUUID", "field_13116", "dragonUuid", "f_64070_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#doLegacyCheck
    static jboolean get_field_doLegacyCheck(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "needsStateScanning", "field_13111", "doLegacyCheck", "f_64071_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#doLegacyCheck
    static void set_field_doLegacyCheck(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "needsStateScanning", "field_13111", "doLegacyCheck", "f_64071_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#exitPortalLocation
    static jobject get_field_exitPortalLocation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "portalLocation", "field_13117", "exitPortalLocation", "f_64072_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#exitPortalLocation
    static void set_field_exitPortalLocation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "portalLocation", "field_13117", "exitPortalLocation", "f_64072_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonSpawnState
    static jobject get_field_dragonSpawnState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "respawnStage", "field_13120", "dragonSpawnState", "f_64073_"), "Ldxa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#dragonSpawnState
    static void set_field_dragonSpawnState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "respawnStage", "field_13120", "dragonSpawnState", "f_64073_"), "Ldxa;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#spawnStateTimer
    static jint get_field_spawnStateTimer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "respawnTime", "field_13118", "spawnStateTimer", "f_64074_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#spawnStateTimer
    static void set_field_spawnStateTimer(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "respawnTime", "field_13118", "spawnStateTimer", "f_64074_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.dragon.EnderDragonFight#crystals
    static jobject get_field_crystals(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "respawnCrystals", "field_13109", "crystals", "f_64075_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.EnderDragonFight#crystals
    static void set_field_crystals(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "respawnCrystals", "field_13109", "crystals", "f_64075_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setSkipChunksLoadedCheck() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "skipArenaLoadedCheck", "method_51855", "setSkipChunksLoadedCheck", "m_287277_"), "()V");
    }

    static void setSkipChunksLoadedCheck(const jobject& obj) {
                
       const auto methodID = methodID_setSkipChunksLoadedCheck();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_toData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveData", "method_12530", "toData", "m_289745_"), "()Ldxb$a;");
    }

    static jobject toData(const jobject& obj) {
                
       const auto methodID = methodID_toData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tick", "method_12538", "tick", "m_64095_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_convertFromLegacy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "scanState", "method_12515", "convertFromLegacy", "m_64102_"), "()V");
    }

    static void convertFromLegacy(const jobject& obj) {
                
       const auto methodID = methodID_convertFromLegacy();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_checkDragonSeen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "findOrCreateDragon", "method_12525", "checkDragonSeen", "m_64103_"), "()V");
    }

    static void checkDragonSeen(const jobject& obj) {
                
       const auto methodID = methodID_checkDragonSeen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setSpawnState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRespawnStage", "method_12521", "setSpawnState", "m_64087_"), "(Ldxa;)V");
    }

    static void setSpawnState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSpawnState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_worldContainsEndPortal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "hasActiveExitPortal", "method_12514", "worldContainsEndPortal", "m_64104_"), "()Z");
    }

    static jboolean worldContainsEndPortal(const jobject& obj) {
                
       const auto methodID = methodID_worldContainsEndPortal();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_findEndPortal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "findExitPortal", "method_12531", "findEndPortal", "m_64105_"), "()Ldth$b;");
    }

    static jobject findEndPortal(const jobject& obj) {
                
       const auto methodID = methodID_findEndPortal();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_areChunksLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "isArenaLoaded", "method_12533", "areChunksLoaded", "m_64106_"), "()Z");
    }

    static jboolean areChunksLoaded(const jobject& obj) {
                
       const auto methodID = methodID_areChunksLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_updatePlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "updatePlayers", "method_12520", "updatePlayers", "m_64107_"), "()V");
    }

    static void updatePlayers(const jobject& obj) {
                
       const auto methodID = methodID_updatePlayers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_countAliveCrystals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "updateCrystalCount", "method_12535", "countAliveCrystals", "m_64108_"), "()V");
    }

    static void countAliveCrystals(const jobject& obj) {
                
       const auto methodID = methodID_countAliveCrystals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__dragonKilled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setDragonKilled", "method_12528", "dragonKilled", "m_64085_"), "(Lcia;)V");
    }

    static void _dragonKilled(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__dragonKilled();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clearGatewaysList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "removeAllGateways", "method_51856", "clearGatewaysList", "m_287238_"), "()V");
    }

    static void clearGatewaysList(const jobject& obj) {
                
       const auto methodID = methodID_clearGatewaysList();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_generateNewEndGateway() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "spawnNewGateway", "method_12519", "generateNewEndGateway", "m_64109_"), "()V");
    }

    static void generateNewEndGateway(const jobject& obj) {
                
       const auto methodID = methodID_generateNewEndGateway();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_generateEndGateway() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnNewGateway", "method_12516", "generateEndGateway", "m_64089_"), "(Ljd;)V");
    }

    static void generateEndGateway(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generateEndGateway();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_generateEndPortal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnExitPortal", "method_12518", "generateEndPortal", "m_64093_"), "(Z)V");
    }

    static void generateEndPortal(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_generateEndPortal();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createDragon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "createNewDragon", "method_12523", "createDragon", "m_64110_"), "()Lcia;");
    }

    static jobject createDragon(const jobject& obj) {
                
       const auto methodID = methodID_createDragon();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateFight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateDragon", "method_12532", "updateFight", "m_64096_"), "(Lcia;)V");
    }

    static void updateFight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateFight();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAliveEndCrystals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getCrystalsAlive", "method_12517", "getAliveEndCrystals", "m_64098_"), "()I");
    }

    static jint getAliveEndCrystals(const jobject& obj) {
                
       const auto methodID = methodID_getAliveEndCrystals();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_crystalDestroyed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onCrystalDestroyed", "method_12526", "crystalDestroyed", "m_64082_"), "(Lchz;Lbrk;)V");
    }

    static void crystalDestroyed(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_crystalDestroyed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasPreviouslyKilled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hasPreviouslyKilledDragon", "method_12536", "hasPreviouslyKilled", "m_64099_"), "()Z");
    }

    static jboolean hasPreviouslyKilled(const jobject& obj) {
                
       const auto methodID = methodID_hasPreviouslyKilled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_respawnDragon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "tryRespawn", "method_12522", "respawnDragon", "m_64100_"), "()V");
    }

    static void respawnDragon(const jobject& obj) {
                
       const auto methodID = methodID_respawnDragon();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__respawnDragon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "respawnDragon", "method_12529", "respawnDragon", "m_64091_"), "(Ljava/util/List;)V");
    }

    static void _respawnDragon(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__respawnDragon();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_resetEndCrystals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "resetSpikeCrystals", "method_12524", "resetEndCrystals", "m_64101_"), "()V");
    }

    static void resetEndCrystals(const jobject& obj) {
                
       const auto methodID = methodID_resetEndCrystals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDragonUuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getDragonUUID", "method_52179", "getDragonUuid", "m_288211_"), "()Ljava/util/UUID;");
    }

    static jobject getDragonUuid(const jobject& obj) {
                
       const auto methodID = methodID_getDragonUuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_ENDERDRAGONFIGHT_HPP