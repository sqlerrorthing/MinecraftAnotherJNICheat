// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ITEM_HPP
#define NET_MINECRAFT_ITEM_ITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.Item
 * Remapped: cul
 */
namespace Item {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cul", "net/minecraft/world/item/Item", "net/minecraft/class_1792", "net/minecraft/item/Item", "net/minecraft/src/C_1381_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.item.Item#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27017", "LOGGER", "f_150883_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.item.Item#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27017", "LOGGER", "f_150883_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.Item#BLOCK_ITEMS
    [[maybe_unused]] static jobject get_field_BLOCK_ITEMS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_BLOCK", "field_8003", "BLOCK_ITEMS", "f_41373_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.Item#BLOCK_ITEMS
    [[maybe_unused]] static void set_field_BLOCK_ITEMS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_BLOCK", "field_8003", "BLOCK_ITEMS", "f_41373_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.Item#BASE_ATTACK_DAMAGE_MODIFIER_ID
    [[maybe_unused]] static jobject get_field_BASE_ATTACK_DAMAGE_MODIFIER_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BASE_ATTACK_DAMAGE_ID", "field_8006", "BASE_ATTACK_DAMAGE_MODIFIER_ID", "f_336917_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.Item#BASE_ATTACK_DAMAGE_MODIFIER_ID
    [[maybe_unused]] static void set_field_BASE_ATTACK_DAMAGE_MODIFIER_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BASE_ATTACK_DAMAGE_ID", "field_8006", "BASE_ATTACK_DAMAGE_MODIFIER_ID", "f_336917_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.Item#BASE_ATTACK_SPEED_MODIFIER_ID
    [[maybe_unused]] static jobject get_field_BASE_ATTACK_SPEED_MODIFIER_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BASE_ATTACK_SPEED_ID", "field_8001", "BASE_ATTACK_SPEED_MODIFIER_ID", "f_336649_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.Item#BASE_ATTACK_SPEED_MODIFIER_ID
    [[maybe_unused]] static void set_field_BASE_ATTACK_SPEED_MODIFIER_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BASE_ATTACK_SPEED_ID", "field_8001", "BASE_ATTACK_SPEED_MODIFIER_ID", "f_336649_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.Item#DEFAULT_MAX_COUNT
    [[maybe_unused]] static jint get_field_DEFAULT_MAX_COUNT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DEFAULT_MAX_STACK_SIZE", "field_30887", "DEFAULT_MAX_COUNT", "f_315532_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.Item#DEFAULT_MAX_COUNT
    [[maybe_unused]] static void set_field_DEFAULT_MAX_COUNT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DEFAULT_MAX_STACK_SIZE", "field_30887", "DEFAULT_MAX_COUNT", "f_315532_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.Item#MAX_MAX_COUNT
    [[maybe_unused]] static jint get_field_MAX_MAX_COUNT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ABSOLUTE_MAX_STACK_SIZE", "field_49998", "MAX_MAX_COUNT", "f_314443_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.Item#MAX_MAX_COUNT
    [[maybe_unused]] static void set_field_MAX_MAX_COUNT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ABSOLUTE_MAX_STACK_SIZE", "field_49998", "MAX_MAX_COUNT", "f_314443_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.Item#ITEM_BAR_STEPS
    [[maybe_unused]] static jint get_field_ITEM_BAR_STEPS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAX_BAR_WIDTH", "field_30889", "ITEM_BAR_STEPS", "f_150886_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.Item#ITEM_BAR_STEPS
    [[maybe_unused]] static void set_field_ITEM_BAR_STEPS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAX_BAR_WIDTH", "field_30889", "ITEM_BAR_STEPS", "f_150886_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.item.Item#registryEntry
    static jobject get_field_registryEntry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "builtInRegistryHolder", "field_36401", "registryEntry", "f_204113_"), "Ljm$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.Item#registryEntry
    static void set_field_registryEntry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "builtInRegistryHolder", "field_36401", "registryEntry", "f_204113_"), "Ljm$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.Item#components
    static jobject get_field_components(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49263", "components", "f_315186_"), "Lkm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.Item#components
    static void set_field_components(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49263", "components", "f_315186_"), "Lkm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.Item#recipeRemainder
    static jobject get_field_recipeRemainder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "craftingRemainingItem", "field_8008", "recipeRemainder", "f_41378_"), "Lcul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.Item#recipeRemainder
    static void set_field_recipeRemainder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "craftingRemainingItem", "field_8008", "recipeRemainder", "f_41378_"), "Lcul;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.Item#translationKey
    static jobject get_field_translationKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "descriptionId", "field_8014", "translationKey", "f_41379_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.Item#translationKey
    static void set_field_translationKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "descriptionId", "field_8014", "translationKey", "f_41379_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.Item#requiredFeatures
    static jobject get_field_requiredFeatures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "requiredFeatures", "field_40209", "requiredFeatures", "f_243811_"), "Lcpl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.Item#requiredFeatures
    static void set_field_requiredFeatures(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "requiredFeatures", "field_40209", "requiredFeatures", "f_243811_"), "Lcpl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getRawId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_7880", "getRawId", "m_41393_"), "(Lcul;)I");
    }

    static jint getRawId(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getRawId();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_byRawId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "byId", "method_7875", "byRawId", "m_41445_"), "(I)Lcul;");
    }

    static jobject byRawId(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byRawId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fromBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byBlock", "method_7867", "fromBlock", "m_41439_"), "(Ldfy;)Lcul;");
    }

    static jobject fromBlock(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromBlock();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getRegistryEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "builtInRegistryHolder", "method_40131", "getRegistryEntry", "m_204114_"), "()Ljm$c;");
    }

    static jobject getRegistryEntry(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getComponents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "components", "method_57347", "getComponents", "m_320917_"), "()Lkm;");
    }

    static jobject getComponents(const jobject& obj) {
                
       const auto methodID = methodID_getComponents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "getDefaultMaxStackSize", "method_7882", "getMaxCount", "m_320193_"), "()I");
    }

    static jint getMaxCount(const jobject& obj) {
                
       const auto methodID = methodID_getMaxCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_usageTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onUseTick", "method_7852", "usageTick", "m_5929_"), "(Ldcw;Lbtn;Lcuq;I)V");
    }

    static void usageTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
                
       const auto methodID = methodID_usageTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onItemEntityDestroyed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onDestroyed", "method_33261", "onItemEntityDestroyed", "m_142023_"), "(Lcjh;)V");
    }

    static void onItemEntityDestroyed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onItemEntityDestroyed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_postProcessComponents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "verifyComponentsAfterLoad", "method_7860", "postProcessComponents", "m_324094_"), "(Lcuq;)V");
    }

    static void postProcessComponents(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_postProcessComponents();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canMine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canAttackBlock", "method_7885", "canMine", "m_6777_"), "(Ldtc;Ldcw;Ljd;Lcmx;)Z");
    }

    static jboolean canMine(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_canMine();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_asItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "asItem", "method_8389", "asItem", "m_5456_"), "()Lcul;");
    }

    static jobject asItem(const jobject& obj) {
                
       const auto methodID = methodID_asItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_useOnBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useOn", "method_7884", "useOnBlock", "m_6225_"), "(Lcyf;)Lbqr;");
    }

    static jobject useOnBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_useOnBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMiningSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDestroySpeed", "method_58404", "getMiningSpeed", "m_8102_"), "(Lcuq;Ldtc;)F");
    }

    static jfloat getMiningSpeed(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getMiningSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_use() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "use", "method_7836", "use", "m_7203_"), "(Ldcw;Lcmx;Lbqq;)Lbqs;");
    }

    static jobject use(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_use();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finishUsing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finishUsingItem", "method_7861", "finishUsing", "m_5922_"), "(Lcuq;Ldcw;Lbtn;)Lcuq;");
    }

    static jobject finishUsing(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_finishUsing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isItemBarVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isBarVisible", "method_31567", "isItemBarVisible", "m_142522_"), "(Lcuq;)Z");
    }

    static jboolean isItemBarVisible(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isItemBarVisible();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getItemBarStep() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getBarWidth", "method_31569", "getItemBarStep", "m_142158_"), "(Lcuq;)I");
    }

    static jint getItemBarStep(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getItemBarStep();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getItemBarColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getBarColor", "method_31571", "getItemBarColor", "m_142159_"), "(Lcuq;)I");
    }

    static jint getItemBarColor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getItemBarColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onStackClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "overrideStackedOnOther", "method_31565", "onStackClicked", "m_142207_"), "(Lcuq;Lcrq;Lcqd;Lcmx;)Z");
    }

    static jboolean onStackClicked(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onStackClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "overrideOtherStackedOnMe", "method_31566", "onClicked", "m_142305_"), "(Lcuq;Lcuq;Lcrq;Lcqd;Lcmx;Lbug;)Z");
    }

    static jboolean onClicked(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_onClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getBonusAttackDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAttackDamageBonus", "method_58403", "getBonusAttackDamage", "m_319585_"), "(Lbsr;FLbrk;)F");
    }

    static jfloat getBonusAttackDamage(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getBonusAttackDamage();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_postHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hurtEnemy", "method_7873", "postHit", "m_7579_"), "(Lcuq;Lbtn;Lbtn;)Z");
    }

    static jboolean postHit(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_postHit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_postDamageEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "postHurtEnemy", "method_59978", "postDamageEntity", "m_338515_"), "(Lcuq;Lbtn;Lbtn;)V");
    }

    static void postDamageEntity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_postDamageEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_postMine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mineBlock", "method_7879", "postMine", "m_6813_"), "(Lcuq;Ldcw;Ldtc;Ljd;Lbtn;)Z");
    }

    static jboolean postMine(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_postMine();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_isCorrectForDrops() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isCorrectToolForDrops", "method_58405", "isCorrectForDrops", "m_8096_"), "(Lcuq;Ldtc;)Z");
    }

    static jboolean isCorrectForDrops(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isCorrectForDrops();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_useOnEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "interactLivingEntity", "method_7847", "useOnEntity", "m_6880_"), "(Lcuq;Lcmx;Lbtn;Lbqq;)Lbqr;");
    }

    static jobject useOnEntity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_useOnEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "getDescription", "method_7848", "getName", "m_41466_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOrCreateTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getOrCreateDescriptionId", "method_7869", "getOrCreateTranslationKey", "m_41467_"), "()Ljava/lang/String;");
    }

    static jobject getOrCreateTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getOrCreateTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDescriptionId", "method_7876", "getTranslationKey", "m_5524_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getDescriptionId", "method_7866", "getTranslationKey", "m_5671_"), "(Lcuq;)Ljava/lang/String;");
    }

    static jobject _getTranslationKey(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRecipeRemainder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "getCraftingRemainingItem", "method_7858", "getRecipeRemainder", "m_41469_"), "()Lcul;");
    }

    static jobject getRecipeRemainder(const jobject& obj) {
                
       const auto methodID = methodID_getRecipeRemainder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasRecipeRemainder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "hasCraftingRemainingItem", "method_7857", "hasRecipeRemainder", "m_41470_"), "()Z");
    }

    static jboolean hasRecipeRemainder(const jobject& obj) {
                
       const auto methodID = methodID_hasRecipeRemainder();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_inventoryTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "inventoryTick", "method_7888", "inventoryTick", "m_6883_"), "(Lcuq;Ldcw;Lbsr;IZ)V");
    }

    static void inventoryTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_inventoryTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onCraftByPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onCraftedBy", "method_54465", "onCraftByPlayer", "m_7836_"), "(Lcuq;Ldcw;Lcmx;)V");
    }

    static void onCraftByPlayer(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onCraftByPlayer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onCraft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onCraftedPostProcess", "method_7843", "onCraft", "m_42912_"), "(Lcuq;Ldcw;)V");
    }

    static void onCraft(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onCraft();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isNetworkSynced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ao_", "isComplex", "method_16698", "isNetworkSynced", "m_7807_"), "()Z");
    }

    static jboolean isNetworkSynced(const jobject& obj) {
                
       const auto methodID = methodID_isNetworkSynced();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getUseAction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getUseAnimation", "method_7853", "getUseAction", "m_6164_"), "(Lcuq;)Lcwo;");
    }

    static jobject getUseAction(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getUseAction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMaxUseTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUseDuration", "method_7881", "getMaxUseTime", "m_8105_"), "(Lcuq;Lbtn;)I");
    }

    static jint getMaxUseTime(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getMaxUseTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onStoppedUsing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "releaseUsing", "method_7840", "onStoppedUsing", "m_5551_"), "(Lcuq;Ldcw;Lbtn;I)V");
    }

    static void onStoppedUsing(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
                
       const auto methodID = methodID_onStoppedUsing();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_appendTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendHoverText", "method_7851", "appendTooltip", "m_7373_"), "(Lcuq;Lcul$b;Ljava/util/List;Lcwm;)V");
    }

    static void appendTooltip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_appendTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getTooltipData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getTooltipImage", "method_32346", "getTooltipData", "m_142422_"), "(Lcuq;)Ljava/util/Optional;");
    }

    static jobject getTooltipData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTooltipData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "getName", "method_7864", "getName", "m_7626_"), "(Lcuq;)Lwz;");
    }

    static jobject _getName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasGlint() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d_", "isFoil", "method_7886", "hasGlint", "m_5812_"), "(Lcuq;)Z");
    }

    static jboolean hasGlint(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasGlint();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isEnchantable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isEnchantable", "method_7870", "isEnchantable", "m_8120_"), "(Lcuq;)Z");
    }

    static jboolean isEnchantable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isEnchantable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_raycast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getPlayerPOVHitResult", "method_7872", "raycast", "m_41435_"), "(Ldcw;Lcmx;Ldcf$b;)Lewy;");
    }

    static jobject raycast(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_raycast();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getEnchantability() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getEnchantmentValue", "method_7837", "getEnchantability", "m_6473_"), "()I");
    }

    static jint getEnchantability(const jobject& obj) {
                
       const auto methodID = methodID_getEnchantability();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_canRepair() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidRepairItem", "method_7878", "canRepair", "m_6832_"), "(Lcuq;Lcuq;)Z");
    }

    static jboolean canRepair(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canRepair();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getAttributeModifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getDefaultAttributeModifiers", "method_7844", "getAttributeModifiers", "m_7167_"), "()Lcxn;");
    }

    static jobject getAttributeModifiers(const jobject& obj) {
                
       const auto methodID = methodID_getAttributeModifiers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isUsedOnRelease() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "useOnRelease", "method_7838", "isUsedOnRelease", "m_41463_"), "(Lcuq;)Z");
    }

    static jboolean isUsedOnRelease(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isUsedOnRelease();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDefaultStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "getDefaultInstance", "method_7854", "getDefaultStack", "m_7968_"), "()Lcuq;");
    }

    static jobject getDefaultStack(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDrinkSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ap_", "getDrinkingSound", "method_21831", "getDrinkSound", "m_6023_"), "()Lavo;");
    }

    static jobject getDrinkSound(const jobject& obj) {
                
       const auto methodID = methodID_getDrinkSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEatSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aq_", "getEatingSound", "method_21830", "getEatSound", "m_6061_"), "()Lavo;");
    }

    static jobject getEatSound(const jobject& obj) {
                
       const auto methodID = methodID_getEatSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBreakSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getBreakingSound", "method_57336", "getBreakSound", "m_318629_"), "()Lavo;");
    }

    static jobject getBreakSound(const jobject& obj) {
                
       const auto methodID = methodID_getBreakSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBeNested() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ar_", "canFitInsideContainerItems", "method_31568", "canBeNested", "m_142095_"), "()Z");
    }

    static jboolean canBeNested(const jobject& obj) {
                
       const auto methodID = methodID_canBeNested();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRequiredFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "requiredFeatures", "method_45322", "getRequiredFeatures", "m_245183_"), "()Lcpl;");
    }

    static jobject getRequiredFeatures(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredFeatures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ITEM_HPP