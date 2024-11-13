// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_COMMANDEXECUTIONCONTEXT_HPP
#define NET_MINECRAFT_COMMAND_COMMANDEXECUTIONCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.CommandExecutionContext
 * Remapped: hs
 */
namespace CommandExecutionContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hs", "net/minecraft/commands/execution/ExecutionContext", "net/minecraft/class_8854", "net/minecraft/command/CommandExecutionContext", "net/minecraft/src/C_302111_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.CommandExecutionContext#MAX_COMMAND_QUEUE_LENGTH
    [[maybe_unused]] static jint get_field_MAX_COMMAND_QUEUE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_QUEUE_DEPTH", "field_46729", "MAX_COMMAND_QUEUE_LENGTH", "f_303554_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#MAX_COMMAND_QUEUE_LENGTH
    [[maybe_unused]] static void set_field_MAX_COMMAND_QUEUE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_QUEUE_DEPTH", "field_46729", "MAX_COMMAND_QUEUE_LENGTH", "f_303554_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.CommandExecutionContext#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_46730", "LOGGER", "f_303754_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_46730", "LOGGER", "f_303754_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#maxCommandChainLength
    static jint get_field_maxCommandChainLength(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "commandLimit", "field_46731", "maxCommandChainLength", "f_303134_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#maxCommandChainLength
    static void set_field_maxCommandChainLength(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "commandLimit", "field_46731", "maxCommandChainLength", "f_303134_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#forkLimit
    static jint get_field_forkLimit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "forkLimit", "field_46732", "forkLimit", "f_303338_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#forkLimit
    static void set_field_forkLimit(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "forkLimit", "field_46732", "forkLimit", "f_303338_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#profiler
    static jobject get_field_profiler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "profiler", "field_46733", "profiler", "f_303063_"), "Lbnf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#profiler
    static void set_field_profiler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "profiler", "field_46733", "profiler", "f_303063_"), "Lbnf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#tracer
    static jobject get_field_tracer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "tracer", "field_46734", "tracer", "f_303303_"), "Lhv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#tracer
    static void set_field_tracer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "tracer", "field_46734", "tracer", "f_303303_"), "Lhv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#commandsRemaining
    static jint get_field_commandsRemaining(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "commandQuota", "field_46735", "commandsRemaining", "f_303772_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#commandsRemaining
    static void set_field_commandsRemaining(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "commandQuota", "field_46735", "commandsRemaining", "f_303772_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#queueOverflowed
    static jboolean get_field_queueOverflowed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "queueOverflow", "field_46736", "queueOverflowed", "f_303790_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#queueOverflowed
    static void set_field_queueOverflowed(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "queueOverflow", "field_46736", "queueOverflowed", "f_303790_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#commandQueue
    static jobject get_field_commandQueue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "commandQueue", "field_46737", "commandQueue", "f_303117_"), "Ljava/util/Deque;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#commandQueue
    static void set_field_commandQueue(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "commandQueue", "field_46737", "commandQueue", "f_303117_"), "Ljava/util/Deque;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#pendingCommands
    static jobject get_field_pendingCommands(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "newTopCommands", "field_46738", "pendingCommands", "f_302263_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#pendingCommands
    static void set_field_pendingCommands(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "newTopCommands", "field_46738", "pendingCommands", "f_302263_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.CommandExecutionContext#currentDepth
    static jint get_field_currentDepth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "currentFrameDepth", "field_47705", "currentDepth", "f_302338_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.CommandExecutionContext#currentDepth
    static void set_field_currentDepth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "currentFrameDepth", "field_47705", "currentDepth", "f_302338_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_frame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createTopFrame", "method_54889", "frame", "m_307370_"), "(Lhs;Leq;)Lhu;");
    }

    static jobject frame(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_frame();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_enqueueProcedureCall() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "queueInitialFunctionCall", "method_54395", "enqueueProcedureCall", "m_307938_"), "(Lhs;Lii;Lev;Leq;)V");
    }

    static void enqueueProcedureCall(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_enqueueProcedureCall();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_enqueueCommand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "queueInitialCommandExecution", "method_54393", "enqueueCommand", "m_307315_"), "(Lhs;Ljava/lang/String;Lcom/mojang/brigadier/context/ContextChain;Lev;Leq;)V");
    }

    static void enqueueCommand(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_enqueueCommand();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_markQueueOverflowed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "handleQueueOverflow", "method_54400", "markQueueOverflowed", "m_305118_"), "()V");
    }

    static void markQueueOverflowed(const jobject& obj) {
                
       const auto methodID = methodID_markQueueOverflowed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__enqueueCommand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "queueNext", "method_54392", "enqueueCommand", "m_307907_"), "(Lho;)V");
    }

    static void _enqueueCommand(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__enqueueCommand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_escape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "discardAtDepthOrHigher", "method_54391", "escape", "m_305632_"), "(I)V");
    }

    static void escape(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_escape();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEscapeControl() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "frameControlForDepth", "method_54890", "getEscapeControl", "m_306722_"), "(I)Lhu$a;");
    }

    static jobject getEscapeControl(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getEscapeControl();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runCommandQueue", "method_54390", "run", "m_304919_"), "()V");
    }

    static void run(const jobject& obj) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_queuePendingCommands() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "pushNewCommands", "method_55594", "queuePendingCommands", "m_306974_"), "()V");
    }

    static void queuePendingCommands(const jobject& obj) {
                
       const auto methodID = methodID_queuePendingCommands();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setTracer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tracer", "method_54394", "setTracer", "m_305996_"), "(Lhv;)V");
    }

    static void setTracer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTracer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTracer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tracer", "method_54396", "getTracer", "m_307286_"), "()Lhv;");
    }

    static jobject getTracer(const jobject& obj) {
                
       const auto methodID = methodID_getTracer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProfiler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "profiler", "method_54397", "getProfiler", "m_305697_"), "()Lbnf;");
    }

    static jobject getProfiler(const jobject& obj) {
                
       const auto methodID = methodID_getProfiler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getForkLimit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "forkLimit", "method_54398", "getForkLimit", "m_306377_"), "()I");
    }

    static jint getForkLimit(const jobject& obj) {
                
       const auto methodID = methodID_getForkLimit();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_decrementCommandQuota() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "incrementCost", "method_54399", "decrementCommandQuota", "m_306457_"), "()V");
    }

    static void decrementCommandQuota(const jobject& obj) {
                
       const auto methodID = methodID_decrementCommandQuota();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_COMMANDEXECUTIONCONTEXT_HPP