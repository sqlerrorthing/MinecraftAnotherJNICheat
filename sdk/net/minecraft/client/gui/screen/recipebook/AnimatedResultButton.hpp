// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_ANIMATEDRESULTBUTTON_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_ANIMATEDRESULTBUTTON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.recipebook.AnimatedResultButton
 * Remapped: fsd
 */
namespace AnimatedResultButton {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsd", "net/minecraft/client/gui/screens/recipebook/RecipeButton", "net/minecraft/class_514", "net/minecraft/client/gui/screen/recipebook/AnimatedResultButton", "net/minecraft/src/C_3721_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_MANY_CRAFTABLE_TEXTURE
    [[maybe_unused]] static jobject get_field_SLOT_MANY_CRAFTABLE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOT_MANY_CRAFTABLE_SPRITE", "field_45555", "SLOT_MANY_CRAFTABLE_TEXTURE", "f_290655_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_MANY_CRAFTABLE_TEXTURE
    [[maybe_unused]] static void set_field_SLOT_MANY_CRAFTABLE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOT_MANY_CRAFTABLE_SPRITE", "field_45555", "SLOT_MANY_CRAFTABLE_TEXTURE", "f_290655_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_CRAFTABLE_TEXTURE
    [[maybe_unused]] static jobject get_field_SLOT_CRAFTABLE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SLOT_CRAFTABLE_SPRITE", "field_45556", "SLOT_CRAFTABLE_TEXTURE", "f_291736_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_CRAFTABLE_TEXTURE
    [[maybe_unused]] static void set_field_SLOT_CRAFTABLE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SLOT_CRAFTABLE_SPRITE", "field_45556", "SLOT_CRAFTABLE_TEXTURE", "f_291736_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_MANY_UNCRAFTABLE_TEXTURE
    [[maybe_unused]] static jobject get_field_SLOT_MANY_UNCRAFTABLE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SLOT_MANY_UNCRAFTABLE_SPRITE", "field_45557", "SLOT_MANY_UNCRAFTABLE_TEXTURE", "f_291268_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_MANY_UNCRAFTABLE_TEXTURE
    [[maybe_unused]] static void set_field_SLOT_MANY_UNCRAFTABLE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SLOT_MANY_UNCRAFTABLE_SPRITE", "field_45557", "SLOT_MANY_UNCRAFTABLE_TEXTURE", "f_291268_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_UNCRAFTABLE_TEXTURE
    [[maybe_unused]] static jobject get_field_SLOT_UNCRAFTABLE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SLOT_UNCRAFTABLE_SPRITE", "field_45558", "SLOT_UNCRAFTABLE_TEXTURE", "f_290518_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#SLOT_UNCRAFTABLE_TEXTURE
    [[maybe_unused]] static void set_field_SLOT_UNCRAFTABLE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SLOT_UNCRAFTABLE_SPRITE", "field_45558", "SLOT_UNCRAFTABLE_TEXTURE", "f_290518_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#field_32414
    [[maybe_unused]] static jfloat get_field_field_32414() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ANIMATION_TIME", "field_32414", "field_32414", "f_170057_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#field_32414
    [[maybe_unused]] static void set_field_field_32414(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ANIMATION_TIME", "field_32414", "field_32414", "f_170057_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#field_32415
    [[maybe_unused]] static jint get_field_field_32415() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "BACKGROUND_SIZE", "field_32415", "field_32415", "f_170058_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#field_32415
    [[maybe_unused]] static void set_field_field_32415(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "BACKGROUND_SIZE", "field_32415", "field_32415", "f_170058_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#field_32413
    [[maybe_unused]] static jint get_field_field_32413() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TICKS_TO_SWAP", "field_32413", "field_32413", "f_170056_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#field_32413
    [[maybe_unused]] static void set_field_field_32413(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TICKS_TO_SWAP", "field_32413", "field_32413", "f_170056_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#MORE_RECIPES_TEXT
    [[maybe_unused]] static jobject get_field_MORE_RECIPES_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "MORE_RECIPES_TOOLTIP", "field_26595", "MORE_RECIPES_TEXT", "f_100462_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#MORE_RECIPES_TEXT
    [[maybe_unused]] static void set_field_MORE_RECIPES_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "MORE_RECIPES_TOOLTIP", "field_26595", "MORE_RECIPES_TEXT", "f_100462_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#craftingScreenHandler
    static jobject get_field_craftingScreenHandler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "menu", "field_3137", "craftingScreenHandler", "f_100463_"), "Lcri;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#craftingScreenHandler
    static void set_field_craftingScreenHandler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "menu", "field_3137", "craftingScreenHandler", "f_100463_"), "Lcri;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#recipeBook
    static jobject get_field_recipeBook(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "book", "field_3138", "recipeBook", "f_100464_"), "Lavs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#recipeBook
    static void set_field_recipeBook(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "book", "field_3138", "recipeBook", "f_100464_"), "Lavs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#resultCollection
    static jobject get_field_resultCollection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "collection", "field_3142", "resultCollection", "f_100465_"), "Lfse;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#resultCollection
    static void set_field_resultCollection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "collection", "field_3142", "resultCollection", "f_100465_"), "Lfse;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#time
    static jfloat get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "time", "field_3140", "time", "f_100466_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#time
    static void set_field_time(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "time", "field_3140", "time", "f_100466_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#bounce
    static jfloat get_field_bounce(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "animationTime", "field_3139", "bounce", "f_100467_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#bounce
    static void set_field_bounce(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "animationTime", "field_3139", "bounce", "f_100467_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#currentResultIndex
    static jint get_field_currentResultIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "currentIndex", "field_3141", "currentResultIndex", "f_100468_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.AnimatedResultButton#currentResultIndex
    static void set_field_currentResultIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "currentIndex", "field_3141", "currentResultIndex", "f_100468_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_showResultCollection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "init", "method_2640", "showResultCollection", "m_100479_"), "(Lfse;Lfsb;)V");
    }

    static void showResultCollection(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_showResultCollection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getResultCollection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCollection", "method_2645", "getResultCollection", "m_100471_"), "()Lfse;");
    }

    static jobject getResultCollection(const jobject& obj) {
                
       const auto methodID = methodID_getResultCollection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getResults() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getOrderedRecipes", "method_2639", "getResults", "m_100490_"), "()Ljava/util/List;");
    }

    static jobject getResults(const jobject& obj) {
                
       const auto methodID = methodID_getResults();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasResults() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isOnlyOption", "method_2642", "hasResults", "m_100482_"), "()Z");
    }

    static jboolean hasResults(const jobject& obj) {
                
       const auto methodID = methodID_hasResults();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_currentRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getRecipe", "method_2643", "currentRecipe", "m_100488_"), "()Lczb;");
    }

    static jobject currentRecipe(const jobject& obj) {
                
       const auto methodID = methodID_currentRecipe();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getTooltipText", "method_2644", "getTooltip", "m_280187_"), "()Ljava/util/List;");
    }

    static jobject getTooltip(const jobject& obj) {
                
       const auto methodID = methodID_getTooltip();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_appendClickableNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateWidgetNarration", "method_47399", "appendClickableNarrations", "m_168797_"), "(Lfmi;)V");
    }

    static void appendClickableNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendClickableNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "getWidth", "method_25368", "getWidth", "m_5711_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isValidClickButton() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "isValidClickButton", "method_25351", "isValidClickButton", "m_7972_"), "(I)Z");
    }

    static jboolean isValidClickButton(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_isValidClickButton();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_ANIMATEDRESULTBUTTON_HPP