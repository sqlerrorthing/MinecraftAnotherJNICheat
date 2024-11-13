// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLELEMENT_HPP
#define NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLELEMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.pool.StructurePoolElement
 * Remapped: ekz
 */
namespace StructurePoolElement {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ekz", "net/minecraft/world/level/levelgen/structure/pools/StructurePoolElement", "net/minecraft/class_3784", "net/minecraft/structure/pool/StructurePoolElement", "net/minecraft/src/C_207040_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.pool.StructurePoolElement#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CODEC", "field_24953", "CODEC", "f_210468_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.pool.StructurePoolElement#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CODEC", "field_24953", "CODEC", "f_210468_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.pool.StructurePoolElement#EMPTY_PROCESSORS
    [[maybe_unused]] static jobject get_field_EMPTY_PROCESSORS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_40924", "EMPTY_PROCESSORS", "f_254734_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolElement#EMPTY_PROCESSORS
    [[maybe_unused]] static void set_field_EMPTY_PROCESSORS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_40924", "EMPTY_PROCESSORS", "f_254734_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.pool.StructurePoolElement#projection
    static jobject get_field_projection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "projection", "field_16862", "projection", "f_210467_"), "Lelb$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolElement#projection
    static void set_field_projection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "projection", "field_16862", "projection", "f_210467_"), "Lelb$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_projectionGetter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "projectionCodec", "method_28883", "projectionGetter", "m_210538_"), "()Lcom/mojang/serialization/codecs/RecordCodecBuilder;");
    }

    static jobject projectionGetter() {
       const auto clazz = self();
       const auto methodID = methodID_projectionGetter();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSize", "method_16601", "getStart", "m_213577_"), "(Lenu;Ldmm;)Lkh;");
    }

    static jobject getStart(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getStart();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getStructureBlockInfos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShuffledJigsawBlocks", "method_16627", "getStructureBlockInfos", "m_213638_"), "(Lenu;Ljd;Ldmm;Layw;)Ljava/util/List;");
    }

    static jobject getStructureBlockInfos(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getStructureBlockInfos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getBoundingBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBoundingBox", "method_16628", "getBoundingBox", "m_214015_"), "(Lenu;Ljd;Ldmm;)Lejj;");
    }

    static jobject getBoundingBox(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getBoundingBox();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_16626", "generate", "m_213695_"), "(Lenu;Ldds;Lddq;Lduz;Ljd;Ljd;Ldmm;Lejj;Layw;Lend;Z)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jobject& arg8, const jobject& arg9, const jboolean& arg10) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_16757", "getType", "m_207234_"), "()Lela;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_method_16756() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleDataMarker", "method_16756", "method_16756", "m_227329_"), "(Ldcx;Lent$c;Ljd;Ldmm;Layw;Lejj;)V");
    }

    static void method_16756(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_method_16756();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_setProjection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setProjection", "method_16622", "setProjection", "m_207247_"), "(Lelb$a;)Lekz;");
    }

    static jobject setProjection(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setProjection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getProjection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getProjection", "method_16624", "getProjection", "m_210539_"), "()Lelb$a;");
    }

    static jobject getProjection(const jobject& obj) {
                
       const auto methodID = methodID_getProjection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGroundLevelDelta() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getGroundLevelDelta", "method_19308", "getGroundLevelDelta", "m_210540_"), "()I");
    }

    static jint getGroundLevelDelta(const jobject& obj) {
                
       const auto methodID = methodID_getGroundLevelDelta();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_ofEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("h", "empty", "method_30438", "ofEmpty", "m_210541_"), "()Ljava/util/function/Function;");
    }

    static jobject ofEmpty() {
       const auto clazz = self();
       const auto methodID = methodID_ofEmpty();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_ofLegacySingle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "legacy", "method_30425", "ofLegacySingle", "m_210507_"), "(Ljava/lang/String;)Ljava/util/function/Function;");
    }

    static jobject ofLegacySingle(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ofLegacySingle();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_ofProcessedLegacySingle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "legacy", "method_30426", "ofProcessedLegacySingle", "m_210512_"), "(Ljava/lang/String;Ljm;)Ljava/util/function/Function;");
    }

    static jobject ofProcessedLegacySingle(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_ofProcessedLegacySingle();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_ofSingle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "single", "method_30434", "ofSingle", "m_210526_"), "(Ljava/lang/String;)Ljava/util/function/Function;");
    }

    static jobject ofSingle(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ofSingle();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_ofProcessedSingle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "single", "method_30435", "ofProcessedSingle", "m_210531_"), "(Ljava/lang/String;Ljm;)Ljava/util/function/Function;");
    }

    static jobject ofProcessedSingle(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_ofProcessedSingle();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__ofSingle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "single", "method_61014", "ofSingle", "m_338365_"), "(Ljava/lang/String;Lend;)Ljava/util/function/Function;");
    }

    static jobject _ofSingle(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__ofSingle();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__ofProcessedSingle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "single", "method_61016", "ofProcessedSingle", "m_340006_"), "(Ljava/lang/String;Ljm;Lend;)Ljava/util/function/Function;");
    }

    static jobject _ofProcessedSingle(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__ofProcessedSingle();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_ofFeature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "feature", "method_30421", "ofFeature", "m_210502_"), "(Ljm;)Ljava/util/function/Function;");
    }

    static jobject ofFeature(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ofFeature();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_ofList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "list", "method_30429", "ofList", "m_210519_"), "(Ljava/util/List;)Ljava/util/function/Function;");
    }

    static jobject ofList(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ofList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLELEMENT_HPP