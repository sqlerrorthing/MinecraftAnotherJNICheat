// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MODEL_MODELPART_HPP
#define NET_MINECRAFT_CLIENT_MODEL_MODELPART_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.model.ModelPart
 * Remapped: fyk
 */
namespace ModelPart {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fyk", "net/minecraft/client/model/geom/ModelPart", "net/minecraft/class_630", "net/minecraft/client/model/ModelPart", "net/minecraft/src/C_3889_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.model.ModelPart#field_37937
    [[maybe_unused]] static jfloat get_field_field_37937() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_SCALE", "field_37937", "field_37937", "f_233552_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#field_37937
    [[maybe_unused]] static void set_field_field_37937(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_SCALE", "field_37937", "field_37937", "f_233552_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#pivotX
    static jfloat get_field_pivotX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_3657", "pivotX", "f_104200_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#pivotX
    static void set_field_pivotX(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_3657", "pivotX", "f_104200_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#pivotY
    static jfloat get_field_pivotY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_3656", "pivotY", "f_104201_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#pivotY
    static void set_field_pivotY(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_3656", "pivotY", "f_104201_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#pivotZ
    static jfloat get_field_pivotZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "field_3655", "pivotZ", "f_104202_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#pivotZ
    static void set_field_pivotZ(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "field_3655", "pivotZ", "f_104202_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#pitch
    static jfloat get_field_pitch(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xRot", "field_3654", "pitch", "f_104203_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#pitch
    static void set_field_pitch(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xRot", "field_3654", "pitch", "f_104203_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#yaw
    static jfloat get_field_yaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yRot", "field_3675", "yaw", "f_104204_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#yaw
    static void set_field_yaw(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yRot", "field_3675", "yaw", "f_104204_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#roll
    static jfloat get_field_roll(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "zRot", "field_3674", "roll", "f_104205_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#roll
    static void set_field_roll(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "zRot", "field_3674", "roll", "f_104205_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#xScale
    static jfloat get_field_xScale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "xScale", "field_37938", "xScale", "f_233553_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#xScale
    static void set_field_xScale(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "xScale", "field_37938", "xScale", "f_233553_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#yScale
    static jfloat get_field_yScale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "yScale", "field_37939", "yScale", "f_233554_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#yScale
    static void set_field_yScale(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "yScale", "field_37939", "yScale", "f_233554_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#zScale
    static jfloat get_field_zScale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "zScale", "field_37940", "zScale", "f_233555_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#zScale
    static void set_field_zScale(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "zScale", "field_37940", "zScale", "f_233555_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#visible
    static jboolean get_field_visible(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "visible", "field_3665", "visible", "f_104207_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#visible
    static void set_field_visible(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "visible", "field_3665", "visible", "f_104207_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.model.ModelPart#hidden
    static jboolean get_field_hidden(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "skipDraw", "field_38456", "hidden", "f_233556_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.model.ModelPart#hidden
    static void set_field_hidden(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "skipDraw", "field_38456", "hidden", "f_233556_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.model.ModelPart#cuboids
    static jobject get_field_cuboids(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "cubes", "field_3663", "cuboids", "f_104212_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.model.ModelPart#cuboids
    static void set_field_cuboids(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "cubes", "field_3663", "cuboids", "f_104212_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.model.ModelPart#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "children", "field_3661", "children", "f_104213_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.model.ModelPart#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "children", "field_3661", "children", "f_104213_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.model.ModelPart#defaultTransform
    static jobject get_field_defaultTransform(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "initialPose", "field_37941", "defaultTransform", "f_233557_"), "Lfym;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.model.ModelPart#defaultTransform
    static void set_field_defaultTransform(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "initialPose", "field_37941", "defaultTransform", "f_233557_"), "Lfym;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTransform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "storePose", "method_32084", "getTransform", "m_171308_"), "()Lfym;");
    }

    static jobject getTransform(const jobject& obj) {
                
       const auto methodID = methodID_getTransform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDefaultTransform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getInitialPose", "method_41921", "getDefaultTransform", "m_233566_"), "()Lfym;");
    }

    static jobject getDefaultTransform(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultTransform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setDefaultTransform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setInitialPose", "method_41918", "setDefaultTransform", "m_233560_"), "(Lfym;)V");
    }

    static void setDefaultTransform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setDefaultTransform();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_resetTransform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "resetPose", "method_41923", "resetTransform", "m_233569_"), "()V");
    }

    static void resetTransform(const jobject& obj) {
                
       const auto methodID = methodID_resetTransform();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setTransform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "loadPose", "method_32085", "setTransform", "m_171322_"), "(Lfym;)V");
    }

    static void setTransform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTransform();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyTransform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyFrom", "method_17138", "copyTransform", "m_104315_"), "(Lfyk;)V");
    }

    static void copyTransform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyTransform();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasChild", "method_41919", "hasChild", "m_233562_"), "(Ljava/lang/String;)Z");
    }

    static jboolean hasChild(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasChild();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getChild", "method_32086", "getChild", "m_171324_"), "(Ljava/lang/String;)Lfyk;");
    }

    static jobject getChild(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setPivot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPos", "method_2851", "setPivot", "m_104227_"), "(FFF)V");
    }

    static void setPivot(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_setPivot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setRotation", "method_33425", "setAngles", "m_171327_"), "(FFF)V");
    }

    static void setAngles(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_22698", "render", "m_104301_"), "(Lfbi;Lfbm;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_22699", "render", "m_104306_"), "(Lfbi;Lfbm;III)V");
    }

    static void _render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID__render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_forEachCuboid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_35745", "forEachCuboid", "m_171309_"), "(Lfbi;Lfyk$d;)V");
    }

    static void forEachCuboid(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_forEachCuboid();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__forEachCuboid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_35746", "forEachCuboid", "m_171312_"), "(Lfbi;Lfyk$d;Ljava/lang/String;)V");
    }

    static void _forEachCuboid(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__forEachCuboid();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_rotate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "translateAndRotate", "method_22703", "rotate", "m_104299_"), "(Lfbi;)V");
    }

    static void rotate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_rotate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderCuboids() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compile", "method_22702", "renderCuboids", "m_104290_"), "(Lfbi$a;Lfbm;III)V");
    }

    static void renderCuboids(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_renderCuboids();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getRandomCuboid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomCube", "method_22700", "getRandomCuboid", "m_233558_"), "(Layw;)Lfyk$a;");
    }

    static jobject getRandomCuboid(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRandomCuboid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isEmpty", "method_32087", "isEmpty", "m_171326_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_translate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "offsetPos", "method_41920", "translate", "m_252854_"), "(Lorg/joml/Vector3f;)V");
    }

    static void translate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_translate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__rotate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "offsetRotation", "method_41922", "rotate", "m_252899_"), "(Lorg/joml/Vector3f;)V");
    }

    static void _rotate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__rotate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_scale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "offsetScale", "method_41924", "scale", "m_253072_"), "(Lorg/joml/Vector3f;)V");
    }

    static void scale(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_scale();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_traverse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getAllParts", "method_32088", "traverse", "m_171331_"), "()Ljava/util/stream/Stream;");
    }

    static jobject traverse(const jobject& obj) {
                
       const auto methodID = methodID_traverse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_MODEL_MODELPART_HPP