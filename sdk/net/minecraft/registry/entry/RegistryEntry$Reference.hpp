// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRY$REFERENCE_HPP
#define NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRY$REFERENCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.entry.RegistryEntry$Reference
 * Remapped: jm$c
 */
namespace RegistryEntry$Reference {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jm$c", "net/minecraft/core/Holder$Reference", "net/minecraft/class_6880$class_6883", "net/minecraft/registry/entry/RegistryEntry$Reference", "net/minecraft/src/C_203228_$C_203231_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.entry.RegistryEntry$Reference#owner
    static jobject get_field_owner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "owner", "field_40930", "owner", "f_254697_"), "Ljp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryEntry$Reference#owner
    static void set_field_owner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "owner", "field_40930", "owner", "f_254697_"), "Ljp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.entry.RegistryEntry$Reference#tags
    static jobject get_field_tags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tags", "field_36450", "tags", "f_205749_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryEntry$Reference#tags
    static void set_field_tags(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tags", "field_36450", "tags", "f_205749_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.entry.RegistryEntry$Reference#referenceType
    static jobject get_field_referenceType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "type", "field_36451", "referenceType", "f_205750_"), "Ljm$c$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryEntry$Reference#referenceType
    static void set_field_referenceType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "type", "field_36451", "referenceType", "f_205750_"), "Ljm$c$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.entry.RegistryEntry$Reference#registryKey
    static jobject get_field_registryKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "key", "field_36452", "registryKey", "f_205751_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryEntry$Reference#registryKey
    static void set_field_registryKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "key", "field_36452", "registryKey", "f_205751_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.entry.RegistryEntry$Reference#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "value", "field_36453", "value", "f_205752_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryEntry$Reference#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "value", "field_36453", "value", "f_205752_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_standAlone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createStandAlone", "method_40234", "standAlone", "m_254896_"), "(Ljp;Lakq;)Ljm$c;");
    }

    static jobject standAlone(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_standAlone();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_intrusive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createIntrusive", "method_40233", "intrusive", "m_255375_"), "(Ljp;Ljava/lang/Object;)Ljm$c;");
    }

    static jobject intrusive(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_intrusive();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__registryKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "key", "method_40237", "registryKey", "m_205785_"), "()Lakq;");
    }

    static jobject _registryKey(const jobject& obj) {
                
       const auto methodID = methodID__registryKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "value", "comp_349", "value", "m_203334_"), "()Ljava/lang/Object;");
    }

    static jobject _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_matchesId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_40226", "matchesId", "m_203373_"), "(Lakr;)Z");
    }

    static jboolean matchesId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matchesId();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_matchesKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_40225", "matchesKey", "m_203565_"), "(Lakq;)Z");
    }

    static jboolean matchesKey(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matchesKey();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isIn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_40220", "isIn", "m_203656_"), "(Lawu;)Z");
    }

    static jboolean isIn(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isIn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_55838", "matches", "m_318604_"), "(Ljm;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_40224", "matches", "m_203425_"), "(Ljava/util/function/Predicate;)Z");
    }

    static jboolean _matches(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_ownerEquals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canSerializeIn", "method_46745", "ownerEquals", "m_203401_"), "(Ljp;)Z");
    }

    static jboolean ownerEquals(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_ownerEquals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getKeyOrValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "unwrap", "method_40229", "getKeyOrValue", "m_203439_"), "()Lcom/mojang/datafixers/util/Either;");
    }

    static jobject getKeyOrValue(const jobject& obj) {
                
       const auto methodID = methodID_getKeyOrValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "unwrapKey", "method_40230", "getKey", "m_203543_"), "()Ljava/util/Optional;");
    }

    static jobject getKey(const jobject& obj) {
                
       const auto methodID = methodID_getKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "kind", "method_40231", "getType", "m_203376_"), "()Ljm$b;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasKeyAndValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isBound", "method_40227", "hasKeyAndValue", "m_203633_"), "()Z");
    }

    static jboolean hasKeyAndValue(const jobject& obj) {
                
       const auto methodID = methodID_hasKeyAndValue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setRegistryKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "bindKey", "method_45917", "setRegistryKey", "m_246870_"), "(Lakq;)V");
    }

    static void setRegistryKey(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setRegistryKey();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "bindValue", "method_45918", "setValue", "m_247654_"), "(Ljava/lang/Object;)V");
    }

    static void setValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setValue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bindTags", "method_40235", "setTags", "m_205769_"), "(Ljava/util/Collection;)V");
    }

    static void setTags(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTags();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tags", "method_40228", "streamTags", "m_203616_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamTags(const jobject& obj) {
                
       const auto methodID = methodID_streamTags();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRY$REFERENCE_HPP