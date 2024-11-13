// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ENTITYPOSE_HPP
#define NET_MINECRAFT_ENTITY_ENTITYPOSE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.EntityPose
 * Remapped: bua
 */
namespace EntityPose {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bua", "net/minecraft/world/entity/Pose", "net/minecraft/class_4050", "net/minecraft/entity/EntityPose", "net/minecraft/src/C_535_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.EntityPose#STANDING
    [[maybe_unused]] static jobject get_field_STANDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STANDING", "field_18076", "STANDING", "STANDING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#STANDING
    [[maybe_unused]] static void set_field_STANDING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STANDING", "field_18076", "STANDING", "STANDING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#FALL_FLYING
    [[maybe_unused]] static jobject get_field_FALL_FLYING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FALL_FLYING", "field_18077", "FALL_FLYING", "FALL_FLYING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#FALL_FLYING
    [[maybe_unused]] static void set_field_FALL_FLYING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FALL_FLYING", "field_18077", "FALL_FLYING", "FALL_FLYING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#SLEEPING
    [[maybe_unused]] static jobject get_field_SLEEPING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SLEEPING", "field_18078", "SLEEPING", "SLEEPING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#SLEEPING
    [[maybe_unused]] static void set_field_SLEEPING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SLEEPING", "field_18078", "SLEEPING", "SLEEPING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#SWIMMING
    [[maybe_unused]] static jobject get_field_SWIMMING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SWIMMING", "field_18079", "SWIMMING", "SWIMMING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#SWIMMING
    [[maybe_unused]] static void set_field_SWIMMING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SWIMMING", "field_18079", "SWIMMING", "SWIMMING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#SPIN_ATTACK
    [[maybe_unused]] static jobject get_field_SPIN_ATTACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SPIN_ATTACK", "field_18080", "SPIN_ATTACK", "SPIN_ATTACK"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#SPIN_ATTACK
    [[maybe_unused]] static void set_field_SPIN_ATTACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SPIN_ATTACK", "field_18080", "SPIN_ATTACK", "SPIN_ATTACK"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#CROUCHING
    [[maybe_unused]] static jobject get_field_CROUCHING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CROUCHING", "field_18081", "CROUCHING", "CROUCHING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#CROUCHING
    [[maybe_unused]] static void set_field_CROUCHING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CROUCHING", "field_18081", "CROUCHING", "CROUCHING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#LONG_JUMPING
    [[maybe_unused]] static jobject get_field_LONG_JUMPING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LONG_JUMPING", "field_30095", "LONG_JUMPING", "LONG_JUMPING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#LONG_JUMPING
    [[maybe_unused]] static void set_field_LONG_JUMPING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LONG_JUMPING", "field_30095", "LONG_JUMPING", "LONG_JUMPING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#DYING
    [[maybe_unused]] static jobject get_field_DYING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DYING", "field_18082", "DYING", "DYING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#DYING
    [[maybe_unused]] static void set_field_DYING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DYING", "field_18082", "DYING", "DYING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#CROAKING
    [[maybe_unused]] static jobject get_field_CROAKING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CROAKING", "field_37422", "CROAKING", "CROAKING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#CROAKING
    [[maybe_unused]] static void set_field_CROAKING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CROAKING", "field_37422", "CROAKING", "CROAKING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#USING_TONGUE
    [[maybe_unused]] static jobject get_field_USING_TONGUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "USING_TONGUE", "field_37423", "USING_TONGUE", "USING_TONGUE"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#USING_TONGUE
    [[maybe_unused]] static void set_field_USING_TONGUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "USING_TONGUE", "field_37423", "USING_TONGUE", "USING_TONGUE"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#SITTING
    [[maybe_unused]] static jobject get_field_SITTING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SITTING", "field_40118", "SITTING", "SITTING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#SITTING
    [[maybe_unused]] static void set_field_SITTING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SITTING", "field_40118", "SITTING", "SITTING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#ROARING
    [[maybe_unused]] static jobject get_field_ROARING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ROARING", "field_38097", "ROARING", "ROARING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#ROARING
    [[maybe_unused]] static void set_field_ROARING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ROARING", "field_38097", "ROARING", "ROARING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#SNIFFING
    [[maybe_unused]] static jobject get_field_SNIFFING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SNIFFING", "field_38098", "SNIFFING", "SNIFFING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#SNIFFING
    [[maybe_unused]] static void set_field_SNIFFING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SNIFFING", "field_38098", "SNIFFING", "SNIFFING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#EMERGING
    [[maybe_unused]] static jobject get_field_EMERGING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "EMERGING", "field_38099", "EMERGING", "EMERGING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#EMERGING
    [[maybe_unused]] static void set_field_EMERGING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "EMERGING", "field_38099", "EMERGING", "EMERGING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#DIGGING
    [[maybe_unused]] static jobject get_field_DIGGING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DIGGING", "field_38100", "DIGGING", "DIGGING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#DIGGING
    [[maybe_unused]] static void set_field_DIGGING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DIGGING", "field_38100", "DIGGING", "DIGGING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#SLIDING
    [[maybe_unused]] static jobject get_field_SLIDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SLIDING", "field_47246", "SLIDING", "SLIDING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#SLIDING
    [[maybe_unused]] static void set_field_SLIDING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SLIDING", "field_47246", "SLIDING", "SLIDING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#SHOOTING
    [[maybe_unused]] static jobject get_field_SHOOTING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SHOOTING", "field_47247", "SHOOTING", "SHOOTING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#SHOOTING
    [[maybe_unused]] static void set_field_SHOOTING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SHOOTING", "field_47247", "SHOOTING", "SHOOTING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#INHALING
    [[maybe_unused]] static jobject get_field_INHALING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "INHALING", "field_47248", "INHALING", "INHALING"), "Lbua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#INHALING
    [[maybe_unused]] static void set_field_INHALING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "INHALING", "field_47248", "INHALING", "INHALING"), "Lbua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#INDEX_TO_VALUE
    [[maybe_unused]] static jobject get_field_INDEX_TO_VALUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "BY_ID", "field_48322", "INDEX_TO_VALUE", "f_315549_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#INDEX_TO_VALUE
    [[maybe_unused]] static void set_field_INDEX_TO_VALUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "BY_ID", "field_48322", "INDEX_TO_VALUE", "f_315549_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EntityPose#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "STREAM_CODEC", "field_48323", "PACKET_CODEC", "f_315890_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EntityPose#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "STREAM_CODEC", "field_48323", "PACKET_CODEC", "f_315890_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.EntityPose#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "id", "field_48324", "index", "f_314088_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.EntityPose#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "id", "field_48324", "index", "f_314088_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbua;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbua;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "method_56081", "getIndex", "m_320085_"), "()I");
    }

    static jint getIndex(const jobject& obj) {
                
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_ENTITYPOSE_HPP