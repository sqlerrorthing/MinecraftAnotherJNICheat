// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ITEM_ITEMRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ITEM_ITEMRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.item.ItemRenderer
 * Remapped: glh
 */
namespace ItemRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("glh", "net/minecraft/client/renderer/entity/ItemRenderer", "net/minecraft/class_918", "net/minecraft/client/render/item/ItemRenderer", "net/minecraft/src/C_4354_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#ENTITY_ENCHANTMENT_GLINT
    [[maybe_unused]] static jobject get_field_ENTITY_ENCHANTMENT_GLINT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENCHANTED_GLINT_ENTITY", "field_43086", "ENTITY_ENCHANTMENT_GLINT", "f_273897_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#ENTITY_ENCHANTMENT_GLINT
    [[maybe_unused]] static void set_field_ENTITY_ENCHANTMENT_GLINT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENCHANTED_GLINT_ENTITY", "field_43086", "ENTITY_ENCHANTMENT_GLINT", "f_273897_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#ITEM_ENCHANTMENT_GLINT
    [[maybe_unused]] static jobject get_field_ITEM_ENCHANTMENT_GLINT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ENCHANTED_GLINT_ITEM", "field_43087", "ITEM_ENCHANTMENT_GLINT", "f_273833_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#ITEM_ENCHANTMENT_GLINT
    [[maybe_unused]] static void set_field_ITEM_ENCHANTMENT_GLINT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ENCHANTED_GLINT_ITEM", "field_43087", "ITEM_ENCHANTMENT_GLINT", "f_273833_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.item.ItemRenderer#WITHOUT_MODELS
    [[maybe_unused]] static jobject get_field_WITHOUT_MODELS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "IGNORED", "field_4728", "WITHOUT_MODELS", "f_115094_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#WITHOUT_MODELS
    [[maybe_unused]] static void set_field_WITHOUT_MODELS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "IGNORED", "field_4728", "WITHOUT_MODELS", "f_115094_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#field_32937
    [[maybe_unused]] static jint get_field_field_32937() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GUI_SLOT_CENTER_X", "field_32937", "field_32937", "f_174221_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#field_32937
    [[maybe_unused]] static void set_field_field_32937(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GUI_SLOT_CENTER_X", "field_32937", "field_32937", "f_174221_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#field_32938
    [[maybe_unused]] static jint get_field_field_32938() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GUI_SLOT_CENTER_Y", "field_32938", "field_32938", "f_174222_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#field_32938
    [[maybe_unused]] static void set_field_field_32938(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GUI_SLOT_CENTER_Y", "field_32938", "field_32938", "f_174222_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#field_32934
    [[maybe_unused]] static jint get_field_field_32934() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ITEM_COUNT_BLIT_OFFSET", "field_32934", "field_32934", "f_174218_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#field_32934
    [[maybe_unused]] static void set_field_field_32934(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ITEM_COUNT_BLIT_OFFSET", "field_32934", "field_32934", "f_174218_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#COMPASS_WITH_GLINT_GUI_MODEL_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_COMPASS_WITH_GLINT_GUI_MODEL_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COMPASS_FOIL_UI_SCALE", "field_32935", "COMPASS_WITH_GLINT_GUI_MODEL_MULTIPLIER", "f_174219_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#COMPASS_WITH_GLINT_GUI_MODEL_MULTIPLIER
    [[maybe_unused]] static void set_field_COMPASS_WITH_GLINT_GUI_MODEL_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COMPASS_FOIL_UI_SCALE", "field_32935", "COMPASS_WITH_GLINT_GUI_MODEL_MULTIPLIER", "f_174219_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#COMPASS_WITH_GLINT_FIRST_PERSON_MODEL_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_COMPASS_WITH_GLINT_FIRST_PERSON_MODEL_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "COMPASS_FOIL_FIRST_PERSON_SCALE", "field_32936", "COMPASS_WITH_GLINT_FIRST_PERSON_MODEL_MULTIPLIER", "f_174220_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#COMPASS_WITH_GLINT_FIRST_PERSON_MODEL_MULTIPLIER
    [[maybe_unused]] static void set_field_COMPASS_WITH_GLINT_FIRST_PERSON_MODEL_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "COMPASS_FOIL_FIRST_PERSON_SCALE", "field_32936", "COMPASS_WITH_GLINT_FIRST_PERSON_MODEL_MULTIPLIER", "f_174220_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#field_41120
    [[maybe_unused]] static jfloat get_field_field_41120() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "COMPASS_FOIL_TEXTURE_SCALE", "field_41120", "field_41120", "f_256734_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#field_41120
    [[maybe_unused]] static void set_field_field_41120(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "COMPASS_FOIL_TEXTURE_SCALE", "field_41120", "field_41120", "f_256734_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.item.ItemRenderer#TRIDENT
    [[maybe_unused]] static jobject get_field_TRIDENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "TRIDENT_MODEL", "field_40532", "TRIDENT", "f_244324_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#TRIDENT
    [[maybe_unused]] static void set_field_TRIDENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "TRIDENT_MODEL", "field_40532", "TRIDENT", "f_244324_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#TRIDENT_IN_HAND
    [[maybe_unused]] static jobject get_field_TRIDENT_IN_HAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TRIDENT_IN_HAND_MODEL", "field_40530", "TRIDENT_IN_HAND", "f_244055_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#TRIDENT_IN_HAND
    [[maybe_unused]] static void set_field_TRIDENT_IN_HAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TRIDENT_IN_HAND_MODEL", "field_40530", "TRIDENT_IN_HAND", "f_244055_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.item.ItemRenderer#SPYGLASS
    [[maybe_unused]] static jobject get_field_SPYGLASS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPYGLASS_MODEL", "field_40533", "SPYGLASS", "f_244537_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#SPYGLASS
    [[maybe_unused]] static void set_field_SPYGLASS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SPYGLASS_MODEL", "field_40533", "SPYGLASS", "f_244537_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.item.ItemRenderer#SPYGLASS_IN_HAND
    [[maybe_unused]] static jobject get_field_SPYGLASS_IN_HAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SPYGLASS_IN_HAND_MODEL", "field_40531", "SPYGLASS_IN_HAND", "f_243706_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.item.ItemRenderer#SPYGLASS_IN_HAND
    [[maybe_unused]] static void set_field_SPYGLASS_IN_HAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SPYGLASS_IN_HAND_MODEL", "field_40531", "SPYGLASS_IN_HAND", "f_243706_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.item.ItemRenderer#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "minecraft", "field_42073", "client", "f_265848_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "minecraft", "field_42073", "client", "f_265848_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.item.ItemRenderer#models
    static jobject get_field_models(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "itemModelShaper", "field_4732", "models", "f_115095_"), "Lgew;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#models
    static void set_field_models(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "itemModelShaper", "field_4732", "models", "f_115095_"), "Lgew;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.item.ItemRenderer#textureManager
    static jobject get_field_textureManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "textureManager", "field_4729", "textureManager", "f_115096_"), "Lgqm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#textureManager
    static void set_field_textureManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "textureManager", "field_4729", "textureManager", "f_115096_"), "Lgqm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.item.ItemRenderer#colors
    static jobject get_field_colors(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "itemColors", "field_4733", "colors", "f_115097_"), "Lfhu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#colors
    static void set_field_colors(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "itemColors", "field_4733", "colors", "f_115097_"), "Lfhu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.item.ItemRenderer#builtinModelItemRenderer
    static jobject get_field_builtinModelItemRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "blockEntityRenderer", "field_27770", "builtinModelItemRenderer", "f_174223_"), "Lgem;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.item.ItemRenderer#builtinModelItemRenderer
    static void set_field_builtinModelItemRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "blockEntityRenderer", "field_27770", "builtinModelItemRenderer", "f_174223_"), "Lgem;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getModels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItemModelShaper", "method_4012", "getModels", "m_115103_"), "()Lgew;");
    }

    static jobject getModels(const jobject& obj) {
                
       const auto methodID = methodID_getModels();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderBakedItemModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderModelLists", "method_23182", "renderBakedItemModel", "m_115189_"), "(Lgsm;Lcuq;IILfbi;Lfbm;)V");
    }

    static void renderBakedItemModel(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_renderBakedItemModel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_renderItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_23179", "renderItem", "m_115143_"), "(Lcuq;Lcun;ZLfbi;Lgez;IILgsm;)V");
    }

    static void renderItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5, const jint& arg6, const jobject& arg7) {
                
       const auto methodID = methodID_renderItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_usesDynamicDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "hasAnimatedTexture", "method_51795", "usesDynamicDisplay", "m_285827_"), "(Lcuq;)Z");
    }

    static jboolean usesDynamicDisplay(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_usesDynamicDisplay();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getArmorGlintConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getArmorFoilBuffer", "method_27952", "getArmorGlintConsumer", "m_115184_"), "(Lgez;Lgfh;Z)Lfbm;");
    }

    static jobject getArmorGlintConsumer(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getArmorGlintConsumer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getDynamicDisplayGlintConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getCompassFoilBuffer", "method_30114", "getDynamicDisplayGlintConsumer", "m_115180_"), "(Lgez;Lgfh;Lfbi$a;)Lfbm;");
    }

    static jobject getDynamicDisplayGlintConsumer(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getDynamicDisplayGlintConsumer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getItemGlintConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getFoilBuffer", "method_23181", "getItemGlintConsumer", "m_115211_"), "(Lgez;Lgfh;ZZ)Lfbm;");
    }

    static jobject getItemGlintConsumer(const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getItemGlintConsumer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getDirectItemGlintConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getFoilBufferDirect", "method_29711", "getDirectItemGlintConsumer", "m_115222_"), "(Lgez;Lgfh;ZZ)Lfbm;");
    }

    static jobject getDirectItemGlintConsumer(const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getDirectItemGlintConsumer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_renderBakedItemQuads() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderQuadList", "method_23180", "renderBakedItemQuads", "m_115162_"), "(Lfbi;Lfbm;Ljava/util/List;Lcuq;II)V");
    }

    static void renderBakedItemQuads(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_renderBakedItemQuads();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getModel", "method_4019", "getModel", "m_174264_"), "(Lcuq;Ldcw;Lbtn;I)Lgsm;");
    }

    static jobject getModel(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
                
       const auto methodID = methodID_getModel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__renderItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderStatic", "method_23178", "renderItem", "m_269128_"), "(Lcuq;Lcun;IILfbi;Lgez;Ldcw;I)V");
    }

    static void _renderItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jint& arg7) {
                
       const auto methodID = methodID__renderItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID___renderItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderStatic", "method_23177", "renderItem", "m_269491_"), "(Lbtn;Lcuq;Lcun;ZLfbi;Lgez;Ldcw;III)V");
    }

    static void __renderItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jint& arg7, const jint& arg8, const jint& arg9) {
                
       const auto methodID = methodID___renderItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onResourceManagerReload", "method_14491", "reload", "m_6213_"), "(Laue;)V");
    }

    static void reload(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_reload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ITEM_ITEMRENDERER_HPP