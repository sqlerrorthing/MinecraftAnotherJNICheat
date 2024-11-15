// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ITEMSTACKCOMPONENTIZATIONFIX$STACKDATA_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ITEMSTACKCOMPONENTIZATIONFIX$STACKDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData
 * Remapped: ben$a
 */
namespace ItemStackComponentizationFix$StackData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ben$a", "net/minecraft/util/datafix/fixes/ItemStackComponentizationFix$ItemStackData", "net/minecraft/class_9267$class_9268", "net/minecraft/datafixer/fix/ItemStackComponentizationFix$StackData", "net/minecraft/src/C_313582_$C_313883_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#itemId
    static jobject get_field_itemId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "item", "field_49200", "itemId", "f_316466_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#itemId
    static void set_field_itemId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "item", "field_49200", "itemId", "f_316466_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#count
    static jint get_field_count(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "field_49201", "count", "f_315654_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#count
    static void set_field_count(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "field_49201", "count", "f_315654_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#components
    static jobject get_field_components(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49202", "components", "f_316709_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#components
    static void set_field_components(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49202", "components", "f_316709_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#leftoverNbt
    static jobject get_field_leftoverNbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "remainder", "field_49203", "leftoverNbt", "f_314897_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#leftoverNbt
    static void set_field_leftoverNbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "remainder", "field_49203", "leftoverNbt", "f_314897_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#nbt
    static jobject get_field_nbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "tag", "field_49204", "nbt", "f_315045_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ItemStackComponentizationFix$StackData#nbt
    static void set_field_nbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "tag", "field_49204", "nbt", "f_315045_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_fromDynamic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_57257", "fromDynamic", "m_321368_"), "(Lcom/mojang/serialization/Dynamic;)Ljava/util/Optional;");
    }

    static jobject fromDynamic(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromDynamic();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getAndRemove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeTag", "method_57262", "getAndRemove", "m_318975_"), "(Ljava/lang/String;)Lcom/mojang/serialization/OptionalDynamic;");
    }

    static jobject getAndRemove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getAndRemove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setComponent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setComponent", "method_57263", "setComponent", "m_320760_"), "(Ljava/lang/String;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void setComponent(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setComponent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__setComponent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setComponent", "method_57265", "setComponent", "m_322553_"), "(Ljava/lang/String;Lcom/mojang/serialization/OptionalDynamic;)V");
    }

    static void _setComponent(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__setComponent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_moveToComponent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "moveTagInto", "method_57264", "moveToComponent", "m_320656_"), "(Ljava/lang/String;Lcom/mojang/serialization/Dynamic;Ljava/lang/String;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject moveToComponent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_moveToComponent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__moveToComponent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "moveTagToComponent", "method_57267", "moveToComponent", "m_322646_"), "(Ljava/lang/String;Ljava/lang/String;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void _moveToComponent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__moveToComponent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___moveToComponent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "moveTagToComponent", "method_57266", "moveToComponent", "m_321392_"), "(Ljava/lang/String;Ljava/lang/String;)V");
    }

    static void __moveToComponent(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___moveToComponent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applyFixer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fixSubTag", "method_57268", "applyFixer", "m_319995_"), "(Ljava/lang/String;ZLjava/util/function/UnaryOperator;)V");
    }

    static void applyFixer(const jobject& obj, const jobject& arg0, const jboolean& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_applyFixer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finalize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_57256", "finalize", "m_321852_"), "()Lcom/mojang/serialization/Dynamic;");
    }

    static jobject finalize(const jobject& obj) {
                
       const auto methodID = methodID_finalize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_mergeLeftoverNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "mergeRemainder", "method_57258", "mergeLeftoverNbt", "m_319171_"), "(Lcom/mojang/serialization/Dynamic;Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject mergeLeftoverNbt(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_mergeLeftoverNbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_itemEquals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "is", "method_57270", "itemEquals", "m_322886_"), "(Ljava/lang/String;)Z");
    }

    static jboolean itemEquals(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_itemEquals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_itemMatches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_57269", "itemMatches", "m_319518_"), "(Ljava/util/Set;)Z");
    }

    static jboolean itemMatches(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_itemMatches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_itemContains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasComponent", "method_58054", "itemContains", "m_323634_"), "(Ljava/lang/String;)Z");
    }

    static jboolean itemContains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_itemContains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ITEMSTACKCOMPONENTIZATIONFIX$STACKDATA_HPP