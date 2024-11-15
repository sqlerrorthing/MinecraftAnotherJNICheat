// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_TROPICALFISHENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_TROPICALFISHENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.TropicalFishEntity
 * Remapped: cge
 */
namespace TropicalFishEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cge", "net/minecraft/world/entity/animal/TropicalFish", "net/minecraft/class_1474", "net/minecraft/entity/passive/TropicalFishEntity", "net/minecraft/src/C_905_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.TropicalFishEntity#BUCKET_VARIANT_TAG_KEY
    [[maybe_unused]] static jobject get_field_BUCKET_VARIANT_TAG_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BUCKET_VARIANT_TAG", "field_30378", "BUCKET_VARIANT_TAG_KEY", "f_149057_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.TropicalFishEntity#BUCKET_VARIANT_TAG_KEY
    [[maybe_unused]] static void set_field_BUCKET_VARIANT_TAG_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BUCKET_VARIANT_TAG", "field_30378", "BUCKET_VARIANT_TAG_KEY", "f_149057_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.TropicalFishEntity#VARIANT
    [[maybe_unused]] static jobject get_field_VARIANT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_ID_TYPE_VARIANT", "field_6874", "VARIANT", "f_30011_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TropicalFishEntity#VARIANT
    [[maybe_unused]] static void set_field_VARIANT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_ID_TYPE_VARIANT", "field_6874", "VARIANT", "f_30011_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.TropicalFishEntity#COMMON_VARIANTS
    [[maybe_unused]] static jobject get_field_COMMON_VARIANTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COMMON_VARIANTS", "field_41573", "COMMON_VARIANTS", "f_30007_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.TropicalFishEntity#COMMON_VARIANTS
    [[maybe_unused]] static void set_field_COMMON_VARIANTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COMMON_VARIANTS", "field_41573", "COMMON_VARIANTS", "f_30007_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.TropicalFishEntity#commonSpawn
    static jboolean get_field_commonSpawn(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isSchool", "field_6877", "commonSpawn", "f_30010_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TropicalFishEntity#commonSpawn
    static void set_field_commonSpawn(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isSchool", "field_6877", "commonSpawn", "f_30010_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getToolTipForVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getPredefinedName", "method_6649", "getToolTipForVariant", "m_30030_"), "(I)Ljava/lang/String;");
    }

    static jobject getToolTipForVariant(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getToolTipForVariant();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getVariantId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "packVariant", "method_47861", "getVariantId", "m_262388_"), "(Lcge$b;Lcti;Lcti;)I");
    }

    static jint getVariantId(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getVariantId();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getBaseDyeColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "getBaseColor", "method_6652", "getBaseDyeColor", "m_30050_"), "(I)Lcti;");
    }

    static jobject getBaseDyeColor(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getBaseDyeColor();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getPatternDyeColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("t", "getPatternColor", "method_6651", "getPatternDyeColor", "m_30052_"), "(I)Lcti;");
    }

    static jobject getPatternDyeColor(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getPatternDyeColor();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getVariety() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("u", "getPattern", "method_47864", "getVariety", "m_262390_"), "(I)Lcge$b;");
    }

    static jobject getVariety(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getVariety();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
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
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTropicalFishVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "setPackedVariant", "method_47865", "setTropicalFishVariant", "m_30056_"), "(I)V");
    }

    static void setTropicalFishVariant(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setTropicalFishVariant();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_spawnsTooManyForEachTry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "isMaxGroupSizeReached", "method_5969", "spawnsTooManyForEachTry", "m_7296_"), "(I)Z");
    }

    static jboolean spawnsTooManyForEachTry(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_spawnsTooManyForEachTry();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTropicalFishVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gw", "getPackedVariant", "method_47863", "getTropicalFishVariant", "m_30042_"), "()I");
    }

    static jint getTropicalFishVariant(const jobject& obj) {
                
       const auto methodID = methodID_getTropicalFishVariant();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBaseColorComponents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gt", "getBaseColor", "method_6658", "getBaseColorComponents", "m_262459_"), "()Lcti;");
    }

    static jobject getBaseColorComponents(const jobject& obj) {
                
       const auto methodID = methodID_getBaseColorComponents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPatternColorComponents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gu", "getPatternColor", "method_6655", "getPatternColorComponents", "m_262477_"), "()Lcti;");
    }

    static jobject getPatternColorComponents(const jobject& obj) {
                
       const auto methodID = methodID_getPatternColorComponents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gv", "getVariant", "method_47862", "getVariant", "m_28554_"), "()Lcge$b;");
    }

    static jobject getVariant(const jobject& obj) {
                
       const auto methodID = methodID_getVariant();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setVariant", "method_47860", "setVariant", "m_28464_"), "(Lcge$b;)V");
    }

    static void setVariant(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setVariant();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyDataToStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "saveToBucketTag", "method_6455", "copyDataToStack", "m_6872_"), "(Lcuq;)V");
    }

    static void copyDataToStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyDataToStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBucketItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBucketItemStack", "method_6452", "getBucketItem", "m_28282_"), "()Lcuq;");
    }

    static jobject getBucketItem(const jobject& obj) {
                
       const auto methodID = methodID_getBucketItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDeathSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n_", "getDeathSound", "method_6002", "getDeathSound", "m_5592_"), "()Lavo;");
    }

    static jobject getDeathSound(const jobject& obj) {
                
       const auto methodID = methodID_getDeathSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHurtSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getHurtSound", "method_6011", "getHurtSound", "m_7975_"), "(Lbrk;)Lavo;");
    }

    static jobject getHurtSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getHurtSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFlopSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gl", "getFlopSound", "method_6457", "getFlopSound", "m_5699_"), "()Lavo;");
    }

    static jobject getFlopSound(const jobject& obj) {
                
       const auto methodID = methodID_getFlopSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copyDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "loadFromBucketTag", "method_35170", "copyDataFromNbt", "m_142278_"), "(Lub;)V");
    }

    static void copyDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeSpawn", "method_5943", "initialize", "m_6518_"), "(Lddl;Lbqp;Lbtr;Lbuh;)Lbuh;");
    }

    static jobject initialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_initialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canTropicalFishSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "checkTropicalFishSpawnRules", "method_38985", "canTropicalFishSpawn", "m_218266_"), "(Lbsx;Ldcx;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean canTropicalFishSpawn(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_canTropicalFishSpawn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_TROPICALFISHENTITY_HPP