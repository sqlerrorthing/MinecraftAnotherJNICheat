// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBRAINCUSTOMPAYLOAD$BRAIN_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBRAINCUSTOMPAYLOAD$BRAIN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain
 * Remapped: aag$a
 */
namespace DebugBrainCustomPayload$Brain {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aag$a", "net/minecraft/network/protocol/common/custom/BrainDebugPayload$BrainDump", "net/minecraft/class_8708$class_4232", "net/minecraft/network/packet/s2c/custom/DebugBrainCustomPayload$Brain", "net/minecraft/src/C_290064_$C_290057_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#uuid
    static jobject get_field_uuid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uuid", "comp_1659", "uuid", "f_291882_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#uuid
    static void set_field_uuid(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uuid", "comp_1659", "uuid", "f_291882_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#entityId
    static jint get_field_entityId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1660", "entityId", "f_290876_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#entityId
    static void set_field_entityId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1660", "entityId", "f_290876_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "comp_1661", "name", "f_290744_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "comp_1661", "name", "f_290744_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#profession
    static jobject get_field_profession(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "profession", "comp_1662", "profession", "f_291428_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#profession
    static void set_field_profession(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "profession", "comp_1662", "profession", "f_291428_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#xp
    static jint get_field_xp(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xp", "comp_1663", "xp", "f_290464_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#xp
    static void set_field_xp(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xp", "comp_1663", "xp", "f_290464_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#health
    static jfloat get_field_health(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "health", "comp_1664", "health", "f_290963_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#health
    static void set_field_health(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "health", "comp_1664", "health", "f_290963_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#maxHealth
    static jfloat get_field_maxHealth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxHealth", "comp_1665", "maxHealth", "f_290897_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#maxHealth
    static void set_field_maxHealth(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxHealth", "comp_1665", "maxHealth", "f_290897_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "pos", "comp_1666", "pos", "f_290961_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "pos", "comp_1666", "pos", "f_290961_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "inventory", "comp_1667", "inventory", "f_290327_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "inventory", "comp_1667", "inventory", "f_290327_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "path", "comp_1668", "path", "f_291288_"), "Leps;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "path", "comp_1668", "path", "f_291288_"), "Leps;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#wantsGolem
    static jboolean get_field_wantsGolem(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "wantsGolem", "comp_1669", "wantsGolem", "f_291194_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#wantsGolem
    static void set_field_wantsGolem(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "wantsGolem", "comp_1669", "wantsGolem", "f_291194_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#angerLevel
    static jint get_field_angerLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "angerLevel", "comp_1670", "angerLevel", "f_290646_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#angerLevel
    static void set_field_angerLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "angerLevel", "comp_1670", "angerLevel", "f_290646_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#possibleActivities
    static jobject get_field_possibleActivities(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "activities", "comp_1671", "possibleActivities", "f_291419_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#possibleActivities
    static void set_field_possibleActivities(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "activities", "comp_1671", "possibleActivities", "f_291419_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#runningTasks
    static jobject get_field_runningTasks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "behaviors", "comp_1672", "runningTasks", "f_291433_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#runningTasks
    static void set_field_runningTasks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "behaviors", "comp_1672", "runningTasks", "f_291433_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#memories
    static jobject get_field_memories(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "memories", "comp_1673", "memories", "f_291086_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#memories
    static void set_field_memories(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "memories", "comp_1673", "memories", "f_291086_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#gossips
    static jobject get_field_gossips(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "gossips", "comp_1674", "gossips", "f_290472_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#gossips
    static void set_field_gossips(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "gossips", "comp_1674", "gossips", "f_290472_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#pois
    static jobject get_field_pois(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "pois", "comp_1675", "pois", "f_291607_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#pois
    static void set_field_pois(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "pois", "comp_1675", "pois", "f_291607_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#potentialPois
    static jobject get_field_potentialPois(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "potentialPois", "comp_1676", "potentialPois", "f_290560_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBrainCustomPayload$Brain#potentialPois
    static void set_field_potentialPois(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "potentialPois", "comp_1676", "potentialPois", "f_290560_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_53032", "write", "m_294234_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isPointOfInterest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasPoi", "method_23151", "isPointOfInterest", "m_293274_"), "(Ljd;)Z");
    }

    static jboolean isPointOfInterest(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isPointOfInterest();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isPotentialJobSite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasPotentialPoi", "method_29388", "isPotentialJobSite", "m_293165_"), "(Ljd;)Z");
    }

    static jboolean isPotentialJobSite(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isPotentialJobSite();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__uuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "uuid", "comp_1659", "uuid", "f_291882_"), "()Ljava/util/UUID;");
    }

    static jobject _uuid(const jobject& obj) {
                
       const auto methodID = methodID__uuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entityId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "id", "comp_1660", "entityId", "f_290876_"), "()I");
    }

    static jint _entityId(const jobject& obj) {
                
       const auto methodID = methodID__entityId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "name", "comp_1661", "name", "f_290744_"), "()Ljava/lang/String;");
    }

    static jobject _name(const jobject& obj) {
                
       const auto methodID = methodID__name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__profession() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "profession", "comp_1662", "profession", "f_291428_"), "()Ljava/lang/String;");
    }

    static jobject _profession(const jobject& obj) {
                
       const auto methodID = methodID__profession();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__xp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "xp", "comp_1663", "xp", "f_290464_"), "()I");
    }

    static jint _xp(const jobject& obj) {
                
       const auto methodID = methodID__xp();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__health() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "health", "comp_1664", "health", "f_290963_"), "()F");
    }

    static jfloat _health(const jobject& obj) {
                
       const auto methodID = methodID__health();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__maxHealth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "maxHealth", "comp_1665", "maxHealth", "f_290897_"), "()F");
    }

    static jfloat _maxHealth(const jobject& obj) {
                
       const auto methodID = methodID__maxHealth();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__pos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "pos", "comp_1666", "pos", "f_290961_"), "()Lexc;");
    }

