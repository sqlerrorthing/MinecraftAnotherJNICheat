// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTEINSTANCE_HPP
#define NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTEINSTANCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.attribute.EntityAttributeInstance
 * Remapped: bus
 */
namespace EntityAttributeInstance {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bus", "net/minecraft/world/entity/ai/attributes/AttributeInstance", "net/minecraft/class_1324", "net/minecraft/entity/attribute/EntityAttributeInstance", "net/minecraft/src/C_553_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#BASE_NBT_KEY
    [[maybe_unused]] static jobject get_field_BASE_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BASE_FIELD", "field_52008", "BASE_NBT_KEY", "f_336903_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#BASE_NBT_KEY
    [[maybe_unused]] static void set_field_BASE_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BASE_FIELD", "field_52008", "BASE_NBT_KEY", "f_336903_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#MODIFIERS_NBT_KEY
    [[maybe_unused]] static jobject get_field_MODIFIERS_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MODIFIERS_FIELD", "field_52009", "MODIFIERS_NBT_KEY", "f_336771_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#MODIFIERS_NBT_KEY
    [[maybe_unused]] static void set_field_MODIFIERS_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MODIFIERS_FIELD", "field_52009", "MODIFIERS_NBT_KEY", "f_336771_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttributeInstance#ID_NBT_KEY
    [[maybe_unused]] static jobject get_field_ID_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_FIELD", "field_52007", "ID_NBT_KEY", "f_336964_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttributeInstance#ID_NBT_KEY
    [[maybe_unused]] static void set_field_ID_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_FIELD", "field_52007", "ID_NBT_KEY", "f_336964_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "attribute", "field_23700", "type", "f_22088_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "attribute", "field_23700", "type", "f_22088_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#operationToModifiers
    static jobject get_field_operationToModifiers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "modifiersByOperation", "field_23701", "operationToModifiers", "f_22089_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#operationToModifiers
    static void set_field_operationToModifiers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "modifiersByOperation", "field_23701", "operationToModifiers", "f_22089_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#idToModifiers
    static jobject get_field_idToModifiers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "modifierById", "field_23702", "idToModifiers", "f_22090_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#idToModifiers
    static void set_field_idToModifiers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "modifierById", "field_23702", "idToModifiers", "f_22090_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#persistentModifiers
    static jobject get_field_persistentModifiers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "permanentModifiers", "field_23703", "persistentModifiers", "f_22091_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#persistentModifiers
    static void set_field_persistentModifiers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "permanentModifiers", "field_23703", "persistentModifiers", "f_22091_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#baseValue
    static jdouble get_field_baseValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "baseValue", "field_23704", "baseValue", "f_22092_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#baseValue
    static void set_field_baseValue(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "baseValue", "field_23704", "baseValue", "f_22092_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#dirty
    static jboolean get_field_dirty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "dirty", "field_23705", "dirty", "f_22093_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#dirty
    static void set_field_dirty(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "dirty", "field_23705", "dirty", "f_22093_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#value
    static jdouble get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "cachedValue", "field_23706", "value", "f_22094_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#value
    static void set_field_value(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "cachedValue", "field_23706", "value", "f_22094_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeInstance#updateCallback
    static jobject get_field_updateCallback(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "onDirty", "field_23707", "updateCallback", "f_22095_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeInstance#updateCallback
    static void set_field_updateCallback(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "onDirty", "field_23707", "updateCallback", "f_22095_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getAttribute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAttribute", "method_6198", "getAttribute", "m_22099_"), "()Ljm;");
    }

    static jobject getAttribute(const jobject& obj) {
                
       const auto methodID = methodID_getAttribute();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBaseValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBaseValue", "method_6201", "getBaseValue", "m_22115_"), "()D");
    }

    static jdouble getBaseValue(const jobject& obj) {
                
       const auto methodID = methodID_getBaseValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_setBaseValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBaseValue", "method_6192", "setBaseValue", "m_22100_"), "(D)V");
    }

    static void setBaseValue(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_setBaseValue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getModifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getModifiers", "method_6193", "getModifiers", "m_22104_"), "(Lbuu$a;)Ljava/util/Map;");
    }

    static jobject getModifiers(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getModifiers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getModifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getModifiers", "method_6195", "getModifiers", "m_22122_"), "()Ljava/util/Set;");
    }

    static jobject _getModifiers(const jobject& obj) {
                
       const auto methodID = methodID__getModifiers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getModifier", "method_6199", "getModifier", "m_22111_"), "(Lakr;)Lbuu;");
    }

    static jobject getModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getModifier();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasModifier", "method_6196", "hasModifier", "m_22109_"), "(Lakr;)Z");
    }

    static jboolean hasModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasModifier();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "addModifier", "method_6197", "addModifier", "m_22133_"), "(Lbuu;)V");
    }

    static void addModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addOrUpdateTransientModifier", "method_55696", "updateModifier", "m_319258_"), "(Lbuu;)V");
    }

    static void updateModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addTemporaryModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addTransientModifier", "method_26835", "addTemporaryModifier", "m_22118_"), "(Lbuu;)V");
    }

    static void addTemporaryModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addTemporaryModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_overwritePersistentModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "addOrReplacePermanentModifier", "method_61163", "overwritePersistentModifier", "m_340371_"), "(Lbuu;)V");
    }

    static void overwritePersistentModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_overwritePersistentModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPersistentModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "addPermanentModifier", "method_26837", "addPersistentModifier", "m_22125_"), "(Lbuu;)V");
    }

    static void addPersistentModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addPersistentModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setDirty", "method_26838", "onUpdate", "m_22129_"), "()V");
    }

    static void onUpdate(const jobject& obj) {
                
       const auto methodID = methodID_onUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "removeModifier", "method_6202", "removeModifier", "m_22130_"), "(Lbuu;)V");
    }

    static void removeModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeModifier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__removeModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "removeModifier", "method_6200", "removeModifier", "m_22120_"), "(Lakr;)Z");
    }

    static jboolean _removeModifier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__removeModifier();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clearModifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "removeModifiers", "method_6203", "clearModifiers", "m_22132_"), "()V");
    }

    static void clearModifiers(const jobject& obj) {
                
       const auto methodID = methodID_clearModifiers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getValue", "method_6194", "getValue", "m_22135_"), "()D");
    }

    static jdouble getValue(const jobject& obj) {
                
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_computeValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "calculateValue", "method_26840", "computeValue", "m_22137_"), "()D");
    }

    static jdouble computeValue(const jobject& obj) {
                
       const auto methodID = methodID_computeValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getModifiersByOperation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getModifiersOrEmpty", "method_26834", "getModifiersByOperation", "m_22116_"), "(Lbuu$a;)Ljava/util/Collection;");
    }

    static jobject getModifiersByOperation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getModifiersByOperation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replaceFrom", "method_26831", "setFrom", "m_22102_"), "(Lbus;)V");
    }

    static void setFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setFrom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "save", "method_26839", "toNbt", "m_22136_"), "()Lub;");
    }

    static jobject toNbt(const jobject& obj) {
                
       const auto methodID = methodID_toNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_26833", "readNbt", "m_22113_"), "(Lub;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTEINSTANCE_HPP