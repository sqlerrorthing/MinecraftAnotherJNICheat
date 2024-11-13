// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_HANGINGSIGNBLOCKENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_HANGINGSIGNBLOCKENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer
 * Remapped: ghj
 */
namespace HangingSignBlockEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ghj", "net/minecraft/client/renderer/blockentity/HangingSignRenderer", "net/minecraft/class_7761", "net/minecraft/client/render/block/entity/HangingSignBlockEntityRenderer", "net/minecraft/src/C_243526_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#PLANK
    [[maybe_unused]] static jobject get_field_PLANK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PLANK", "field_40522", "PLANK", "f_244131_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#PLANK
    [[maybe_unused]] static void set_field_PLANK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PLANK", "field_40522", "PLANK", "f_244131_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#V_CHAINS
    [[maybe_unused]] static jobject get_field_V_CHAINS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "V_CHAINS", "field_40523", "V_CHAINS", "f_244095_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#V_CHAINS
    [[maybe_unused]] static void set_field_V_CHAINS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "V_CHAINS", "field_40523", "V_CHAINS", "f_244095_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#NORMAL_CHAINS
    [[maybe_unused]] static jobject get_field_NORMAL_CHAINS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NORMAL_CHAINS", "field_40516", "NORMAL_CHAINS", "f_244118_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#NORMAL_CHAINS
    [[maybe_unused]] static void set_field_NORMAL_CHAINS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NORMAL_CHAINS", "field_40516", "NORMAL_CHAINS", "f_244118_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_L1
    [[maybe_unused]] static jobject get_field_CHAIN_L1() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CHAIN_L_1", "field_40517", "CHAIN_L1", "f_244072_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_L1
    [[maybe_unused]] static void set_field_CHAIN_L1(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CHAIN_L_1", "field_40517", "CHAIN_L1", "f_244072_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_L2
    [[maybe_unused]] static jobject get_field_CHAIN_L2() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CHAIN_L_2", "field_40518", "CHAIN_L2", "f_244584_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_L2
    [[maybe_unused]] static void set_field_CHAIN_L2(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CHAIN_L_2", "field_40518", "CHAIN_L2", "f_244584_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_R1
    [[maybe_unused]] static jobject get_field_CHAIN_R1() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHAIN_R_1", "field_40519", "CHAIN_R1", "f_243690_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_R1
    [[maybe_unused]] static void set_field_CHAIN_R1(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHAIN_R_1", "field_40519", "CHAIN_R1", "f_243690_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_R2
    [[maybe_unused]] static jobject get_field_CHAIN_R2() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CHAIN_R_2", "field_40520", "CHAIN_R2", "f_244159_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#CHAIN_R2
    [[maybe_unused]] static void set_field_CHAIN_R2(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CHAIN_R_2", "field_40520", "CHAIN_R2", "f_244159_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#BOARD
    [[maybe_unused]] static jobject get_field_BOARD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BOARD", "field_40521", "BOARD", "f_244071_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#BOARD
    [[maybe_unused]] static void set_field_BOARD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BOARD", "field_40521", "BOARD", "f_244071_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#MODEL_SCALE
    [[maybe_unused]] static jfloat get_field_MODEL_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MODEL_RENDER_SCALE", "field_44574", "MODEL_SCALE", "f_278461_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#MODEL_SCALE
    [[maybe_unused]] static void set_field_MODEL_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MODEL_RENDER_SCALE", "field_44574", "MODEL_SCALE", "f_278461_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#TEXT_SCALE
    [[maybe_unused]] static jfloat get_field_TEXT_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "TEXT_RENDER_SCALE", "field_44575", "TEXT_SCALE", "f_278477_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#TEXT_SCALE
    [[maybe_unused]] static void set_field_TEXT_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "TEXT_RENDER_SCALE", "field_44575", "TEXT_SCALE", "f_278477_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#TEXT_OFFSET
    [[maybe_unused]] static jobject get_field_TEXT_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "TEXT_OFFSET", "field_44576", "TEXT_OFFSET", "f_278502_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#TEXT_OFFSET
    [[maybe_unused]] static void set_field_TEXT_OFFSET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "TEXT_OFFSET", "field_44576", "TEXT_OFFSET", "f_278502_"), "Lexc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#MODELS
    static jobject get_field_MODELS(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "hangingSignModels", "field_40524", "MODELS", "f_244009_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.HangingSignBlockEntityRenderer#MODELS
    static void set_field_MODELS(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "hangingSignModels", "field_40524", "MODELS", "f_244009_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSignScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSignModelRenderScale", "method_51272", "getSignScale", "m_278770_"), "()F");
    }

    static jfloat getSignScale(const jobject& obj) {
                
       const auto methodID = methodID_getSignScale();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTextScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSignTextRenderScale", "method_51273", "getTextScale", "m_278631_"), "()F");
    }

    static jfloat getTextScale(const jobject& obj) {
                
       const auto methodID = methodID_getTextScale();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_23083", "render", "m_6922_"), "(Ldrs;FLfbi;Lgez;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "translateSign", "method_49918", "setAngles", "m_276777_"), "(Lfbi;FLdtc;)V");
    }

    static void setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_renderSignModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderSignModel", "method_45793", "renderSignModel", "m_245885_"), "(Lfbi;IILfwg;Lfbm;)V");
    }

    static void renderSignModel(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_renderSignModel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getTextureId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSignMaterial", "method_45792", "getTextureId", "m_245629_"), "(Ldup;)Lgsq;");
    }

    static jobject getTextureId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTextureId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTextOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getTextOffset", "method_45790", "getTextOffset", "m_278725_"), "()Lexc;");
    }

    static jobject getTextOffset(const jobject& obj) {
                
       const auto methodID = methodID_getTextOffset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "createHangingSignLayer", "method_45795", "getTexturedModelData", "m_247112_"), "()Lfyq;");
    }

    static jobject getTexturedModelData() {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_HANGINGSIGNBLOCKENTITYRENDERER_HPP