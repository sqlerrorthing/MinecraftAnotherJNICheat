// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_NOTEBLOCK_HPP
#define NET_MINECRAFT_BLOCK_NOTEBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.NoteBlock
 * Remapped: dlh
 */
namespace NoteBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dlh", "net/minecraft/world/level/block/NoteBlock", "net/minecraft/class_2428", "net/minecraft/block/NoteBlock", "net/minecraft/src/C_1848_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.NoteBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46405", "CODEC", "f_302849_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.NoteBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46405", "CODEC", "f_302849_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.NoteBlock#INSTRUMENT
    [[maybe_unused]] static jobject get_field_INSTRUMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INSTRUMENT", "field_11325", "INSTRUMENT", "f_55011_"), "Ldua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.NoteBlock#INSTRUMENT
    [[maybe_unused]] static void set_field_INSTRUMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INSTRUMENT", "field_11325", "INSTRUMENT", "f_55011_"), "Ldua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.NoteBlock#POWERED
    [[maybe_unused]] static jobject get_field_POWERED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "POWERED", "field_11326", "POWERED", "f_55012_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.NoteBlock#POWERED
    [[maybe_unused]] static void set_field_POWERED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "POWERED", "field_11326", "POWERED", "f_55012_"), "Ldtt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.NoteBlock#NOTE
    [[maybe_unused]] static jobject get_field_NOTE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NOTE", "field_11324", "NOTE", "f_55013_"), "Lduc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.NoteBlock#NOTE
    [[maybe_unused]] static void set_field_NOTE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NOTE", "field_11324", "NOTE", "f_55013_"), "Lduc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.NoteBlock#field_41678
    [[maybe_unused]] static jint get_field_field_41678() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NOTE_VOLUME", "field_41678", "field_41678", "f_262759_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.NoteBlock#field_41678
    [[maybe_unused]] static void set_field_field_41678(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NOTE_VOLUME", "field_41678", "field_41678", "f_262759_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStateWithInstrument() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setInstrument", "method_47583", "getStateWithInstrument", "m_261136_"), "(Ldcx;Ljd;Ldtc;)Ldtc;");
    }

    static jobject getStateWithInstrument(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getStateWithInstrument();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_9605", "getPlacementState", "m_5573_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStateForNeighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateShape", "method_9559", "getStateForNeighborUpdate", "m_7417_"), "(Ldtc;Lji;Ldtc;Ldcx;Ljd;Ljd;)Ldtc;");
    }

    static jobject getStateForNeighborUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_getStateForNeighborUpdate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_neighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "neighborChanged", "method_9612", "neighborUpdate", "m_6861_"), "(Ldtc;Ldcw;Ljd;Ldfy;Ljd;Z)V");
    }

    static void neighborUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5) {
                
       const auto methodID = methodID_neighborUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_playNote() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playNote", "method_10367", "playNote", "m_260916_"), "(Lbsr;Ldtc;Ldcw;Ljd;)V");
    }

    static void playNote(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_playNote();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onUseWithItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useItemOn", "method_55765", "onUseWithItem", "m_51273_"), "(Lcuq;Ldtc;Ldcw;Ljd;Lcmx;Lbqq;Lewy;)Lbqt;");
    }

    static jobject onUseWithItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_onUseWithItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_onUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useWithoutItem", "method_55766", "onUse", "m_6227_"), "(Ldtc;Ldcw;Ljd;Lcmx;Lewy;)Lbqr;");
    }

    static jobject onUse(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_onUse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onBlockBreakStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "attack", "method_9606", "onBlockBreakStart", "m_6256_"), "(Ldtc;Ldcw;Ljd;Lcmx;)V");
    }

    static void onBlockBreakStart(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onBlockBreakStart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getNotePitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getPitchFromNote", "method_49818", "getNotePitch", "m_276981_"), "(I)F");
    }

    static jfloat getNotePitch(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getNotePitch();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_onSyncedBlockEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "triggerEvent", "method_9592", "onSyncedBlockEvent", "m_8133_"), "(Ldtc;Ldcw;Ljd;II)Z");
    }

    static jboolean onSyncedBlockEvent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_onSyncedBlockEvent();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getCustomSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCustomSoundId", "method_47886", "getCustomSound", "m_262851_"), "(Ldcw;Ljd;)Lakr;");
    }

    static jobject getCustomSound(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getCustomSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_NOTEBLOCK_HPP