// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_LEAVESFIX$LISTFIXER_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_LEAVESFIX$LISTFIXER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.LeavesFix$ListFixer
 * Remapped: bfa$b
 */
namespace LeavesFix$ListFixer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfa$b", "net/minecraft/util/datafix/fixes/LeavesFix$Section", "net/minecraft/class_1191$class_1193", "net/minecraft/datafixer/fix/LeavesFix$ListFixer", "net/minecraft/src/C_313_$C_315_"));
        }
        return cachedClass;
    };

    // getter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#BLOCK_STATES_KEY
    [[maybe_unused]] static jobject get_field_BLOCK_STATES_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOCK_STATES_TAG", "field_29900", "BLOCK_STATES_KEY", "f_145477_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#BLOCK_STATES_KEY
    [[maybe_unused]] static void set_field_BLOCK_STATES_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOCK_STATES_TAG", "field_29900", "BLOCK_STATES_KEY", "f_145477_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#NAME_KEY
    [[maybe_unused]] static jobject get_field_NAME_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NAME_TAG", "field_29901", "NAME_KEY", "f_145478_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#NAME_KEY
    [[maybe_unused]] static void set_field_NAME_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NAME_TAG", "field_29901", "NAME_KEY", "f_145478_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#PROPERTIES_KEY
    [[maybe_unused]] static jobject get_field_PROPERTIES_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PROPERTIES_TAG", "field_29902", "PROPERTIES_KEY", "f_145479_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#PROPERTIES_KEY
    [[maybe_unused]] static void set_field_PROPERTIES_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PROPERTIES_TAG", "field_29902", "PROPERTIES_KEY", "f_145479_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.LeavesFix$ListFixer#blockStateType
    static jobject get_field_blockStateType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "blockStateType", "field_5695", "blockStateType", "f_16284_"), "Lcom/mojang/datafixers/types/Type;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LeavesFix$ListFixer#blockStateType
    static void set_field_blockStateType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "blockStateType", "field_5695", "blockStateType", "f_16284_"), "Lcom/mojang/datafixers/types/Type;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#paletteFinder
    static jobject get_field_paletteFinder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "paletteFinder", "field_5693", "paletteFinder", "f_16280_"), "Lcom/mojang/datafixers/OpticFinder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#paletteFinder
    static void set_field_paletteFinder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "paletteFinder", "field_5693", "paletteFinder", "f_16280_"), "Lcom/mojang/datafixers/OpticFinder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "palette", "field_5692", "properties", "f_16281_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "palette", "field_5692", "properties", "f_16281_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "index", "field_5694", "y", "f_16282_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "index", "field_5694", "y", "f_16282_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#blockStateMap
    static jobject get_field_blockStateMap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "storage", "field_5696", "blockStateMap", "f_16283_"), "Lbaa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.datafixer.fix.LeavesFix$ListFixer#blockStateMap
    static void set_field_blockStateMap(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "storage", "field_5696", "blockStateMap", "f_16283_"), "Lbaa;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_computeFixableBlockStates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readStorage", "method_5074", "computeFixableBlockStates", "m_16290_"), "(Lcom/mojang/serialization/Dynamic;)V");
    }

    static void computeFixableBlockStates(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_computeFixableBlockStates();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_finalizeFix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_5083", "finalizeFix", "m_16288_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject finalizeFix(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_finalizeFix();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isFixed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isSkippable", "method_5079", "isFixed", "m_16298_"), "()Z");
    }

    static jboolean isFixed(const jobject& obj) {
                
       const auto methodID = methodID_isFixed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_blockStateAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getBlock", "method_5075", "blockStateAt", "m_16302_"), "(I)I");
    }

    static jint blockStateAt(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_blockStateAt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_computeFlags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateId", "method_5082", "computeFlags", "m_16292_"), "(Ljava/lang/String;ZI)I");
    }

    static jint computeFlags(const jobject& obj, const jobject& arg0, const jboolean& arg1, const jint& arg2) {
                
       const auto methodID = methodID_computeFlags();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getIndex", "method_5077", "getY", "m_16301_"), "()I");
    }

    static jint getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_computeIsFixed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "skippable", "method_5076", "computeIsFixed", "m_7969_"), "()Z");
    }

    static jboolean computeIsFixed(const jobject& obj) {
                
       const auto methodID = methodID_computeIsFixed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_LEAVESFIX$LISTFIXER_HPP