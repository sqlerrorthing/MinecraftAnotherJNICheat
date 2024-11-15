// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_ABSTRACTFURNACESCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_ABSTRACTFURNACESCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.AbstractFurnaceScreenHandler
 * Remapped: cpv
 */
namespace AbstractFurnaceScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpv", "net/minecraft/world/inventory/AbstractFurnaceMenu", "net/minecraft/class_1720", "net/minecraft/screen/AbstractFurnaceScreenHandler", "net/minecraft/src/C_1227_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30738
    [[maybe_unused]] static jint get_field_field_30738() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INGREDIENT_SLOT", "field_30738", "field_30738", "f_150453_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30738
    [[maybe_unused]] static void set_field_field_30738(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INGREDIENT_SLOT", "field_30738", "field_30738", "f_150453_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30739
    [[maybe_unused]] static jint get_field_field_30739() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FUEL_SLOT", "field_30739", "field_30739", "f_150454_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30739
    [[maybe_unused]] static void set_field_field_30739(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FUEL_SLOT", "field_30739", "field_30739", "f_150454_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30740
    [[maybe_unused]] static jint get_field_field_30740() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "RESULT_SLOT", "field_30740", "field_30740", "f_150455_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30740
    [[maybe_unused]] static void set_field_field_30740(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "RESULT_SLOT", "field_30740", "field_30740", "f_150455_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30741
    [[maybe_unused]] static jint get_field_field_30741() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SLOT_COUNT", "field_30741", "field_30741", "f_150456_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30741
    [[maybe_unused]] static void set_field_field_30741(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SLOT_COUNT", "field_30741", "field_30741", "f_150456_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30742
    [[maybe_unused]] static jint get_field_field_30742() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DATA_COUNT", "field_30742", "field_30742", "f_150457_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30742
    [[maybe_unused]] static void set_field_field_30742(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DATA_COUNT", "field_30742", "field_30742", "f_150457_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30743
    [[maybe_unused]] static jint get_field_field_30743() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "INV_SLOT_START", "field_30743", "field_30743", "f_150458_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30743
    [[maybe_unused]] static void set_field_field_30743(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "INV_SLOT_START", "field_30743", "field_30743", "f_150458_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30744
    [[maybe_unused]] static jint get_field_field_30744() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "INV_SLOT_END", "field_30744", "field_30744", "f_150459_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30744
    [[maybe_unused]] static void set_field_field_30744(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "INV_SLOT_END", "field_30744", "field_30744", "f_150459_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30745
    [[maybe_unused]] static jint get_field_field_30745() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "USE_ROW_SLOT_START", "field_30745", "field_30745", "f_150460_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30745
    [[maybe_unused]] static void set_field_field_30745(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "USE_ROW_SLOT_START", "field_30745", "field_30745", "f_150460_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30746
    [[maybe_unused]] static jint get_field_field_30746() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "USE_ROW_SLOT_END", "field_30746", "field_30746", "f_150461_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#field_30746
    [[maybe_unused]] static void set_field_field_30746(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "USE_ROW_SLOT_END", "field_30746", "field_30746", "f_150461_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.screen.AbstractFurnaceScreenHandler#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "container", "field_7824", "inventory", "f_38955_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "container", "field_7824", "inventory", "f_38955_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.AbstractFurnaceScreenHandler#propertyDelegate
    static jobject get_field_propertyDelegate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "data", "field_17286", "propertyDelegate", "f_38956_"), "Lcqf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#propertyDelegate
    static void set_field_propertyDelegate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "data", "field_17286", "propertyDelegate", "f_38956_"), "Lcqf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.screen.AbstractFurnaceScreenHandler#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "level", "field_7822", "world", "f_38954_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.screen.AbstractFurnaceScreenHandler#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "level", "field_7822", "world", "f_38954_"), "Ldcw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.AbstractFurnaceScreenHandler#recipeType
    static jobject get_field_recipeType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "recipeType", "field_17494", "recipeType", "f_38957_"), "Lczf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#recipeType
    static void set_field_recipeType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "recipeType", "field_17494", "recipeType", "f_38957_"), "Lczf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.AbstractFurnaceScreenHandler#category
    static jobject get_field_category(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "recipeBookType", "field_25762", "category", "f_38958_"), "Lcrj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.AbstractFurnaceScreenHandler#category
    static void set_field_category(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "recipeBookType", "field_25762", "category", "f_38958_"), "Lcrj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_populateRecipeFinder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillCraftSlotsStackedContents", "method_7654", "populateRecipeFinder", "m_5816_"), "(Lcnb;)V");
    }

    static void populateRecipeFinder(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_populateRecipeFinder();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clearCraftingSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "clearCraftingContent", "method_7657", "clearCraftingSlots", "m_6650_"), "()V");
    }

    static void clearCraftingSlots(const jobject& obj) {
                
       const auto methodID = methodID_clearCraftingSlots();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recipeMatches", "method_7652", "matches", "m_6032_"), "(Lczb;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCraftingResultSlotIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getResultSlotIndex", "method_7655", "getCraftingResultSlotIndex", "m_6636_"), "()I");
    }

    static jint getCraftingResultSlotIndex(const jobject& obj) {
                
       const auto methodID = methodID_getCraftingResultSlotIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCraftingWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "getGridWidth", "method_7653", "getCraftingWidth", "m_6635_"), "()I");
    }

    static jint getCraftingWidth(const jobject& obj) {
                
       const auto methodID = methodID_getCraftingWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCraftingHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getGridHeight", "method_7656", "getCraftingHeight", "m_6656_"), "()I");
    }

    static jint getCraftingHeight(const jobject& obj) {
                
       const auto methodID = methodID_getCraftingHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCraftingSlotCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getSize", "method_7658", "getCraftingSlotCount", "m_6653_"), "()I");
    }

    static jint getCraftingSlotCount(const jobject& obj) {
                
       const auto methodID = methodID_getCraftingSlotCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_canUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stillValid", "method_7597", "canUse", "m_6875_"), "(Lcmx;)Z");
    }

    static jboolean canUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_quickMove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "quickMoveStack", "method_7601", "quickMove", "m_7648_"), "(Lcmx;I)Lcuq;");
    }

    static jobject quickMove(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_quickMove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isSmeltable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canSmelt", "method_7640", "isSmeltable", "m_38977_"), "(Lcuq;)Z");
    }

    static jboolean isSmeltable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isSmeltable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isFuel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isFuel", "method_16945", "isFuel", "m_38988_"), "(Lcuq;)Z");
    }

    static jboolean isFuel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isFuel();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCookProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "getBurnProgress", "method_17363", "getCookProgress", "m_38995_"), "()F");
    }

    static jfloat getCookProgress(const jobject& obj) {
                
       const auto methodID = methodID_getCookProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFuelProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "getLitProgress", "method_17364", "getFuelProgress", "m_38996_"), "()F");
    }

    static jfloat getFuelProgress(const jobject& obj) {
                
       const auto methodID = methodID_getFuelProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_isBurning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "isLit", "method_17365", "isBurning", "m_38997_"), "()Z");
    }

    static jboolean isBurning(const jobject& obj) {
                
       const auto methodID = methodID_isBurning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCategory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getRecipeBookType", "method_30264", "getCategory", "m_5867_"), "()Lcrj;");
    }

    static jobject getCategory(const jobject& obj) {
                
       const auto methodID = methodID_getCategory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canInsertIntoSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "shouldMoveToInventory", "method_32339", "canInsertIntoSlot", "m_142157_"), "(I)Z");
    }

    static jboolean canInsertIntoSlot(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_canInsertIntoSlot();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_ABSTRACTFURNACESCREENHANDLER_HPP