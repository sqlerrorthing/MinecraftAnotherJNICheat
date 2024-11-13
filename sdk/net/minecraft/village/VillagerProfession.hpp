// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_VILLAGE_VILLAGERPROFESSION_HPP
#define NET_MINECRAFT_VILLAGE_VILLAGERPROFESSION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.village.VillagerProfession
 * Remapped: cmn
 */
namespace VillagerProfession {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmn", "net/minecraft/world/entity/npc/VillagerProfession", "net/minecraft/class_3852", "net/minecraft/village/VillagerProfession", "net/minecraft/src/C_1121_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.village.VillagerProfession#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "name", "comp_818", "id", "f_35600_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerProfession#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "name", "comp_818", "id", "f_35600_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerProfession#heldWorkstation
    static jobject get_field_heldWorkstation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "heldJobSite", "comp_819", "heldWorkstation", "f_219628_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerProfession#heldWorkstation
    static void set_field_heldWorkstation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "heldJobSite", "comp_819", "heldWorkstation", "f_219628_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerProfession#acquirableWorkstation
    static jobject get_field_acquirableWorkstation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "acquirableJobSite", "comp_820", "acquirableWorkstation", "f_219629_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerProfession#acquirableWorkstation
    static void set_field_acquirableWorkstation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "acquirableJobSite", "comp_820", "acquirableWorkstation", "f_219629_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerProfession#gatherableItems
    static jobject get_field_gatherableItems(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "requestedItems", "comp_821", "gatherableItems", "f_35602_"), "Lcom/google/common/collect/ImmutableSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerProfession#gatherableItems
    static void set_field_gatherableItems(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "requestedItems", "comp_821", "gatherableItems", "f_35602_"), "Lcom/google/common/collect/ImmutableSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerProfession#secondaryJobSites
    static jobject get_field_secondaryJobSites(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "secondaryPoi", "comp_822", "secondaryJobSites", "f_35603_"), "Lcom/google/common/collect/ImmutableSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerProfession#secondaryJobSites
    static void set_field_secondaryJobSites(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "secondaryPoi", "comp_822", "secondaryJobSites", "f_35603_"), "Lcom/google/common/collect/ImmutableSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.VillagerProfession#workSound
    static jobject get_field_workSound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "workSound", "comp_823", "workSound", "f_35604_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.VillagerProfession#workSound
    static void set_field_workSound(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "workSound", "comp_823", "workSound", "f_35604_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#IS_ACQUIRABLE_JOB_SITE
    [[maybe_unused]] static jobject get_field_IS_ACQUIRABLE_JOB_SITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALL_ACQUIRABLE_JOBS", "field_39308", "IS_ACQUIRABLE_JOB_SITE", "f_219627_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#IS_ACQUIRABLE_JOB_SITE
    [[maybe_unused]] static void set_field_IS_ACQUIRABLE_JOB_SITE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALL_ACQUIRABLE_JOBS", "field_39308", "IS_ACQUIRABLE_JOB_SITE", "f_219627_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#NONE
    [[maybe_unused]] static jobject get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NONE", "field_17051", "NONE", "f_35585_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#NONE
    [[maybe_unused]] static void set_field_NONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NONE", "field_17051", "NONE", "f_35585_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#ARMORER
    [[maybe_unused]] static jobject get_field_ARMORER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ARMORER", "field_17052", "ARMORER", "f_35586_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#ARMORER
    [[maybe_unused]] static void set_field_ARMORER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ARMORER", "field_17052", "ARMORER", "f_35586_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#BUTCHER
    [[maybe_unused]] static jobject get_field_BUTCHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BUTCHER", "field_17053", "BUTCHER", "f_35587_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#BUTCHER
    [[maybe_unused]] static void set_field_BUTCHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BUTCHER", "field_17053", "BUTCHER", "f_35587_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#CARTOGRAPHER
    [[maybe_unused]] static jobject get_field_CARTOGRAPHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CARTOGRAPHER", "field_17054", "CARTOGRAPHER", "f_35588_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#CARTOGRAPHER
    [[maybe_unused]] static void set_field_CARTOGRAPHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CARTOGRAPHER", "field_17054", "CARTOGRAPHER", "f_35588_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#CLERIC
    [[maybe_unused]] static jobject get_field_CLERIC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CLERIC", "field_17055", "CLERIC", "f_35589_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#CLERIC
    [[maybe_unused]] static void set_field_CLERIC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CLERIC", "field_17055", "CLERIC", "f_35589_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#FARMER
    [[maybe_unused]] static jobject get_field_FARMER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FARMER", "field_17056", "FARMER", "f_35590_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#FARMER
    [[maybe_unused]] static void set_field_FARMER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FARMER", "field_17056", "FARMER", "f_35590_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#FISHERMAN
    [[maybe_unused]] static jobject get_field_FISHERMAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FISHERMAN", "field_17057", "FISHERMAN", "f_35591_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#FISHERMAN
    [[maybe_unused]] static void set_field_FISHERMAN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FISHERMAN", "field_17057", "FISHERMAN", "f_35591_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#FLETCHER
    [[maybe_unused]] static jobject get_field_FLETCHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FLETCHER", "field_17058", "FLETCHER", "f_35592_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#FLETCHER
    [[maybe_unused]] static void set_field_FLETCHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FLETCHER", "field_17058", "FLETCHER", "f_35592_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#LEATHERWORKER
    [[maybe_unused]] static jobject get_field_LEATHERWORKER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "LEATHERWORKER", "field_17059", "LEATHERWORKER", "f_35593_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#LEATHERWORKER
    [[maybe_unused]] static void set_field_LEATHERWORKER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "LEATHERWORKER", "field_17059", "LEATHERWORKER", "f_35593_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#LIBRARIAN
    [[maybe_unused]] static jobject get_field_LIBRARIAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "LIBRARIAN", "field_17060", "LIBRARIAN", "f_35594_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#LIBRARIAN
    [[maybe_unused]] static void set_field_LIBRARIAN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "LIBRARIAN", "field_17060", "LIBRARIAN", "f_35594_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#MASON
    [[maybe_unused]] static jobject get_field_MASON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "MASON", "field_17061", "MASON", "f_35595_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#MASON
    [[maybe_unused]] static void set_field_MASON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "MASON", "field_17061", "MASON", "f_35595_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#NITWIT
    [[maybe_unused]] static jobject get_field_NITWIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "NITWIT", "field_17062", "NITWIT", "f_35596_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#NITWIT
    [[maybe_unused]] static void set_field_NITWIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "NITWIT", "field_17062", "NITWIT", "f_35596_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#SHEPHERD
    [[maybe_unused]] static jobject get_field_SHEPHERD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SHEPHERD", "field_17063", "SHEPHERD", "f_35597_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#SHEPHERD
    [[maybe_unused]] static void set_field_SHEPHERD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SHEPHERD", "field_17063", "SHEPHERD", "f_35597_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#TOOLSMITH
    [[maybe_unused]] static jobject get_field_TOOLSMITH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "TOOLSMITH", "field_17064", "TOOLSMITH", "f_35598_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#TOOLSMITH
    [[maybe_unused]] static void set_field_TOOLSMITH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "TOOLSMITH", "field_17064", "TOOLSMITH", "f_35598_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.village.VillagerProfession#WEAPONSMITH
    [[maybe_unused]] static jobject get_field_WEAPONSMITH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "WEAPONSMITH", "field_17065", "WEAPONSMITH", "f_35599_"), "Lcmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.village.VillagerProfession#WEAPONSMITH
    [[maybe_unused]] static void set_field_WEAPONSMITH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "WEAPONSMITH", "field_17065", "WEAPONSMITH", "f_35599_"), "Lcmn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_16926", "register", "m_219643_"), "(Ljava/lang/String;Lakq;Lavo;)Lcmn;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_44007", "register", "m_219653_"), "(Ljava/lang/String;Ljava/util/function/Predicate;Ljava/util/function/Predicate;Lavo;)Lcmn;");
    }

    static jobject _register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID___register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_19197", "register", "m_219647_"), "(Ljava/lang/String;Lakq;Lcom/google/common/collect/ImmutableSet;Lcom/google/common/collect/ImmutableSet;Lavo;)Lcmn;");
    }

    static jobject __register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID___register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID____register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_44008", "register", "m_219658_"), "(Ljava/lang/String;Ljava/util/function/Predicate;Ljava/util/function/Predicate;Lcom/google/common/collect/ImmutableSet;Lcom/google/common/collect/ImmutableSet;Lavo;)Lcmn;");
    }

    static jobject ___register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID____register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "name", "comp_818", "id", "f_35600_"), "()Ljava/lang/String;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__heldWorkstation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "heldJobSite", "comp_819", "heldWorkstation", "f_219628_"), "()Ljava/util/function/Predicate;");
    }

    static jobject _heldWorkstation(const jobject& obj) {
                
       const auto methodID = methodID__heldWorkstation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__acquirableWorkstation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "acquirableJobSite", "comp_820", "acquirableWorkstation", "f_219629_"), "()Ljava/util/function/Predicate;");
    }

    static jobject _acquirableWorkstation(const jobject& obj) {
                
       const auto methodID = methodID__acquirableWorkstation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__gatherableItems() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "requestedItems", "comp_821", "gatherableItems", "f_35602_"), "()Lcom/google/common/collect/ImmutableSet;");
    }

    static jobject _gatherableItems(const jobject& obj) {
                
       const auto methodID = methodID__gatherableItems();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__secondaryJobSites() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "secondaryPoi", "comp_822", "secondaryJobSites", "f_35603_"), "()Lcom/google/common/collect/ImmutableSet;");
    }

    static jobject _secondaryJobSites(const jobject& obj) {
                
       const auto methodID = methodID__secondaryJobSites();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__workSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "workSound", "comp_823", "workSound", "f_35604_"), "()Lavo;");
    }

    static jobject _workSound(const jobject& obj) {
                
       const auto methodID = methodID__workSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_VILLAGE_VILLAGERPROFESSION_HPP