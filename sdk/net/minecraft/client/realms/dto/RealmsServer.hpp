// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RealmsServer
 * Remapped: fcp
 */
namespace RealmsServer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcp", "com/mojang/realmsclient/dto/RealmsServer", "net/minecraft/class_4877", "net/minecraft/client/realms/dto/RealmsServer", "net/minecraft/src/C_3244_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.dto.RealmsServer#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "LOGGER", "field_22617", "LOGGER", "f_87491_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RealmsServer#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "LOGGER", "field_22617", "LOGGER", "f_87491_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.dto.RealmsServer#NO_PARENT
    [[maybe_unused]] static jint get_field_NO_PARENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "NO_VALUE", "field_46696", "NO_PARENT", "f_303004_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RealmsServer#NO_PARENT
    [[maybe_unused]] static void set_field_NO_PARENT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "NO_VALUE", "field_46696", "NO_PARENT", "f_303004_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#id
    static jlong get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "field_22599", "id", "f_87473_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#id
    static void set_field_id(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "field_22599", "id", "f_87473_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#remoteSubscriptionId
    static jobject get_field_remoteSubscriptionId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "remoteSubscriptionId", "field_22600", "remoteSubscriptionId", "f_87474_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#remoteSubscriptionId
    static void set_field_remoteSubscriptionId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "remoteSubscriptionId", "field_22600", "remoteSubscriptionId", "f_87474_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_22601", "name", "f_87475_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_22601", "name", "f_87475_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#description
    static jobject get_field_description(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "motd", "field_22602", "description", "f_87476_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#description
    static void set_field_description(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "motd", "field_22602", "description", "f_87476_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "state", "field_22603", "state", "f_87477_"), "Lfcp$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "state", "field_22603", "state", "f_87477_"), "Lfcp$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#owner
    static jobject get_field_owner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "owner", "field_22604", "owner", "f_87478_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#owner
    static void set_field_owner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "owner", "field_22604", "owner", "f_87478_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#ownerUUID
    static jobject get_field_ownerUUID(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "ownerUUID", "field_22605", "ownerUUID", "f_87479_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#ownerUUID
    static void set_field_ownerUUID(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "ownerUUID", "field_22605", "ownerUUID", "f_87479_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#players
    static jobject get_field_players(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "players", "field_22606", "players", "f_87480_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#players
    static void set_field_players(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "players", "field_22606", "players", "f_87480_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#slots
    static jobject get_field_slots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "slots", "field_22607", "slots", "f_87481_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#slots
    static void set_field_slots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "slots", "field_22607", "slots", "f_87481_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#expired
    static jboolean get_field_expired(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "expired", "field_22608", "expired", "f_87482_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#expired
    static void set_field_expired(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "expired", "field_22608", "expired", "f_87482_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#expiredTrial
    static jboolean get_field_expiredTrial(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "expiredTrial", "field_22609", "expiredTrial", "f_87483_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#expiredTrial
    static void set_field_expiredTrial(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "expiredTrial", "field_22609", "expiredTrial", "f_87483_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#daysLeft
    static jint get_field_daysLeft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "daysLeft", "field_22610", "daysLeft", "f_87484_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#daysLeft
    static void set_field_daysLeft(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "daysLeft", "field_22610", "daysLeft", "f_87484_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#worldType
    static jobject get_field_worldType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "worldType", "field_22611", "worldType", "f_87485_"), "Lfcp$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#worldType
    static void set_field_worldType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "worldType", "field_22611", "worldType", "f_87485_"), "Lfcp$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#activeSlot
    static jint get_field_activeSlot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "activeSlot", "field_22612", "activeSlot", "f_87486_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#activeSlot
    static void set_field_activeSlot(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "activeSlot", "field_22612", "activeSlot", "f_87486_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#minigameName
    static jobject get_field_minigameName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "minigameName", "field_22613", "minigameName", "f_87487_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#minigameName
    static void set_field_minigameName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "minigameName", "field_22613", "minigameName", "f_87487_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#minigameId
    static jint get_field_minigameId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "minigameId", "field_22614", "minigameId", "f_87488_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#minigameId
    static void set_field_minigameId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "minigameId", "field_22614", "minigameId", "f_87488_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#minigameImage
    static jobject get_field_minigameImage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "minigameImage", "field_22615", "minigameImage", "f_87489_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#minigameImage
    static void set_field_minigameImage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "minigameImage", "field_22615", "minigameImage", "f_87489_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#parentWorldId
    static jlong get_field_parentWorldId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "parentRealmId", "field_46692", "parentWorldId", "f_314715_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#parentWorldId
    static void set_field_parentWorldId(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "parentRealmId", "field_46692", "parentWorldId", "f_314715_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#parentWorldName
    static jobject get_field_parentWorldName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "parentWorldName", "field_46693", "parentWorldName", "f_302572_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#parentWorldName
    static void set_field_parentWorldName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "parentWorldName", "field_46693", "parentWorldName", "f_302572_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#activeVersion
    static jobject get_field_activeVersion(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "activeVersion", "field_46694", "activeVersion", "f_303415_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#activeVersion
    static void set_field_activeVersion(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "activeVersion", "field_46694", "activeVersion", "f_303415_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServer#compatibility
    static jobject get_field_compatibility(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "compatibility", "field_46695", "compatibility", "f_302826_"), "Lfcp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer#compatibility
    static void set_field_compatibility(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "compatibility", "field_46695", "compatibility", "f_302826_"), "Lfcp$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getDescription() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDescription", "method_25053", "getDescription", "m_87494_"), "()Ljava/lang/String;");
    }

    static jobject getDescription(const jobject& obj) {
                
       const auto methodID = methodID_getDescription();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getName", "method_25062", "getName", "m_87512_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMinigameName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMinigameName", "method_25065", "getMinigameName", "m_87517_"), "()Ljava/lang/String;");
    }

    static jobject getMinigameName(const jobject& obj) {
                
       const auto methodID = methodID_getMinigameName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setName", "method_25060", "setName", "m_87508_"), "(Ljava/lang/String;)V");
    }

    static void setName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setName();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setDescription() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setDescription", "method_25064", "setDescription", "m_87515_"), "(Ljava/lang/String;)V");
    }

    static void setDescription(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setDescription();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_25056", "parse", "m_87499_"), "(Lcom/google/gson/JsonObject;)Lfcp;");
    }

    static jobject parse(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_sortInvited() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "sortInvited", "method_25058", "sortInvited", "m_87504_"), "(Lfcp;)V");
    }

    static void sortInvited(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_sortInvited();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_parseInvited() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parseInvited", "method_25055", "parseInvited", "m_87497_"), "(Lcom/google/gson/JsonArray;)Ljava/util/List;");
    }

    static jobject parseInvited(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_parseInvited();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_parseSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "parseSlots", "method_25063", "parseSlots", "m_87513_"), "(Lcom/google/gson/JsonArray;)Ljava/util/Map;");
    }

    static jobject parseSlots(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_parseSlots();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getEmptySlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("j", "createEmptySlots", "method_25069", "getEmptySlots", "m_87524_"), "()Ljava/util/Map;");
    }

    static jobject getEmptySlots() {
       const auto clazz = self();
       const auto methodID = methodID_getEmptySlots();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "parse", "method_25066", "parse", "m_87518_"), "(Ljava/lang/String;)Lfcp;");
    }

    static jobject _parse(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__parse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "getState", "method_25068", "getState", "m_87525_"), "(Ljava/lang/String;)Lfcp$c;");
    }

    static jobject getState(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getState();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getWorldType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "getWorldType", "method_25070", "getWorldType", "m_87529_"), "(Ljava/lang/String;)Lfcp$d;");
    }

    static jobject getWorldType(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getWorldType();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getCompatibility() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "getCompatibility", "method_54366", "getCompatibility", "m_305316_"), "(Ljava/lang/String;)Lfcp$a;");
    }

    static jobject getCompatibility(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getCompatibility();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isCompatible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isCompatible", "method_54363", "isCompatible", "m_307151_"), "()Z");
    }

    static jboolean isCompatible(const jobject& obj) {
                
       const auto methodID = methodID_isCompatible();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_needsUpgrade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "needsUpgrade", "method_54364", "needsUpgrade", "m_306853_"), "()Z");
    }

    static jboolean needsUpgrade(const jobject& obj) {
                
       const auto methodID = methodID_needsUpgrade();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_needsDowngrade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "needsDowngrade", "method_54365", "needsDowngrade", "m_307341_"), "()Z");
    }

    static jboolean needsDowngrade(const jobject& obj) {
                
       const auto methodID = methodID_needsDowngrade();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_clone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "clone", "method_25067", "clone", "clone"), "()Lfcp;");
    }

    static jobject clone(const jobject& obj) {
                
       const auto methodID = methodID_clone();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_cloneSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cloneSlots", "method_25061", "cloneSlots", "m_87510_"), "(Ljava/util/Map;)Ljava/util/Map;");
    }

    static jobject cloneSlots(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_cloneSlots();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasParentWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isSnapshotRealm", "method_54367", "hasParentWorld", "m_307276_"), "()Z");
    }

    static jboolean hasParentWorld(const jobject& obj) {
                
       const auto methodID = methodID_hasParentWorld();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isMinigame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isMinigameActive", "method_60315", "isMinigame", "m_338584_"), "()Z");
    }

    static jboolean isMinigame(const jobject& obj) {
                
       const auto methodID = methodID_isMinigame();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWorldName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getWorldName", "method_25054", "getWorldName", "m_87495_"), "(I)Ljava/lang/String;");
    }

    static jobject getWorldName(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getWorldName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createServerInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "toServerData", "method_31403", "createServerInfo", "m_87522_"), "(Ljava/lang/String;)Lfzt;");
    }

    static jobject createServerInfo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createServerInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER_HPP