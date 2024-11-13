// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$ITEMDISPLAYENTITY_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$ITEMDISPLAYENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity
 * Remapped: bsq$g
 */
namespace DisplayEntity$ItemDisplayEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$g", "net/minecraft/world/entity/Display$ItemDisplay", "net/minecraft/class_8113$class_8122", "net/minecraft/entity/decoration/DisplayEntity$ItemDisplayEntity", "net/minecraft/src/C_268383_$C_268393_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM_NBT_KEY
    [[maybe_unused]] static jobject get_field_ITEM_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TAG_ITEM", "field_42421", "ITEM_NBT_KEY", "f_268554_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM_NBT_KEY
    [[maybe_unused]] static void set_field_ITEM_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "TAG_ITEM", "field_42421", "ITEM_NBT_KEY", "f_268554_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM_DISPLAY_NBT_KEY
    [[maybe_unused]] static jobject get_field_ITEM_DISPLAY_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TAG_ITEM_DISPLAY", "field_42422", "ITEM_DISPLAY_NBT_KEY", "f_268471_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM_DISPLAY_NBT_KEY
    [[maybe_unused]] static void set_field_ITEM_DISPLAY_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "TAG_ITEM_DISPLAY", "field_42422", "ITEM_DISPLAY_NBT_KEY", "f_268471_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM
    [[maybe_unused]] static jobject get_field_ITEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "DATA_ITEM_STACK_ID", "field_42423", "ITEM", "f_268455_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM
    [[maybe_unused]] static void set_field_ITEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "DATA_ITEM_STACK_ID", "field_42423", "ITEM", "f_268455_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM_DISPLAY
    [[maybe_unused]] static jobject get_field_ITEM_DISPLAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "DATA_ITEM_DISPLAY_ID", "field_42424", "ITEM_DISPLAY", "f_268601_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#ITEM_DISPLAY
    [[maybe_unused]] static void set_field_ITEM_DISPLAY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "DATA_ITEM_DISPLAY_ID", "field_42424", "ITEM_DISPLAY", "f_268601_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#stackReference
    static jobject get_field_stackReference(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "slot", "field_42425", "stackReference", "f_268451_"), "Lbug;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#stackReference
    static void set_field_stackReference(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "slot", "field_42425", "stackReference", "f_268451_"), "Lbug;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#data
    static jobject get_field_data(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "itemRenderState", "field_43187", "data", "f_276545_"), "Lbsq$g$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ItemDisplayEntity#data
    static void set_field_data(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "itemRenderState", "field_43187", "data", "f_276545_"), "Lbsq$g$a;");
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
    
    static jmethodID methodID_getItemStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getItemStack", "method_48900", "getItemStack", "m_269568_"), "()Lcuq;");
    }

    static jobject getItemStack(const jobject& obj) {
                
       const auto methodID = methodID_getItemStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setItemStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setItemStack", "method_48897", "setItemStack", "m_269362_"), "(Lcuq;)V");
    }

    static void setItemStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setItemStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTransformationMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setItemTransform", "method_48896", "setTransformationMode", "m_269028_"), "(Lcun;)V");
    }

    static void setTransformationMode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTransformationMode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTransformationMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getItemTransform", "method_48901", "getTransformationMode", "m_269386_"), "()Lcun;");
    }

    static jobject getTransformationMode(const jobject& obj) {
                
       const auto methodID = methodID_getTransformationMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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
    
    static jmethodID methodID_getStackReference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getSlot", "method_32318", "getStackReference", "m_141942_"), "(I)Lbug;");
    }

    static jobject getStackReference(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getStackReference();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "itemRenderState", "method_49782", "getData", "m_277122_"), "()Lbsq$g$a;");
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

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$ITEMDISPLAYENTITY_HPP