// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_STORAGE_CHUNKCOMPRESSIONFORMAT_HPP
#define NET_MINECRAFT_WORLD_STORAGE_CHUNKCOMPRESSIONFORMAT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.storage.ChunkCompressionFormat
 * Remapped: dwr
 */
namespace ChunkCompressionFormat {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dwr", "net/minecraft/world/level/chunk/storage/RegionFileVersion", "net/minecraft/class_4486", "net/minecraft/world/storage/ChunkCompressionFormat", "net/minecraft/src/C_2172_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.storage.ChunkCompressionFormat#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGGER", "field_48755", "LOGGER", "f_316092_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGGER", "field_48755", "LOGGER", "f_316092_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.storage.ChunkCompressionFormat#FORMATS
    [[maybe_unused]] static jobject get_field_FORMATS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "VERSIONS", "field_20445", "FORMATS", "f_63746_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#FORMATS
    [[maybe_unused]] static void set_field_FORMATS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "VERSIONS", "field_20445", "FORMATS", "f_63746_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.storage.ChunkCompressionFormat#FORMAT_BY_NAME
    [[maybe_unused]] static jobject get_field_FORMAT_BY_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "VERSIONS_BY_NAME", "field_48756", "FORMAT_BY_NAME", "f_316236_"), "Lit/unimi/dsi/fastutil/objects/Object2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#FORMAT_BY_NAME
    [[maybe_unused]] static void set_field_FORMAT_BY_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "VERSIONS_BY_NAME", "field_48756", "FORMAT_BY_NAME", "f_316236_"), "Lit/unimi/dsi/fastutil/objects/Object2ObjectMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.storage.ChunkCompressionFormat#GZIP
    [[maybe_unused]] static jobject get_field_GZIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VERSION_GZIP", "field_20442", "GZIP", "f_63743_"), "Ldwr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.storage.ChunkCompressionFormat#GZIP
    [[maybe_unused]] static void set_field_GZIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VERSION_GZIP", "field_20442", "GZIP", "f_63743_"), "Ldwr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.storage.ChunkCompressionFormat#DEFLATE
    [[maybe_unused]] static jobject get_field_DEFLATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERSION_DEFLATE", "field_20443", "DEFLATE", "f_63744_"), "Ldwr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.storage.ChunkCompressionFormat#DEFLATE
    [[maybe_unused]] static void set_field_DEFLATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VERSION_DEFLATE", "field_20443", "DEFLATE", "f_63744_"), "Ldwr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.storage.ChunkCompressionFormat#UNCOMPRESSED
    [[maybe_unused]] static jobject get_field_UNCOMPRESSED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VERSION_NONE", "field_20444", "UNCOMPRESSED", "f_63745_"), "Ldwr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.storage.ChunkCompressionFormat#UNCOMPRESSED
    [[maybe_unused]] static void set_field_UNCOMPRESSED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VERSION_NONE", "field_20444", "UNCOMPRESSED", "f_63745_"), "Ldwr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.storage.ChunkCompressionFormat#LZ4
    [[maybe_unused]] static jobject get_field_LZ4() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "VERSION_LZ4", "field_48753", "LZ4", "f_316033_"), "Ldwr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.storage.ChunkCompressionFormat#LZ4
    [[maybe_unused]] static void set_field_LZ4(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "VERSION_LZ4", "field_48753", "LZ4", "f_316033_"), "Ldwr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.storage.ChunkCompressionFormat#CUSTOM
    [[maybe_unused]] static jobject get_field_CUSTOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "VERSION_CUSTOM", "field_48916", "CUSTOM", "f_315662_"), "Ldwr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.storage.ChunkCompressionFormat#CUSTOM
    [[maybe_unused]] static void set_field_CUSTOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "VERSION_CUSTOM", "field_48916", "CUSTOM", "f_315662_"), "Ldwr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.storage.ChunkCompressionFormat#DEFAULT_FORMAT
    [[maybe_unused]] static jobject get_field_DEFAULT_FORMAT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT", "field_48754", "DEFAULT_FORMAT", "f_315183_"), "Ldwr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.storage.ChunkCompressionFormat#DEFAULT_FORMAT
    [[maybe_unused]] static void set_field_DEFAULT_FORMAT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT", "field_48754", "DEFAULT_FORMAT", "f_315183_"), "Ldwr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.storage.ChunkCompressionFormat#currentFormat
    [[maybe_unused]] static jobject get_field_currentFormat() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "selected", "field_48757", "currentFormat", "f_314639_"), "Ldwr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#currentFormat
    [[maybe_unused]] static void set_field_currentFormat(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "selected", "field_48757", "currentFormat", "f_314639_"), "Ldwr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.ChunkCompressionFormat#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "id", "field_20446", "id", "f_63747_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "id", "field_20446", "id", "f_63747_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.ChunkCompressionFormat#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "optionName", "field_48758", "name", "f_316088_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "optionName", "field_48758", "name", "f_316088_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.ChunkCompressionFormat#inputStreamWrapper
    static jobject get_field_inputStreamWrapper(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "inputWrapper", "field_20447", "inputStreamWrapper", "f_63748_"), "Ldwr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#inputStreamWrapper
    static void set_field_inputStreamWrapper(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "inputWrapper", "field_20447", "inputStreamWrapper", "f_63748_"), "Ldwr$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.ChunkCompressionFormat#outputStreamWrapper
    static jobject get_field_outputStreamWrapper(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "outputWrapper", "field_20448", "outputStreamWrapper", "f_63749_"), "Ldwr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkCompressionFormat#outputStreamWrapper
    static void set_field_outputStreamWrapper(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "outputWrapper", "field_20448", "outputStreamWrapper", "f_63749_"), "Ldwr$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_21884", "add", "m_63758_"), "(Ldwr;)Ldwr;");
    }

    static jobject add(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromId", "method_21883", "get", "m_63756_"), "(I)Ldwr;");
    }

    static jobject get(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setCurrentFormat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "configure", "method_56568", "setCurrentFormat", "m_324113_"), "(Ljava/lang/String;)V");
    }

    static void setCurrentFormat(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_setCurrentFormat();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getCurrentFormat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSelected", "method_56567", "getCurrentFormat", "m_321044_"), "()Ldwr;");
    }

    static jobject getCurrentFormat() {
       const auto clazz = self();
       const auto methodID = methodID_getCurrentFormat();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_exists() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "isValidVersion", "method_21887", "exists", "m_63764_"), "(I)Z");
    }

    static jboolean exists(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_exists();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getId", "method_21882", "getId", "m_63755_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_wrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "wrap", "method_21886", "wrap", "m_63762_"), "(Ljava/io/OutputStream;)Ljava/io/OutputStream;");
    }

    static jobject wrap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_wrap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__wrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "wrap", "method_21885", "wrap", "m_63760_"), "(Ljava/io/InputStream;)Ljava/io/InputStream;");
    }

    static jobject _wrap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__wrap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_STORAGE_CHUNKCOMPRESSIONFORMAT_HPP