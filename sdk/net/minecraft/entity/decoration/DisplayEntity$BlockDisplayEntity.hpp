// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$BLOCKDISPLAYENTITY_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$BLOCKDISPLAYENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$BlockDisplayEntity
 * Remapped: bsq$b
 */
namespace DisplayEntity$BlockDisplayEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$b", "net/minecraft/world/entity/Display$BlockDisplay", "net/minecraft/class_8113$class_8115", "net/minecraft/entity/decoration/DisplayEntity$BlockDisplayEntity", "net/minecraft/src/C_268383_$C_268406_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.decoration.DisplayEntity$BlockDisplayEntity#BLOCK_STATE_NBT_KEY
    [[maybe_unused]] static jobject get_field_BLOCK_STATE_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TAG_BLOCK_STATE", "field_42415", "BLOCK_STATE_NBT_KEY", "f_268661_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.decoration.DisplayEntity$BlockDisplayEntity#BLOCK_STATE_NBT_KEY
    [[maybe_unused]] static void set_field_BLOCK_STATE_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TAG_BLOCK_STATE", "field_42415", "BLOCK_STATE_NBT_KEY", "f_268661_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.decoration.DisplayEntity$BlockDisplayEntity#BLOCK_STATE
    [[maybe_unused]] static jobject get_field_BLOCK_STATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "DATA_BLOCK_STATE_ID", "field_42416", "BLOCK_STATE", "f_268543_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$BlockDisplayEntity#BLOCK_STATE
    [[maybe_unused]] static void set_field_BLOCK_STATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "DATA_BLOCK_STATE_ID", "field_42416", "BLOCK_STATE", "f_268543_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$BlockDisplayEntity#data
    static jobject get_field_data(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "blockRenderState", "field_43186", "data", "f_276560_"), "Lbsq$b$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$BlockDisplayEntity#data
    static void set_field_data(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "blockRenderState", "field_43186", "data", "f_276560_"), "Lbsq$b$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onTrackedDataSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onSyncedDataUpdated", "method_5674", "onTrackedDataSet", "m_7350_"), "(Lajw;)V");
    }

    static void onTrackedDataSet(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onTrackedDataSet();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getBlockState", "method_48884", "getBlockState", "m_269134_"), "()Ldtc;");
    }

    static jobject getBlockState(const jobject& obj) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setBlockState", "method_48883", "setBlockState", "m_269329_"), "(Ldtc;)V");
    }

    static void setBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBlockState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "blockRenderState", "method_49778", "getData", "m_276881_"), "()Lbsq$b$a;");
    }

    static jobject getData(const jobject& obj) {
                
       const auto methodID = methodID_getData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_refreshData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateRenderSubState", "method_49776", "refreshData", "m_276825_"), "(ZF)V");
    }

    static void refreshData(const jobject& obj, const jboolean& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_refreshData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$BLOCKDISPLAYENTITY_HPP