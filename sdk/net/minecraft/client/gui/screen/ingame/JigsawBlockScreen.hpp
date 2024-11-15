// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_JIGSAWBLOCKSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_JIGSAWBLOCKSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.JigsawBlockScreen
 * Remapped: fpv
 */
namespace JigsawBlockScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpv", "net/minecraft/client/gui/screens/inventory/JigsawBlockEditScreen", "net/minecraft/class_3742", "net/minecraft/client/gui/screen/ingame/JigsawBlockScreen", "net/minecraft/src/C_3666_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#JOINT_LABEL_TEXT
    [[maybe_unused]] static jobject get_field_JOINT_LABEL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "JOINT_LABEL", "field_26564", "JOINT_LABEL_TEXT", "f_98933_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#JOINT_LABEL_TEXT
    [[maybe_unused]] static void set_field_JOINT_LABEL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "JOINT_LABEL", "field_26564", "JOINT_LABEL_TEXT", "f_98933_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#POOL_TEXT
    [[maybe_unused]] static jobject get_field_POOL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POOL_LABEL", "field_26565", "POOL_TEXT", "f_98934_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#POOL_TEXT
    [[maybe_unused]] static void set_field_POOL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POOL_LABEL", "field_26565", "POOL_TEXT", "f_98934_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#NAME_TEXT
    [[maybe_unused]] static jobject get_field_NAME_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NAME_LABEL", "field_26566", "NAME_TEXT", "f_98935_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#NAME_TEXT
    [[maybe_unused]] static void set_field_NAME_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NAME_LABEL", "field_26566", "NAME_TEXT", "f_98935_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#TARGET_TEXT
    [[maybe_unused]] static jobject get_field_TARGET_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "TARGET_LABEL", "field_26567", "TARGET_TEXT", "f_98936_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#TARGET_TEXT
    [[maybe_unused]] static void set_field_TARGET_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "TARGET_LABEL", "field_26567", "TARGET_TEXT", "f_98936_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#FINAL_STATE_TEXT
    [[maybe_unused]] static jobject get_field_FINAL_STATE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "FINAL_STATE_LABEL", "field_26568", "FINAL_STATE_TEXT", "f_98937_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#FINAL_STATE_TEXT
    [[maybe_unused]] static void set_field_FINAL_STATE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "FINAL_STATE_LABEL", "field_26568", "FINAL_STATE_TEXT", "f_98937_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#PLACEMENT_PRIORITY_TEXT
    [[maybe_unused]] static jobject get_field_PLACEMENT_PRIORITY_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "PLACEMENT_PRIORITY_LABEL", "field_47119", "PLACEMENT_PRIORITY_TEXT", "f_302664_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#PLACEMENT_PRIORITY_TEXT
    [[maybe_unused]] static void set_field_PLACEMENT_PRIORITY_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "PLACEMENT_PRIORITY_LABEL", "field_47119", "PLACEMENT_PRIORITY_TEXT", "f_302664_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#PLACEMENT_PRIORITY_TOOLTIP
    [[maybe_unused]] static jobject get_field_PLACEMENT_PRIORITY_TOOLTIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "PLACEMENT_PRIORITY_TOOLTIP", "field_47120", "PLACEMENT_PRIORITY_TOOLTIP", "f_302291_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#PLACEMENT_PRIORITY_TOOLTIP
    [[maybe_unused]] static void set_field_PLACEMENT_PRIORITY_TOOLTIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "PLACEMENT_PRIORITY_TOOLTIP", "field_47120", "PLACEMENT_PRIORITY_TOOLTIP", "f_302291_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#SELECTION_PRIORITY_TEXT
    [[maybe_unused]] static jobject get_field_SELECTION_PRIORITY_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SELECTION_PRIORITY_LABEL", "field_47121", "SELECTION_PRIORITY_TEXT", "f_303775_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#SELECTION_PRIORITY_TEXT
    [[maybe_unused]] static void set_field_SELECTION_PRIORITY_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SELECTION_PRIORITY_LABEL", "field_47121", "SELECTION_PRIORITY_TEXT", "f_303775_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#SELECTION_PRIORITY_TOOLTIP
    [[maybe_unused]] static jobject get_field_SELECTION_PRIORITY_TOOLTIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "SELECTION_PRIORITY_TOOLTIP", "field_47122", "SELECTION_PRIORITY_TOOLTIP", "f_302289_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#SELECTION_PRIORITY_TOOLTIP
    [[maybe_unused]] static void set_field_SELECTION_PRIORITY_TOOLTIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "SELECTION_PRIORITY_TOOLTIP", "field_47122", "SELECTION_PRIORITY_TOOLTIP", "f_302289_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#jigsaw
    static jobject get_field_jigsaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "jigsawEntity", "field_16522", "jigsaw", "f_98938_"), "Ldri;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#jigsaw
    static void set_field_jigsaw(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "jigsawEntity", "field_16522", "jigsaw", "f_98938_"), "Ldri;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#nameField
    static jobject get_field_nameField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "nameEdit", "field_23348", "nameField", "f_98939_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#nameField
    static void set_field_nameField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "nameEdit", "field_23348", "nameField", "f_98939_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#targetField
    static jobject get_field_targetField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "targetEdit", "field_23349", "targetField", "f_98940_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#targetField
    static void set_field_targetField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "targetEdit", "field_23349", "targetField", "f_98940_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#poolField
    static jobject get_field_poolField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "poolEdit", "field_23350", "poolField", "f_98941_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#poolField
    static void set_field_poolField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "poolEdit", "field_23350", "poolField", "f_98941_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#finalStateField
    static jobject get_field_finalStateField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "finalStateEdit", "field_16519", "finalStateField", "f_98942_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#finalStateField
    static void set_field_finalStateField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "finalStateEdit", "field_16519", "finalStateField", "f_98942_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#selectionPriorityField
    static jobject get_field_selectionPriorityField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "selectionPriorityEdit", "field_47123", "selectionPriorityField", "f_303747_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#selectionPriorityField
    static void set_field_selectionPriorityField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "selectionPriorityEdit", "field_47123", "selectionPriorityField", "f_303747_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#placementPriorityField
    static jobject get_field_placementPriorityField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "placementPriorityEdit", "field_47124", "placementPriorityField", "f_303607_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#placementPriorityField
    static void set_field_placementPriorityField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "placementPriorityEdit", "field_47124", "placementPriorityField", "f_303607_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#generationDepth
    static jint get_field_generationDepth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "levels", "field_24052", "generationDepth", "f_98943_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#generationDepth
    static void set_field_generationDepth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "levels", "field_24052", "generationDepth", "f_98943_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#keepJigsaws
    static jboolean get_field_keepJigsaws(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "keepJigsaws", "field_25271", "keepJigsaws", "f_98944_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#keepJigsaws
    static void set_field_keepJigsaws(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "keepJigsaws", "field_25271", "keepJigsaws", "f_98944_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#jointRotationButton
    static jobject get_field_jointRotationButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "jointButton", "field_23351", "jointRotationButton", "f_98945_"), "Lfit;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#jointRotationButton
    static void set_field_jointRotationButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "jointButton", "field_23351", "jointRotationButton", "f_98945_"), "Lfit;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#doneButton
    static jobject get_field_doneButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "doneButton", "field_19103", "doneButton", "f_98946_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#doneButton
    static void set_field_doneButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "doneButton", "field_19103", "doneButton", "f_98946_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#generateButton
    static jobject get_field_generateButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "generateButton", "field_33958", "generateButton", "f_169763_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#generateButton
    static void set_field_generateButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "generateButton", "field_33958", "generateButton", "f_169763_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#joint
    static jobject get_field_joint(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "joint", "field_23352", "joint", "f_98932_"), "Ldri$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.JigsawBlockScreen#joint
    static void set_field_joint(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "joint", "field_23352", "joint", "f_98932_"), "Ldri$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_onDone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "onDone", "method_16346", "onDone", "m_98990_"), "()V");
    }

    static void onDone(const jobject& obj) {
                
       const auto methodID = methodID_onDone();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onCancel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "onCancel", "method_16349", "onCancel", "m_98991_"), "()V");
    }

    static void onCancel(const jobject& obj) {
                
       const auto methodID = methodID_onCancel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateServer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "sendToServer", "method_16348", "updateServer", "m_98992_"), "()V");
    }

    static void updateServer(const jobject& obj) {
                
       const auto methodID = methodID_updateServer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_parseInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "parseAsInt", "method_54800", "parseInt", "m_307795_"), "(Ljava/lang/String;)I");
    }

    static jint parseInt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parseInt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "sendGenerate", "method_27272", "generate", "m_98993_"), "()V");
    }

    static void generate(const jobject& obj) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setInitialFocus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aI_", "setInitialFocus", "method_56131", "setInitialFocus", "m_318615_"), "()V");
    }

    static void setInitialFocus(const jobject& obj) {
                
       const auto methodID = methodID_setInitialFocus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderBackground", "method_25420", "renderBackground", "m_280273_"), "(Lfhz;IIF)V");
    }

    static void renderBackground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isValidId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidResourceLocation", "method_61042", "isValidId", "m_339881_"), "(Ljava/lang/String;)Z");
    }

    static jboolean isValidId(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isValidId();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateDoneButtonState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "updateValidity", "method_20118", "updateDoneButtonState", "m_98994_"), "()V");
    }

    static void updateDoneButtonState(const jobject& obj) {
                
       const auto methodID = methodID_updateDoneButtonState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_resize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resize", "method_25410", "resize", "m_6574_"), "(Lfgo;II)V");
    }

    static void resize(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_resize();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_JIGSAWBLOCKSCREEN_HPP