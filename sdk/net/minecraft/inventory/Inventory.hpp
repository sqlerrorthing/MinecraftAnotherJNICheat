// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_INVENTORY_INVENTORY_HPP
#define NET_MINECRAFT_INVENTORY_INVENTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.inventory.Inventory
 * Remapped: bqk
 */
namespace Inventory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bqk", "net/minecraft/world/Container", "net/minecraft/class_1263", "net/minecraft/inventory/Inventory", "net/minecraft/src/C_464_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.inventory.Inventory#DEFAULT_MAX_INTERACTION_RANGE
    [[maybe_unused]] static jfloat get_field_DEFAULT_MAX_INTERACTION_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p_", "DEFAULT_DISTANCE_BUFFER", "field_48319", "DEFAULT_MAX_INTERACTION_RANGE", "f_315896_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.inventory.Inventory#DEFAULT_MAX_INTERACTION_RANGE
    [[maybe_unused]] static void set_field_DEFAULT_MAX_INTERACTION_RANGE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p_", "DEFAULT_DISTANCE_BUFFER", "field_48319", "DEFAULT_MAX_INTERACTION_RANGE", "f_315896_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getContainerSize", "method_5439", "size", "m_6643_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isEmpty", "method_5442", "isEmpty", "m_7983_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItem", "method_5438", "getStack", "m_8020_"), "(I)Lcuq;");
    }

    static jobject getStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_removeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeItem", "method_5434", "removeStack", "m_7407_"), "(II)Lcuq;");
    }

    static jobject removeStack(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_removeStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__removeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeItemNoUpdate", "method_5441", "removeStack", "m_8016_"), "(I)Lcuq;");
    }

    static jobject _removeStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__removeStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setItem", "method_5447", "setStack", "m_6836_"), "(ILcuq;)V");
    }

    static void setStack(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMaxCountPerStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("al_", "getMaxStackSize", "method_5444", "getMaxCountPerStack", "m_6893_"), "()I");
    }

    static jint getMaxCountPerStack(const jobject& obj) {
                
       const auto methodID = methodID_getMaxCountPerStack();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e_", "getMaxStackSize", "method_58350", "getMaxCount", "m_322387_"), "(Lcuq;)I");
    }

    static jint getMaxCount(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMaxCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_markDirty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setChanged", "method_5431", "markDirty", "m_6596_"), "()V");
    }

    static void markDirty(const jobject& obj) {
                
       const auto methodID = methodID_markDirty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_canPlayerUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "stillValid", "method_5443", "canPlayerUse", "m_6542_"), "(Lcmx;)Z");
    }

    static jboolean canPlayerUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canPlayerUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d_", "startOpen", "method_5435", "onOpen", "m_5856_"), "(Lcmx;)V");
    }

    static void onOpen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onOpen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "stopOpen", "method_5432", "onClose", "m_5785_"), "(Lcmx;)V");
    }

    static void onClose(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClose();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isValid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canPlaceItem", "method_5437", "isValid", "m_7013_"), "(ILcuq;)Z");
    }

    static jboolean isValid(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isValid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canTransferTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canTakeItem", "method_49104", "canTransferTo", "m_271862_"), "(Lbqk;ILcuq;)Z");
    }

    static jboolean canTransferTo(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_canTransferTo();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_count() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "countItem", "method_18861", "count", "m_18947_"), "(Lcul;)I");
    }

    static jint count(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_count();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_containsAny() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasAnyOf", "method_18862", "containsAny", "m_18949_"), "(Ljava/util/Set;)Z");
    }

    static jboolean containsAny(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_containsAny();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__containsAny() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "hasAnyMatching", "method_43256", "containsAny", "m_216874_"), "(Ljava/util/function/Predicate;)Z");
    }

    static jboolean _containsAny(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__containsAny();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__canPlayerUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "stillValidBlockEntity", "method_49105", "canPlayerUse", "m_272074_"), "(Ldqh;Lcmx;)Z");
    }

    static jboolean _canPlayerUse(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__canPlayerUse();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___canPlayerUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "stillValidBlockEntity", "method_49106", "canPlayerUse", "m_271806_"), "(Ldqh;Lcmx;F)Z");
    }

    static jboolean __canPlayerUse(const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___canPlayerUse();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_INVENTORY_INVENTORY_HPP