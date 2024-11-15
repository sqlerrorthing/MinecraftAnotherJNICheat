// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_LAYEREDDRAWER_HPP
#define NET_MINECRAFT_CLIENT_GUI_LAYEREDDRAWER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.LayeredDrawer
 * Remapped: fib
 */
namespace LayeredDrawer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fib", "net/minecraft/client/gui/LayeredDraw", "net/minecraft/class_9080", "net/minecraft/client/gui/LayeredDrawer", "net/minecraft/src/C_313825_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.LayeredDrawer#LAYER_Z_PADDING
    [[maybe_unused]] static jfloat get_field_LAYER_Z_PADDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "Z_SEPARATION", "field_47848", "LAYER_Z_PADDING", "f_314628_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.LayeredDrawer#LAYER_Z_PADDING
    [[maybe_unused]] static void set_field_LAYER_Z_PADDING(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "Z_SEPARATION", "field_47848", "LAYER_Z_PADDING", "f_314628_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.LayeredDrawer#layers
    static jobject get_field_layers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "layers", "field_47849", "layers", "f_314699_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.LayeredDrawer#layers
    static void set_field_layers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "layers", "field_47849", "layers", "f_314699_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_55810", "addLayer", "m_322513_"), "(Lfib$a;)Lfib;");
    }

    static jobject addLayer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addLayer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addSubDrawer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_55811", "addSubDrawer", "m_323151_"), "(Lfib;Ljava/util/function/BooleanSupplier;)Lfib;");
    }

    static jobject addSubDrawer(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addSubDrawer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_55809", "render", "m_322951_"), "(Lfhz;Lfgf;)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_renderInternal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderInner", "method_55813", "renderInternal", "m_321084_"), "(Lfhz;Lfgf;)V");
    }

    static void renderInternal(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_renderInternal();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_LAYEREDDRAWER_HPP