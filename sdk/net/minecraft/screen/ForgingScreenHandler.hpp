// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_FORGINGSCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_FORGINGSCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ForgingScreenHandler
 * Remapped: cqx
 */
namespace ForgingScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqx", "net/minecraft/world/inventory/ItemCombinerMenu", "net/minecraft/class_4861", "net/minecraft/screen/ForgingScreenHandler", "net/minecraft/src/C_1278_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.screen.ForgingScreenHandler#field_41901
    [[maybe_unused]] static jint get_field_field_41901() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INVENTORY_SLOTS_PER_ROW", "field_41901", "field_41901", "f_265978_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.ForgingScreenHandler#field_41901
    [[maybe_unused]] static void set_field_field_41901(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INVENTORY_SLOTS_PER_ROW", "field_41901", "field_41901", "f_265978_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.ForgingScreenHandler#field_41902
    [[maybe_unused]] static jint get_field_field_41902() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "INVENTORY_SLOTS_PER_COLUMN", "field_41902", "field_41902", "f_266084_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.ForgingScreenHandler#field_41902
    [[maybe_unused]] static void set_field_field_41902(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "INVENTORY_SLOTS_PER_COLUMN", "field_41902", "field_41902", "f_266084_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.screen.ForgingScreenHandler#context
    static jobject get_field_context(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "access", "field_22481", "context", "f_39770_"), "Lcqg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.screen.ForgingScreenHandler#context
    static void set_field_context(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "access", "field_22481", "context", "f_39770_"), "Lcqg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.screen.ForgingScreenHandler#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "player", "field_22482", "player", "f_39771_"), "Lcmx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.screen.ForgingScreenHandler#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "player", "field_22482", "player", "f_39771_"), "Lcmx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.screen.ForgingScreenHandler#input
    static jobject get_field_input(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "inputSlots", "field_22480", "input", "f_39769_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.screen.ForgingScreenHandler#input
    static void set_field_input(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "inputSlots", "field_22480", "input", "f_39769_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.ForgingScreenHandler#inputSlotIndices
    static jobject get_field_inputSlotIndices(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "inputSlotIndexes", "field_41903", "inputSlotIndices", "f_266110_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.ForgingScreenHandler#inputSlotIndices
    static void set_field_inputSlotIndices(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "inputSlotIndexes", "field_41903", "inputSlotIndices", "f_266110_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.screen.ForgingScreenHandler#output
    static jobject get_field_output(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "resultSlots", "field_22479", "output", "f_39768_"), "Lcrl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.screen.ForgingScreenHandler#output
    static void set_field_output(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "resultSlots", "field_22479", "output", "f_39768_"), "Lcrl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.ForgingScreenHandler#resultSlotIndex
    static jint get_field_resultSlotIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "resultSlotIndex", "field_41904", "resultSlotIndex", "f_266048_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.ForgingScreenHandler#resultSlotIndex
    static void set_field_resultSlotIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "resultSlotIndex", "field_41904", "resultSlotIndex", "f_266048_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_canTakeOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayPickup", "method_24927", "canTakeOutput", "m_6560_"), "(Lcmx;Z)Z");
    }

    static jboolean canTakeOutput(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_canTakeOutput();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onTakeOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onTake", "method_24923", "onTakeOutput", "m_142365_"), "(Lcmx;Lcuq;)V");
    }

    static void onTakeOutput(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onTakeOutput();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidBlock", "method_24925", "canUse", "m_8039_"), "(Ldtc;)Z");
    }

    static jboolean canUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addInputSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createInputSlots", "method_48354", "addInputSlots", "m_266254_"), "(Lcqy;)V");
    }

    static void addInputSlots(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addInputSlots();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addResultSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createResultSlot", "method_48355", "addResultSlot", "m_266430_"), "(Lcqy;)V");
    }

    static void addResultSlot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addResultSlot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPlayerInventorySlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createInventorySlots", "method_48353", "addPlayerInventorySlots", "m_266235_"), "(Lcmw;)V");
    }

    static void addPlayerInventorySlots(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addPlayerInventorySlots();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "createResult", "method_24928", "updateResult", "m_6640_"), "()V");
    }

    static void updateResult(const jobject& obj) {
                
       const auto methodID = methodID_updateResult();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getForgingSlotsManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "createInputSlotDefinitions", "method_48352", "getForgingSlotsManager", "m_266183_"), "()Lcqy;");
    }

    static jobject getForgingSlotsManager(const jobject& obj) {
                
       const auto methodID = methodID_getForgingSlotsManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createInputInventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "createContainer", "method_48358", "createInputInventory", "m_266190_"), "(I)Lbra;");
    }

    static jobject createInputInventory(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_createInputInventory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onContentChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotsChanged", "method_7609", "onContentChanged", "m_6199_"), "(Lbqk;)V");
    }

    static void onContentChanged(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onContentChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onClosed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removed", "method_7595", "onClosed", "m_6877_"), "(Lcmx;)V");
    }

    static void onClosed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClosed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__canUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stillValid", "method_7597", "canUse", "m_6875_"), "(Lcmx;)Z");
    }

    static jboolean _canUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__canUse();
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
    
    static jmethodID methodID_isValidIngredient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canMoveIntoInputSlots", "method_48356", "isValidIngredient", "m_5861_"), "(Lcuq;)Z");
    }

    static jboolean isValidIngredient(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isValidIngredient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSlotFor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getSlotToQuickMoveTo", "method_48357", "getSlotFor", "m_266159_"), "(Lcuq;)I");
    }

    static jint getSlotFor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSlotFor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getResultSlotIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getResultSlot", "method_48360", "getResultSlotIndex", "m_266562_"), "()I");
    }

    static jint getResultSlotIndex(const jobject& obj) {
                
       const auto methodID = methodID_getResultSlotIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayerInventoryStartIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "getInventorySlotStart", "method_48359", "getPlayerInventoryStartIndex", "m_266318_"), "()I");
    }

    static jint getPlayerInventoryStartIndex(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerInventoryStartIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayerInventoryEndIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getInventorySlotEnd", "method_48361", "getPlayerInventoryEndIndex", "m_266402_"), "()I");
    }

    static jint getPlayerInventoryEndIndex(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerInventoryEndIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayerHotbarStartIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "getUseRowStart", "method_48362", "getPlayerHotbarStartIndex", "m_266416_"), "()I");
    }

    static jint getPlayerHotbarStartIndex(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerHotbarStartIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayerHotbarEndIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "getUseRowEnd", "method_48363", "getPlayerHotbarEndIndex", "m_266360_"), "()I");
    }

    static jint getPlayerHotbarEndIndex(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerHotbarEndIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_FORGINGSCREENHANDLER_HPP