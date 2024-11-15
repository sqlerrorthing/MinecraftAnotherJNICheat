// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_DISPLAYENTITYRENDERER$ITEMDISPLAYENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_DISPLAYENTITYRENDERER$ITEMDISPLAYENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.DisplayEntityRenderer$ItemDisplayEntityRenderer
 * Remapped: gjy$b
 */
namespace DisplayEntityRenderer$ItemDisplayEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gjy$b", "net/minecraft/client/renderer/entity/DisplayRenderer$ItemDisplayRenderer", "net/minecraft/class_8138$class_8140", "net/minecraft/client/render/entity/DisplayEntityRenderer$ItemDisplayEntityRenderer", "net/minecraft/src/C_268412_$C_268379_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.DisplayEntityRenderer$ItemDisplayEntityRenderer#itemRenderer
    static jobject get_field_itemRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "itemRenderer", "field_42529", "itemRenderer", "f_268604_"), "Lglh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.DisplayEntityRenderer$ItemDisplayEntityRenderer#itemRenderer
    static void set_field_itemRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "itemRenderer", "field_42529", "itemRenderer", "f_268604_"), "Lglh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSubState", "method_49923", "getData", "m_269580_"), "(Lbsq$g;)Lbsq$g$a;");
    }

    static jobject getData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderInner", "method_49055", "render", "m_276924_"), "(Lbsq$g;Lbsq$g$a;Lfbi;Lgez;IF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_DISPLAYENTITYRENDERER$ITEMDISPLAYENTITYRENDERER_HPP