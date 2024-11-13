// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_NETWORK_DEMOSERVERPLAYERINTERACTIONMANAGER_HPP
#define NET_MINECRAFT_SERVER_NETWORK_DEMOSERVERPLAYERINTERACTIONMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.network.DemoServerPlayerInteractionManager
 * Remapped: aqj
 */
namespace DemoServerPlayerInteractionManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqj", "net/minecraft/server/level/DemoMode", "net/minecraft/class_3201", "net/minecraft/server/network/DemoServerPlayerInteractionManager", "net/minecraft/src/C_5441_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.server.network.DemoServerPlayerInteractionManager#DEMO_DAYS
    [[maybe_unused]] static jint get_field_DEMO_DAYS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEMO_DAYS", "field_29762", "DEMO_DAYS", "f_143201_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.network.DemoServerPlayerInteractionManager#DEMO_DAYS
    [[maybe_unused]] static void set_field_DEMO_DAYS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEMO_DAYS", "field_29762", "DEMO_DAYS", "f_143201_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.network.DemoServerPlayerInteractionManager#DEMO_TIME
    [[maybe_unused]] static jint get_field_DEMO_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOTAL_PLAY_TICKS", "field_29763", "DEMO_TIME", "f_143202_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.network.DemoServerPlayerInteractionManager#DEMO_TIME
    [[maybe_unused]] static void set_field_DEMO_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOTAL_PLAY_TICKS", "field_29763", "DEMO_TIME", "f_143202_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.DemoServerPlayerInteractionManager#sentHelp
    static jboolean get_field_sentHelp(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "displayedIntro", "field_13890", "sentHelp", "f_140734_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.DemoServerPlayerInteractionManager#sentHelp
    static void set_field_sentHelp(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "displayedIntro", "field_13890", "sentHelp", "f_140734_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.DemoServerPlayerInteractionManager#demoEnded
    static jboolean get_field_demoEnded(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "demoHasEnded", "field_13889", "demoEnded", "f_140735_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.DemoServerPlayerInteractionManager#demoEnded
    static void set_field_demoEnded(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "demoHasEnded", "field_13889", "demoEnded", "f_140735_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.DemoServerPlayerInteractionManager#reminderTicks
    static jint get_field_reminderTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "demoEndedReminder", "field_13888", "reminderTicks", "f_140736_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.DemoServerPlayerInteractionManager#reminderTicks
    static void set_field_reminderTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "demoEndedReminder", "field_13888", "reminderTicks", "f_140736_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.DemoServerPlayerInteractionManager#tick
    static jint get_field_tick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "gameModeTicks", "field_13887", "tick", "f_140737_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.DemoServerPlayerInteractionManager#tick
    static void set_field_tick(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "gameModeTicks", "field_13887", "tick", "f_140737_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_14264", "update", "m_7712_"), "()V");
    }

    static void update(const jobject& obj) {
                
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_sendDemoReminder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "outputDemoReminder", "method_14031", "sendDemoReminder", "m_140757_"), "()V");
    }

    static void sendDemoReminder(const jobject& obj) {
                
       const auto methodID = methodID_sendDemoReminder();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_processBlockBreakingAction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleBlockBreakAction", "method_14263", "processBlockBreakingAction", "m_214168_"), "(Ljd;Lahm$a;Lji;II)V");
    }

    static void processBlockBreakingAction(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_processBlockBreakingAction();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_interactItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useItem", "method_14256", "interactItem", "m_6261_"), "(Laqv;Ldcw;Lcuq;Lbqq;)Lbqr;");
    }

    static jobject interactItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_interactItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_interactBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useItemOn", "method_14262", "interactBlock", "m_7179_"), "(Laqv;Ldcw;Lcuq;Lbqq;Lewy;)Lbqr;");
    }

    static jobject interactBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_interactBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_SERVER_NETWORK_DEMOSERVERPLAYERINTERACTIONMANAGER_HPP