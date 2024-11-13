// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_LISTENER_SERVERPLAYPACKETLISTENER_HPP
#define NET_MINECRAFT_NETWORK_LISTENER_SERVERPLAYPACKETLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.listener.ServerPlayPacketListener
 * Remapped: agi
 */
namespace ServerPlayPacketListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("agi", "net/minecraft/network/protocol/game/ServerGamePacketListener", "net/minecraft/class_2792", "net/minecraft/network/listener/ServerPlayPacketListener", "net/minecraft/src/C_5145_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPhase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "protocol", "method_52280", "getPhase", "m_292716_"), "()Lvu;");
    }

    static jobject getPhase(const jobject& obj) {
                
       const auto methodID = methodID_getPhase();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_onHandSwing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleAnimate", "method_12052", "onHandSwing", "m_7953_"), "(Laic;)V");
    }

    static void onHandSwing(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onHandSwing();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onChatMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChat", "method_12048", "onChatMessage", "m_7388_"), "(Lagq;)V");
    }

    static void onChatMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onChatMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCommandExecution() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChatCommand", "method_43667", "onCommandExecution", "m_214047_"), "(Lago;)V");
    }

    static void onCommandExecution(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCommandExecution();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onChatCommandSigned() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSignedChatCommand", "method_58580", "onChatCommandSigned", "m_321262_"), "(Lagp;)V");
    }

    static void onChatCommandSigned(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onChatCommandSigned();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onMessageAcknowledgment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChatAck", "method_44898", "onMessageAcknowledgment", "m_241885_"), "(Lagn;)V");
    }

    static void onMessageAcknowledgment(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onMessageAcknowledgment();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onClientStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleClientCommand", "method_12068", "onClientStatus", "m_6272_"), "(Lagt;)V");
    }

    static void onClientStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClientStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onButtonClick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleContainerButtonClick", "method_12055", "onButtonClick", "m_6557_"), "(Lagw;)V");
    }

    static void onButtonClick(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onButtonClick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onClickSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleContainerClick", "method_12076", "onClickSlot", "m_5914_"), "(Lagx;)V");
    }

    static void onClickSlot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClickSlot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCraftRequest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePlaceRecipe", "method_12061", "onCraftRequest", "m_7191_"), "(Lahk;)V");
    }

    static void onCraftRequest(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCraftRequest();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCloseHandledScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleContainerClose", "method_12054", "onCloseHandledScreen", "m_7951_"), "(Lagy;)V");
    }

    static void onCloseHandledScreen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCloseHandledScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerInteractEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleInteract", "method_12062", "onPlayerInteractEntity", "m_6946_"), "(Lahd;)V");
    }

    static void onPlayerInteractEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerInteractEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerMove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleMovePlayer", "method_12063", "onPlayerMove", "m_7185_"), "(Lahg;)V");
    }

    static void onPlayerMove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerMove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdatePlayerAbilities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePlayerAbilities", "method_12083", "onUpdatePlayerAbilities", "m_6828_"), "(Lahl;)V");
    }

    static void onUpdatePlayerAbilities(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdatePlayerAbilities();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerAction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePlayerAction", "method_12066", "onPlayerAction", "m_7502_"), "(Lahm;)V");
    }

    static void onPlayerAction(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerAction();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onClientCommand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePlayerCommand", "method_12045", "onClientCommand", "m_5681_"), "(Lahn;)V");
    }

    static void onClientCommand(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClientCommand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerInput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePlayerInput", "method_12067", "onPlayerInput", "m_5918_"), "(Laho;)V");
    }

    static void onPlayerInput(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerInput();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateSelectedSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSetCarriedItem", "method_12056", "onUpdateSelectedSlot", "m_7798_"), "(Lahv;)V");
    }

    static void onUpdateSelectedSlot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateSelectedSlot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCreativeInventoryAction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSetCreativeModeSlot", "method_12070", "onCreativeInventoryAction", "m_5964_"), "(Lahy;)V");
    }

    static void onCreativeInventoryAction(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCreativeInventoryAction();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateSign() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSignUpdate", "method_12071", "onUpdateSign", "m_5527_"), "(Laib;)V");
    }

    static void onUpdateSign(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateSign();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerInteractBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleUseItemOn", "method_12046", "onPlayerInteractBlock", "m_6371_"), "(Laie;)V");
    }

    static void onPlayerInteractBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerInteractBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerInteractItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleUseItem", "method_12065", "onPlayerInteractItem", "m_5760_"), "(Laif;)V");
    }

    static void onPlayerInteractItem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerInteractItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSpectatorTeleport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleTeleportToEntityPacket", "method_12073", "onSpectatorTeleport", "m_6936_"), "(Laid;)V");
    }

    static void onSpectatorTeleport(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onSpectatorTeleport();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onBoatPaddleState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePaddleBoat", "method_12064", "onBoatPaddleState", "m_5938_"), "(Lahi;)V");
    }

    static void onBoatPaddleState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onBoatPaddleState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onVehicleMove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleMoveVehicle", "method_12078", "onVehicleMove", "m_5659_"), "(Lahh;)V");
    }

    static void onVehicleMove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onVehicleMove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onTeleportConfirm() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleAcceptTeleportPacket", "method_12050", "onTeleportConfirm", "m_7376_"), "(Lagk;)V");
    }

    static void onTeleportConfirm(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onTeleportConfirm();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onRecipeBookData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleRecipeBookSeenRecipePacket", "method_12047", "onRecipeBookData", "m_7411_"), "(Lahq;)V");
    }

    static void onRecipeBookData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onRecipeBookData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onRecipeCategoryOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleRecipeBookChangeSettingsPacket", "method_30303", "onRecipeCategoryOptions", "m_7982_"), "(Lahp;)V");
    }

    static void onRecipeCategoryOptions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onRecipeCategoryOptions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onAdvancementTab() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSeenAdvancements", "method_12058", "onAdvancementTab", "m_6947_"), "(Lahs;)V");
    }

    static void onAdvancementTab(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onAdvancementTab();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onRequestCommandCompletions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleCustomCommandSuggestions", "method_12059", "onRequestCommandCompletions", "m_7741_"), "(Lagu;)V");
    }

    static void onRequestCommandCompletions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onRequestCommandCompletions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateCommandBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSetCommandBlock", "method_12077", "onUpdateCommandBlock", "m_7192_"), "(Lahw;)V");
    }

    static void onUpdateCommandBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateCommandBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateCommandBlockMinecart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSetCommandMinecart", "method_12049", "onUpdateCommandBlockMinecart", "m_6629_"), "(Lahx;)V");
    }

    static void onUpdateCommandBlockMinecart(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateCommandBlockMinecart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPickFromInventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePickItem", "method_12084", "onPickFromInventory", "m_7965_"), "(Lahj;)V");
    }

    static void onPickFromInventory(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPickFromInventory();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onRenameItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleRenameItem", "method_12060", "onRenameItem", "m_5591_"), "(Lahr;)V");
    }

    static void onRenameItem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onRenameItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateBeacon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSetBeaconPacket", "method_12057", "onUpdateBeacon", "m_5712_"), "(Lahu;)V");
    }

    static void onUpdateBeacon(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateBeacon();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateStructureBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSetStructureBlock", "method_12051", "onUpdateStructureBlock", "m_7424_"), "(Laia;)V");
    }

    static void onUpdateStructureBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateStructureBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSelectMerchantTrade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSelectTrade", "method_12080", "onSelectMerchantTrade", "m_6321_"), "(Laht;)V");
    }

    static void onSelectMerchantTrade(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onSelectMerchantTrade();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onBookUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleEditBook", "method_12053", "onBookUpdate", "m_6829_"), "(Lahb;)V");
    }

    static void onBookUpdate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onBookUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onQueryEntityNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleEntityTagQuery", "method_12074", "onQueryEntityNbt", "m_7548_"), "(Lahc;)V");
    }

    static void onQueryEntityNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onQueryEntityNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSlotChangedState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleContainerSlotStateChanged", "method_54436", "onSlotChangedState", "m_305984_"), "(Lagz;)V");
    }

    static void onSlotChangedState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onSlotChangedState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onQueryBlockNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleBlockEntityTagQuery", "method_12072", "onQueryBlockNbt", "m_6780_"), "(Lagl;)V");
    }

    static void onQueryBlockNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onQueryBlockNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateJigsaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSetJigsawBlock", "method_16383", "onUpdateJigsaw", "m_8019_"), "(Lahz;)V");
    }

    static void onUpdateJigsaw(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateJigsaw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onJigsawGenerating() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleJigsawGenerate", "method_27273", "onJigsawGenerating", "m_6449_"), "(Lahe;)V");
    }

    static void onJigsawGenerating(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onJigsawGenerating();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChangeDifficulty", "method_19475", "onUpdateDifficulty", "m_7477_"), "(Lagm;)V");
    }

    static void onUpdateDifficulty(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateDifficulty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onUpdateDifficultyLock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleLockDifficulty", "method_19476", "onUpdateDifficultyLock", "m_7728_"), "(Lahf;)V");
    }

    static void onUpdateDifficultyLock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onUpdateDifficultyLock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerSession() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChatSessionUpdate", "method_46367", "onPlayerSession", "m_252797_"), "(Lagr;)V");
    }

    static void onPlayerSession(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerSession();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onAcknowledgeReconfiguration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleConfigurationAcknowledged", "method_52279", "onAcknowledgeReconfiguration", "m_294045_"), "(Lagv;)V");
    }

    static void onAcknowledgeReconfiguration(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onAcknowledgeReconfiguration();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onAcknowledgeChunks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChunkBatchReceived", "method_52278", "onAcknowledgeChunks", "m_292755_"), "(Lags;)V");
    }

    static void onAcknowledgeChunks(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onAcknowledgeChunks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onDebugSampleSubscription() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleDebugSampleSubscription", "method_56619", "onDebugSampleSubscription", "m_318909_"), "(Laha;)V");
    }

    static void onDebugSampleSubscription(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onDebugSampleSubscription();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_LISTENER_SERVERPLAYPACKETLISTENER_HPP