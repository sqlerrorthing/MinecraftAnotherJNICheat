// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_JIGSAWBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_JIGSAWBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.JigsawBlockEntity
 * Remapped: dri
 */
namespace JigsawBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dri", "net/minecraft/world/level/block/entity/JigsawBlockEntity", "net/minecraft/class_3751", "net/minecraft/block/entity/JigsawBlockEntity", "net/minecraft/src/C_2011_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity#TARGET_KEY
    [[maybe_unused]] static jobject get_field_TARGET_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TARGET", "field_31343", "TARGET_KEY", "f_155599_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity#TARGET_KEY
    [[maybe_unused]] static void set_field_TARGET_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TARGET", "field_31343", "TARGET_KEY", "f_155599_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity#POOL_KEY
    [[maybe_unused]] static jobject get_field_POOL_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POOL", "field_31344", "POOL_KEY", "f_155600_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity#POOL_KEY
    [[maybe_unused]] static void set_field_POOL_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POOL", "field_31344", "POOL_KEY", "f_155600_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity#JOINT_KEY
    [[maybe_unused]] static jobject get_field_JOINT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "JOINT", "field_31345", "JOINT_KEY", "f_155601_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity#JOINT_KEY
    [[maybe_unused]] static void set_field_JOINT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "JOINT", "field_31345", "JOINT_KEY", "f_155601_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity#PLACEMENT_PRIORITY_KEY
    [[maybe_unused]] static jobject get_field_PLACEMENT_PRIORITY_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PLACEMENT_PRIORITY", "field_47096", "PLACEMENT_PRIORITY_KEY", "f_303847_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity#PLACEMENT_PRIORITY_KEY
    [[maybe_unused]] static void set_field_PLACEMENT_PRIORITY_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PLACEMENT_PRIORITY", "field_47096", "PLACEMENT_PRIORITY_KEY", "f_303847_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity#SELECTION_PRIORITY_KEY
    [[maybe_unused]] static jobject get_field_SELECTION_PRIORITY_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SELECTION_PRIORITY", "field_47097", "SELECTION_PRIORITY_KEY", "f_302719_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity#SELECTION_PRIORITY_KEY
    [[maybe_unused]] static void set_field_SELECTION_PRIORITY_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SELECTION_PRIORITY", "field_47097", "SELECTION_PRIORITY_KEY", "f_302719_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity#NAME_KEY
    [[maybe_unused]] static jobject get_field_NAME_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NAME", "field_31346", "NAME_KEY", "f_155602_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity#NAME_KEY
    [[maybe_unused]] static void set_field_NAME_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NAME", "field_31346", "NAME_KEY", "f_155602_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity#FINAL_STATE_KEY
    [[maybe_unused]] static jobject get_field_FINAL_STATE_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FINAL_STATE", "field_31347", "FINAL_STATE_KEY", "f_155603_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity#FINAL_STATE_KEY
    [[maybe_unused]] static void set_field_FINAL_STATE_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FINAL_STATE", "field_31347", "FINAL_STATE_KEY", "f_155603_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "name", "field_16550", "name", "f_59411_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "name", "field_16550", "name", "f_59411_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "target", "field_16552", "target", "f_59412_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "target", "field_16552", "target", "f_59412_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity#pool
    static jobject get_field_pool(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "pool", "field_23327", "pool", "f_59413_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity#pool
    static void set_field_pool(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "pool", "field_23327", "pool", "f_59413_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity#joint
    static jobject get_field_joint(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "joint", "field_23328", "joint", "f_59414_"), "Ldri$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity#joint
    static void set_field_joint(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "joint", "field_23328", "joint", "f_59414_"), "Ldri$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity#finalState
    static jobject get_field_finalState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "finalState", "field_16551", "finalState", "f_59415_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity#finalState
    static void set_field_finalState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "finalState", "field_16551", "finalState", "f_59415_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity#placementPriority
    static jint get_field_placementPriority(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "placementPriority", "field_47098", "placementPriority", "f_303759_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity#placementPriority
    static void set_field_placementPriority(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "placementPriority", "field_47098", "placementPriority", "f_303759_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity#selectionPriority
    static jint get_field_selectionPriority(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "selectionPriority", "field_47099", "selectionPriority", "f_302960_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity#selectionPriority
    static void set_field_selectionPriority(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "selectionPriority", "field_47099", "selectionPriority", "f_302960_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getName", "method_16381", "getName", "m_59442_"), "()Lakr;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getTarget", "method_26399", "getTarget", "m_59443_"), "()Lakr;");
    }

    static jobject getTarget(const jobject& obj) {
                
       const auto methodID = methodID_getTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPool() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getPool", "method_16382", "getPool", "m_222765_"), "()Lakq;");
    }

    static jobject getPool(const jobject& obj) {
                
       const auto methodID = methodID_getPool();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFinalState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getFinalState", "method_16380", "getFinalState", "m_59445_"), "()Ljava/lang/String;");
    }

    static jobject getFinalState(const jobject& obj) {
                
       const auto methodID = methodID_getFinalState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getJoint() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getJoint", "method_26400", "getJoint", "m_59446_"), "()Ldri$a;");
    }

    static jobject getJoint(const jobject& obj) {
                
       const auto methodID = methodID_getJoint();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlacementPriority() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getPlacementPriority", "method_54777", "getPlacementPriority", "m_307662_"), "()I");
    }

    static jint getPlacementPriority(const jobject& obj) {
                
       const auto methodID = methodID_getPlacementPriority();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSelectionPriority() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getSelectionPriority", "method_54778", "getSelectionPriority", "m_304756_"), "()I");
    }

    static jint getSelectionPriority(const jobject& obj) {
                
       const auto methodID = methodID_getSelectionPriority();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setName", "method_16379", "setName", "m_59435_"), "(Lakr;)V");
    }

    static void setName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setName();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setTarget", "method_16378", "setTarget", "m_59438_"), "(Lakr;)V");
    }

    static void setTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTarget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setPool() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPool", "method_26398", "setPool", "m_222763_"), "(Lakq;)V");
    }

    static void setPool(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setPool();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setFinalState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFinalState", "method_16377", "setFinalState", "m_59431_"), "(Ljava/lang/String;)V");
    }

    static void setFinalState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setFinalState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setJoint() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setJoint", "method_26396", "setJoint", "m_59424_"), "(Ldri$a;)V");
    }

    static void setJoint(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setJoint();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setPlacementPriority() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPlacementPriority", "method_54775", "setPlacementPriority", "m_307282_"), "(I)V");
    }

    static void setPlacementPriority(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setPlacementPriority();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setSelectionPriority() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setSelectionPriority", "method_54776", "setSelectionPriority", "m_305981_"), "(I)V");
    }

    static void setSelectionPriority(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setSelectionPriority();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveAdditional", "method_11007", "writeNbt", "m_183515_"), "(Lub;Ljo$a;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadAdditional", "method_11014", "readNbt", "m_318667_"), "(Lub;Ljo$a;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_toUpdatePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "getUpdatePacket", "method_38248", "toUpdatePacket", "m_58483_"), "()Lacb;");
    }

    static jobject toUpdatePacket(const jobject& obj) {
                
       const auto methodID = methodID_toUpdatePacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_toInitialChunkDataNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUpdateTag", "method_16887", "toInitialChunkDataNbt", "m_5995_"), "(Ljo$a;)Lub;");
    }

    static jobject toInitialChunkDataNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toInitialChunkDataNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "generate", "method_27191", "generate", "m_59420_"), "(Laqu;IZ)V");
    }

    static void generate(const jobject& obj, const jobject& arg0, const jint& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_JIGSAWBLOCKENTITY_HPP