    static jobject _pos(const jobject& obj) {
                
       const auto methodID = methodID__pos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__inventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "inventory", "comp_1667", "inventory", "f_290327_"), "()Ljava/lang/String;");
    }

    static jobject _inventory(const jobject& obj) {
                
       const auto methodID = methodID__inventory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__path() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "path", "comp_1668", "path", "f_291288_"), "()Leps;");
    }

    static jobject _path(const jobject& obj) {
                
       const auto methodID = methodID__path();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__wantsGolem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "wantsGolem", "comp_1669", "wantsGolem", "f_291194_"), "()Z");
    }

    static jboolean _wantsGolem(const jobject& obj) {
                
       const auto methodID = methodID__wantsGolem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__angerLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "angerLevel", "comp_1670", "angerLevel", "f_290646_"), "()I");
    }

    static jint _angerLevel(const jobject& obj) {
                
       const auto methodID = methodID__angerLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__possibleActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "activities", "comp_1671", "possibleActivities", "f_291419_"), "()Ljava/util/List;");
    }

    static jobject _possibleActivities(const jobject& obj) {
                
       const auto methodID = methodID__possibleActivities();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__runningTasks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "behaviors", "comp_1672", "runningTasks", "f_291433_"), "()Ljava/util/List;");
    }

    static jobject _runningTasks(const jobject& obj) {
                
       const auto methodID = methodID__runningTasks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__memories() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "memories", "comp_1673", "memories", "f_291086_"), "()Ljava/util/List;");
    }

    static jobject _memories(const jobject& obj) {
                
       const auto methodID = methodID__memories();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__gossips() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "gossips", "comp_1674", "gossips", "f_290472_"), "()Ljava/util/List;");
    }

    static jobject _gossips(const jobject& obj) {
                
       const auto methodID = methodID__gossips();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__pois() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "pois", "comp_1675", "pois", "f_291607_"), "()Ljava/util/Set;");
    }

    static jobject _pois(const jobject& obj) {
                
       const auto methodID = methodID__pois();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__potentialPois() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "potentialPois", "comp_1676", "potentialPois", "f_290560_"), "()Ljava/util/Set;");
    }

    static jobject _potentialPois(const jobject& obj) {
                
       const auto methodID = methodID__potentialPois();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBRAINCUSTOMPAYLOAD$BRAIN_HPP