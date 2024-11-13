// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_STONECUTTERSCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_STONECUTTERSCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.StonecutterScreenHandler
 * Remapped: crw
 */
namespace StonecutterScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("crw", "net/minecraft/world/inventory/StonecutterMenu", "net/minecraft/class_3971", "net/minecraft/screen/StonecutterScreenHandler", "net/minecraft/src/C_1309_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.screen.StonecutterScreenHandler#INPUT_ID
    [[maybe_unused]] static jint get_field_INPUT_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INPUT_SLOT", "field_30842", "INPUT_ID", "f_150665_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.StonecutterScreenHandler#INPUT_ID
    [[maybe_unused]] static void set_field_INPUT_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INPUT_SLOT", "field_30842", "INPUT_ID", "f_150665_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.StonecutterScreenHandler#OUTPUT_ID
    [[maybe_unused]] static jint get_field_OUTPUT_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "RESULT_SLOT", "field_30843", "OUTPUT_ID", "f_150666_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.StonecutterScreenHandler#OUTPUT_ID
    [[maybe_unused]] static void set_field_OUTPUT_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "RESULT_SLOT", "field_30843", "OUTPUT_ID", "f_150666_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.StonecutterScreenHandler#INVENTORY_START
    [[maybe_unused]] static jint get_field_INVENTORY_START() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "INV_SLOT_START", "field_30844", "INVENTORY_START", "f_150667_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#INVENTORY_START
    [[maybe_unused]] static void set_field_INVENTORY_START(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "INV_SLOT_START", "field_30844", "INVENTORY_START", "f_150667_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.StonecutterScreenHandler#INVENTORY_END
    [[maybe_unused]] static jint get_field_INVENTORY_END() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "INV_SLOT_END", "field_30845", "INVENTORY_END", "f_150668_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#INVENTORY_END
    [[maybe_unused]] static void set_field_INVENTORY_END(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "INV_SLOT_END", "field_30845", "INVENTORY_END", "f_150668_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.StonecutterScreenHandler#OUTPUT_START
    [[maybe_unused]] static jint get_field_OUTPUT_START() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "USE_ROW_SLOT_START", "field_30846", "OUTPUT_START", "f_150669_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#OUTPUT_START
    [[maybe_unused]] static void set_field_OUTPUT_START(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "USE_ROW_SLOT_START", "field_30846", "OUTPUT_START", "f_150669_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.StonecutterScreenHandler#OUTPUT_END
    [[maybe_unused]] static jint get_field_OUTPUT_END() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "USE_ROW_SLOT_END", "field_30847", "OUTPUT_END", "f_150670_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#OUTPUT_END
    [[maybe_unused]] static void set_field_OUTPUT_END(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "USE_ROW_SLOT_END", "field_30847", "OUTPUT_END", "f_150670_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.screen.StonecutterScreenHandler#context
    static jobject get_field_context(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "access", "field_17630", "context", "f_40285_"), "Lcqg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#context
    static void set_field_context(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "access", "field_17630", "context", "f_40285_"), "Lcqg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.StonecutterScreenHandler#selectedRecipe
    static jobject get_field_selectedRecipe(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "selectedRecipeIndex", "field_17631", "selectedRecipe", "f_40286_"), "Lcqn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#selectedRecipe
    static void set_field_selectedRecipe(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "selectedRecipeIndex", "field_17631", "selectedRecipe", "f_40286_"), "Lcqn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.StonecutterScreenHandler#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "level", "field_17632", "world", "f_40287_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "level", "field_17632", "world", "f_40287_"), "Ldcw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.StonecutterScreenHandler#availableRecipes
    static jobject get_field_availableRecipes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "recipes", "field_17633", "availableRecipes", "f_40288_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#availableRecipes
    static void set_field_availableRecipes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "recipes", "field_17633", "availableRecipes", "f_40288_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.StonecutterScreenHandler#inputStack
    static jobject get_field_inputStack(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "input", "field_17634", "inputStack", "f_40289_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.StonecutterScreenHandler#inputStack
    static void set_field_inputStack(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "input", "field_17634", "inputStack", "f_40289_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.screen.StonecutterScreenHandler#lastTakeTime
    static jlong get_field_lastTakeTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "lastSoundTime", "field_17635", "lastTakeTime", "f_40290_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.screen.StonecutterScreenHandler#lastTakeTime
    static void set_field_lastTakeTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "lastSoundTime", "field_17635", "lastTakeTime", "f_40290_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.screen.StonecutterScreenHandler#inputSlot
    static jobject get_field_inputSlot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "inputSlot", "field_17627", "inputSlot", "f_40282_"), "Lcrq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.screen.StonecutterScreenHandler#inputSlot
    static void set_field_inputSlot(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "inputSlot", "field_17627", "inputSlot", "f_40282_"), "Lcrq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.screen.StonecutterScreenHandler#outputSlot
    static jobject get_field_outputSlot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "resultSlot", "field_17628", "outputSlot", "f_40283_"), "Lcrq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.screen.StonecutterScreenHandler#outputSlot
    static void set_field_outputSlot(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "resultSlot", "field_17628", "outputSlot", "f_40283_"), "Lcrq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.screen.StonecutterScreenHandler#contentsChangedListener
    static jobject get_field_contentsChangedListener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "slotUpdateListener", "field_17636", "contentsChangedListener", "f_40291_"), "Ljava/lang/Runnable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.screen.StonecutterScreenHandler#contentsChangedListener
    static void set_field_contentsChangedListener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "slotUpdateListener", "field_17636", "contentsChangedListener", "f_40291_"), "Ljava/lang/Runnable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.screen.StonecutterScreenHandler#input
    static jobject get_field_input(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "container", "field_17629", "input", "f_40284_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.screen.StonecutterScreenHandler#input
    static void set_field_input(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "container", "field_17629", "input", "f_40284_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.screen.StonecutterScreenHandler#output
    static jobject get_field_output(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "resultContainer", "field_19173", "output", "f_40292_"), "Lcrl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.screen.StonecutterScreenHandler#output
    static void set_field_output(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "resultContainer", "field_19173", "output", "f_40292_"), "Lcrl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSelectedRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getSelectedRecipeIndex", "method_17862", "getSelectedRecipe", "m_40338_"), "()I");
    }

    static jint getSelectedRecipe(const jobject& obj) {
                
       const auto methodID = methodID_getSelectedRecipe();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAvailableRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getRecipes", "method_17863", "getAvailableRecipes", "m_40339_"), "()Ljava/util/List;");
    }

    static jobject getAvailableRecipes(const jobject& obj) {
                
       const auto methodID = methodID_getAvailableRecipes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAvailableRecipeCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "getNumRecipes", "method_17864", "getAvailableRecipeCount", "m_40340_"), "()I");
    }

    static jint getAvailableRecipeCount(const jobject& obj) {
                
       const auto methodID = methodID_getAvailableRecipeCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_canCraft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "hasInputItem", "method_17865", "canCraft", "m_40341_"), "()Z");
    }

    static jboolean canCraft(const jobject& obj) {
                
       const auto methodID = methodID_canCraft();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stillValid", "method_7597", "canUse", "m_6875_"), "(Lcmx;)Z");
    }

    static jboolean canUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onButtonClick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clickMenuButton", "method_7604", "onButtonClick", "m_6366_"), "(Lcmx;I)Z");
    }

    static jboolean onButtonClick(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onButtonClick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isInBounds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isValidRecipeIndex", "method_30160", "isInBounds", "m_40334_"), "(I)Z");
    }

    static jboolean isInBounds(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_isInBounds();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onContentChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotsChanged", "method_7609", "onContentChanged", "m_6199_"), "(Lbqk;)V");
    }

    static void onContentChanged(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onContentChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createRecipeInput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "createRecipeInput", "method_59966", "createRecipeInput", "m_339504_"), "(Lbqk;)Lczp;");
    }

    static jobject createRecipeInput(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createRecipeInput();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateInput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupRecipeList", "method_17855", "updateInput", "m_40303_"), "(Lbqk;Lcuq;)V");
    }

    static void updateInput(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateInput();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_populateResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "setupResultSlot", "method_17866", "populateResult", "m_40342_"), "()V");
    }

    static void populateResult(const jobject& obj) {
                
       const auto methodID = methodID_populateResult();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_17358", "getType", "m_6772_"), "()Lcrc;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setContentsChangedListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registerUpdateListener", "method_17859", "setContentsChangedListener", "m_40323_"), "(Ljava/lang/Runnable;)V");
    }

    static void setContentsChangedListener(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setContentsChangedListener();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canInsertIntoSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canTakeItemForPickAll", "method_7613", "canInsertIntoSlot", "m_5882_"), "(Lcuq;Lcrq;)Z");
    }

    static jboolean canInsertIntoSlot(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canInsertIntoSlot();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_quickMove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "quickMoveStack", "method_7601", "quickMove", "m_7648_"), "(Lcmx;I)Lcuq;");
    }

    static jobject quickMove(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_quickMove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onClosed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removed", "method_7595", "onClosed", "m_6877_"), "(Lcmx;)V");
    }

    static void onClosed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClosed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_STONECUTTERSCREENHANDLER_HPP