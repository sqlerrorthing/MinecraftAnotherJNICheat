// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_DISPLAYENTITYRENDERER$TEXTDISPLAYENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_DISPLAYENTITYRENDERER$TEXTDISPLAYENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.DisplayEntityRenderer$TextDisplayEntityRenderer
 * Remapped: gjy$c
 */
namespace DisplayEntityRenderer$TextDisplayEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gjy$c", "net/minecraft/client/renderer/entity/DisplayRenderer$TextDisplayRenderer", "net/minecraft/class_8138$class_8141", "net/minecraft/client/render/entity/DisplayEntityRenderer$TextDisplayEntityRenderer", "net/minecraft/src/C_268412_$C_268365_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.DisplayEntityRenderer$TextDisplayEntityRenderer#displayTextRenderer
    static jobject get_field_displayTextRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "font", "field_42531", "displayTextRenderer", "f_268575_"), "Lfhx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.DisplayEntityRenderer$TextDisplayEntityRenderer#displayTextRenderer
    static void set_field_displayTextRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "font", "field_42531", "displayTextRenderer", "f_268575_"), "Lfhx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "splitLines", "method_49057", "getLines", "m_269268_"), "(Lwz;I)Lbsq$l$b;");
    }

    static jobject getLines(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getLines();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSubState", "method_49924", "getData", "m_269580_"), "(Lbsq$l;)Lbsq$l$e;");
    }

    static jobject getData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderInner", "method_49056", "render", "m_276924_"), "(Lbsq$l;Lbsq$l$e;Lfbi;Lgez;IF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_DISPLAYENTITYRENDERER$TEXTDISPLAYENTITYRENDERER_HPP