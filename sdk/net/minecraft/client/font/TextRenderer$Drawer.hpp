// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_TEXTRENDERER$DRAWER_HPP
#define NET_MINECRAFT_CLIENT_FONT_TEXTRENDERER$DRAWER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.TextRenderer$Drawer
 * Remapped: fhx$b
 */
namespace TextRenderer$Drawer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fhx$b", "net/minecraft/client/gui/Font$StringRenderOutput", "net/minecraft/class_327$class_5232", "net/minecraft/client/font/TextRenderer$Drawer", "net/minecraft/src/C_3429_$C_3430_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.font.TextRenderer$Drawer#vertexConsumers
    static jobject get_field_vertexConsumers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "bufferSource", "field_24239", "vertexConsumers", "f_92937_"), "Lgez;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.TextRenderer$Drawer#vertexConsumers
    static void set_field_vertexConsumers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "bufferSource", "field_24239", "vertexConsumers", "f_92937_"), "Lgez;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#shadow
    static jboolean get_field_shadow(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dropShadow", "field_24241", "shadow", "f_92939_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#shadow
    static void set_field_shadow(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dropShadow", "field_24241", "shadow", "f_92939_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#brightnessMultiplier
    static jfloat get_field_brightnessMultiplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "dimFactor", "field_24242", "brightnessMultiplier", "f_92940_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#brightnessMultiplier
    static void set_field_brightnessMultiplier(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "dimFactor", "field_24242", "brightnessMultiplier", "f_92940_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#red
    static jfloat get_field_red(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "r", "field_24243", "red", "f_92941_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#red
    static void set_field_red(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "r", "field_24243", "red", "f_92941_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#green
    static jfloat get_field_green(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "g", "field_24244", "green", "f_92942_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#green
    static void set_field_green(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "g", "field_24244", "green", "f_92942_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#blue
    static jfloat get_field_blue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "b", "field_24245", "blue", "f_92943_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#blue
    static void set_field_blue(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "b", "field_24245", "blue", "f_92943_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#alpha
    static jfloat get_field_alpha(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "a", "field_24246", "alpha", "f_92944_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#alpha
    static void set_field_alpha(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "a", "field_24246", "alpha", "f_92944_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#matrix
    static jobject get_field_matrix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "pose", "field_24247", "matrix", "f_92945_"), "Lorg/joml/Matrix4f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#matrix
    static void set_field_matrix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "pose", "field_24247", "matrix", "f_92945_"), "Lorg/joml/Matrix4f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#layerType
    static jobject get_field_layerType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "mode", "field_33997", "layerType", "f_181362_"), "Lfhx$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#layerType
    static void set_field_layerType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "mode", "field_33997", "layerType", "f_181362_"), "Lfhx$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#light
    static jint get_field_light(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "packedLightCoords", "field_24249", "light", "f_92947_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#light
    static void set_field_light(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "packedLightCoords", "field_24249", "light", "f_92947_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.TextRenderer$Drawer#x
    static jfloat get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "x", "field_24250", "x", "f_92948_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.TextRenderer$Drawer#x
    static void set_field_x(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "x", "field_24250", "x", "f_92948_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.TextRenderer$Drawer#y
    static jfloat get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "y", "field_24251", "y", "f_92949_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.TextRenderer$Drawer#y
    static void set_field_y(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "y", "field_24251", "y", "f_92949_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer$Drawer#rectangles
    static jobject get_field_rectangles(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "effects", "field_24252", "rectangles", "f_92950_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer$Drawer#rectangles
    static void set_field_rectangles(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "effects", "field_24252", "rectangles", "f_92950_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addRectangle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addEffect", "method_27532", "addRectangle", "m_92964_"), "(Lflh$a;)V");
    }

    static void addRectangle(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addRectangle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_6411_"), "(ILxw;I)Z");
    }

    static jboolean accept(const jobject& obj, const jint& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID_accept();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_drawLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finish", "method_27531", "drawLayer", "m_92961_"), "(IF)F");
    }

    static jfloat drawLayer(const jobject& obj, const jint& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_drawLayer();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_TEXTRENDERER$DRAWER_HPP