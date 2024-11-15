// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_RUINEDPORTALSTRUCTUREPIECE_HPP
#define NET_MINECRAFT_STRUCTURE_RUINEDPORTALSTRUCTUREPIECE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.RuinedPortalStructurePiece
 * Remapped: emf
 */
namespace RuinedPortalStructurePiece {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emf", "net/minecraft/world/level/levelgen/structure/structures/RuinedPortalPiece", "net/minecraft/class_5189", "net/minecraft/structure/RuinedPortalStructurePiece", "net/minecraft/src/C_213260_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.structure.RuinedPortalStructurePiece#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOGGER", "field_24992", "LOGGER", "f_229097_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.RuinedPortalStructurePiece#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LOGGER", "field_24992", "LOGGER", "f_229097_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.RuinedPortalStructurePiece#field_31620
    [[maybe_unused]] static jfloat get_field_field_31620() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PROBABILITY_OF_GOLD_GONE", "field_31620", "field_31620", "f_229098_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.RuinedPortalStructurePiece#field_31620
    [[maybe_unused]] static void set_field_field_31620(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PROBABILITY_OF_GOLD_GONE", "field_31620", "field_31620", "f_229098_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.RuinedPortalStructurePiece#field_31621
    [[maybe_unused]] static jfloat get_field_field_31621() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "PROBABILITY_OF_MAGMA_INSTEAD_OF_NETHERRACK", "field_31621", "field_31621", "f_229099_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.RuinedPortalStructurePiece#field_31621
    [[maybe_unused]] static void set_field_field_31621(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "PROBABILITY_OF_MAGMA_INSTEAD_OF_NETHERRACK", "field_31621", "field_31621", "f_229099_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.RuinedPortalStructurePiece#field_31622
    [[maybe_unused]] static jfloat get_field_field_31622() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "PROBABILITY_OF_MAGMA_INSTEAD_OF_LAVA", "field_31622", "field_31622", "f_229100_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.RuinedPortalStructurePiece#field_31622
    [[maybe_unused]] static void set_field_field_31622(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "PROBABILITY_OF_MAGMA_INSTEAD_OF_LAVA", "field_31622", "field_31622", "f_229100_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.RuinedPortalStructurePiece#verticalPlacement
    static jobject get_field_verticalPlacement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "verticalPlacement", "field_24021", "verticalPlacement", "f_229101_"), "Lemf$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.RuinedPortalStructurePiece#verticalPlacement
    static void set_field_verticalPlacement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "verticalPlacement", "field_24021", "verticalPlacement", "f_229101_"), "Lemf$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.RuinedPortalStructurePiece#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "properties", "field_24022", "properties", "f_229102_"), "Lemf$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.RuinedPortalStructurePiece#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "properties", "field_24022", "properties", "f_229102_"), "Lemf$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addAdditionalSaveData", "method_14943", "writeNbt", "m_183620_"), "(Lekh;Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createPlacementData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeSettings", "method_35449", "createPlacementData", "m_229165_"), "(Lenu;Lub;Lakr;)Lenp;");
    }

    static jobject createPlacementData(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createPlacementData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__createPlacementData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeSettings", "method_35450", "createPlacementData", "m_229151_"), "(Ldkv;Ldmm;Lemf$b;Ljd;Lemf$a;)Lenp;");
    }

    static jobject _createPlacementData(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID__createPlacementData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_createLavaReplacementRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getLavaProcessorRule", "method_27247", "createLavaReplacementRule", "m_229162_"), "(Lemf$b;Lemf$a;)Leni;");
    }

    static jobject createLavaReplacementRule(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createLavaReplacementRule();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "postProcess", "method_14931", "generate", "m_213694_"), "(Ldds;Lddq;Lduz;Layw;Lejj;Ldcd;Ljd;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_handleMetadata() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleDataMarker", "method_15026", "handleMetadata", "m_213704_"), "(Ljava/lang/String;Ljd;Lddl;Layw;Lejj;)V");
    }

    static void handleMetadata(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_handleMetadata();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_generateVines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "maybeAddVines", "method_27244", "generateVines", "m_229120_"), "(Layw;Ldcx;Ljd;)V");
    }

    static void generateVines(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_generateVines();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_generateOvergrownLeaves() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "maybeAddLeavesAbove", "method_27246", "generateOvergrownLeaves", "m_229181_"), "(Layw;Ldcx;Ljd;)V");
    }

    static void generateOvergrownLeaves(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_generateOvergrownLeaves();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_updateNetherracksInBound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addNetherrackDripColumnsBelowPortal", "method_27243", "updateNetherracksInBound", "m_229117_"), "(Layw;Ldcx;)V");
    }

    static void updateNetherracksInBound(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateNetherracksInBound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_updateNetherracks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "addNetherrackDripColumn", "method_27248", "updateNetherracks", "m_229189_"), "(Layw;Ldcx;Ljd;)V");
    }

    static void updateNetherracks(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_updateNetherracks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_placeNetherrackBase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "spreadNetherrack", "method_27245", "placeNetherrackBase", "m_229178_"), "(Layw;Ldcx;)V");
    }

    static void placeNetherrackBase(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_placeNetherrackBase();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canFillNetherrack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canBlockBeReplacedByNetherrackOrMagma", "method_27238", "canFillNetherrack", "m_229133_"), "(Ldcx;Ljd;)Z");
    }

    static jboolean canFillNetherrack(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canFillNetherrack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_placeNetherrackBottom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "placeNetherrackOrMagma", "method_27249", "placeNetherrackBottom", "m_229193_"), "(Layw;Ldcx;Ljd;)V");
    }

    static void placeNetherrackBottom(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_placeNetherrackBottom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getBaseHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSurfaceY", "method_27237", "getBaseHeight", "m_229128_"), "(Ldcx;IILemf$b;)I");
    }

    static jint getBaseHeight(const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getBaseHeight();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getHeightmapType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeightMapType", "method_27241", "getHeightmapType", "m_229160_"), "(Lemf$b;)Ldyy$a;");
    }

    static jobject getHeightmapType(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getHeightmapType();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createReplacementRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockReplaceRule", "method_27239", "createReplacementRule", "m_229144_"), "(Ldfy;FLdfy;)Leni;");
    }

    static jobject createReplacementRule(const jobject& arg0, const jfloat& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createReplacementRule();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__createReplacementRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockReplaceRule", "method_27240", "createReplacementRule", "m_229148_"), "(Ldfy;Ldfy;)Leni;");
    }

    static jobject _createReplacementRule(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__createReplacementRule();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_RUINEDPORTALSTRUCTUREPIECE_HPP