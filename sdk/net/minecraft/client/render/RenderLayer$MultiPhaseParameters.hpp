// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERLAYER$MULTIPHASEPARAMETERS_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERLAYER$MULTIPHASEPARAMETERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderLayer$MultiPhaseParameters
 * Remapped: gfh$b
 */
namespace RenderLayer$MultiPhaseParameters {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfh$b", "net/minecraft/client/renderer/RenderType$CompositeState", "net/minecraft/class_1921$class_4688", "net/minecraft/client/render/RenderLayer$MultiPhaseParameters", "net/minecraft/src/C_4168_$C_4172_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "textureState", "field_21406", "texture", "f_110576_"), "Lgfg$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "textureState", "field_21406", "texture", "f_110576_"), "Lgfg$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#program
    static jobject get_field_program(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "shaderState", "field_29461", "program", "f_173274_"), "Lgfg$m;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#program
    static void set_field_program(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "shaderState", "field_29461", "program", "f_173274_"), "Lgfg$m;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#transparency
    static jobject get_field_transparency(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "transparencyState", "field_21407", "transparency", "f_110577_"), "Lgfg$p;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#transparency
    static void set_field_transparency(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "transparencyState", "field_21407", "transparency", "f_110577_"), "Lgfg$p;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#depthTest
    static jobject get_field_depthTest(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "depthTestState", "field_21411", "depthTest", "f_110581_"), "Lgfg$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#depthTest
    static void set_field_depthTest(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "depthTestState", "field_21411", "depthTest", "f_110581_"), "Lgfg$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#cull
    static jobject get_field_cull(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "cullState", "field_21412", "cull", "f_110582_"), "Lgfg$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#cull
    static void set_field_cull(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "cullState", "field_21412", "cull", "f_110582_"), "Lgfg$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#lightmap
    static jobject get_field_lightmap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lightmapState", "field_21413", "lightmap", "f_110583_"), "Lgfg$g;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#lightmap
    static void set_field_lightmap(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lightmapState", "field_21413", "lightmap", "f_110583_"), "Lgfg$g;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#overlay
    static jobject get_field_overlay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "overlayState", "field_21414", "overlay", "f_110584_"), "Lgfg$l;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#overlay
    static void set_field_overlay(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "overlayState", "field_21414", "overlay", "f_110584_"), "Lgfg$l;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#layering
    static jobject get_field_layering(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "layeringState", "field_21416", "layering", "f_110586_"), "Lgfg$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#layering
    static void set_field_layering(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "layeringState", "field_21416", "layering", "f_110586_"), "Lgfg$f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "outputState", "field_21417", "target", "f_110587_"), "Lgfg$k;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "outputState", "field_21417", "target", "f_110587_"), "Lgfg$k;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#texturing
    static jobject get_field_texturing(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "texturingState", "field_21418", "texturing", "f_110588_"), "Lgfg$o;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#texturing
    static void set_field_texturing(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "texturingState", "field_21418", "texturing", "f_110588_"), "Lgfg$o;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#writeMaskState
    static jobject get_field_writeMaskState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "writeMaskState", "field_21419", "writeMaskState", "f_110589_"), "Lgfg$q;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#writeMaskState
    static void set_field_writeMaskState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "writeMaskState", "field_21419", "writeMaskState", "f_110589_"), "Lgfg$q;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#lineWidth
    static jobject get_field_lineWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "lineState", "field_21420", "lineWidth", "f_110590_"), "Lgfg$h;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#lineWidth
    static void set_field_lineWidth(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "lineState", "field_21420", "lineWidth", "f_110590_"), "Lgfg$h;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#colorLogic
    static jobject get_field_colorLogic(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "colorLogicState", "field_44825", "colorLogic", "f_285566_"), "Lgfg$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#colorLogic
    static void set_field_colorLogic(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "colorLogicState", "field_44825", "colorLogic", "f_285566_"), "Lgfg$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#outlineMode
    static jobject get_field_outlineMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "outlineProperty", "field_21852", "outlineMode", "f_110591_"), "Lgfh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#outlineMode
    static void set_field_outlineMode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "outlineProperty", "field_21852", "outlineMode", "f_110591_"), "Lgfh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#phases
    static jobject get_field_phases(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "states", "field_21422", "phases", "f_110592_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.RenderLayer$MultiPhaseParameters#phases
    static void set_field_phases(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "states", "field_21422", "phases", "f_110592_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_23598", "builder", "m_110628_"), "()Lgfh$b$a;");
    }

    static jobject builder() {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERLAYER$MULTIPHASEPARAMETERS_HPP