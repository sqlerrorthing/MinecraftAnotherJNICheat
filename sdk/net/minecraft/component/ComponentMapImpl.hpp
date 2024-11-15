// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_COMPONENTMAPIMPL_HPP
#define NET_MINECRAFT_COMPONENT_COMPONENTMAPIMPL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.ComponentMapImpl
 * Remapped: kr
 */
namespace ComponentMapImpl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kr", "net/minecraft/core/component/PatchedDataComponentMap", "net/minecraft/class_9335", "net/minecraft/component/ComponentMapImpl", "net/minecraft/src/C_313555_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.component.ComponentMapImpl#baseComponents
    static jobject get_field_baseComponents(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "prototype", "field_49654", "baseComponents", "f_316296_"), "Lkm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.ComponentMapImpl#baseComponents
    static void set_field_baseComponents(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "prototype", "field_49654", "baseComponents", "f_316296_"), "Lkm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.ComponentMapImpl#changedComponents
    static jobject get_field_changedComponents(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "patch", "field_49655", "changedComponents", "f_315990_"), "Lit/unimi/dsi/fastutil/objects/Reference2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.ComponentMapImpl#changedComponents
    static void set_field_changedComponents(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "patch", "field_49655", "changedComponents", "f_315990_"), "Lit/unimi/dsi/fastutil/objects/Reference2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.ComponentMapImpl#copyOnWrite
    static jboolean get_field_copyOnWrite(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "copyOnWrite", "field_49656", "copyOnWrite", "f_316660_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.ComponentMapImpl#copyOnWrite
    static void set_field_copyOnWrite(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "copyOnWrite", "field_49656", "copyOnWrite", "f_316660_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromPatch", "method_57935", "create", "m_322493_"), "(Lkm;Lkn;)Lkr;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_shouldReuseChangesMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isPatchSanitized", "method_57934", "shouldReuseChangesMap", "m_323581_"), "(Lkm;Lit/unimi/dsi/fastutil/objects/Reference2ObjectMap;)Z");
    }

    static jboolean shouldReuseChangesMap(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_shouldReuseChangesMap();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_57829", "get", "m_318834_"), "(Lkp;)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "set", "method_57938", "set", "m_322371_"), "(Lkp;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject set(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "remove", "method_57939", "remove", "m_321460_"), "(Lkp;)Ljava/lang/Object;");
    }

    static jobject remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyChanges() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyPatch", "method_57936", "applyChanges", "m_320975_"), "(Lkn;)V");
    }

    static void applyChanges(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_applyChanges();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyPatch", "method_57937", "applyChange", "m_318645_"), "(Lkp;Ljava/util/Optional;)V");
    }

    static void applyChange(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_applyChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setChanges() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "restorePatch", "method_59772", "setChanges", "m_324830_"), "(Lkn;)V");
    }

    static void setChanges(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setChanges();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setAll", "method_57933", "setAll", "m_324935_"), "(Lkm;)V");
    }

    static void setAll(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onWrite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "ensureMapOwnership", "method_57942", "onWrite", "m_322433_"), "()V");
    }

    static void onWrite(const jobject& obj) {
                
       const auto methodID = methodID_onWrite();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTypes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "keySet", "method_57831", "getTypes", "m_319675_"), "()Ljava/util/Set;");
    }

    static jobject getTypes(const jobject& obj) {
                
       const auto methodID = methodID_getTypes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_iterator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("iterator", "iterator", "", "", "iterator"), "()Ljava/util/Iterator;");
    }

    static jobject iterator(const jobject& obj) {
                
       const auto methodID = methodID_iterator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "size", "method_57835", "size", "m_319491_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChanges() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "asPatch", "method_57940", "getChanges", "m_320212_"), "()Lkn;");
    }

    static jobject getChanges(const jobject& obj) {
                
       const auto methodID = methodID_getChanges();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "copy", "method_57941", "copy", "m_319920_"), "()Lkr;");
    }

    static jobject copy(const jobject& obj) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_COMPONENTMAPIMPL_HPP