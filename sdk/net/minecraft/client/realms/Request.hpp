// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REQUEST_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REQUEST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.Request
 * Remapped: fcb
 */
namespace Request {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcb", "com/mojang/realmsclient/client/Request", "net/minecraft/class_4346", "net/minecraft/client/realms/Request", "net/minecraft/src/C_3228_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.client.realms.Request#connection
    static jobject get_field_connection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "connection", "field_19596", "connection", "f_87306_"), "Ljava/net/HttpURLConnection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.realms.Request#connection
    static void set_field_connection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "connection", "field_19596", "connection", "f_87306_"), "Ljava/net/HttpURLConnection;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.Request#connected
    static jboolean get_field_connected(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "connected", "field_19598", "connected", "f_87308_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.Request#connected
    static void set_field_connected(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "connected", "field_19598", "connected", "f_87308_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.realms.Request#url
    static jobject get_field_url(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "url", "field_19597", "url", "f_87307_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.realms.Request#url
    static void set_field_url(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "url", "field_19597", "url", "f_87307_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.Request#READ_TIMEOUT
    [[maybe_unused]] static jint get_field_READ_TIMEOUT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_READ_TIMEOUT", "field_32096", "READ_TIMEOUT", "f_167283_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.Request#READ_TIMEOUT
    [[maybe_unused]] static void set_field_READ_TIMEOUT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_READ_TIMEOUT", "field_32096", "READ_TIMEOUT", "f_167283_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.Request#CONNECT_TIMEOUT
    [[maybe_unused]] static jint get_field_CONNECT_TIMEOUT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_CONNECT_TIMEOUT", "field_32097", "CONNECT_TIMEOUT", "f_167284_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.Request#CONNECT_TIMEOUT
    [[maybe_unused]] static void set_field_CONNECT_TIMEOUT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_CONNECT_TIMEOUT", "field_32097", "CONNECT_TIMEOUT", "f_167284_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.Request#IS_PRERELEASE_HEADER
    [[maybe_unused]] static jobject get_field_IS_PRERELEASE_HEADER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "IS_SNAPSHOT_KEY", "field_46690", "IS_PRERELEASE_HEADER", "f_302555_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.Request#IS_PRERELEASE_HEADER
    [[maybe_unused]] static void set_field_IS_PRERELEASE_HEADER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "IS_SNAPSHOT_KEY", "field_46690", "IS_PRERELEASE_HEADER", "f_302555_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.Request#COOKIE_HEADER
    [[maybe_unused]] static jobject get_field_COOKIE_HEADER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "COOKIE_KEY", "field_46691", "COOKIE_HEADER", "f_302320_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.Request#COOKIE_HEADER
    [[maybe_unused]] static void set_field_COOKIE_HEADER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "COOKIE_KEY", "field_46691", "COOKIE_HEADER", "f_302320_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_cookie() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cookie", "method_21042", "cookie", "m_87322_"), "(Ljava/lang/String;Ljava/lang/String;)V");
    }

    static void cookie(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_cookie();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__cookie() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "cookie", "method_21046", "cookie", "m_87335_"), "(Ljava/net/HttpURLConnection;Ljava/lang/String;Ljava/lang/String;)V");
    }

    static void _cookie(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__cookie();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_prerelease() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addSnapshotHeader", "method_54362", "prerelease", "m_305859_"), "(Z)V");
    }

    static void prerelease(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_prerelease();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRetryAfterHeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRetryAfterHeader", "method_21038", "getRetryAfterHeader", "m_87313_"), "()I");
    }

    static jint getRetryAfterHeader(const jobject& obj) {
                
       const auto methodID = methodID_getRetryAfterHeader();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__getRetryAfterHeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRetryAfterHeader", "method_21044", "getRetryAfterHeader", "m_87330_"), "(Ljava/net/HttpURLConnection;)I");
    }

    static jint _getRetryAfterHeader(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getRetryAfterHeader();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_responseCode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "responseCode", "method_21047", "responseCode", "m_87339_"), "()I");
    }

    static jint responseCode(const jobject& obj) {
                
       const auto methodID = methodID_responseCode();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_text() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "text", "method_21051", "text", "m_87350_"), "()Ljava/lang/String;");
    }

    static jobject text(const jobject& obj) {
                
       const auto methodID = methodID_text();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_21039", "read", "m_87314_"), "(Ljava/io/InputStream;)Ljava/lang/String;");
    }

    static jobject read(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_dispose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "dispose", "method_21056", "dispose", "m_87357_"), "()V");
    }

    static void dispose(const jobject& obj) {
                
       const auto methodID = methodID_dispose();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_connect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "connect", "method_21054", "connect", "m_87356_"), "()Lfcb;");
    }

    static jobject connect(const jobject& obj) {
                
       const auto methodID = methodID_connect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_doConnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "doConnect", "method_21055", "doConnect", "m_7218_"), "()Lfcb;");
    }

    static jobject doConnect(const jobject& obj) {
                
       const auto methodID = methodID_doConnect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_21040", "get", "m_87316_"), "(Ljava/lang/String;)Lfcb;");
    }

    static jobject get(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_21041", "get", "m_87318_"), "(Ljava/lang/String;II)Lfcb;");
    }

    static jobject _get(const jobject& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_post() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "post", "method_21049", "post", "m_87342_"), "(Ljava/lang/String;Ljava/lang/String;)Lfcb;");
    }

    static jobject post(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_post();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__post() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "post", "method_21043", "post", "m_87325_"), "(Ljava/lang/String;Ljava/lang/String;II)Lfcb;");
    }

    static jobject _post(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__post();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_delete() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "delete", "method_21048", "delete", "m_87340_"), "(Ljava/lang/String;)Lfcb;");
    }

    static jobject delete(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_delete();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_put() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "put", "method_21053", "put", "m_87353_"), "(Ljava/lang/String;Ljava/lang/String;)Lfcb;");
    }

    static jobject put(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_put();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__put() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "put", "method_21050", "put", "m_87345_"), "(Ljava/lang/String;Ljava/lang/String;II)Lfcb;");
    }

    static jobject _put(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__put();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getHeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getHeader", "method_21052", "getHeader", "m_87351_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getHeader(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getHeader();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getHeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeader", "method_21045", "getHeader", "m_87332_"), "(Ljava/net/HttpURLConnection;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject _getHeader(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__getHeader();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REQUEST_HPP