// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEBOOKGHOSTSLOTS_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEBOOKGHOSTSLOTS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots
 * Remapped: fry
 */
namespace RecipeBookGhostSlots {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fry", "net/minecraft/client/gui/screens/recipebook/GhostRecipe", "net/minecraft/class_505", "net/minecraft/client/gui/screen/recipebook/RecipeBookGhostSlots", "net/minecraft/src/C_3712_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots#recipe
    static jobject get_field_recipe(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "recipe", "field_3079", "recipe", "f_100136_"), "Lczb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots#recipe
    static void set_field_recipe(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "recipe", "field_3079", "recipe", "f_100136_"), "Lczb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots#slots
    static jobject get_field_slots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ingredients", "field_3081", "slots", "f_100137_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots#slots
    static void set_field_slots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ingredients", "field_3081", "slots", "f_100137_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots#time
    static jfloat get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "time", "field_3080", "time", "f_100138_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots#time
    static void set_field_time(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "time", "field_3080", "time", "f_100138_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_reset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clear", "method_2571", "reset", "m_100140_"), "()V");
    }

    static void reset(const jobject& obj) {
                
       const auto methodID = methodID_reset();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addIngredient", "method_2569", "addSlot", "m_100143_"), "(Lcyw;II)V");
    }

    static void addSlot(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_addSlot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_2570", "getSlot", "m_100141_"), "(I)Lfry$a;");
    }

    static jobject getSlot(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getSlot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSlotCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "size", "method_2572", "getSlotCount", "m_100158_"), "()I");
    }

    static jint getSlotCount(const jobject& obj) {
                
       const auto methodID = methodID_getSlotCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getRecipe", "method_2566", "getRecipe", "m_100159_"), "()Lczb;");
    }

    static jobject getRecipe(const jobject& obj) {
                
       const auto methodID = methodID_getRecipe();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRecipe", "method_2565", "setRecipe", "m_100147_"), "(Lczb;)V");
    }

    static void setRecipe(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setRecipe();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_2567", "draw", "m_280269_"), "(Lfhz;Lfgo;IIZF)V");
    }

    static void draw(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jboolean& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEBOOKGHOSTSLOTS_HPP