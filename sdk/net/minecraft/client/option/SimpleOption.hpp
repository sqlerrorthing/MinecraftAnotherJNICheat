// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION_HPP
#define NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.SimpleOption
 * Remapped: fgr
 */
namespace SimpleOption {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgr", "net/minecraft/client/OptionInstance", "net/minecraft/class_7172", "net/minecraft/client/option/SimpleOption", "net/minecraft/src/C_213334_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.option.SimpleOption#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_37862", "LOGGER", "f_231472_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_37862", "LOGGER", "f_231472_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.SimpleOption#BOOLEAN
    [[maybe_unused]] static jobject get_field_BOOLEAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BOOLEAN_VALUES", "field_38278", "BOOLEAN", "f_231471_"), "Lfgr$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.SimpleOption#BOOLEAN
    [[maybe_unused]] static void set_field_BOOLEAN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BOOLEAN_VALUES", "field_38278", "BOOLEAN", "f_231471_"), "Lfgr$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.SimpleOption#BOOLEAN_TEXT_GETTER
    [[maybe_unused]] static jobject get_field_BOOLEAN_TEXT_GETTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOOLEAN_TO_STRING", "field_41333", "BOOLEAN_TEXT_GETTER", "f_260471_"), "Lfgr$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.SimpleOption#BOOLEAN_TEXT_GETTER
    [[maybe_unused]] static void set_field_BOOLEAN_TEXT_GETTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOOLEAN_TO_STRING", "field_41333", "BOOLEAN_TEXT_GETTER", "f_260471_"), "Lfgr$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.SimpleOption#tooltipFactory
    static jobject get_field_tooltipFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tooltip", "field_37863", "tooltipFactory", "f_231474_"), "Lfgr$l;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption#tooltipFactory
    static void set_field_tooltipFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tooltip", "field_37863", "tooltipFactory", "f_231474_"), "Lfgr$l;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.option.SimpleOption#textGetter
    static jobject get_field_textGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "toString", "field_37864", "textGetter", "f_231475_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.option.SimpleOption#textGetter
    static void set_field_textGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "toString", "field_37864", "textGetter", "f_231475_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.SimpleOption#callbacks
    static jobject get_field_callbacks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "values", "field_37865", "callbacks", "f_231476_"), "Lfgr$n;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption#callbacks
    static void set_field_callbacks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "values", "field_37865", "callbacks", "f_231476_"), "Lfgr$n;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.SimpleOption#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "codec", "field_38279", "codec", "f_231477_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "codec", "field_38279", "codec", "f_231477_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.SimpleOption#defaultValue
    static jobject get_field_defaultValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "initialValue", "field_37866", "defaultValue", "f_231478_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption#defaultValue
    static void set_field_defaultValue(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "initialValue", "field_37866", "defaultValue", "f_231478_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.SimpleOption#changeCallback
    static jobject get_field_changeCallback(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "onValueUpdate", "field_37867", "changeCallback", "f_231479_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.SimpleOption#changeCallback
    static void set_field_changeCallback(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "onValueUpdate", "field_37867", "changeCallback", "f_231479_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.option.SimpleOption#text
    static jobject get_field_text(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "caption", "field_38280", "text", "f_231480_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.option.SimpleOption#text
    static void set_field_text(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "caption", "field_38280", "text", "f_231480_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.option.SimpleOption#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "value", "field_37868", "value", "f_231481_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.option.SimpleOption#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "value", "field_37868", "value", "f_231481_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_ofBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBoolean", "method_41751", "ofBoolean", "m_231528_"), "(Ljava/lang/String;ZLjava/util/function/Consumer;)Lfgr;");
    }

    static jobject ofBoolean(const jobject& arg0, const jboolean& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_ofBoolean();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__ofBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBoolean", "method_42402", "ofBoolean", "m_231525_"), "(Ljava/lang/String;Z)Lfgr;");
    }

    static jobject _ofBoolean(const jobject& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__ofBoolean();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___ofBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBoolean", "method_41749", "ofBoolean", "m_257536_"), "(Ljava/lang/String;Lfgr$l;Z)Lfgr;");
    }

    static jobject __ofBoolean(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___ofBoolean();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID____ofBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBoolean", "method_41750", "ofBoolean", "m_257874_"), "(Ljava/lang/String;Lfgr$l;ZLjava/util/function/Consumer;)Lfgr;");
    }

    static jobject ___ofBoolean(const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID____ofBoolean();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_____ofBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBoolean", "method_47604", "ofBoolean", "m_260965_"), "(Ljava/lang/String;Lfgr$l;Lfgr$b;ZLjava/util/function/Consumer;)Lfgr;");
    }

    static jobject ____ofBoolean(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_____ofBoolean();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_emptyTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "noTooltip", "method_42399", "emptyTooltip", "m_231498_"), "()Lfgr$l;");
    }

    static jobject emptyTooltip() {
       const auto clazz = self();
       const auto methodID = methodID_emptyTooltip();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_constantTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "cachedConstantTooltip", "method_42717", "constantTooltip", "m_231535_"), "(Lwz;)Lfgr$l;");
    }

    static jobject constantTooltip(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_constantTooltip();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_enumValueText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "forOptionEnum", "method_42720", "enumValueText", "m_231546_"), "()Lfgr$b;");
    }

    static jobject enumValueText() {
       const auto clazz = self();
       const auto methodID = methodID_enumValueText();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_createWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createButton", "method_57701", "createWidget", "m_324463_"), "(Lfgs;)Lfik;");
    }

    static jobject createWidget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createWidget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__createWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createButton", "method_18520", "createWidget", "m_231507_"), "(Lfgs;III)Lfik;");
    }

    static jobject _createWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID__createWidget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID___createWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createButton", "method_47603", "createWidget", "m_261194_"), "(Lfgs;IIILjava/util/function/Consumer;)Lfik;");
    }

    static jobject __createWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID___createWidget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "get", "method_41753", "getValue", "m_231551_"), "()Ljava/lang/Object;");
    }

    static jobject getValue(const jobject& obj) {
                
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "codec", "method_42404", "getCodec", "m_231554_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_41748", "setValue", "m_231514_"), "(Ljava/lang/Object;)V");
    }

    static void setValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setValue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCallbacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "values", "method_41754", "getCallbacks", "m_231555_"), "()Lfgr$n;");
    }

    static jobject getCallbacks(const jobject& obj) {
                
       const auto methodID = methodID_getCallbacks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION_HPP