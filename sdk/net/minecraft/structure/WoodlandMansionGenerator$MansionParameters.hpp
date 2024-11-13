// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$MANSIONPARAMETERS_HPP
#define NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$MANSIONPARAMETERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.WoodlandMansionGenerator$MansionParameters
 * Remapped: emn$c
 */
namespace WoodlandMansionGenerator$MansionParameters {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emn$c", "net/minecraft/world/level/levelgen/structure/structures/WoodlandMansionPieces$MansionGrid", "net/minecraft/class_3471$class_3474", "net/minecraft/structure/WoodlandMansionGenerator$MansionParameters", "net/minecraft/src/C_213293_$C_213296_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#SIZE
    [[maybe_unused]] static jint get_field_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_SIZE", "field_31665", "SIZE", "f_230020_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#SIZE
    [[maybe_unused]] static void set_field_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_SIZE", "field_31665", "SIZE", "f_230020_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#UNSET
    [[maybe_unused]] static jint get_field_UNSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CLEAR", "field_31666", "UNSET", "f_230021_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#UNSET
    [[maybe_unused]] static void set_field_UNSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CLEAR", "field_31666", "UNSET", "f_230021_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#CORRIDOR
    [[maybe_unused]] static jint get_field_CORRIDOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CORRIDOR", "field_31667", "CORRIDOR", "f_230022_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#CORRIDOR
    [[maybe_unused]] static void set_field_CORRIDOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CORRIDOR", "field_31667", "CORRIDOR", "f_230022_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ROOM
    [[maybe_unused]] static jint get_field_ROOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ROOM", "field_31668", "ROOM", "f_230023_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ROOM
    [[maybe_unused]] static void set_field_ROOM(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ROOM", "field_31668", "ROOM", "f_230023_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#STAIRCASE
    [[maybe_unused]] static jint get_field_STAIRCASE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "START_ROOM", "field_31669", "STAIRCASE", "f_230024_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#STAIRCASE
    [[maybe_unused]] static void set_field_STAIRCASE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "START_ROOM", "field_31669", "STAIRCASE", "f_230024_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#UNUSED
    [[maybe_unused]] static jint get_field_UNUSED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TEST_ROOM", "field_31670", "UNUSED", "f_230025_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#UNUSED
    [[maybe_unused]] static void set_field_UNUSED(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TEST_ROOM", "field_31670", "UNUSED", "f_230025_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#OUTSIDE
    [[maybe_unused]] static jint get_field_OUTSIDE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BLOCKED", "field_31671", "OUTSIDE", "f_230026_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#OUTSIDE
    [[maybe_unused]] static void set_field_OUTSIDE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BLOCKED", "field_31671", "OUTSIDE", "f_230026_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#SMALL_ROOM_FLAG
    [[maybe_unused]] static jint get_field_SMALL_ROOM_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ROOM_1x1", "field_31672", "SMALL_ROOM_FLAG", "f_230027_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#SMALL_ROOM_FLAG
    [[maybe_unused]] static void set_field_SMALL_ROOM_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ROOM_1x1", "field_31672", "SMALL_ROOM_FLAG", "f_230027_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#MEDIUM_ROOM_FLAG
    [[maybe_unused]] static jint get_field_MEDIUM_ROOM_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ROOM_1x2", "field_31673", "MEDIUM_ROOM_FLAG", "f_230028_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#MEDIUM_ROOM_FLAG
    [[maybe_unused]] static void set_field_MEDIUM_ROOM_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ROOM_1x2", "field_31673", "MEDIUM_ROOM_FLAG", "f_230028_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#BIG_ROOM_FLAG
    [[maybe_unused]] static jint get_field_BIG_ROOM_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ROOM_2x2", "field_31674", "BIG_ROOM_FLAG", "f_230029_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#BIG_ROOM_FLAG
    [[maybe_unused]] static void set_field_BIG_ROOM_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ROOM_2x2", "field_31674", "BIG_ROOM_FLAG", "f_230029_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ORIGIN_CELL_FLAG
    [[maybe_unused]] static jint get_field_ORIGIN_CELL_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ROOM_ORIGIN_FLAG", "field_31675", "ORIGIN_CELL_FLAG", "f_230030_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ORIGIN_CELL_FLAG
    [[maybe_unused]] static void set_field_ORIGIN_CELL_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ROOM_ORIGIN_FLAG", "field_31675", "ORIGIN_CELL_FLAG", "f_230030_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ENTRANCE_CELL_FLAG
    [[maybe_unused]] static jint get_field_ENTRANCE_CELL_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ROOM_DOOR_FLAG", "field_31676", "ENTRANCE_CELL_FLAG", "f_230031_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ENTRANCE_CELL_FLAG
    [[maybe_unused]] static void set_field_ENTRANCE_CELL_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ROOM_DOOR_FLAG", "field_31676", "ENTRANCE_CELL_FLAG", "f_230031_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#STAIRCASE_CELL_FLAG
    [[maybe_unused]] static jint get_field_STAIRCASE_CELL_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ROOM_STAIRS_FLAG", "field_31677", "STAIRCASE_CELL_FLAG", "f_230032_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#STAIRCASE_CELL_FLAG
    [[maybe_unused]] static void set_field_STAIRCASE_CELL_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ROOM_STAIRS_FLAG", "field_31677", "STAIRCASE_CELL_FLAG", "f_230032_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#CARPET_CELL_FLAG
    [[maybe_unused]] static jint get_field_CARPET_CELL_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ROOM_CORRIDOR_FLAG", "field_31678", "CARPET_CELL_FLAG", "f_230033_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#CARPET_CELL_FLAG
    [[maybe_unused]] static void set_field_CARPET_CELL_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ROOM_CORRIDOR_FLAG", "field_31678", "CARPET_CELL_FLAG", "f_230033_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ROOM_SIZE_MASK
    [[maybe_unused]] static jint get_field_ROOM_SIZE_MASK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "ROOM_TYPE_MASK", "field_31679", "ROOM_SIZE_MASK", "f_230034_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ROOM_SIZE_MASK
    [[maybe_unused]] static void set_field_ROOM_SIZE_MASK(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "ROOM_TYPE_MASK", "field_31679", "ROOM_SIZE_MASK", "f_230034_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ROOM_ID_MASK
    [[maybe_unused]] static jint get_field_ROOM_ID_MASK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "ROOM_ID_MASK", "field_31680", "ROOM_ID_MASK", "f_230035_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#ROOM_ID_MASK
    [[maybe_unused]] static void set_field_ROOM_ID_MASK(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "ROOM_ID_MASK", "field_31680", "ROOM_ID_MASK", "f_230035_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#random
    static jobject get_field_random(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "random", "field_15438", "random", "f_230036_"), "Layw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#random
    static void set_field_random(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "random", "field_15438", "random", "f_230036_"), "Layw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#baseLayout
    static jobject get_field_baseLayout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "baseGrid", "field_15440", "baseLayout", "f_230037_"), "Lemn$g;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#baseLayout
    static void set_field_baseLayout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "baseGrid", "field_15440", "baseLayout", "f_230037_"), "Lemn$g;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#thirdFloorLayout
    static jobject get_field_thirdFloorLayout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "thirdFloorGrid", "field_15439", "thirdFloorLayout", "f_230038_"), "Lemn$g;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#thirdFloorLayout
    static void set_field_thirdFloorLayout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "thirdFloorGrid", "field_15439", "thirdFloorLayout", "f_230038_"), "Lemn$g;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#roomFlagsByFloor
    static jobject get_field_roomFlagsByFloor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "floorRooms", "field_15443", "roomFlagsByFloor", "f_230039_"), "[Lemn$g;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#roomFlagsByFloor
    static void set_field_roomFlagsByFloor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "floorRooms", "field_15443", "roomFlagsByFloor", "f_230039_"), "[Lemn$g;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#entranceI
    static jint get_field_entranceI(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "entranceX", "field_15442", "entranceI", "f_230040_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#entranceI
    static void set_field_entranceI(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "entranceX", "field_15442", "entranceI", "f_230040_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#entranceJ
    static jint get_field_entranceJ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "entranceY", "field_15441", "entranceJ", "f_230041_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.WoodlandMansionGenerator$MansionParameters#entranceJ
    static void set_field_entranceJ(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "entranceY", "field_15441", "entranceJ", "f_230041_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_isInsideMansion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isHouse", "method_15047", "isInsideMansion", "m_230047_"), "(Lemn$g;II)Z");
    }

    static jboolean isInsideMansion(const jobject& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_isInsideMansion();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isRoomId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isRoomId", "method_15039", "isRoomId", "m_230051_"), "(Lemn$g;IIII)Z");
    }

    static jboolean isRoomId(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_isRoomId();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_findConnectedRoomDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get1x2RoomDirection", "method_15040", "findConnectedRoomDirection", "m_230067_"), "(Lemn$g;IIII)Lji;");
    }

    static jobject findConnectedRoomDirection(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_findConnectedRoomDirection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_layoutCorridor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recursiveCorridor", "method_15045", "layoutCorridor", "m_230057_"), "(Lemn$g;IILji;I)V");
    }

    static void layoutCorridor(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jint& arg4) {
                
       const auto methodID = methodID_layoutCorridor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_adjustLayoutWithRooms() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cleanEdges", "method_15046", "adjustLayoutWithRooms", "m_230045_"), "(Lemn$g;)Z");
    }

    static jboolean adjustLayoutWithRooms(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_adjustLayoutWithRooms();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_layoutThirdFloor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupThirdFloor", "method_15048", "layoutThirdFloor", "m_230066_"), "()V");
    }

    static void layoutThirdFloor(const jobject& obj) {
                
       const auto methodID = methodID_layoutThirdFloor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateRoomFlags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "identifyRooms", "method_15042", "updateRoomFlags", "m_230063_"), "(Lemn$g;Lemn$g;)V");
    }

    static void updateRoomFlags(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateRoomFlags();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$MANSIONPARAMETERS_HPP