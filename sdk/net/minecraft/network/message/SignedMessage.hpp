// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_SIGNEDMESSAGE_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_SIGNEDMESSAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.SignedMessage
 * Remapped: xp
 */
namespace SignedMessage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xp", "net/minecraft/network/chat/PlayerChatMessage", "net/minecraft/class_7471", "net/minecraft/network/message/SignedMessage", "net/minecraft/src/C_213510_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.message.SignedMessage#link
    static jobject get_field_link(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "link", "comp_1083", "link", "f_243882_"), "Lxu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.SignedMessage#link
    static void set_field_link(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "link", "comp_1083", "link", "f_243882_"), "Lxu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.message.SignedMessage#signature
    static jobject get_field_signature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "signature", "comp_1084", "signature", "f_244279_"), "Lxl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.SignedMessage#signature
    static void set_field_signature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "signature", "comp_1084", "signature", "f_244279_"), "Lxl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.message.SignedMessage#signedBody
    static jobject get_field_signedBody(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "signedBody", "comp_928", "signedBody", "f_240885_"), "Lxs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.SignedMessage#signedBody
    static void set_field_signedBody(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "signedBody", "comp_928", "signedBody", "f_240885_"), "Lxs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.message.SignedMessage#unsignedContent
    static jobject get_field_unsignedContent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "unsignedContent", "comp_830", "unsignedContent", "f_237215_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.SignedMessage#unsignedContent
    static void set_field_unsignedContent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "unsignedContent", "comp_830", "unsignedContent", "f_237215_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.message.SignedMessage#filterMask
    static jobject get_field_filterMask(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "filterMask", "comp_981", "filterMask", "f_242992_"), "Lxd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.SignedMessage#filterMask
    static void set_field_filterMask(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "filterMask", "comp_981", "filterMask", "f_242992_"), "Lxd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.SignedMessage#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_40846", "CODEC", "f_252410_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.SignedMessage#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_40846", "CODEC", "f_252410_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.message.SignedMessage#NIL_UUID
    [[maybe_unused]] static jobject get_field_NIL_UUID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SYSTEM_SENDER", "field_40688", "NIL_UUID", "f_243787_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.message.SignedMessage#NIL_UUID
    [[maybe_unused]] static void set_field_NIL_UUID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SYSTEM_SENDER", "field_40688", "NIL_UUID", "f_243787_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.SignedMessage#SERVERBOUND_TIME_TO_LIVE
    [[maybe_unused]] static jobject get_field_SERVERBOUND_TIME_TO_LIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MESSAGE_EXPIRES_AFTER_SERVER", "field_39786", "SERVERBOUND_TIME_TO_LIVE", "f_240359_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.SignedMessage#SERVERBOUND_TIME_TO_LIVE
    [[maybe_unused]] static void set_field_SERVERBOUND_TIME_TO_LIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MESSAGE_EXPIRES_AFTER_SERVER", "field_39786", "SERVERBOUND_TIME_TO_LIVE", "f_240359_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.SignedMessage#CLIENTBOUND_TIME_TO_LIVE
    [[maybe_unused]] static jobject get_field_CLIENTBOUND_TIME_TO_LIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_EXPIRES_AFTER_CLIENT", "field_39787", "CLIENTBOUND_TIME_TO_LIVE", "f_240369_"), "Ljava/time/Duration;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.SignedMessage#CLIENTBOUND_TIME_TO_LIVE
    [[maybe_unused]] static void set_field_CLIENTBOUND_TIME_TO_LIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_EXPIRES_AFTER_CLIENT", "field_39787", "CLIENTBOUND_TIME_TO_LIVE", "f_240369_"), "Ljava/time/Duration;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_ofUnsigned() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "system", "method_45041", "ofUnsigned", "m_247306_"), "(Ljava/lang/String;)Lxp;");
    }

    static jobject ofUnsigned(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ofUnsigned();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__ofUnsigned() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "unsigned", "method_45098", "ofUnsigned", "m_247615_"), "(Ljava/util/UUID;Ljava/lang/String;)Lxp;");
    }

    static jobject _ofUnsigned(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__ofUnsigned();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_withUnsignedContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withUnsignedContent", "method_44863", "withUnsignedContent", "m_241956_"), "(Lwz;)Lxp;");
    }

    static jobject withUnsignedContent(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withUnsignedContent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withoutUnsigned() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeUnsignedContent", "method_44607", "withoutUnsigned", "m_239022_"), "()Lxp;");
    }

    static jobject withoutUnsigned(const jobject& obj) {
                
       const auto methodID = methodID_withoutUnsigned();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_withFilterMask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "filter", "method_45097", "withFilterMask", "m_243072_"), "(Lxd;)Lxp;");
    }

    static jobject withFilterMask(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withFilterMask();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withFilterMaskEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "filter", "method_45099", "withFilterMaskEnabled", "m_243098_"), "(Z)Lxp;");
    }

    static jobject withFilterMaskEnabled(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_withFilterMaskEnabled();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stripSignature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeSignature", "method_55625", "stripSignature", "m_307107_"), "()Lxp;");
    }

    static jobject stripSignature(const jobject& obj) {
                
       const auto methodID = methodID_stripSignature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateSignature", "method_46290", "update", "m_245322_"), "(Laza$a;Lxu;Lxs;)V");
    }

    static void update(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_verify() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "verify", "method_44858", "verify", "m_241121_"), "(Lazb;)Z");
    }

    static jboolean verify(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_verify();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSignedContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "signedContent", "method_44862", "getSignedContent", "m_245728_"), "()Ljava/lang/String;");
    }

    static jobject getSignedContent(const jobject& obj) {
                
       const auto methodID = methodID_getSignedContent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "decoratedContent", "method_46291", "getContent", "m_245692_"), "()Lwz;");
    }

    static jobject getContent(const jobject& obj) {
                
       const auto methodID = methodID_getContent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTimestamp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "timeStamp", "method_44864", "getTimestamp", "m_241109_"), "()Ljava/time/Instant;");
    }

    static jobject getTimestamp(const jobject& obj) {
                
       const auto methodID = methodID_getTimestamp();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSalt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "salt", "method_44865", "getSalt", "m_241064_"), "()J");
    }

    static jlong getSalt(const jobject& obj) {
                
       const auto methodID = methodID_getSalt();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_isExpiredOnServer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasExpiredServer", "method_44747", "isExpiredOnServer", "m_240431_"), "(Ljava/time/Instant;)Z");
    }

    static jboolean isExpiredOnServer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isExpiredOnServer();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isExpiredOnClient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasExpiredClient", "method_44748", "isExpiredOnClient", "m_240414_"), "(Ljava/time/Instant;)Z");
    }

    static jboolean isExpiredOnClient(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isExpiredOnClient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "sender", "method_46292", "getSender", "m_245167_"), "()Ljava/util/UUID;");
    }

    static jobject getSender(const jobject& obj) {
                
       const auto methodID = methodID_getSender();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSenderMissing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isSystem", "method_46293", "isSenderMissing", "m_245339_"), "()Z");
    }

    static jboolean isSenderMissing(const jobject& obj) {
                
       const auto methodID = methodID_isSenderMissing();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasSignature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "hasSignature", "method_46294", "hasSignature", "m_245272_"), "()Z");
    }

    static jboolean hasSignature(const jobject& obj) {
                
       const auto methodID = methodID_hasSignature();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canVerifyFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasSignatureFrom", "method_45040", "canVerifyFrom", "m_243088_"), "(Ljava/util/UUID;)Z");
    }

    static jboolean canVerifyFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canVerifyFrom();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isFullyFiltered() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "isFullyFiltered", "method_45100", "isFullyFiltered", "m_243059_"), "()Z");
    }

    static jboolean isFullyFiltered(const jobject& obj) {
                
       const auto methodID = methodID_isFullyFiltered();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__link() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "link", "comp_1083", "link", "f_243882_"), "()Lxu;");
    }

    static jobject _link(const jobject& obj) {
                
       const auto methodID = methodID__link();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__signature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "signature", "comp_1084", "signature", "f_244279_"), "()Lxl;");
    }

    static jobject _signature(const jobject& obj) {
                
       const auto methodID = methodID__signature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__signedBody() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "signedBody", "comp_928", "signedBody", "f_240885_"), "()Lxs;");
    }

    static jobject _signedBody(const jobject& obj) {
                
       const auto methodID = methodID__signedBody();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__unsignedContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "unsignedContent", "comp_830", "unsignedContent", "f_237215_"), "()Lwz;");
    }

    static jobject _unsignedContent(const jobject& obj) {
                
       const auto methodID = methodID__unsignedContent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__filterMask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "filterMask", "comp_981", "filterMask", "f_242992_"), "()Lxd;");
    }

    static jobject _filterMask(const jobject& obj) {
                
       const auto methodID = methodID__filterMask();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_SIGNEDMESSAGE_HPP