#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// RoomInfo
struct RoomInfo_t3170295620;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1048209202;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// NetworkingPeer
struct NetworkingPeer_t264212356;
// RoomOptions
struct RoomOptions_t1787645948;
// System.String[]
struct StringU5BU5D_t1281789340;
// SceneContainer
struct SceneContainer_t1775811254;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// SceneManagerHelper
struct SceneManagerHelper_t3665721098;
// PhotonPlayer
struct PhotonPlayer_t3305149557;
// ServerSettings
struct ServerSettings_t2755303613;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// ShowStatusWhenConnecting
struct ShowStatusWhenConnecting_t1063567576;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.GUISkin
struct GUISkin_t1244372282;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t811797299;
// SmoothSyncMovement
struct SmoothSyncMovement_t1809568931;
// Photon.MonoBehaviour
struct MonoBehaviour_t3225183318;
// PhotonView
struct PhotonView_t2207721820;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t3395709193;
// UnityEngine.Component
struct Component_t1923634451;
// PhotonStream
struct PhotonStream_t1003850889;
// UnityEngine.Transform
struct Transform_t3600365921;
// SoundManager
struct SoundManager_t2102329059;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t857997111;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// SpeexDSP
struct SpeexDSP_t3753572563;
// ExitGames.Client.Photon.Voice.SpeexProcessor
struct SpeexProcessor_t2344027106;
// UnityEngine.AudioListener
struct AudioListener_t2734094699;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// AudioOutCapture
struct AudioOutCapture_t1501502605;
// System.Action`2<System.Single[],System.Int32>
struct Action_2_t2703621360;
// System.Action`2<System.Object,System.Int32>
struct Action_2_t2340848427;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// PhotonVoiceRecorder/PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t2541618965;
// ExitGames.Client.Photon.Voice.LocalVoice
struct LocalVoice_t3918029076;
// System.Exception
struct Exception_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>
struct Dictionary_2_t1750165665;
// SpeexDSP/Logger
struct Logger_t1407211853;
// System.Func`1<System.Int64>
struct Func_1_t3166313951;
// ExitGames.Client.Photon.Voice.LocalVoiceFramed
struct LocalVoiceFramed_t3264419308;
// ExitGames.Client.Photon.Voice.ILogger
struct ILogger_t3051377890;
// ExitGames.Client.Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_t4291334645;
// ExitGames.Client.Photon.Voice.LocalVoiceFramed`1/IProcessor<System.Int16>[]
struct IProcessorU5BU5D_t2310300181;
// ExitGames.Client.Photon.Voice.LocalVoiceFramed`1/IProcessor<System.Int16>
struct IProcessor_t312508540;
// SupportLogger
struct SupportLogger_t2840230211;
// SupportLogging
struct SupportLogging_t3610999087;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t1608153861;
// TypedLobby
struct TypedLobby_t3336582029;
// Room
struct Room_t3759828263;
// Territory
struct Territory_t680836402;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// TerritotyLine
struct TerritotyLine_t3071297039;
// TitleSceneManager
struct TitleSceneManager_t4033090873;
// TitleSceneManager/<Start>c__AnonStorey0
struct U3CStartU3Ec__AnonStorey0_t3435021521;
// FadeManager
struct FadeManager_t2978290776;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.Action
struct Action_t1264377477;
// ToneAudioReader
struct ToneAudioReader_t486337998;
// TypedLobbyInfo
struct TypedLobbyInfo_t2504508049;
// UnityVoiceFrontend
struct UnityVoiceFrontend_t1107817756;
// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>
struct Dictionary_2_t230268132;
// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>
struct Dictionary_2_t1213689194;
// ExitGames.Client.Photon.Voice.LoadBalancingFrontend
struct LoadBalancingFrontend_t4154771402;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t4265131299;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_t3963975941;
// System.Delegate
struct Delegate_t1188392813;
// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient
struct LoadBalancingClient_t3850494520;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>
struct Action_1_t643525275;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t596095568;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>
struct Action_3_t887068424;
// System.Action`2<System.Int32,System.Byte>
struct Action_2_t2360473393;
// System.Action`3<System.Int32,System.Byte,System.Single[]>
struct Action_3_t1509206889;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t423627973;
// PhotonVoiceSpeaker
struct PhotonVoiceSpeaker_t2096685102;
// PhotonVoiceSettings
struct PhotonVoiceSettings_t1055773440;
// UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0
struct U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485;
// System.Action`1<System.Single[]>
struct Action_1_t1617378846;
// PhotonVoiceSpeaker[]
struct PhotonVoiceSpeakerU5BU5D_t1538319195;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo>
struct IEnumerable_1_t54355797;
// ExitGames.Client.Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_t1074502908;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct List_1_t3892756616;
// System.Action`3<System.Int32,System.Byte,System.Object>
struct Action_3_t3144401802;
// ExitGames.Client.Photon.LoadBalancing.RoomOptions
struct RoomOptions_t1266811903;
// ExitGames.Client.Photon.LoadBalancing.TypedLobby
struct TypedLobby_t1646745069;
// ViewDrag
struct ViewDrag_t2793483242;
// UnityEngine.Camera
struct Camera_t4157153871;
// WebRpcResponse
struct WebRpcResponse_t4177102182;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1405253484;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t3241628394;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3835237792;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>[]
struct KeyValuePair_2U5BU5D_t3925083367;
// ExitGames.Client.Photon.Voice.IAudioSource
struct IAudioSource_t3112325110;
// UnityEngine.AudioSpeakerMode[]
struct AudioSpeakerModeU5BU5D_t295752953;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.AudioSpeakerMode>
struct IEqualityComparer_1_t2208897562;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.AudioSpeakerMode,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1229387767;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// ExitGames.Client.Photon.Voice.IVoiceFrontend
struct IVoiceFrontend_t3350503725;
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.LocalVoice>
struct Dictionary_2_t2243176396;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoice>>
struct Dictionary_2_t4278817149;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.RemoteVoice>>>
struct Dictionary_2_t3797886043;
// System.Random
struct Random_t108471755;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct IEqualityComparer_1_t233046596;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker,System.Collections.DictionaryEntry>
struct Transform_1_t401347400;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t4209139644;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Action`1<System.Byte[]>
struct Action_1_t4289115252;
// System.Action`1<System.Int16[]>
struct Action_1_t3859307773;
// ExitGames.Client.Photon.Voice.IDecoder
struct IDecoder_t3964121257;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// ExitGames.Client.Photon.Voice.PrimitiveArrayPool`1<System.Int16>
struct PrimitiveArrayPool_1_t2830692541;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t3533099672;
// ExitGames.Client.Photon.Voice.Framer`1<System.Single>
struct Framer_1_t3123394556;
// ExitGames.Client.Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Single>
struct VoiceLevelDetectCalibrate_1_t1491991209;
// ExitGames.Client.Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Int16>
struct VoiceLevelDetectCalibrate_1_t2647544822;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.Font
struct Font_t1956802104;
// PhotonHandler
struct PhotonHandler_t2139970417;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t2005371586;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t898892918;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t3973553389;
// System.Type
struct Type_t;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;
// PhotonNetwork/EventCallback
struct EventCallback_t1220598991;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer
struct LoadBalancingPeer_t794198942;
// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues
struct AuthenticationValues_t3382429593;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t1720840067;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t3900690969;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo>
struct List_1_t653618646;
// ExitGames.Client.Photon.LoadBalancing.Player
struct Player_t1020606529;
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.LoadBalancing.RoomInfo>
struct Dictionary_2_t3838928456;
// ExitGames.Client.Photon.LoadBalancing.Room
struct Room_t3992852750;
// ExitGames.Client.Photon.LoadBalancing.EnterRoomParams
struct EnterRoomParams_t3162528725;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.FriendInfo>
struct List_1_t1374400172;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t1253839074;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2581629031;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1302902347;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t4013908777;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2956237011;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t200327285;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t2116099858;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.GUISettings
struct GUISettings_t1774757634;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t3742157810;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1143955295;
// System.Func`2<ExitGames.Client.Photon.Voice.LocalVoice,System.Boolean>
struct Func_2_t1227927439;
// ExitGames.Client.Photon.Voice.IServiceable
struct IServiceable_t197365293;
// ExitGames.Client.Photon.Voice.IEncoder
struct IEncoder_t1753395000;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t1276093073;
// AuthenticationValues
struct AuthenticationValues_t660572511;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t3976582791;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t2955551919;
// RoomInfo[]
struct RoomInfoU5BU5D_t1491207981;
// EnterRoomParams
struct EnterRoomParams_t3960472384;
// System.Collections.Generic.List`1<Region>
struct List_1_t861332708;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t2193862888;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t2880637464;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t3994213146;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t1096435151;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t4231889829;
// IPunPrefabPool
struct IPunPrefabPool_t3054155687;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t1499080758;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// RaiseEventOptions
struct RaiseEventOptions_t1229553678;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t1732652656;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.UI.Image
struct Image_t2670269651;
// ExitGames.Client.Photon.Voice.Framer`1<System.Int16>
struct Framer_1_t4278948169;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoiceFramed`1/IProcessor<System.Int16>>
struct List_1_t1784583282;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1333520283;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.AudioListenerExtension
struct AudioListenerExtension_t3242956547;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// ExitGames.Client.Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t3268676890;
// ExitGames.Client.Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_t1501379953;
// ExitGames.Client.Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t2904595747;
// ExitGames.Client.Photon.Voice.IAudioOut
struct IAudioOut_t3346279205;
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t3676033689;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276;

extern RuntimeClass* Hashtable_t1048209202_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotonNetwork_t1610183659_il2cpp_TypeInfo_var;
extern const uint32_t RoomInfo__ctor_m3808470266_MetadataUsageId;
extern RuntimeClass* RoomInfo_t3170295620_il2cpp_TypeInfo_var;
extern const uint32_t RoomInfo_Equals_m2802094528_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2787760357;
extern String_t* _stringLiteral4078974736;
extern String_t* _stringLiteral3149596335;
extern String_t* _stringLiteral3905732946;
extern String_t* _stringLiteral3481648711;
extern const uint32_t RoomInfo_ToString_m4191279851_MetadataUsageId;
extern RuntimeClass* Extensions_t2612146612_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2854379022;
extern const uint32_t RoomInfo_ToStringFull_m692967795_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m3919933788_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var;
extern const uint32_t RoomInfo_InternalCacheProperties_m4242051927_MetadataUsageId;
extern const uint32_t RoomOptions__ctor_m3263086371_MetadataUsageId;
extern String_t* _stringLiteral1512030231;
extern const uint32_t ScoreExtensions_SetScore_m650688815_MetadataUsageId;
extern const uint32_t ScoreExtensions_AddScore_m3409814160_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3280774074_RuntimeMethod_var;
extern const uint32_t ScoreExtensions_GetScore_m1181906475_MetadataUsageId;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const uint32_t ServerSettings__ctor_m1448665227_MetadataUsageId;
extern String_t* _stringLiteral2752530441;
extern const uint32_t ServerSettings_UseMyServer_m2379333996_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t ServerSettings_IsAppId_m2900859773_MetadataUsageId;
extern RuntimeClass* PhotonHandler_t2139970417_il2cpp_TypeInfo_var;
extern const uint32_t ServerSettings_get_BestRegionCodeInPreferences_m2341611427_MetadataUsageId;
extern const uint32_t ServerSettings_ResetBestRegionCodeInPreferences_m2677648169_MetadataUsageId;
extern RuntimeClass* HostingOption_t2949276063_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2328556060;
extern String_t* _stringLiteral3452614528;
extern const uint32_t ServerSettings_ToString_m2874290298_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var;
extern RuntimeClass* ClientState_t1348705391_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2745515193;
extern String_t* _stringLiteral3928422333;
extern const uint32_t ShowStatusWhenConnecting_OnGUI_m2526820743_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3450648448;
extern const uint32_t ShowStatusWhenConnecting_GetConnectingDots_m4281251292_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t SmoothSyncMovement__ctor_m1559543711_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4128318975_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1782500462_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4232616038_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4132484595_RuntimeMethod_var;
extern String_t* _stringLiteral2688095987;
extern const uint32_t SmoothSyncMovement_Awake_m593888716_MetadataUsageId;
extern const uint32_t SmoothSyncMovement_OnPhotonSerializeView_m1517933553_MetadataUsageId;
extern const uint32_t SmoothSyncMovement_Update_m340845157_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m67763660_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1011483163_RuntimeMethod_var;
extern const uint32_t SoundManager_PlayOnShot_m3015943341_MetadataUsageId;
extern const uint32_t SpeexDSP_UpdateProcProps_m753660225_MetadataUsageId;
extern RuntimeClass* Action_2_t2703621360_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisAudioListener_t2734094699_m3731316164_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAudioOutCapture_t1501502605_m1700239397_RuntimeMethod_var;
extern const RuntimeMethod* SpeexProcessor_OnAudioOutFrame_m512143840_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m2577363568_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisAudioOutCapture_t1501502605_m2448204606_RuntimeMethod_var;
extern const uint32_t SpeexDSP_setOutputListener_m2923569688_MetadataUsageId;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var;
extern String_t* _stringLiteral2973547888;
extern const uint32_t SpeexDSP_InitAECLatencyDetect_m2917550844_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* LocalVoiceAudioShort_t1883701567_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1750165665_il2cpp_TypeInfo_var;
extern RuntimeClass* Logger_t1407211853_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeexDSP_t3753572563_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t3166313951_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeexProcessor_t2344027106_il2cpp_TypeInfo_var;
extern RuntimeClass* IProcessorU5BU5D_t2310300181_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SpeexDSP_PhotonVoiceCreated_m898506513_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1407212350_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3134054041_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2522243033_RuntimeMethod_var;
extern const RuntimeMethod* SpeexDSP_U3CPhotonVoiceCreatedU3Em__0_m246539666_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m1164172807_RuntimeMethod_var;
extern const RuntimeMethod* LocalVoiceFramed_1_AddPreProcessor_m652934459_RuntimeMethod_var;
extern String_t* _stringLiteral2261787205;
extern String_t* _stringLiteral722502618;
extern String_t* _stringLiteral1719727583;
extern const uint32_t SpeexDSP_PhotonVoiceCreated_m898506513_MetadataUsageId;
extern const uint32_t Logger_LogError_m1006299873_MetadataUsageId;
extern const uint32_t Logger_LogWarning_m807044983_MetadataUsageId;
extern const uint32_t Logger_LogInfo_m3918638185_MetadataUsageId;
extern const uint32_t Logger_LogDebug_m2205660324_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSupportLogging_t3610999087_m3906415171_RuntimeMethod_var;
extern String_t* _stringLiteral2668676434;
extern const uint32_t SupportLogger_Start_m4228716924_MetadataUsageId;
extern String_t* _stringLiteral2903119551;
extern const uint32_t SupportLogging_Start_m615266166_MetadataUsageId;
extern String_t* _stringLiteral1193874114;
extern String_t* _stringLiteral2500080693;
extern const uint32_t SupportLogging_OnApplicationPause_m1998044826_MetadataUsageId;
extern String_t* _stringLiteral1837502969;
extern const uint32_t SupportLogging_LogStats_m357709987_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CloudRegionCode_t1925019500_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1340198547;
extern String_t* _stringLiteral1623009004;
extern String_t* _stringLiteral227414809;
extern String_t* _stringLiteral2918654047;
extern String_t* _stringLiteral2154486352;
extern const uint32_t SupportLogging_LogBasics_m2059416039_MetadataUsageId;
extern String_t* _stringLiteral3428758596;
extern const uint32_t SupportLogging_OnConnectedToPhoton_m4286413539_MetadataUsageId;
extern RuntimeClass* DisconnectCause_t501870387_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3086498198;
extern String_t* _stringLiteral3450648455;
extern const uint32_t SupportLogging_OnFailedToConnectToPhoton_m1253602912_MetadataUsageId;
extern String_t* _stringLiteral1475082161;
extern const uint32_t SupportLogging_OnJoinedLobby_m1882645112_MetadataUsageId;
extern String_t* _stringLiteral2085003243;
extern String_t* _stringLiteral3786186961;
extern String_t* _stringLiteral1476776628;
extern const uint32_t SupportLogging_OnJoinedRoom_m1699194386_MetadataUsageId;
extern String_t* _stringLiteral1688728708;
extern const uint32_t SupportLogging_OnCreatedRoom_m909910432_MetadataUsageId;
extern String_t* _stringLiteral4292058329;
extern const uint32_t SupportLogging_OnLeftRoom_m1053673117_MetadataUsageId;
extern String_t* _stringLiteral176793290;
extern const uint32_t SupportLogging_OnDisconnectedFromPhoton_m3427121297_MetadataUsageId;
extern RuntimeClass* Team_t2865224648_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3917410033;
extern const uint32_t TeamExtensions_GetTeam_m369910217_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m2387223709_RuntimeMethod_var;
extern String_t* _stringLiteral2950688325;
extern String_t* _stringLiteral2277785952;
extern const uint32_t TeamExtensions_SetTeam_m2985934832_MetadataUsageId;
extern RuntimeClass* U3CStartU3Ec__AnonStorey0_t3435021521_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisSceneContainer_t1775811254_m2393505782_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSceneContainer_t1775811254_m860327927_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m4065313163_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__AnonStorey0_U3CU3Em__1_m2499229222_RuntimeMethod_var;
extern const uint32_t TitleSceneManager_Start_m201537892_MetadataUsageId;
extern RuntimeClass* TitleSceneManager_t4033090873_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TitleSceneManager_U3CStartGameU3Em__0_m111598282_RuntimeMethod_var;
extern const uint32_t TitleSceneManager_StartGame_m1738189525_MetadataUsageId;
extern String_t* _stringLiteral1222789680;
extern const uint32_t TitleSceneManager_U3CStartGameU3Em__0_m111598282_MetadataUsageId;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3911351878;
extern const uint32_t ToneAudioReader_Read_m2966630126_MetadataUsageId;
extern RuntimeClass* TurnExtensions_t3150044944_il2cpp_TypeInfo_var;
extern const uint32_t TurnExtensions_SetTurn_m2738922425_MetadataUsageId;
extern const uint32_t TurnExtensions_GetTurn_m4131414938_MetadataUsageId;
extern const uint32_t TurnExtensions_GetTurnStart_m3702491223_MetadataUsageId;
extern const uint32_t TurnExtensions_GetFinishedTurn_m96341076_MetadataUsageId;
extern const uint32_t TurnExtensions_SetFinishedTurn_m862379605_MetadataUsageId;
extern String_t* _stringLiteral3596229116;
extern String_t* _stringLiteral950452602;
extern String_t* _stringLiteral3815572937;
extern const uint32_t TurnExtensions__cctor_m1640371730_MetadataUsageId;
extern const uint32_t TypedLobby__ctor_m815421660_MetadataUsageId;
extern const uint32_t TypedLobby_get_IsDefault_m342755869_MetadataUsageId;
extern RuntimeClass* LobbyType_t3695323860_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4016121227;
extern const uint32_t TypedLobby_ToString_m2822648706_MetadataUsageId;
extern RuntimeClass* TypedLobby_t3336582029_il2cpp_TypeInfo_var;
extern const uint32_t TypedLobby__cctor_m1081382309_MetadataUsageId;
extern const uint32_t TypedLobbyInfo__ctor_m701921937_MetadataUsageId;
extern String_t* _stringLiteral4274446839;
extern const uint32_t TypedLobbyInfo_ToString_m241642779_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t230268132_il2cpp_TypeInfo_var;
extern RuntimeClass* RemoteVoiceInfoDelegate_t3963975941_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t643525275_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t596095568_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2469382965_RuntimeMethod_var;
extern const RuntimeMethod* UnityVoiceFrontend_OnRemoteVoiceInfo_m2331815543_RuntimeMethod_var;
extern const RuntimeMethod* UnityVoiceFrontend_OnStateChange_m2537733427_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3087077418_RuntimeMethod_var;
extern const RuntimeMethod* UnityVoiceFrontend_OnOpResponse_m455553206_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3679380596_RuntimeMethod_var;
extern const uint32_t UnityVoiceFrontend__ctor_m2262757560_MetadataUsageId;
extern RuntimeClass* PhotonVoiceNetwork_t1485168188_il2cpp_TypeInfo_var;
extern const uint32_t UnityVoiceFrontend_Reconnect_m1609299506_MetadataUsageId;
extern String_t* _stringLiteral1490770793;
extern const uint32_t UnityVoiceFrontend_DebugReturn_m3811711366_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3844813597_RuntimeMethod_var;
extern const uint32_t UnityVoiceFrontend_OnOpResponse_m455553206_MetadataUsageId;
extern RuntimeClass* PhotonVoiceSettings_t1055773440_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2__ctor_m2678495578_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3942430338_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1898031008_RuntimeMethod_var;
extern String_t* _stringLiteral4108131830;
extern String_t* _stringLiteral524394959;
extern const uint32_t UnityVoiceFrontend_linkVoice_m1374844408_MetadataUsageId;
extern RuntimeClass* U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1617378846_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3COnRemoteVoiceInfoU3Ec__AnonStorey0_U3CU3Em__0_m1722068814_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4134769895_RuntimeMethod_var;
extern const RuntimeMethod* U3COnRemoteVoiceInfoU3Ec__AnonStorey0_U3CU3Em__1_m1042055423_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m384097959_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisPhotonVoiceSpeaker_t2096685102_m3099739339_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m2195347554_RuntimeMethod_var;
extern String_t* _stringLiteral1906930396;
extern const uint32_t UnityVoiceFrontend_OnRemoteVoiceInfo_m2331815543_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t54355797_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1507073376_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t UnityVoiceFrontend_LinkSpeakerToRemoteVoice_m1193148566_MetadataUsageId;
extern const RuntimeMethod* Action_2_Invoke_m2909171545_RuntimeMethod_var;
extern String_t* _stringLiteral902197579;
extern String_t* _stringLiteral819371593;
extern const uint32_t UnityVoiceFrontend_OnRemoteVoiceRemove_m2834088081_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m912922756_RuntimeMethod_var;
extern const uint32_t UnityVoiceFrontend_unlinkSpeaker_m1111250791_MetadataUsageId;
extern RuntimeClass* List_1_t3892756616_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3371529868_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1404978140_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2310140764_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m706906700_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m956911013_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1636746552_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m131355927_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m167480798_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2952471047_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m18579390_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4040184051_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2200437993_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1157500647_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3718840993_RuntimeMethod_var;
extern const uint32_t UnityVoiceFrontend_UnlinkSpeakerFromRemoteVoice_m3148887489_MetadataUsageId;
extern const RuntimeMethod* Action_3_Invoke_m2784781136_RuntimeMethod_var;
extern String_t* _stringLiteral647675415;
extern const uint32_t UnityVoiceFrontend_OnAudioFrame_m945535391_MetadataUsageId;
extern RuntimeClass* ClientState_t471057680_il2cpp_TypeInfo_var;
extern RuntimeClass* RoomOptions_t1266811903_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m4214502263_RuntimeMethod_var;
extern String_t* _stringLiteral4173677005;
extern String_t* _stringLiteral2974682513;
extern String_t* _stringLiteral153682067;
extern const uint32_t UnityVoiceFrontend_OnStateChange_m2537733427_MetadataUsageId;
extern const uint32_t ViewDrag__ctor_m1198465158_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t ViewDrag_Update_m2303743768_MetadataUsageId;
extern const uint32_t ViewDrag_LeftMouseDrag_m2433549445_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var;
extern const uint32_t WebRpcResponse__ctor_m4000971832_MetadataUsageId;
extern RuntimeClass* SupportClass_t2974952451_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2663913931;
extern const uint32_t WebRpcResponse_ToStringFull_m3199251698_MetadataUsageId;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct GUIStyleU5BU5D_t2383250302;
struct GUILayoutOptionU5BU5D_t2510215842;
struct SingleU5BU5D_t1444911251;
struct IProcessorU5BU5D_t2310300181;
struct PhotonVoiceSpeakerU5BU5D_t1538319195;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef SPEEXLIB_T277051236_H
#define SPEEXLIB_T277051236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.SpeexLib
struct  SpeexLib_t277051236  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEEXLIB_T277051236_H
#ifndef U3CSTARTU3EC__ANONSTOREY0_T3435021521_H
#define U3CSTARTU3EC__ANONSTOREY0_T3435021521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleSceneManager/<Start>c__AnonStorey0
struct  U3CStartU3Ec__AnonStorey0_t3435021521  : public RuntimeObject
{
public:
	// SceneContainer TitleSceneManager/<Start>c__AnonStorey0::sceneContainer
	SceneContainer_t1775811254 * ___sceneContainer_0;
	// TitleSceneManager TitleSceneManager/<Start>c__AnonStorey0::$this
	TitleSceneManager_t4033090873 * ___U24this_1;

public:
	inline static int32_t get_offset_of_sceneContainer_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__AnonStorey0_t3435021521, ___sceneContainer_0)); }
	inline SceneContainer_t1775811254 * get_sceneContainer_0() const { return ___sceneContainer_0; }
	inline SceneContainer_t1775811254 ** get_address_of_sceneContainer_0() { return &___sceneContainer_0; }
	inline void set_sceneContainer_0(SceneContainer_t1775811254 * value)
	{
		___sceneContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneContainer_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__AnonStorey0_t3435021521, ___U24this_1)); }
	inline TitleSceneManager_t4033090873 * get_U24this_1() const { return ___U24this_1; }
	inline TitleSceneManager_t4033090873 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(TitleSceneManager_t4033090873 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ANONSTOREY0_T3435021521_H
#ifndef PHOTONSTREAM_T1003850889_H
#define PHOTONSTREAM_T1003850889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonStream
struct  PhotonStream_t1003850889  : public RuntimeObject
{
public:
	// System.Boolean PhotonStream::write
	bool ___write_0;
	// System.Collections.Generic.Queue`1<System.Object> PhotonStream::writeData
	Queue_1_t2926365658 * ___writeData_1;
	// System.Object[] PhotonStream::readData
	ObjectU5BU5D_t2843939325* ___readData_2;
	// System.Byte PhotonStream::currentItem
	uint8_t ___currentItem_3;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(PhotonStream_t1003850889, ___write_0)); }
	inline bool get_write_0() const { return ___write_0; }
	inline bool* get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(bool value)
	{
		___write_0 = value;
	}

	inline static int32_t get_offset_of_writeData_1() { return static_cast<int32_t>(offsetof(PhotonStream_t1003850889, ___writeData_1)); }
	inline Queue_1_t2926365658 * get_writeData_1() const { return ___writeData_1; }
	inline Queue_1_t2926365658 ** get_address_of_writeData_1() { return &___writeData_1; }
	inline void set_writeData_1(Queue_1_t2926365658 * value)
	{
		___writeData_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeData_1), value);
	}

	inline static int32_t get_offset_of_readData_2() { return static_cast<int32_t>(offsetof(PhotonStream_t1003850889, ___readData_2)); }
	inline ObjectU5BU5D_t2843939325* get_readData_2() const { return ___readData_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of_readData_2() { return &___readData_2; }
	inline void set_readData_2(ObjectU5BU5D_t2843939325* value)
	{
		___readData_2 = value;
		Il2CppCodeGenWriteBarrier((&___readData_2), value);
	}

	inline static int32_t get_offset_of_currentItem_3() { return static_cast<int32_t>(offsetof(PhotonStream_t1003850889, ___currentItem_3)); }
	inline uint8_t get_currentItem_3() const { return ___currentItem_3; }
	inline uint8_t* get_address_of_currentItem_3() { return &___currentItem_3; }
	inline void set_currentItem_3(uint8_t value)
	{
		___currentItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONSTREAM_T1003850889_H
#ifndef LIST_1_T857997111_H
#define LIST_1_T857997111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct  List_1_t857997111  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t143221404* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t857997111, ____items_1)); }
	inline AudioClipU5BU5D_t143221404* get__items_1() const { return ____items_1; }
	inline AudioClipU5BU5D_t143221404** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioClipU5BU5D_t143221404* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t857997111, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t857997111, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t857997111_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioClipU5BU5D_t143221404* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t857997111_StaticFields, ___EmptyArray_4)); }
	inline AudioClipU5BU5D_t143221404* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioClipU5BU5D_t143221404** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioClipU5BU5D_t143221404* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T857997111_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef DICTIONARY_2_T1405253484_H
#define DICTIONARY_2_T1405253484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t1405253484  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ByteU5BU5D_t4116647657* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___keySlots_6)); }
	inline ByteU5BU5D_t4116647657* get_keySlots_6() const { return ___keySlots_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ByteU5BU5D_t4116647657* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1405253484_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3835237792 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3835237792 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3835237792 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3835237792 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1405253484_H
#ifndef WEBRPCRESPONSE_T4177102182_H
#define WEBRPCRESPONSE_T4177102182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRpcResponse
struct  WebRpcResponse_t4177102182  : public RuntimeObject
{
public:
	// System.String WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 WebRpcResponse::<ReturnCode>k__BackingField
	int32_t ___U3CReturnCodeU3Ek__BackingField_1;
	// System.String WebRpcResponse::<DebugMessage>k__BackingField
	String_t* ___U3CDebugMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_t2865362463 * ___U3CParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRpcResponse_t4177102182, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CReturnCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRpcResponse_t4177102182, ___U3CReturnCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CReturnCodeU3Ek__BackingField_1() const { return ___U3CReturnCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReturnCodeU3Ek__BackingField_1() { return &___U3CReturnCodeU3Ek__BackingField_1; }
	inline void set_U3CReturnCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CReturnCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDebugMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRpcResponse_t4177102182, ___U3CDebugMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CDebugMessageU3Ek__BackingField_2() const { return ___U3CDebugMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDebugMessageU3Ek__BackingField_2() { return &___U3CDebugMessageU3Ek__BackingField_2; }
	inline void set_U3CDebugMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CDebugMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDebugMessageU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRpcResponse_t4177102182, ___U3CParametersU3Ek__BackingField_3)); }
	inline Dictionary_2_t2865362463 * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline Dictionary_2_t2865362463 ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(Dictionary_2_t2865362463 * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParametersU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRPCRESPONSE_T4177102182_H
#ifndef ROOMOPTIONS_T1266811903_H
#define ROOMOPTIONS_T1266811903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.RoomOptions
struct  RoomOptions_t1266811903  : public RuntimeObject
{
public:
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte ExitGames.Client.Photon.LoadBalancing.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.RoomOptions::CustomRoomProperties
	Hashtable_t1048209202 * ___CustomRoomProperties_6;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t1281789340* ___CustomRoomPropertiesForLobby_7;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.RoomOptions::Plugins
	StringU5BU5D_t1281789340* ___Plugins_8;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_10;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___CustomRoomProperties_6)); }
	inline Hashtable_t1048209202 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_t1048209202 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_t1048209202 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&___CustomRoomProperties_6), value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t1281789340* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t1281789340** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t1281789340* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((&___CustomRoomPropertiesForLobby_7), value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___Plugins_8)); }
	inline StringU5BU5D_t1281789340* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t1281789340** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t1281789340* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((&___Plugins_8), value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___U3CPublishUserIdU3Ek__BackingField_10)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_10() const { return ___U3CPublishUserIdU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_10() { return &___U3CPublishUserIdU3Ek__BackingField_10; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_10(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_t1266811903, ___U3CDeleteNullPropertiesU3Ek__BackingField_11)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_11() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_11(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMOPTIONS_T1266811903_H
#ifndef LIST_1_T3892756616_H
#define LIST_1_T3892756616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct  List_1_t3892756616  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t3925083367* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3892756616, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t3925083367* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t3925083367** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t3925083367* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3892756616, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3892756616, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3892756616_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	KeyValuePair_2U5BU5D_t3925083367* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3892756616_StaticFields, ___EmptyArray_4)); }
	inline KeyValuePair_2U5BU5D_t3925083367* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline KeyValuePair_2U5BU5D_t3925083367** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(KeyValuePair_2U5BU5D_t3925083367* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3892756616_H
#ifndef PHOTONVOICECREATEDPARAMS_T2541618965_H
#define PHOTONVOICECREATEDPARAMS_T2541618965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonVoiceRecorder/PhotonVoiceCreatedParams
struct  PhotonVoiceCreatedParams_t2541618965  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.Voice.LocalVoice PhotonVoiceRecorder/PhotonVoiceCreatedParams::<Voice>k__BackingField
	LocalVoice_t3918029076 * ___U3CVoiceU3Ek__BackingField_0;
	// ExitGames.Client.Photon.Voice.IAudioSource PhotonVoiceRecorder/PhotonVoiceCreatedParams::<AudioSource>k__BackingField
	RuntimeObject* ___U3CAudioSourceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CVoiceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonVoiceCreatedParams_t2541618965, ___U3CVoiceU3Ek__BackingField_0)); }
	inline LocalVoice_t3918029076 * get_U3CVoiceU3Ek__BackingField_0() const { return ___U3CVoiceU3Ek__BackingField_0; }
	inline LocalVoice_t3918029076 ** get_address_of_U3CVoiceU3Ek__BackingField_0() { return &___U3CVoiceU3Ek__BackingField_0; }
	inline void set_U3CVoiceU3Ek__BackingField_0(LocalVoice_t3918029076 * value)
	{
		___U3CVoiceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVoiceU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CAudioSourceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonVoiceCreatedParams_t2541618965, ___U3CAudioSourceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAudioSourceU3Ek__BackingField_1() const { return ___U3CAudioSourceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAudioSourceU3Ek__BackingField_1() { return &___U3CAudioSourceU3Ek__BackingField_1; }
	inline void set_U3CAudioSourceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAudioSourceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAudioSourceU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONVOICECREATEDPARAMS_T2541618965_H
#ifndef U3CONREMOTEVOICEINFOU3EC__ANONSTOREY0_T2894919485_H
#define U3CONREMOTEVOICEINFOU3EC__ANONSTOREY0_T2894919485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0
struct  U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485  : public RuntimeObject
{
public:
	// System.Int32 UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0::playerId
	int32_t ___playerId_0;
	// System.Byte UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0::voiceId
	uint8_t ___voiceId_1;
	// UnityVoiceFrontend UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0::$this
	UnityVoiceFrontend_t1107817756 * ___U24this_2;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_voiceId_1() { return static_cast<int32_t>(offsetof(U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485, ___voiceId_1)); }
	inline uint8_t get_voiceId_1() const { return ___voiceId_1; }
	inline uint8_t* get_address_of_voiceId_1() { return &___voiceId_1; }
	inline void set_voiceId_1(uint8_t value)
	{
		___voiceId_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485, ___U24this_2)); }
	inline UnityVoiceFrontend_t1107817756 * get_U24this_2() const { return ___U24this_2; }
	inline UnityVoiceFrontend_t1107817756 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(UnityVoiceFrontend_t1107817756 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONREMOTEVOICEINFOU3EC__ANONSTOREY0_T2894919485_H
#ifndef DICTIONARY_2_T1750165665_H
#define DICTIONARY_2_T1750165665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>
struct  Dictionary_2_t1750165665  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	AudioSpeakerModeU5BU5D_t295752953* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___keySlots_6)); }
	inline AudioSpeakerModeU5BU5D_t295752953* get_keySlots_6() const { return ___keySlots_6; }
	inline AudioSpeakerModeU5BU5D_t295752953** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(AudioSpeakerModeU5BU5D_t295752953* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1750165665_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1229387767 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1750165665_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1229387767 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1229387767 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1229387767 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1750165665_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef LOGGER_T1407211853_H
#define LOGGER_T1407211853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpeexDSP/Logger
struct  Logger_t1407211853  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T1407211853_H
#ifndef OPERATIONRESPONSE_T423627973_H
#define OPERATIONRESPONSE_T423627973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_t423627973  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t1405253484 * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DebugMessage_2), value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___Parameters_3)); }
	inline Dictionary_2_t1405253484 * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t1405253484 ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t1405253484 * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___Parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONRESPONSE_T423627973_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef VOICECLIENT_T4265131299_H
#define VOICECLIENT_T4265131299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.VoiceClient
struct  VoiceClient_t4265131299  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.Voice.IVoiceFrontend ExitGames.Client.Photon.Voice.VoiceClient::frontend
	RuntimeObject* ___frontend_0;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_4;
	// System.Boolean ExitGames.Client.Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5;
	// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate ExitGames.Client.Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_t3963975941 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_8;
	// System.Byte ExitGames.Client.Photon.Voice.VoiceClient::globalGroup
	uint8_t ___globalGroup_10;
	// System.Byte ExitGames.Client.Photon.Voice.VoiceClient::voiceIdCnt
	uint8_t ___voiceIdCnt_11;
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.LocalVoice> ExitGames.Client.Photon.Voice.VoiceClient::localVoices
	Dictionary_2_t2243176396 * ___localVoices_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoice>> ExitGames.Client.Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t4278817149 * ___localVoicesPerChannel_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.RemoteVoice>>> ExitGames.Client.Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t3797886043 * ___remoteVoices_14;
	// System.Random ExitGames.Client.Photon.Voice.VoiceClient::rnd
	Random_t108471755 * ___rnd_15;

public:
	inline static int32_t get_offset_of_frontend_0() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___frontend_0)); }
	inline RuntimeObject* get_frontend_0() const { return ___frontend_0; }
	inline RuntimeObject** get_address_of_frontend_0() { return &___frontend_0; }
	inline void set_frontend_0(RuntimeObject* value)
	{
		___frontend_0 = value;
		Il2CppCodeGenWriteBarrier((&___frontend_0), value);
	}

	inline static int32_t get_offset_of_U3CFramesLostU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___U3CFramesLostU3Ek__BackingField_1)); }
	inline int32_t get_U3CFramesLostU3Ek__BackingField_1() const { return ___U3CFramesLostU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFramesLostU3Ek__BackingField_1() { return &___U3CFramesLostU3Ek__BackingField_1; }
	inline void set_U3CFramesLostU3Ek__BackingField_1(int32_t value)
	{
		___U3CFramesLostU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___U3CFramesReceivedU3Ek__BackingField_2)); }
	inline int32_t get_U3CFramesReceivedU3Ek__BackingField_2() const { return ___U3CFramesReceivedU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFramesReceivedU3Ek__BackingField_2() { return &___U3CFramesReceivedU3Ek__BackingField_2; }
	inline void set_U3CFramesReceivedU3Ek__BackingField_2(int32_t value)
	{
		___U3CFramesReceivedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___U3CRoundTripTimeU3Ek__BackingField_3)); }
	inline int32_t get_U3CRoundTripTimeU3Ek__BackingField_3() const { return ___U3CRoundTripTimeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRoundTripTimeU3Ek__BackingField_3() { return &___U3CRoundTripTimeU3Ek__BackingField_3; }
	inline void set_U3CRoundTripTimeU3Ek__BackingField_3(int32_t value)
	{
		___U3CRoundTripTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeVarianceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___U3CRoundTripTimeVarianceU3Ek__BackingField_4)); }
	inline int32_t get_U3CRoundTripTimeVarianceU3Ek__BackingField_4() const { return ___U3CRoundTripTimeVarianceU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRoundTripTimeVarianceU3Ek__BackingField_4() { return &___U3CRoundTripTimeVarianceU3Ek__BackingField_4; }
	inline void set_U3CRoundTripTimeVarianceU3Ek__BackingField_4(int32_t value)
	{
		___U3CRoundTripTimeVarianceU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5)); }
	inline bool get_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5() const { return ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5() { return &___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5; }
	inline void set_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5(bool value)
	{
		___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6)); }
	inline RemoteVoiceInfoDelegate_t3963975941 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6; }
	inline RemoteVoiceInfoDelegate_t3963975941 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6(RemoteVoiceInfoDelegate_t3963975941 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CDebugLostPercentU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___U3CDebugLostPercentU3Ek__BackingField_7)); }
	inline int32_t get_U3CDebugLostPercentU3Ek__BackingField_7() const { return ___U3CDebugLostPercentU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CDebugLostPercentU3Ek__BackingField_7() { return &___U3CDebugLostPercentU3Ek__BackingField_7; }
	inline void set_U3CDebugLostPercentU3Ek__BackingField_7(int32_t value)
	{
		___U3CDebugLostPercentU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_prevRtt_8() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___prevRtt_8)); }
	inline int32_t get_prevRtt_8() const { return ___prevRtt_8; }
	inline int32_t* get_address_of_prevRtt_8() { return &___prevRtt_8; }
	inline void set_prevRtt_8(int32_t value)
	{
		___prevRtt_8 = value;
	}

	inline static int32_t get_offset_of_globalGroup_10() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___globalGroup_10)); }
	inline uint8_t get_globalGroup_10() const { return ___globalGroup_10; }
	inline uint8_t* get_address_of_globalGroup_10() { return &___globalGroup_10; }
	inline void set_globalGroup_10(uint8_t value)
	{
		___globalGroup_10 = value;
	}

	inline static int32_t get_offset_of_voiceIdCnt_11() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___voiceIdCnt_11)); }
	inline uint8_t get_voiceIdCnt_11() const { return ___voiceIdCnt_11; }
	inline uint8_t* get_address_of_voiceIdCnt_11() { return &___voiceIdCnt_11; }
	inline void set_voiceIdCnt_11(uint8_t value)
	{
		___voiceIdCnt_11 = value;
	}

	inline static int32_t get_offset_of_localVoices_12() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___localVoices_12)); }
	inline Dictionary_2_t2243176396 * get_localVoices_12() const { return ___localVoices_12; }
	inline Dictionary_2_t2243176396 ** get_address_of_localVoices_12() { return &___localVoices_12; }
	inline void set_localVoices_12(Dictionary_2_t2243176396 * value)
	{
		___localVoices_12 = value;
		Il2CppCodeGenWriteBarrier((&___localVoices_12), value);
	}

	inline static int32_t get_offset_of_localVoicesPerChannel_13() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___localVoicesPerChannel_13)); }
	inline Dictionary_2_t4278817149 * get_localVoicesPerChannel_13() const { return ___localVoicesPerChannel_13; }
	inline Dictionary_2_t4278817149 ** get_address_of_localVoicesPerChannel_13() { return &___localVoicesPerChannel_13; }
	inline void set_localVoicesPerChannel_13(Dictionary_2_t4278817149 * value)
	{
		___localVoicesPerChannel_13 = value;
		Il2CppCodeGenWriteBarrier((&___localVoicesPerChannel_13), value);
	}

	inline static int32_t get_offset_of_remoteVoices_14() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___remoteVoices_14)); }
	inline Dictionary_2_t3797886043 * get_remoteVoices_14() const { return ___remoteVoices_14; }
	inline Dictionary_2_t3797886043 ** get_address_of_remoteVoices_14() { return &___remoteVoices_14; }
	inline void set_remoteVoices_14(Dictionary_2_t3797886043 * value)
	{
		___remoteVoices_14 = value;
		Il2CppCodeGenWriteBarrier((&___remoteVoices_14), value);
	}

	inline static int32_t get_offset_of_rnd_15() { return static_cast<int32_t>(offsetof(VoiceClient_t4265131299, ___rnd_15)); }
	inline Random_t108471755 * get_rnd_15() const { return ___rnd_15; }
	inline Random_t108471755 ** get_address_of_rnd_15() { return &___rnd_15; }
	inline void set_rnd_15(Random_t108471755 * value)
	{
		___rnd_15 = value;
		Il2CppCodeGenWriteBarrier((&___rnd_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOICECLIENT_T4265131299_H
#ifndef DICTIONARY_2_T230268132_H
#define DICTIONARY_2_T230268132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>
struct  Dictionary_2_t230268132  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	KeyValuePair_2U5BU5D_t3925083367* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	PhotonVoiceSpeakerU5BU5D_t1538319195* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___keySlots_6)); }
	inline KeyValuePair_2U5BU5D_t3925083367* get_keySlots_6() const { return ___keySlots_6; }
	inline KeyValuePair_2U5BU5D_t3925083367** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(KeyValuePair_2U5BU5D_t3925083367* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___valueSlots_7)); }
	inline PhotonVoiceSpeakerU5BU5D_t1538319195* get_valueSlots_7() const { return ___valueSlots_7; }
	inline PhotonVoiceSpeakerU5BU5D_t1538319195** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(PhotonVoiceSpeakerU5BU5D_t1538319195* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t230268132_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t401347400 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t230268132_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t401347400 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t401347400 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t401347400 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T230268132_H
#ifndef TEAMEXTENSIONS_T2346265574_H
#define TEAMEXTENSIONS_T2346265574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TeamExtensions
struct  TeamExtensions_t2346265574  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEAMEXTENSIONS_T2346265574_H
#ifndef TURNEXTENSIONS_T3150044944_H
#define TURNEXTENSIONS_T3150044944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurnExtensions
struct  TurnExtensions_t3150044944  : public RuntimeObject
{
public:

public:
};

struct TurnExtensions_t3150044944_StaticFields
{
public:
	// System.String TurnExtensions::TurnPropKey
	String_t* ___TurnPropKey_0;
	// System.String TurnExtensions::TurnStartPropKey
	String_t* ___TurnStartPropKey_1;
	// System.String TurnExtensions::FinishedTurnPropKey
	String_t* ___FinishedTurnPropKey_2;

public:
	inline static int32_t get_offset_of_TurnPropKey_0() { return static_cast<int32_t>(offsetof(TurnExtensions_t3150044944_StaticFields, ___TurnPropKey_0)); }
	inline String_t* get_TurnPropKey_0() const { return ___TurnPropKey_0; }
	inline String_t** get_address_of_TurnPropKey_0() { return &___TurnPropKey_0; }
	inline void set_TurnPropKey_0(String_t* value)
	{
		___TurnPropKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___TurnPropKey_0), value);
	}

	inline static int32_t get_offset_of_TurnStartPropKey_1() { return static_cast<int32_t>(offsetof(TurnExtensions_t3150044944_StaticFields, ___TurnStartPropKey_1)); }
	inline String_t* get_TurnStartPropKey_1() const { return ___TurnStartPropKey_1; }
	inline String_t** get_address_of_TurnStartPropKey_1() { return &___TurnStartPropKey_1; }
	inline void set_TurnStartPropKey_1(String_t* value)
	{
		___TurnStartPropKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___TurnStartPropKey_1), value);
	}

	inline static int32_t get_offset_of_FinishedTurnPropKey_2() { return static_cast<int32_t>(offsetof(TurnExtensions_t3150044944_StaticFields, ___FinishedTurnPropKey_2)); }
	inline String_t* get_FinishedTurnPropKey_2() const { return ___FinishedTurnPropKey_2; }
	inline String_t** get_address_of_FinishedTurnPropKey_2() { return &___FinishedTurnPropKey_2; }
	inline void set_FinishedTurnPropKey_2(String_t* value)
	{
		___FinishedTurnPropKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___FinishedTurnPropKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNEXTENSIONS_T3150044944_H
#ifndef TONEAUDIOREADER_T486337998_H
#define TONEAUDIOREADER_T486337998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToneAudioReader
struct  ToneAudioReader_t486337998  : public RuntimeObject
{
public:
	// System.Double ToneAudioReader::k
	double ___k_0;
	// System.Int64 ToneAudioReader::timeSamples
	int64_t ___timeSamples_1;

public:
	inline static int32_t get_offset_of_k_0() { return static_cast<int32_t>(offsetof(ToneAudioReader_t486337998, ___k_0)); }
	inline double get_k_0() const { return ___k_0; }
	inline double* get_address_of_k_0() { return &___k_0; }
	inline void set_k_0(double value)
	{
		___k_0 = value;
	}

	inline static int32_t get_offset_of_timeSamples_1() { return static_cast<int32_t>(offsetof(ToneAudioReader_t486337998, ___timeSamples_1)); }
	inline int64_t get_timeSamples_1() const { return ___timeSamples_1; }
	inline int64_t* get_address_of_timeSamples_1() { return &___timeSamples_1; }
	inline void set_timeSamples_1(int64_t value)
	{
		___timeSamples_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEAUDIOREADER_T486337998_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef LIST_1_T3395709193_H
#define LIST_1_T3395709193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Component>
struct  List_1_t3395709193  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t3294940482* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____items_1)); }
	inline ComponentU5BU5D_t3294940482* get__items_1() const { return ____items_1; }
	inline ComponentU5BU5D_t3294940482** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComponentU5BU5D_t3294940482* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3395709193_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ComponentU5BU5D_t3294940482* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3395709193_StaticFields, ___EmptyArray_4)); }
	inline ComponentU5BU5D_t3294940482* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ComponentU5BU5D_t3294940482** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ComponentU5BU5D_t3294940482* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3395709193_H
#ifndef SCENEMANAGERHELPER_T3665721098_H
#define SCENEMANAGERHELPER_T3665721098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneManagerHelper
struct  SceneManagerHelper_t3665721098  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGERHELPER_T3665721098_H
#ifndef ROOMOPTIONS_T1787645948_H
#define ROOMOPTIONS_T1787645948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomOptions
struct  RoomOptions_t1787645948  : public RuntimeObject
{
public:
	// System.Boolean RoomOptions::isVisibleField
	bool ___isVisibleField_0;
	// System.Boolean RoomOptions::isOpenField
	bool ___isOpenField_1;
	// System.Byte RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean RoomOptions::cleanupCacheOnLeaveField
	bool ___cleanupCacheOnLeaveField_5;
	// ExitGames.Client.Photon.Hashtable RoomOptions::CustomRoomProperties
	Hashtable_t1048209202 * ___CustomRoomProperties_6;
	// System.String[] RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t1281789340* ___CustomRoomPropertiesForLobby_7;
	// System.String[] RoomOptions::Plugins
	StringU5BU5D_t1281789340* ___Plugins_8;
	// System.Boolean RoomOptions::suppressRoomEventsField
	bool ___suppressRoomEventsField_9;
	// System.Boolean RoomOptions::publishUserIdField
	bool ___publishUserIdField_10;
	// System.Boolean RoomOptions::deleteNullPropertiesField
	bool ___deleteNullPropertiesField_11;

public:
	inline static int32_t get_offset_of_isVisibleField_0() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___isVisibleField_0)); }
	inline bool get_isVisibleField_0() const { return ___isVisibleField_0; }
	inline bool* get_address_of_isVisibleField_0() { return &___isVisibleField_0; }
	inline void set_isVisibleField_0(bool value)
	{
		___isVisibleField_0 = value;
	}

	inline static int32_t get_offset_of_isOpenField_1() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___isOpenField_1)); }
	inline bool get_isOpenField_1() const { return ___isOpenField_1; }
	inline bool* get_address_of_isOpenField_1() { return &___isOpenField_1; }
	inline void set_isOpenField_1(bool value)
	{
		___isOpenField_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeaveField_5() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___cleanupCacheOnLeaveField_5)); }
	inline bool get_cleanupCacheOnLeaveField_5() const { return ___cleanupCacheOnLeaveField_5; }
	inline bool* get_address_of_cleanupCacheOnLeaveField_5() { return &___cleanupCacheOnLeaveField_5; }
	inline void set_cleanupCacheOnLeaveField_5(bool value)
	{
		___cleanupCacheOnLeaveField_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___CustomRoomProperties_6)); }
	inline Hashtable_t1048209202 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_t1048209202 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_t1048209202 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&___CustomRoomProperties_6), value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t1281789340* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t1281789340** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t1281789340* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((&___CustomRoomPropertiesForLobby_7), value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___Plugins_8)); }
	inline StringU5BU5D_t1281789340* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t1281789340** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t1281789340* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((&___Plugins_8), value);
	}

	inline static int32_t get_offset_of_suppressRoomEventsField_9() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___suppressRoomEventsField_9)); }
	inline bool get_suppressRoomEventsField_9() const { return ___suppressRoomEventsField_9; }
	inline bool* get_address_of_suppressRoomEventsField_9() { return &___suppressRoomEventsField_9; }
	inline void set_suppressRoomEventsField_9(bool value)
	{
		___suppressRoomEventsField_9 = value;
	}

	inline static int32_t get_offset_of_publishUserIdField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___publishUserIdField_10)); }
	inline bool get_publishUserIdField_10() const { return ___publishUserIdField_10; }
	inline bool* get_address_of_publishUserIdField_10() { return &___publishUserIdField_10; }
	inline void set_publishUserIdField_10(bool value)
	{
		___publishUserIdField_10 = value;
	}

	inline static int32_t get_offset_of_deleteNullPropertiesField_11() { return static_cast<int32_t>(offsetof(RoomOptions_t1787645948, ___deleteNullPropertiesField_11)); }
	inline bool get_deleteNullPropertiesField_11() const { return ___deleteNullPropertiesField_11; }
	inline bool* get_address_of_deleteNullPropertiesField_11() { return &___deleteNullPropertiesField_11; }
	inline void set_deleteNullPropertiesField_11(bool value)
	{
		___deleteNullPropertiesField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMOPTIONS_T1787645948_H
#ifndef DICTIONARY_2_T132545152_H
#define DICTIONARY_2_T132545152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t132545152  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t132545152_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4209139644 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4209139644 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4209139644 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4209139644 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T132545152_H
#ifndef SCOREEXTENSIONS_T185655756_H
#define SCOREEXTENSIONS_T185655756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreExtensions
struct  ScoreExtensions_t185655756  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOREEXTENSIONS_T185655756_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef PHOTONPLAYER_T3305149557_H
#define PHOTONPLAYER_T3305149557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonPlayer
struct  PhotonPlayer_t3305149557  : public RuntimeObject
{
public:
	// System.Int32 PhotonPlayer::actorID
	int32_t ___actorID_0;
	// System.String PhotonPlayer::nameField
	String_t* ___nameField_1;
	// System.String PhotonPlayer::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_2;
	// System.Boolean PhotonPlayer::IsLocal
	bool ___IsLocal_3;
	// System.Boolean PhotonPlayer::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_4;
	// ExitGames.Client.Photon.Hashtable PhotonPlayer::<CustomProperties>k__BackingField
	Hashtable_t1048209202 * ___U3CCustomPropertiesU3Ek__BackingField_5;
	// System.Object PhotonPlayer::TagObject
	RuntimeObject * ___TagObject_6;

public:
	inline static int32_t get_offset_of_actorID_0() { return static_cast<int32_t>(offsetof(PhotonPlayer_t3305149557, ___actorID_0)); }
	inline int32_t get_actorID_0() const { return ___actorID_0; }
	inline int32_t* get_address_of_actorID_0() { return &___actorID_0; }
	inline void set_actorID_0(int32_t value)
	{
		___actorID_0 = value;
	}

	inline static int32_t get_offset_of_nameField_1() { return static_cast<int32_t>(offsetof(PhotonPlayer_t3305149557, ___nameField_1)); }
	inline String_t* get_nameField_1() const { return ___nameField_1; }
	inline String_t** get_address_of_nameField_1() { return &___nameField_1; }
	inline void set_nameField_1(String_t* value)
	{
		___nameField_1 = value;
		Il2CppCodeGenWriteBarrier((&___nameField_1), value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotonPlayer_t3305149557, ___U3CUserIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_2() const { return ___U3CUserIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_2() { return &___U3CUserIdU3Ek__BackingField_2; }
	inline void set_U3CUserIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIdU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_IsLocal_3() { return static_cast<int32_t>(offsetof(PhotonPlayer_t3305149557, ___IsLocal_3)); }
	inline bool get_IsLocal_3() const { return ___IsLocal_3; }
	inline bool* get_address_of_IsLocal_3() { return &___IsLocal_3; }
	inline void set_IsLocal_3(bool value)
	{
		___IsLocal_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PhotonPlayer_t3305149557, ___U3CIsInactiveU3Ek__BackingField_4)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_4() const { return ___U3CIsInactiveU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_4() { return &___U3CIsInactiveU3Ek__BackingField_4; }
	inline void set_U3CIsInactiveU3Ek__BackingField_4(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PhotonPlayer_t3305149557, ___U3CCustomPropertiesU3Ek__BackingField_5)); }
	inline Hashtable_t1048209202 * get_U3CCustomPropertiesU3Ek__BackingField_5() const { return ___U3CCustomPropertiesU3Ek__BackingField_5; }
	inline Hashtable_t1048209202 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_5() { return &___U3CCustomPropertiesU3Ek__BackingField_5; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_5(Hashtable_t1048209202 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCustomPropertiesU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_TagObject_6() { return static_cast<int32_t>(offsetof(PhotonPlayer_t3305149557, ___TagObject_6)); }
	inline RuntimeObject * get_TagObject_6() const { return ___TagObject_6; }
	inline RuntimeObject ** get_address_of_TagObject_6() { return &___TagObject_6; }
	inline void set_TagObject_6(RuntimeObject * value)
	{
		___TagObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___TagObject_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONPLAYER_T3305149557_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ROOMINFO_T3170295620_H
#define ROOMINFO_T3170295620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomInfo
struct  RoomInfo_t3170295620  : public RuntimeObject
{
public:
	// System.Boolean RoomInfo::<removedFromList>k__BackingField
	bool ___U3CremovedFromListU3Ek__BackingField_0;
	// ExitGames.Client.Photon.Hashtable RoomInfo::customPropertiesField
	Hashtable_t1048209202 * ___customPropertiesField_1;
	// System.Byte RoomInfo::maxPlayersField
	uint8_t ___maxPlayersField_2;
	// System.Int32 RoomInfo::emptyRoomTtlField
	int32_t ___emptyRoomTtlField_3;
	// System.Int32 RoomInfo::playerTtlField
	int32_t ___playerTtlField_4;
	// System.String[] RoomInfo::expectedUsersField
	StringU5BU5D_t1281789340* ___expectedUsersField_5;
	// System.Boolean RoomInfo::openField
	bool ___openField_6;
	// System.Boolean RoomInfo::visibleField
	bool ___visibleField_7;
	// System.Boolean RoomInfo::autoCleanUpField
	bool ___autoCleanUpField_8;
	// System.String RoomInfo::nameField
	String_t* ___nameField_9;
	// System.Int32 RoomInfo::masterClientIdField
	int32_t ___masterClientIdField_10;
	// System.Boolean RoomInfo::<serverSideMasterClient>k__BackingField
	bool ___U3CserverSideMasterClientU3Ek__BackingField_11;
	// System.Int32 RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
	// System.Boolean RoomInfo::<IsLocalClientInside>k__BackingField
	bool ___U3CIsLocalClientInsideU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CremovedFromListU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___U3CremovedFromListU3Ek__BackingField_0)); }
	inline bool get_U3CremovedFromListU3Ek__BackingField_0() const { return ___U3CremovedFromListU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CremovedFromListU3Ek__BackingField_0() { return &___U3CremovedFromListU3Ek__BackingField_0; }
	inline void set_U3CremovedFromListU3Ek__BackingField_0(bool value)
	{
		___U3CremovedFromListU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_customPropertiesField_1() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___customPropertiesField_1)); }
	inline Hashtable_t1048209202 * get_customPropertiesField_1() const { return ___customPropertiesField_1; }
	inline Hashtable_t1048209202 ** get_address_of_customPropertiesField_1() { return &___customPropertiesField_1; }
	inline void set_customPropertiesField_1(Hashtable_t1048209202 * value)
	{
		___customPropertiesField_1 = value;
		Il2CppCodeGenWriteBarrier((&___customPropertiesField_1), value);
	}

	inline static int32_t get_offset_of_maxPlayersField_2() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___maxPlayersField_2)); }
	inline uint8_t get_maxPlayersField_2() const { return ___maxPlayersField_2; }
	inline uint8_t* get_address_of_maxPlayersField_2() { return &___maxPlayersField_2; }
	inline void set_maxPlayersField_2(uint8_t value)
	{
		___maxPlayersField_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtlField_3() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___emptyRoomTtlField_3)); }
	inline int32_t get_emptyRoomTtlField_3() const { return ___emptyRoomTtlField_3; }
	inline int32_t* get_address_of_emptyRoomTtlField_3() { return &___emptyRoomTtlField_3; }
	inline void set_emptyRoomTtlField_3(int32_t value)
	{
		___emptyRoomTtlField_3 = value;
	}

	inline static int32_t get_offset_of_playerTtlField_4() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___playerTtlField_4)); }
	inline int32_t get_playerTtlField_4() const { return ___playerTtlField_4; }
	inline int32_t* get_address_of_playerTtlField_4() { return &___playerTtlField_4; }
	inline void set_playerTtlField_4(int32_t value)
	{
		___playerTtlField_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsersField_5() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___expectedUsersField_5)); }
	inline StringU5BU5D_t1281789340* get_expectedUsersField_5() const { return ___expectedUsersField_5; }
	inline StringU5BU5D_t1281789340** get_address_of_expectedUsersField_5() { return &___expectedUsersField_5; }
	inline void set_expectedUsersField_5(StringU5BU5D_t1281789340* value)
	{
		___expectedUsersField_5 = value;
		Il2CppCodeGenWriteBarrier((&___expectedUsersField_5), value);
	}

	inline static int32_t get_offset_of_openField_6() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___openField_6)); }
	inline bool get_openField_6() const { return ___openField_6; }
	inline bool* get_address_of_openField_6() { return &___openField_6; }
	inline void set_openField_6(bool value)
	{
		___openField_6 = value;
	}

	inline static int32_t get_offset_of_visibleField_7() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___visibleField_7)); }
	inline bool get_visibleField_7() const { return ___visibleField_7; }
	inline bool* get_address_of_visibleField_7() { return &___visibleField_7; }
	inline void set_visibleField_7(bool value)
	{
		___visibleField_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUpField_8() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___autoCleanUpField_8)); }
	inline bool get_autoCleanUpField_8() const { return ___autoCleanUpField_8; }
	inline bool* get_address_of_autoCleanUpField_8() { return &___autoCleanUpField_8; }
	inline void set_autoCleanUpField_8(bool value)
	{
		___autoCleanUpField_8 = value;
	}

	inline static int32_t get_offset_of_nameField_9() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___nameField_9)); }
	inline String_t* get_nameField_9() const { return ___nameField_9; }
	inline String_t** get_address_of_nameField_9() { return &___nameField_9; }
	inline void set_nameField_9(String_t* value)
	{
		___nameField_9 = value;
		Il2CppCodeGenWriteBarrier((&___nameField_9), value);
	}

	inline static int32_t get_offset_of_masterClientIdField_10() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___masterClientIdField_10)); }
	inline int32_t get_masterClientIdField_10() const { return ___masterClientIdField_10; }
	inline int32_t* get_address_of_masterClientIdField_10() { return &___masterClientIdField_10; }
	inline void set_masterClientIdField_10(int32_t value)
	{
		___masterClientIdField_10 = value;
	}

	inline static int32_t get_offset_of_U3CserverSideMasterClientU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___U3CserverSideMasterClientU3Ek__BackingField_11)); }
	inline bool get_U3CserverSideMasterClientU3Ek__BackingField_11() const { return ___U3CserverSideMasterClientU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CserverSideMasterClientU3Ek__BackingField_11() { return &___U3CserverSideMasterClientU3Ek__BackingField_11; }
	inline void set_U3CserverSideMasterClientU3Ek__BackingField_11(bool value)
	{
		___U3CserverSideMasterClientU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsLocalClientInsideU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RoomInfo_t3170295620, ___U3CIsLocalClientInsideU3Ek__BackingField_13)); }
	inline bool get_U3CIsLocalClientInsideU3Ek__BackingField_13() const { return ___U3CIsLocalClientInsideU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsLocalClientInsideU3Ek__BackingField_13() { return &___U3CIsLocalClientInsideU3Ek__BackingField_13; }
	inline void set_U3CIsLocalClientInsideU3Ek__BackingField_13(bool value)
	{
		___U3CIsLocalClientInsideU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMINFO_T3170295620_H
#ifndef HASHTABLE_T1048209202_H
#define HASHTABLE_T1048209202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Hashtable
struct  Hashtable_t1048209202  : public Dictionary_2_t132545152
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1048209202_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef KEYVALUEPAIR_2_T2420681874_H
#define KEYVALUEPAIR_2_T2420681874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>
struct  KeyValuePair_2_t2420681874 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint8_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2420681874, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2420681874, ___value_1)); }
	inline uint8_t get_value_1() const { return ___value_1; }
	inline uint8_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint8_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2420681874_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef REMOTEVOICEOPTIONS_T865076648_H
#define REMOTEVOICEOPTIONS_T865076648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.RemoteVoiceOptions
struct  RemoteVoiceOptions_t865076648 
{
public:
	// System.Action`1<System.Byte[]> ExitGames.Client.Photon.Voice.RemoteVoiceOptions::<OnDecodedFrameByteAction>k__BackingField
	Action_1_t4289115252 * ___U3COnDecodedFrameByteActionU3Ek__BackingField_0;
	// System.Action`1<System.Single[]> ExitGames.Client.Photon.Voice.RemoteVoiceOptions::<OnDecodedFrameFloatAction>k__BackingField
	Action_1_t1617378846 * ___U3COnDecodedFrameFloatActionU3Ek__BackingField_1;
	// System.Action`1<System.Int16[]> ExitGames.Client.Photon.Voice.RemoteVoiceOptions::<OnDecodedFrameShortAction>k__BackingField
	Action_1_t3859307773 * ___U3COnDecodedFrameShortActionU3Ek__BackingField_2;
	// System.Action ExitGames.Client.Photon.Voice.RemoteVoiceOptions::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_t1264377477 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3;
	// System.Object ExitGames.Client.Photon.Voice.RemoteVoiceOptions::<LocalUserObject>k__BackingField
	RuntimeObject * ___U3CLocalUserObjectU3Ek__BackingField_4;
	// ExitGames.Client.Photon.Voice.IDecoder ExitGames.Client.Photon.Voice.RemoteVoiceOptions::<Decoder>k__BackingField
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3COnDecodedFrameByteActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t865076648, ___U3COnDecodedFrameByteActionU3Ek__BackingField_0)); }
	inline Action_1_t4289115252 * get_U3COnDecodedFrameByteActionU3Ek__BackingField_0() const { return ___U3COnDecodedFrameByteActionU3Ek__BackingField_0; }
	inline Action_1_t4289115252 ** get_address_of_U3COnDecodedFrameByteActionU3Ek__BackingField_0() { return &___U3COnDecodedFrameByteActionU3Ek__BackingField_0; }
	inline void set_U3COnDecodedFrameByteActionU3Ek__BackingField_0(Action_1_t4289115252 * value)
	{
		___U3COnDecodedFrameByteActionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnDecodedFrameByteActionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3COnDecodedFrameFloatActionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t865076648, ___U3COnDecodedFrameFloatActionU3Ek__BackingField_1)); }
	inline Action_1_t1617378846 * get_U3COnDecodedFrameFloatActionU3Ek__BackingField_1() const { return ___U3COnDecodedFrameFloatActionU3Ek__BackingField_1; }
	inline Action_1_t1617378846 ** get_address_of_U3COnDecodedFrameFloatActionU3Ek__BackingField_1() { return &___U3COnDecodedFrameFloatActionU3Ek__BackingField_1; }
	inline void set_U3COnDecodedFrameFloatActionU3Ek__BackingField_1(Action_1_t1617378846 * value)
	{
		___U3COnDecodedFrameFloatActionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnDecodedFrameFloatActionU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3COnDecodedFrameShortActionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t865076648, ___U3COnDecodedFrameShortActionU3Ek__BackingField_2)); }
	inline Action_1_t3859307773 * get_U3COnDecodedFrameShortActionU3Ek__BackingField_2() const { return ___U3COnDecodedFrameShortActionU3Ek__BackingField_2; }
	inline Action_1_t3859307773 ** get_address_of_U3COnDecodedFrameShortActionU3Ek__BackingField_2() { return &___U3COnDecodedFrameShortActionU3Ek__BackingField_2; }
	inline void set_U3COnDecodedFrameShortActionU3Ek__BackingField_2(Action_1_t3859307773 * value)
	{
		___U3COnDecodedFrameShortActionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnDecodedFrameShortActionU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t865076648, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3)); }
	inline Action_t1264377477 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3; }
	inline Action_t1264377477 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3(Action_t1264377477 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CLocalUserObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t865076648, ___U3CLocalUserObjectU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CLocalUserObjectU3Ek__BackingField_4() const { return ___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CLocalUserObjectU3Ek__BackingField_4() { return &___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline void set_U3CLocalUserObjectU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CLocalUserObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocalUserObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CDecoderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t865076648, ___U3CDecoderU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CDecoderU3Ek__BackingField_5() const { return ___U3CDecoderU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CDecoderU3Ek__BackingField_5() { return &___U3CDecoderU3Ek__BackingField_5; }
	inline void set_U3CDecoderU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CDecoderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDecoderU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t865076648_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3COnDecodedFrameByteActionU3Ek__BackingField_0;
	Il2CppMethodPointer ___U3COnDecodedFrameFloatActionU3Ek__BackingField_1;
	Il2CppMethodPointer ___U3COnDecodedFrameShortActionU3Ek__BackingField_2;
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CLocalUserObjectU3Ek__BackingField_4;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_5;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t865076648_marshaled_com
{
	Il2CppMethodPointer ___U3COnDecodedFrameByteActionU3Ek__BackingField_0;
	Il2CppMethodPointer ___U3COnDecodedFrameFloatActionU3Ek__BackingField_1;
	Il2CppMethodPointer ___U3COnDecodedFrameShortActionU3Ek__BackingField_2;
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CLocalUserObjectU3Ek__BackingField_4;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_5;
};
#endif // REMOTEVOICEOPTIONS_T865076648_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ROOM_T3759828263_H
#define ROOM_T3759828263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Room
struct  Room_t3759828263  : public RoomInfo_t3170295620
{
public:
	// System.String[] Room::<PropertiesListedInLobby>k__BackingField
	StringU5BU5D_t1281789340* ___U3CPropertiesListedInLobbyU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CPropertiesListedInLobbyU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Room_t3759828263, ___U3CPropertiesListedInLobbyU3Ek__BackingField_14)); }
	inline StringU5BU5D_t1281789340* get_U3CPropertiesListedInLobbyU3Ek__BackingField_14() const { return ___U3CPropertiesListedInLobbyU3Ek__BackingField_14; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CPropertiesListedInLobbyU3Ek__BackingField_14() { return &___U3CPropertiesListedInLobbyU3Ek__BackingField_14; }
	inline void set_U3CPropertiesListedInLobbyU3Ek__BackingField_14(StringU5BU5D_t1281789340* value)
	{
		___U3CPropertiesListedInLobbyU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertiesListedInLobbyU3Ek__BackingField_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOM_T3759828263_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef ENUMERATOR_T989985774_H
#define ENUMERATOR_T989985774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
struct  Enumerator_t989985774 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3395709193 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Component_t1923634451 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___l_0)); }
	inline List_1_t3395709193 * get_l_0() const { return ___l_0; }
	inline List_1_t3395709193 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3395709193 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___current_3)); }
	inline Component_t1923634451 * get_current_3() const { return ___current_3; }
	inline Component_t1923634451 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Component_t1923634451 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T989985774_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef PHOTONMESSAGEINFO_T3855471533_H
#define PHOTONMESSAGEINFO_T3855471533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonMessageInfo
struct  PhotonMessageInfo_t3855471533 
{
public:
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t3305149557 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t2207721820 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3855471533, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3855471533, ___sender_1)); }
	inline PhotonPlayer_t3305149557 * get_sender_1() const { return ___sender_1; }
	inline PhotonPlayer_t3305149557 ** get_address_of_sender_1() { return &___sender_1; }
	inline void set_sender_1(PhotonPlayer_t3305149557 * value)
	{
		___sender_1 = value;
		Il2CppCodeGenWriteBarrier((&___sender_1), value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t3855471533, ___photonView_2)); }
	inline PhotonView_t2207721820 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t2207721820 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t2207721820 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PhotonMessageInfo
struct PhotonMessageInfo_t3855471533_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	PhotonPlayer_t3305149557 * ___sender_1;
	PhotonView_t2207721820 * ___photonView_2;
};
// Native definition for COM marshalling of PhotonMessageInfo
struct PhotonMessageInfo_t3855471533_marshaled_com
{
	int32_t ___timeInt_0;
	PhotonPlayer_t3305149557 * ___sender_1;
	PhotonView_t2207721820 * ___photonView_2;
};
#endif // PHOTONMESSAGEINFO_T3855471533_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef CLIENTSTATE_T471057680_H
#define CLIENTSTATE_T471057680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.ClientState
struct  ClientState_t471057680 
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.ClientState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClientState_t471057680, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSTATE_T471057680_H
#ifndef ONSERIALIZERIGIDBODY_T385167779_H
#define ONSERIALIZERIGIDBODY_T385167779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnSerializeRigidBody
struct  OnSerializeRigidBody_t385167779 
{
public:
	// System.Int32 OnSerializeRigidBody::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OnSerializeRigidBody_t385167779, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZERIGIDBODY_T385167779_H
#ifndef OWNERSHIPOPTION_T37885007_H
#define OWNERSHIPOPTION_T37885007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OwnershipOption
struct  OwnershipOption_t37885007 
{
public:
	// System.Int32 OwnershipOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OwnershipOption_t37885007, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OWNERSHIPOPTION_T37885007_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef CONNECTIONPROTOCOL_T2586603950_H
#define CONNECTIONPROTOCOL_T2586603950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t2586603950 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t2586603950, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONPROTOCOL_T2586603950_H
#ifndef LOBBYTYPE_T3695323860_H
#define LOBBYTYPE_T3695323860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LobbyType
struct  LobbyType_t3695323860 
{
public:
	// System.Byte LobbyType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LobbyType_t3695323860, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYTYPE_T3695323860_H
#ifndef SERIALIZATIONPROTOCOL_T4091957412_H
#define SERIALIZATIONPROTOCOL_T4091957412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t4091957412 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationProtocol_t4091957412, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONPROTOCOL_T4091957412_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef CODEC_T4264890781_H
#define CODEC_T4264890781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.Codec
struct  Codec_t4264890781 
{
public:
	// System.Int32 ExitGames.Client.Photon.Voice.Codec::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Codec_t4264890781, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEC_T4264890781_H
#ifndef ONSERIALIZETRANSFORM_T1364648257_H
#define ONSERIALIZETRANSFORM_T1364648257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnSerializeTransform
struct  OnSerializeTransform_t1364648257 
{
public:
	// System.Int32 OnSerializeTransform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OnSerializeTransform_t1364648257, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZETRANSFORM_T1364648257_H
#ifndef SERVERCONNECTION_T2242734515_H
#define SERVERCONNECTION_T2242734515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.ServerConnection
struct  ServerConnection_t2242734515 
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.ServerConnection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ServerConnection_t2242734515, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONNECTION_T2242734515_H
#ifndef ENCRYPTIONMODE_T4213192103_H
#define ENCRYPTIONMODE_T4213192103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EncryptionMode
struct  EncryptionMode_t4213192103 
{
public:
	// System.Int32 EncryptionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EncryptionMode_t4213192103, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTIONMODE_T4213192103_H
#ifndef AUTHMODEOPTION_T1305270560_H
#define AUTHMODEOPTION_T1305270560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AuthModeOption
struct  AuthModeOption_t1305270560 
{
public:
	// System.Int32 AuthModeOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthModeOption_t1305270560, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHMODEOPTION_T1305270560_H
#ifndef DISCONNECTCAUSE_T1508546897_H
#define DISCONNECTCAUSE_T1508546897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.DisconnectCause
struct  DisconnectCause_t1508546897 
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.DisconnectCause::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DisconnectCause_t1508546897, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISCONNECTCAUSE_T1508546897_H
#ifndef JOINTYPE_T3510207077_H
#define JOINTYPE_T3510207077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoinType
struct  JoinType_t3510207077 
{
public:
	// System.Int32 JoinType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JoinType_t3510207077, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINTYPE_T3510207077_H
#ifndef ENCRYPTIONMODE_T989465875_H
#define ENCRYPTIONMODE_T989465875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.EncryptionMode
struct  EncryptionMode_t989465875 
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.EncryptionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EncryptionMode_t989465875, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTIONMODE_T989465875_H
#ifndef VIEWSYNCHRONIZATION_T3183556584_H
#define VIEWSYNCHRONIZATION_T3183556584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewSynchronization
struct  ViewSynchronization_t3183556584 
{
public:
	// System.Int32 ViewSynchronization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ViewSynchronization_t3183556584, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWSYNCHRONIZATION_T3183556584_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef JOINTYPE_T978777840_H
#define JOINTYPE_T978777840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.JoinType
struct  JoinType_t978777840 
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.JoinType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JoinType_t978777840, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINTYPE_T978777840_H
#ifndef PHOTONLOGLEVEL_T4226222036_H
#define PHOTONLOGLEVEL_T4226222036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonLogLevel
struct  PhotonLogLevel_t4226222036 
{
public:
	// System.Int32 PhotonLogLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PhotonLogLevel_t4226222036, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONLOGLEVEL_T4226222036_H
#ifndef AUTHMODEOPTION_T1537014873_H
#define AUTHMODEOPTION_T1537014873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.AuthModeOption
struct  AuthModeOption_t1537014873 
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.AuthModeOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthModeOption_t1537014873, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHMODEOPTION_T1537014873_H
#ifndef ENUMERATOR_T1487033197_H
#define ENUMERATOR_T1487033197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>
struct  Enumerator_t1487033197 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3892756616 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_t2420681874  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1487033197, ___l_0)); }
	inline List_1_t3892756616 * get_l_0() const { return ___l_0; }
	inline List_1_t3892756616 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3892756616 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1487033197, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1487033197, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1487033197, ___current_3)); }
	inline KeyValuePair_2_t2420681874  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2420681874 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2420681874  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1487033197_H
#ifndef KEYVALUEPAIR_2_T3611361361_H
#define KEYVALUEPAIR_2_T3611361361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>
struct  KeyValuePair_2_t3611361361 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	KeyValuePair_2_t2420681874  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3611361361, ___key_0)); }
	inline KeyValuePair_2_t2420681874  get_key_0() const { return ___key_0; }
	inline KeyValuePair_2_t2420681874 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(KeyValuePair_2_t2420681874  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3611361361, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3611361361_H
#ifndef KEYVALUEPAIR_2_T2627940299_H
#define KEYVALUEPAIR_2_T2627940299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>
struct  KeyValuePair_2_t2627940299 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	KeyValuePair_2_t2420681874  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PhotonVoiceSpeaker_t2096685102 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2627940299, ___key_0)); }
	inline KeyValuePair_2_t2420681874  get_key_0() const { return ___key_0; }
	inline KeyValuePair_2_t2420681874 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(KeyValuePair_2_t2420681874  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2627940299, ___value_1)); }
	inline PhotonVoiceSpeaker_t2096685102 * get_value_1() const { return ___value_1; }
	inline PhotonVoiceSpeaker_t2096685102 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PhotonVoiceSpeaker_t2096685102 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2627940299_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef FRAMEDURATION_T3855528189_H
#define FRAMEDURATION_T3855528189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.OpusCodec/FrameDuration
struct  FrameDuration_t3855528189 
{
public:
	// System.Int32 ExitGames.Client.Photon.Voice.OpusCodec/FrameDuration::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FrameDuration_t3855528189, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDURATION_T3855528189_H
#ifndef MICAUDIOSOURCETYPE_T151145059_H
#define MICAUDIOSOURCETYPE_T151145059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonVoiceSettings/MicAudioSourceType
struct  MicAudioSourceType_t151145059 
{
public:
	// System.Int32 PhotonVoiceSettings/MicAudioSourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MicAudioSourceType_t151145059, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MICAUDIOSOURCETYPE_T151145059_H
#ifndef TYPE_T3858932131_H
#define TYPE_T3858932131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t3858932131 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t3858932131, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T3858932131_H
#ifndef SAMPLINGRATE_T4175365881_H
#define SAMPLINGRATE_T4175365881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// POpusCodec.Enums.SamplingRate
struct  SamplingRate_t4175365881 
{
public:
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SamplingRate_t4175365881, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLINGRATE_T4175365881_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef CLIENTSTATE_T1348705391_H
#define CLIENTSTATE_T1348705391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClientState
struct  ClientState_t1348705391 
{
public:
	// System.Int32 ClientState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClientState_t1348705391, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSTATE_T1348705391_H
#ifndef SERVERCONNECTION_T867335480_H
#define SERVERCONNECTION_T867335480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServerConnection
struct  ServerConnection_t867335480 
{
public:
	// System.Int32 ServerConnection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ServerConnection_t867335480, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONNECTION_T867335480_H
#ifndef AUDIOSPEAKERMODE_T101565544_H
#define AUDIOSPEAKERMODE_T101565544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSpeakerMode
struct  AudioSpeakerMode_t101565544 
{
public:
	// System.Int32 UnityEngine.AudioSpeakerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioSpeakerMode_t101565544, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSPEAKERMODE_T101565544_H
#ifndef DISCONNECTCAUSE_T501870387_H
#define DISCONNECTCAUSE_T501870387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisconnectCause
struct  DisconnectCause_t501870387 
{
public:
	// System.Int32 DisconnectCause::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DisconnectCause_t501870387, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISCONNECTCAUSE_T501870387_H
#ifndef HOSTINGOPTION_T2949276063_H
#define HOSTINGOPTION_T2949276063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServerSettings/HostingOption
struct  HostingOption_t2949276063 
{
public:
	// System.Int32 ServerSettings/HostingOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostingOption_t2949276063, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTINGOPTION_T2949276063_H
#ifndef DEBUGLEVEL_T3671880145_H
#define DEBUGLEVEL_T3671880145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t3671880145 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevel_t3671880145, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVEL_T3671880145_H
#ifndef TEAM_T2865224648_H
#define TEAM_T2865224648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams/Team
struct  Team_t2865224648 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Team_t2865224648, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEAM_T2865224648_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef CLOUDREGIONCODE_T1925019500_H
#define CLOUDREGIONCODE_T1925019500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudRegionCode
struct  CloudRegionCode_t1925019500 
{
public:
	// System.Int32 CloudRegionCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CloudRegionCode_t1925019500, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOUDREGIONCODE_T1925019500_H
#ifndef LOBBYTYPE_T4151354725_H
#define LOBBYTYPE_T4151354725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.LobbyType
struct  LobbyType_t4151354725 
{
public:
	// System.Byte ExitGames.Client.Photon.LoadBalancing.LobbyType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LobbyType_t4151354725, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOBBYTYPE_T4151354725_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SPEEXPROCESSOR_T2344027106_H
#define SPEEXPROCESSOR_T2344027106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.SpeexProcessor
struct  SpeexProcessor_t2344027106  : public SpeexLib_t277051236
{
public:
	// System.Boolean ExitGames.Client.Photon.Voice.SpeexProcessor::_AEC
	bool ____AEC_47;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::<AECFilterLengthMs>k__BackingField
	int32_t ___U3CAECFilterLengthMsU3Ek__BackingField_48;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::_AECPlaybackDelayMs
	int32_t ____AECPlaybackDelayMs_49;
	// System.Boolean ExitGames.Client.Photon.Voice.SpeexProcessor::_AECLatencyDetect
	bool ____AECLatencyDetect_50;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::frameSamples
	int32_t ___frameSamples_51;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::samplingRate
	int32_t ___samplingRate_52;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::channels
	int32_t ___channels_53;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::playDelayFrames
	int32_t ___playDelayFrames_54;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::playDelayMaxFrames
	int32_t ___playDelayMaxFrames_55;
	// System.IntPtr ExitGames.Client.Photon.Voice.SpeexProcessor::stEcho
	intptr_t ___stEcho_56;
	// System.IntPtr ExitGames.Client.Photon.Voice.SpeexProcessor::st
	intptr_t ___st_57;
	// System.Boolean ExitGames.Client.Photon.Voice.SpeexProcessor::disposed
	bool ___disposed_58;
	// System.Int16[] ExitGames.Client.Photon.Voice.SpeexProcessor::resultBuf
	Int16U5BU5D_t3686840178* ___resultBuf_59;
	// ExitGames.Client.Photon.Voice.PrimitiveArrayPool`1<System.Int16> ExitGames.Client.Photon.Voice.SpeexProcessor::playbackBufPool
	PrimitiveArrayPool_1_t2830692541 * ___playbackBufPool_60;
	// System.Collections.Generic.Queue`1<System.Int16[]> ExitGames.Client.Photon.Voice.SpeexProcessor::playBufQueue
	Queue_1_t3533099672 * ___playBufQueue_61;
	// ExitGames.Client.Photon.Voice.Framer`1<System.Single> ExitGames.Client.Photon.Voice.SpeexProcessor::playFramer
	Framer_1_t3123394556 * ___playFramer_62;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::playSamplingRate
	int32_t ___playSamplingRate_63;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::playChannels
	int32_t ___playChannels_64;
	// ExitGames.Client.Photon.Voice.ILogger ExitGames.Client.Photon.Voice.SpeexProcessor::logger
	RuntimeObject* ___logger_65;
	// System.Func`1<System.Int64> ExitGames.Client.Photon.Voice.SpeexProcessor::clockMs
	Func_1_t3166313951 * ___clockMs_66;
	// ExitGames.Client.Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Single> ExitGames.Client.Photon.Voice.SpeexProcessor::detectPlay
	VoiceLevelDetectCalibrate_1_t1491991209 * ___detectPlay_67;
	// ExitGames.Client.Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Int16> ExitGames.Client.Photon.Voice.SpeexProcessor::detectPlayCorr
	VoiceLevelDetectCalibrate_1_t2647544822 * ___detectPlayCorr_68;
	// ExitGames.Client.Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Int16> ExitGames.Client.Photon.Voice.SpeexProcessor::detectRec
	VoiceLevelDetectCalibrate_1_t2647544822 * ___detectRec_69;
	// System.Int64 ExitGames.Client.Photon.Voice.SpeexProcessor::detectTimePlay
	int64_t ___detectTimePlay_70;
	// System.Int64 ExitGames.Client.Photon.Voice.SpeexProcessor::detectTimePlayDelayed
	int64_t ___detectTimePlayDelayed_71;
	// System.Int64 ExitGames.Client.Photon.Voice.SpeexProcessor::detectTimeRec
	int64_t ___detectTimeRec_72;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::frameCntRec
	int32_t ___frameCntRec_73;
	// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::frameCntPlay
	int32_t ___frameCntPlay_74;

public:
	inline static int32_t get_offset_of__AEC_47() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ____AEC_47)); }
	inline bool get__AEC_47() const { return ____AEC_47; }
	inline bool* get_address_of__AEC_47() { return &____AEC_47; }
	inline void set__AEC_47(bool value)
	{
		____AEC_47 = value;
	}

	inline static int32_t get_offset_of_U3CAECFilterLengthMsU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___U3CAECFilterLengthMsU3Ek__BackingField_48)); }
	inline int32_t get_U3CAECFilterLengthMsU3Ek__BackingField_48() const { return ___U3CAECFilterLengthMsU3Ek__BackingField_48; }
	inline int32_t* get_address_of_U3CAECFilterLengthMsU3Ek__BackingField_48() { return &___U3CAECFilterLengthMsU3Ek__BackingField_48; }
	inline void set_U3CAECFilterLengthMsU3Ek__BackingField_48(int32_t value)
	{
		___U3CAECFilterLengthMsU3Ek__BackingField_48 = value;
	}

	inline static int32_t get_offset_of__AECPlaybackDelayMs_49() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ____AECPlaybackDelayMs_49)); }
	inline int32_t get__AECPlaybackDelayMs_49() const { return ____AECPlaybackDelayMs_49; }
	inline int32_t* get_address_of__AECPlaybackDelayMs_49() { return &____AECPlaybackDelayMs_49; }
	inline void set__AECPlaybackDelayMs_49(int32_t value)
	{
		____AECPlaybackDelayMs_49 = value;
	}

	inline static int32_t get_offset_of__AECLatencyDetect_50() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ____AECLatencyDetect_50)); }
	inline bool get__AECLatencyDetect_50() const { return ____AECLatencyDetect_50; }
	inline bool* get_address_of__AECLatencyDetect_50() { return &____AECLatencyDetect_50; }
	inline void set__AECLatencyDetect_50(bool value)
	{
		____AECLatencyDetect_50 = value;
	}

	inline static int32_t get_offset_of_frameSamples_51() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___frameSamples_51)); }
	inline int32_t get_frameSamples_51() const { return ___frameSamples_51; }
	inline int32_t* get_address_of_frameSamples_51() { return &___frameSamples_51; }
	inline void set_frameSamples_51(int32_t value)
	{
		___frameSamples_51 = value;
	}

	inline static int32_t get_offset_of_samplingRate_52() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___samplingRate_52)); }
	inline int32_t get_samplingRate_52() const { return ___samplingRate_52; }
	inline int32_t* get_address_of_samplingRate_52() { return &___samplingRate_52; }
	inline void set_samplingRate_52(int32_t value)
	{
		___samplingRate_52 = value;
	}

	inline static int32_t get_offset_of_channels_53() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___channels_53)); }
	inline int32_t get_channels_53() const { return ___channels_53; }
	inline int32_t* get_address_of_channels_53() { return &___channels_53; }
	inline void set_channels_53(int32_t value)
	{
		___channels_53 = value;
	}

	inline static int32_t get_offset_of_playDelayFrames_54() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___playDelayFrames_54)); }
	inline int32_t get_playDelayFrames_54() const { return ___playDelayFrames_54; }
	inline int32_t* get_address_of_playDelayFrames_54() { return &___playDelayFrames_54; }
	inline void set_playDelayFrames_54(int32_t value)
	{
		___playDelayFrames_54 = value;
	}

	inline static int32_t get_offset_of_playDelayMaxFrames_55() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___playDelayMaxFrames_55)); }
	inline int32_t get_playDelayMaxFrames_55() const { return ___playDelayMaxFrames_55; }
	inline int32_t* get_address_of_playDelayMaxFrames_55() { return &___playDelayMaxFrames_55; }
	inline void set_playDelayMaxFrames_55(int32_t value)
	{
		___playDelayMaxFrames_55 = value;
	}

	inline static int32_t get_offset_of_stEcho_56() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___stEcho_56)); }
	inline intptr_t get_stEcho_56() const { return ___stEcho_56; }
	inline intptr_t* get_address_of_stEcho_56() { return &___stEcho_56; }
	inline void set_stEcho_56(intptr_t value)
	{
		___stEcho_56 = value;
	}

	inline static int32_t get_offset_of_st_57() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___st_57)); }
	inline intptr_t get_st_57() const { return ___st_57; }
	inline intptr_t* get_address_of_st_57() { return &___st_57; }
	inline void set_st_57(intptr_t value)
	{
		___st_57 = value;
	}

	inline static int32_t get_offset_of_disposed_58() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___disposed_58)); }
	inline bool get_disposed_58() const { return ___disposed_58; }
	inline bool* get_address_of_disposed_58() { return &___disposed_58; }
	inline void set_disposed_58(bool value)
	{
		___disposed_58 = value;
	}

	inline static int32_t get_offset_of_resultBuf_59() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___resultBuf_59)); }
	inline Int16U5BU5D_t3686840178* get_resultBuf_59() const { return ___resultBuf_59; }
	inline Int16U5BU5D_t3686840178** get_address_of_resultBuf_59() { return &___resultBuf_59; }
	inline void set_resultBuf_59(Int16U5BU5D_t3686840178* value)
	{
		___resultBuf_59 = value;
		Il2CppCodeGenWriteBarrier((&___resultBuf_59), value);
	}

	inline static int32_t get_offset_of_playbackBufPool_60() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___playbackBufPool_60)); }
	inline PrimitiveArrayPool_1_t2830692541 * get_playbackBufPool_60() const { return ___playbackBufPool_60; }
	inline PrimitiveArrayPool_1_t2830692541 ** get_address_of_playbackBufPool_60() { return &___playbackBufPool_60; }
	inline void set_playbackBufPool_60(PrimitiveArrayPool_1_t2830692541 * value)
	{
		___playbackBufPool_60 = value;
		Il2CppCodeGenWriteBarrier((&___playbackBufPool_60), value);
	}

	inline static int32_t get_offset_of_playBufQueue_61() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___playBufQueue_61)); }
	inline Queue_1_t3533099672 * get_playBufQueue_61() const { return ___playBufQueue_61; }
	inline Queue_1_t3533099672 ** get_address_of_playBufQueue_61() { return &___playBufQueue_61; }
	inline void set_playBufQueue_61(Queue_1_t3533099672 * value)
	{
		___playBufQueue_61 = value;
		Il2CppCodeGenWriteBarrier((&___playBufQueue_61), value);
	}

	inline static int32_t get_offset_of_playFramer_62() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___playFramer_62)); }
	inline Framer_1_t3123394556 * get_playFramer_62() const { return ___playFramer_62; }
	inline Framer_1_t3123394556 ** get_address_of_playFramer_62() { return &___playFramer_62; }
	inline void set_playFramer_62(Framer_1_t3123394556 * value)
	{
		___playFramer_62 = value;
		Il2CppCodeGenWriteBarrier((&___playFramer_62), value);
	}

	inline static int32_t get_offset_of_playSamplingRate_63() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___playSamplingRate_63)); }
	inline int32_t get_playSamplingRate_63() const { return ___playSamplingRate_63; }
	inline int32_t* get_address_of_playSamplingRate_63() { return &___playSamplingRate_63; }
	inline void set_playSamplingRate_63(int32_t value)
	{
		___playSamplingRate_63 = value;
	}

	inline static int32_t get_offset_of_playChannels_64() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___playChannels_64)); }
	inline int32_t get_playChannels_64() const { return ___playChannels_64; }
	inline int32_t* get_address_of_playChannels_64() { return &___playChannels_64; }
	inline void set_playChannels_64(int32_t value)
	{
		___playChannels_64 = value;
	}

	inline static int32_t get_offset_of_logger_65() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___logger_65)); }
	inline RuntimeObject* get_logger_65() const { return ___logger_65; }
	inline RuntimeObject** get_address_of_logger_65() { return &___logger_65; }
	inline void set_logger_65(RuntimeObject* value)
	{
		___logger_65 = value;
		Il2CppCodeGenWriteBarrier((&___logger_65), value);
	}

	inline static int32_t get_offset_of_clockMs_66() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___clockMs_66)); }
	inline Func_1_t3166313951 * get_clockMs_66() const { return ___clockMs_66; }
	inline Func_1_t3166313951 ** get_address_of_clockMs_66() { return &___clockMs_66; }
	inline void set_clockMs_66(Func_1_t3166313951 * value)
	{
		___clockMs_66 = value;
		Il2CppCodeGenWriteBarrier((&___clockMs_66), value);
	}

	inline static int32_t get_offset_of_detectPlay_67() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___detectPlay_67)); }
	inline VoiceLevelDetectCalibrate_1_t1491991209 * get_detectPlay_67() const { return ___detectPlay_67; }
	inline VoiceLevelDetectCalibrate_1_t1491991209 ** get_address_of_detectPlay_67() { return &___detectPlay_67; }
	inline void set_detectPlay_67(VoiceLevelDetectCalibrate_1_t1491991209 * value)
	{
		___detectPlay_67 = value;
		Il2CppCodeGenWriteBarrier((&___detectPlay_67), value);
	}

	inline static int32_t get_offset_of_detectPlayCorr_68() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___detectPlayCorr_68)); }
	inline VoiceLevelDetectCalibrate_1_t2647544822 * get_detectPlayCorr_68() const { return ___detectPlayCorr_68; }
	inline VoiceLevelDetectCalibrate_1_t2647544822 ** get_address_of_detectPlayCorr_68() { return &___detectPlayCorr_68; }
	inline void set_detectPlayCorr_68(VoiceLevelDetectCalibrate_1_t2647544822 * value)
	{
		___detectPlayCorr_68 = value;
		Il2CppCodeGenWriteBarrier((&___detectPlayCorr_68), value);
	}

	inline static int32_t get_offset_of_detectRec_69() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___detectRec_69)); }
	inline VoiceLevelDetectCalibrate_1_t2647544822 * get_detectRec_69() const { return ___detectRec_69; }
	inline VoiceLevelDetectCalibrate_1_t2647544822 ** get_address_of_detectRec_69() { return &___detectRec_69; }
	inline void set_detectRec_69(VoiceLevelDetectCalibrate_1_t2647544822 * value)
	{
		___detectRec_69 = value;
		Il2CppCodeGenWriteBarrier((&___detectRec_69), value);
	}

	inline static int32_t get_offset_of_detectTimePlay_70() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___detectTimePlay_70)); }
	inline int64_t get_detectTimePlay_70() const { return ___detectTimePlay_70; }
	inline int64_t* get_address_of_detectTimePlay_70() { return &___detectTimePlay_70; }
	inline void set_detectTimePlay_70(int64_t value)
	{
		___detectTimePlay_70 = value;
	}

	inline static int32_t get_offset_of_detectTimePlayDelayed_71() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___detectTimePlayDelayed_71)); }
	inline int64_t get_detectTimePlayDelayed_71() const { return ___detectTimePlayDelayed_71; }
	inline int64_t* get_address_of_detectTimePlayDelayed_71() { return &___detectTimePlayDelayed_71; }
	inline void set_detectTimePlayDelayed_71(int64_t value)
	{
		___detectTimePlayDelayed_71 = value;
	}

	inline static int32_t get_offset_of_detectTimeRec_72() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___detectTimeRec_72)); }
	inline int64_t get_detectTimeRec_72() const { return ___detectTimeRec_72; }
	inline int64_t* get_address_of_detectTimeRec_72() { return &___detectTimeRec_72; }
	inline void set_detectTimeRec_72(int64_t value)
	{
		___detectTimeRec_72 = value;
	}

	inline static int32_t get_offset_of_frameCntRec_73() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___frameCntRec_73)); }
	inline int32_t get_frameCntRec_73() const { return ___frameCntRec_73; }
	inline int32_t* get_address_of_frameCntRec_73() { return &___frameCntRec_73; }
	inline void set_frameCntRec_73(int32_t value)
	{
		___frameCntRec_73 = value;
	}

	inline static int32_t get_offset_of_frameCntPlay_74() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106, ___frameCntPlay_74)); }
	inline int32_t get_frameCntPlay_74() const { return ___frameCntPlay_74; }
	inline int32_t* get_address_of_frameCntPlay_74() { return &___frameCntPlay_74; }
	inline void set_frameCntPlay_74(int32_t value)
	{
		___frameCntPlay_74 = value;
	}
};

struct SpeexProcessor_t2344027106_StaticFields
{
public:
	// System.Func`1<System.Int64> ExitGames.Client.Photon.Voice.SpeexProcessor::<>f__am$cache0
	Func_1_t3166313951 * ___U3CU3Ef__amU24cache0_75;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_75() { return static_cast<int32_t>(offsetof(SpeexProcessor_t2344027106_StaticFields, ___U3CU3Ef__amU24cache0_75)); }
	inline Func_1_t3166313951 * get_U3CU3Ef__amU24cache0_75() const { return ___U3CU3Ef__amU24cache0_75; }
	inline Func_1_t3166313951 ** get_address_of_U3CU3Ef__amU24cache0_75() { return &___U3CU3Ef__amU24cache0_75; }
	inline void set_U3CU3Ef__amU24cache0_75(Func_1_t3166313951 * value)
	{
		___U3CU3Ef__amU24cache0_75 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_75), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEEXPROCESSOR_T2344027106_H
#ifndef CLOUDREGIONFLAG_T3756941471_H
#define CLOUDREGIONFLAG_T3756941471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudRegionFlag
struct  CloudRegionFlag_t3756941471 
{
public:
	// System.Int32 CloudRegionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CloudRegionFlag_t3756941471, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOUDREGIONFLAG_T3756941471_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TYPEDLOBBY_T1646745069_H
#define TYPEDLOBBY_T1646745069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.TypedLobby
struct  TypedLobby_t1646745069  : public RuntimeObject
{
public:
	// System.String ExitGames.Client.Photon.LoadBalancing.TypedLobby::Name
	String_t* ___Name_0;
	// ExitGames.Client.Photon.LoadBalancing.LobbyType ExitGames.Client.Photon.LoadBalancing.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_t1646745069, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_t1646745069, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_t1646745069_StaticFields
{
public:
	// ExitGames.Client.Photon.LoadBalancing.TypedLobby ExitGames.Client.Photon.LoadBalancing.TypedLobby::Default
	TypedLobby_t1646745069 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_t1646745069_StaticFields, ___Default_2)); }
	inline TypedLobby_t1646745069 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_t1646745069 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_t1646745069 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDLOBBY_T1646745069_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef VOICEINFO_T822772786_H
#define VOICEINFO_T822772786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.VoiceInfo
struct  VoiceInfo_t822772786 
{
public:
	// ExitGames.Client.Photon.Voice.Codec ExitGames.Client.Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::<SourceSamplingRate>k__BackingField
	int32_t ___U3CSourceSamplingRateU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_5;
	// System.Object ExitGames.Client.Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject * ___U3CUserDataU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CCodecU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CCodecU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodecU3Ek__BackingField_0() const { return ___U3CCodecU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodecU3Ek__BackingField_0() { return &___U3CCodecU3Ek__BackingField_0; }
	inline void set_U3CCodecU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodecU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSamplingRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CSamplingRateU3Ek__BackingField_1)); }
	inline int32_t get_U3CSamplingRateU3Ek__BackingField_1() const { return ___U3CSamplingRateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSamplingRateU3Ek__BackingField_1() { return &___U3CSamplingRateU3Ek__BackingField_1; }
	inline void set_U3CSamplingRateU3Ek__BackingField_1(int32_t value)
	{
		___U3CSamplingRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSourceSamplingRateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CSourceSamplingRateU3Ek__BackingField_2)); }
	inline int32_t get_U3CSourceSamplingRateU3Ek__BackingField_2() const { return ___U3CSourceSamplingRateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CSourceSamplingRateU3Ek__BackingField_2() { return &___U3CSourceSamplingRateU3Ek__BackingField_2; }
	inline void set_U3CSourceSamplingRateU3Ek__BackingField_2(int32_t value)
	{
		___U3CSourceSamplingRateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CChannelsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CChannelsU3Ek__BackingField_3)); }
	inline int32_t get_U3CChannelsU3Ek__BackingField_3() const { return ___U3CChannelsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CChannelsU3Ek__BackingField_3() { return &___U3CChannelsU3Ek__BackingField_3; }
	inline void set_U3CChannelsU3Ek__BackingField_3(int32_t value)
	{
		___U3CChannelsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFrameDurationUsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CFrameDurationUsU3Ek__BackingField_4)); }
	inline int32_t get_U3CFrameDurationUsU3Ek__BackingField_4() const { return ___U3CFrameDurationUsU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFrameDurationUsU3Ek__BackingField_4() { return &___U3CFrameDurationUsU3Ek__BackingField_4; }
	inline void set_U3CFrameDurationUsU3Ek__BackingField_4(int32_t value)
	{
		___U3CFrameDurationUsU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CBitrateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CBitrateU3Ek__BackingField_5)); }
	inline int32_t get_U3CBitrateU3Ek__BackingField_5() const { return ___U3CBitrateU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CBitrateU3Ek__BackingField_5() { return &___U3CBitrateU3Ek__BackingField_5; }
	inline void set_U3CBitrateU3Ek__BackingField_5(int32_t value)
	{
		___U3CBitrateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CUserDataU3Ek__BackingField_6)); }
	inline RuntimeObject * get_U3CUserDataU3Ek__BackingField_6() const { return ___U3CUserDataU3Ek__BackingField_6; }
	inline RuntimeObject ** get_address_of_U3CUserDataU3Ek__BackingField_6() { return &___U3CUserDataU3Ek__BackingField_6; }
	inline void set_U3CUserDataU3Ek__BackingField_6(RuntimeObject * value)
	{
		___U3CUserDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserDataU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CWidthU3Ek__BackingField_7)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_7() const { return ___U3CWidthU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_7() { return &___U3CWidthU3Ek__BackingField_7; }
	inline void set_U3CWidthU3Ek__BackingField_7(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceInfo_t822772786, ___U3CHeightU3Ek__BackingField_8)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_8() const { return ___U3CHeightU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_8() { return &___U3CHeightU3Ek__BackingField_8; }
	inline void set_U3CHeightU3Ek__BackingField_8(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t822772786_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CSourceSamplingRateU3Ek__BackingField_2;
	int32_t ___U3CChannelsU3Ek__BackingField_3;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_4;
	int32_t ___U3CBitrateU3Ek__BackingField_5;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_6;
	int32_t ___U3CWidthU3Ek__BackingField_7;
	int32_t ___U3CHeightU3Ek__BackingField_8;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t822772786_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CSourceSamplingRateU3Ek__BackingField_2;
	int32_t ___U3CChannelsU3Ek__BackingField_3;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_4;
	int32_t ___U3CBitrateU3Ek__BackingField_5;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_6;
	int32_t ___U3CWidthU3Ek__BackingField_7;
	int32_t ___U3CHeightU3Ek__BackingField_8;
};
#endif // VOICEINFO_T822772786_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef ENUMERATOR_T3167871969_H
#define ENUMERATOR_T3167871969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>
struct  Enumerator_t3167871969 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1213689194 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3611361361  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3167871969, ___dictionary_0)); }
	inline Dictionary_2_t1213689194 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1213689194 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1213689194 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3167871969, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3167871969, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3167871969, ___current_3)); }
	inline KeyValuePair_2_t3611361361  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3611361361 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3611361361  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3167871969_H
#ifndef GUILAYOUTOPTION_T811797299_H
#define GUILAYOUTOPTION_T811797299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t811797299  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T811797299_H
#ifndef ENUMERATOR_T2184450907_H
#define ENUMERATOR_T2184450907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>
struct  Enumerator_t2184450907 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t230268132 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2627940299  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2184450907, ___dictionary_0)); }
	inline Dictionary_2_t230268132 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t230268132 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t230268132 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2184450907, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2184450907, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2184450907, ___current_3)); }
	inline KeyValuePair_2_t2627940299  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2627940299 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2627940299  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2184450907_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TYPEDLOBBY_T3336582029_H
#define TYPEDLOBBY_T3336582029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypedLobby
struct  TypedLobby_t3336582029  : public RuntimeObject
{
public:
	// System.String TypedLobby::Name
	String_t* ___Name_0;
	// LobbyType TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_t3336582029, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_t3336582029, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_t3336582029_StaticFields
{
public:
	// TypedLobby TypedLobby::Default
	TypedLobby_t3336582029 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_t3336582029_StaticFields, ___Default_2)); }
	inline TypedLobby_t3336582029 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_t3336582029 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_t3336582029 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDLOBBY_T3336582029_H
#ifndef PHOTONNETWORK_T1610183659_H
#define PHOTONNETWORK_T1610183659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonNetwork
struct  PhotonNetwork_t1610183659  : public RuntimeObject
{
public:

public:
};

struct PhotonNetwork_t1610183659_StaticFields
{
public:
	// System.String PhotonNetwork::<gameVersion>k__BackingField
	String_t* ___U3CgameVersionU3Ek__BackingField_1;
	// PhotonHandler PhotonNetwork::photonMono
	PhotonHandler_t2139970417 * ___photonMono_2;
	// NetworkingPeer PhotonNetwork::networkingPeer
	NetworkingPeer_t264212356 * ___networkingPeer_3;
	// System.Int32 PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_4;
	// ServerSettings PhotonNetwork::PhotonServerSettings
	ServerSettings_t2755303613 * ___PhotonServerSettings_6;
	// System.Boolean PhotonNetwork::InstantiateInRoomOnly
	bool ___InstantiateInRoomOnly_7;
	// PhotonLogLevel PhotonNetwork::logLevel
	int32_t ___logLevel_8;
	// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::<Friends>k__BackingField
	List_1_t2005371586 * ___U3CFriendsU3Ek__BackingField_9;
	// System.Single PhotonNetwork::precisionForVectorSynchronization
	float ___precisionForVectorSynchronization_10;
	// System.Single PhotonNetwork::precisionForQuaternionSynchronization
	float ___precisionForQuaternionSynchronization_11;
	// System.Single PhotonNetwork::precisionForFloatSynchronization
	float ___precisionForFloatSynchronization_12;
	// System.Boolean PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_13;
	// System.Boolean PhotonNetwork::UsePrefabCache
	bool ___UsePrefabCache_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PhotonNetwork::PrefabCache
	Dictionary_2_t898892918 * ___PrefabCache_15;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::SendMonoMessageTargets
	HashSet_1_t3973553389 * ___SendMonoMessageTargets_16;
	// System.Type PhotonNetwork::SendMonoMessageTargetType
	Type_t * ___SendMonoMessageTargetType_17;
	// System.Boolean PhotonNetwork::StartRpcsAsCoroutine
	bool ___StartRpcsAsCoroutine_18;
	// System.Boolean PhotonNetwork::isOfflineMode
	bool ___isOfflineMode_19;
	// Room PhotonNetwork::offlineModeRoom
	Room_t3759828263 * ___offlineModeRoom_20;
	// System.Int32 PhotonNetwork::maxConnections
	int32_t ___maxConnections_21;
	// System.Boolean PhotonNetwork::_mAutomaticallySyncScene
	bool ____mAutomaticallySyncScene_22;
	// System.Boolean PhotonNetwork::m_autoCleanUpPlayerObjects
	bool ___m_autoCleanUpPlayerObjects_23;
	// System.Int32 PhotonNetwork::sendInterval
	int32_t ___sendInterval_24;
	// System.Int32 PhotonNetwork::sendIntervalOnSerialize
	int32_t ___sendIntervalOnSerialize_25;
	// System.Boolean PhotonNetwork::m_isMessageQueueRunning
	bool ___m_isMessageQueueRunning_26;
	// System.Diagnostics.Stopwatch PhotonNetwork::startupStopwatch
	Stopwatch_t305734070 * ___startupStopwatch_27;
	// System.Single PhotonNetwork::BackgroundTimeout
	float ___BackgroundTimeout_28;
	// System.Boolean PhotonNetwork::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_29;
	// PhotonNetwork/EventCallback PhotonNetwork::OnEventCall
	EventCallback_t1220598991 * ___OnEventCall_30;
	// System.Int32 PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_31;
	// System.Int32 PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_32;
	// System.Collections.Generic.List`1<System.Int32> PhotonNetwork::manuallyAllocatedViewIds
	List_1_t128053199 * ___manuallyAllocatedViewIds_33;

public:
	inline static int32_t get_offset_of_U3CgameVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___U3CgameVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CgameVersionU3Ek__BackingField_1() const { return ___U3CgameVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgameVersionU3Ek__BackingField_1() { return &___U3CgameVersionU3Ek__BackingField_1; }
	inline void set_U3CgameVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CgameVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CgameVersionU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_photonMono_2() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___photonMono_2)); }
	inline PhotonHandler_t2139970417 * get_photonMono_2() const { return ___photonMono_2; }
	inline PhotonHandler_t2139970417 ** get_address_of_photonMono_2() { return &___photonMono_2; }
	inline void set_photonMono_2(PhotonHandler_t2139970417 * value)
	{
		___photonMono_2 = value;
		Il2CppCodeGenWriteBarrier((&___photonMono_2), value);
	}

	inline static int32_t get_offset_of_networkingPeer_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___networkingPeer_3)); }
	inline NetworkingPeer_t264212356 * get_networkingPeer_3() const { return ___networkingPeer_3; }
	inline NetworkingPeer_t264212356 ** get_address_of_networkingPeer_3() { return &___networkingPeer_3; }
	inline void set_networkingPeer_3(NetworkingPeer_t264212356 * value)
	{
		___networkingPeer_3 = value;
		Il2CppCodeGenWriteBarrier((&___networkingPeer_3), value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_4() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___MAX_VIEW_IDS_4)); }
	inline int32_t get_MAX_VIEW_IDS_4() const { return ___MAX_VIEW_IDS_4; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_4() { return &___MAX_VIEW_IDS_4; }
	inline void set_MAX_VIEW_IDS_4(int32_t value)
	{
		___MAX_VIEW_IDS_4 = value;
	}

	inline static int32_t get_offset_of_PhotonServerSettings_6() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___PhotonServerSettings_6)); }
	inline ServerSettings_t2755303613 * get_PhotonServerSettings_6() const { return ___PhotonServerSettings_6; }
	inline ServerSettings_t2755303613 ** get_address_of_PhotonServerSettings_6() { return &___PhotonServerSettings_6; }
	inline void set_PhotonServerSettings_6(ServerSettings_t2755303613 * value)
	{
		___PhotonServerSettings_6 = value;
		Il2CppCodeGenWriteBarrier((&___PhotonServerSettings_6), value);
	}

	inline static int32_t get_offset_of_InstantiateInRoomOnly_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___InstantiateInRoomOnly_7)); }
	inline bool get_InstantiateInRoomOnly_7() const { return ___InstantiateInRoomOnly_7; }
	inline bool* get_address_of_InstantiateInRoomOnly_7() { return &___InstantiateInRoomOnly_7; }
	inline void set_InstantiateInRoomOnly_7(bool value)
	{
		___InstantiateInRoomOnly_7 = value;
	}

	inline static int32_t get_offset_of_logLevel_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___logLevel_8)); }
	inline int32_t get_logLevel_8() const { return ___logLevel_8; }
	inline int32_t* get_address_of_logLevel_8() { return &___logLevel_8; }
	inline void set_logLevel_8(int32_t value)
	{
		___logLevel_8 = value;
	}

	inline static int32_t get_offset_of_U3CFriendsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___U3CFriendsU3Ek__BackingField_9)); }
	inline List_1_t2005371586 * get_U3CFriendsU3Ek__BackingField_9() const { return ___U3CFriendsU3Ek__BackingField_9; }
	inline List_1_t2005371586 ** get_address_of_U3CFriendsU3Ek__BackingField_9() { return &___U3CFriendsU3Ek__BackingField_9; }
	inline void set_U3CFriendsU3Ek__BackingField_9(List_1_t2005371586 * value)
	{
		___U3CFriendsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFriendsU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_precisionForVectorSynchronization_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___precisionForVectorSynchronization_10)); }
	inline float get_precisionForVectorSynchronization_10() const { return ___precisionForVectorSynchronization_10; }
	inline float* get_address_of_precisionForVectorSynchronization_10() { return &___precisionForVectorSynchronization_10; }
	inline void set_precisionForVectorSynchronization_10(float value)
	{
		___precisionForVectorSynchronization_10 = value;
	}

	inline static int32_t get_offset_of_precisionForQuaternionSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___precisionForQuaternionSynchronization_11)); }
	inline float get_precisionForQuaternionSynchronization_11() const { return ___precisionForQuaternionSynchronization_11; }
	inline float* get_address_of_precisionForQuaternionSynchronization_11() { return &___precisionForQuaternionSynchronization_11; }
	inline void set_precisionForQuaternionSynchronization_11(float value)
	{
		___precisionForQuaternionSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_precisionForFloatSynchronization_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___precisionForFloatSynchronization_12)); }
	inline float get_precisionForFloatSynchronization_12() const { return ___precisionForFloatSynchronization_12; }
	inline float* get_address_of_precisionForFloatSynchronization_12() { return &___precisionForFloatSynchronization_12; }
	inline void set_precisionForFloatSynchronization_12(float value)
	{
		___precisionForFloatSynchronization_12 = value;
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___UseRpcMonoBehaviourCache_13)); }
	inline bool get_UseRpcMonoBehaviourCache_13() const { return ___UseRpcMonoBehaviourCache_13; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_13() { return &___UseRpcMonoBehaviourCache_13; }
	inline void set_UseRpcMonoBehaviourCache_13(bool value)
	{
		___UseRpcMonoBehaviourCache_13 = value;
	}

	inline static int32_t get_offset_of_UsePrefabCache_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___UsePrefabCache_14)); }
	inline bool get_UsePrefabCache_14() const { return ___UsePrefabCache_14; }
	inline bool* get_address_of_UsePrefabCache_14() { return &___UsePrefabCache_14; }
	inline void set_UsePrefabCache_14(bool value)
	{
		___UsePrefabCache_14 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___PrefabCache_15)); }
	inline Dictionary_2_t898892918 * get_PrefabCache_15() const { return ___PrefabCache_15; }
	inline Dictionary_2_t898892918 ** get_address_of_PrefabCache_15() { return &___PrefabCache_15; }
	inline void set_PrefabCache_15(Dictionary_2_t898892918 * value)
	{
		___PrefabCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___PrefabCache_15), value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargets_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___SendMonoMessageTargets_16)); }
	inline HashSet_1_t3973553389 * get_SendMonoMessageTargets_16() const { return ___SendMonoMessageTargets_16; }
	inline HashSet_1_t3973553389 ** get_address_of_SendMonoMessageTargets_16() { return &___SendMonoMessageTargets_16; }
	inline void set_SendMonoMessageTargets_16(HashSet_1_t3973553389 * value)
	{
		___SendMonoMessageTargets_16 = value;
		Il2CppCodeGenWriteBarrier((&___SendMonoMessageTargets_16), value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargetType_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___SendMonoMessageTargetType_17)); }
	inline Type_t * get_SendMonoMessageTargetType_17() const { return ___SendMonoMessageTargetType_17; }
	inline Type_t ** get_address_of_SendMonoMessageTargetType_17() { return &___SendMonoMessageTargetType_17; }
	inline void set_SendMonoMessageTargetType_17(Type_t * value)
	{
		___SendMonoMessageTargetType_17 = value;
		Il2CppCodeGenWriteBarrier((&___SendMonoMessageTargetType_17), value);
	}

	inline static int32_t get_offset_of_StartRpcsAsCoroutine_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___StartRpcsAsCoroutine_18)); }
	inline bool get_StartRpcsAsCoroutine_18() const { return ___StartRpcsAsCoroutine_18; }
	inline bool* get_address_of_StartRpcsAsCoroutine_18() { return &___StartRpcsAsCoroutine_18; }
	inline void set_StartRpcsAsCoroutine_18(bool value)
	{
		___StartRpcsAsCoroutine_18 = value;
	}

	inline static int32_t get_offset_of_isOfflineMode_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___isOfflineMode_19)); }
	inline bool get_isOfflineMode_19() const { return ___isOfflineMode_19; }
	inline bool* get_address_of_isOfflineMode_19() { return &___isOfflineMode_19; }
	inline void set_isOfflineMode_19(bool value)
	{
		___isOfflineMode_19 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___offlineModeRoom_20)); }
	inline Room_t3759828263 * get_offlineModeRoom_20() const { return ___offlineModeRoom_20; }
	inline Room_t3759828263 ** get_address_of_offlineModeRoom_20() { return &___offlineModeRoom_20; }
	inline void set_offlineModeRoom_20(Room_t3759828263 * value)
	{
		___offlineModeRoom_20 = value;
		Il2CppCodeGenWriteBarrier((&___offlineModeRoom_20), value);
	}

	inline static int32_t get_offset_of_maxConnections_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___maxConnections_21)); }
	inline int32_t get_maxConnections_21() const { return ___maxConnections_21; }
	inline int32_t* get_address_of_maxConnections_21() { return &___maxConnections_21; }
	inline void set_maxConnections_21(int32_t value)
	{
		___maxConnections_21 = value;
	}

	inline static int32_t get_offset_of__mAutomaticallySyncScene_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ____mAutomaticallySyncScene_22)); }
	inline bool get__mAutomaticallySyncScene_22() const { return ____mAutomaticallySyncScene_22; }
	inline bool* get_address_of__mAutomaticallySyncScene_22() { return &____mAutomaticallySyncScene_22; }
	inline void set__mAutomaticallySyncScene_22(bool value)
	{
		____mAutomaticallySyncScene_22 = value;
	}

	inline static int32_t get_offset_of_m_autoCleanUpPlayerObjects_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___m_autoCleanUpPlayerObjects_23)); }
	inline bool get_m_autoCleanUpPlayerObjects_23() const { return ___m_autoCleanUpPlayerObjects_23; }
	inline bool* get_address_of_m_autoCleanUpPlayerObjects_23() { return &___m_autoCleanUpPlayerObjects_23; }
	inline void set_m_autoCleanUpPlayerObjects_23(bool value)
	{
		___m_autoCleanUpPlayerObjects_23 = value;
	}

	inline static int32_t get_offset_of_sendInterval_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___sendInterval_24)); }
	inline int32_t get_sendInterval_24() const { return ___sendInterval_24; }
	inline int32_t* get_address_of_sendInterval_24() { return &___sendInterval_24; }
	inline void set_sendInterval_24(int32_t value)
	{
		___sendInterval_24 = value;
	}

	inline static int32_t get_offset_of_sendIntervalOnSerialize_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___sendIntervalOnSerialize_25)); }
	inline int32_t get_sendIntervalOnSerialize_25() const { return ___sendIntervalOnSerialize_25; }
	inline int32_t* get_address_of_sendIntervalOnSerialize_25() { return &___sendIntervalOnSerialize_25; }
	inline void set_sendIntervalOnSerialize_25(int32_t value)
	{
		___sendIntervalOnSerialize_25 = value;
	}

	inline static int32_t get_offset_of_m_isMessageQueueRunning_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___m_isMessageQueueRunning_26)); }
	inline bool get_m_isMessageQueueRunning_26() const { return ___m_isMessageQueueRunning_26; }
	inline bool* get_address_of_m_isMessageQueueRunning_26() { return &___m_isMessageQueueRunning_26; }
	inline void set_m_isMessageQueueRunning_26(bool value)
	{
		___m_isMessageQueueRunning_26 = value;
	}

	inline static int32_t get_offset_of_startupStopwatch_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___startupStopwatch_27)); }
	inline Stopwatch_t305734070 * get_startupStopwatch_27() const { return ___startupStopwatch_27; }
	inline Stopwatch_t305734070 ** get_address_of_startupStopwatch_27() { return &___startupStopwatch_27; }
	inline void set_startupStopwatch_27(Stopwatch_t305734070 * value)
	{
		___startupStopwatch_27 = value;
		Il2CppCodeGenWriteBarrier((&___startupStopwatch_27), value);
	}

	inline static int32_t get_offset_of_BackgroundTimeout_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___BackgroundTimeout_28)); }
	inline float get_BackgroundTimeout_28() const { return ___BackgroundTimeout_28; }
	inline float* get_address_of_BackgroundTimeout_28() { return &___BackgroundTimeout_28; }
	inline void set_BackgroundTimeout_28(float value)
	{
		___BackgroundTimeout_28 = value;
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_29)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_29() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_29() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_29; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_29(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_OnEventCall_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___OnEventCall_30)); }
	inline EventCallback_t1220598991 * get_OnEventCall_30() const { return ___OnEventCall_30; }
	inline EventCallback_t1220598991 ** get_address_of_OnEventCall_30() { return &___OnEventCall_30; }
	inline void set_OnEventCall_30(EventCallback_t1220598991 * value)
	{
		___OnEventCall_30 = value;
		Il2CppCodeGenWriteBarrier((&___OnEventCall_30), value);
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___lastUsedViewSubId_31)); }
	inline int32_t get_lastUsedViewSubId_31() const { return ___lastUsedViewSubId_31; }
	inline int32_t* get_address_of_lastUsedViewSubId_31() { return &___lastUsedViewSubId_31; }
	inline void set_lastUsedViewSubId_31(int32_t value)
	{
		___lastUsedViewSubId_31 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___lastUsedViewSubIdStatic_32)); }
	inline int32_t get_lastUsedViewSubIdStatic_32() const { return ___lastUsedViewSubIdStatic_32; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_32() { return &___lastUsedViewSubIdStatic_32; }
	inline void set_lastUsedViewSubIdStatic_32(int32_t value)
	{
		___lastUsedViewSubIdStatic_32 = value;
	}

	inline static int32_t get_offset_of_manuallyAllocatedViewIds_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1610183659_StaticFields, ___manuallyAllocatedViewIds_33)); }
	inline List_1_t128053199 * get_manuallyAllocatedViewIds_33() const { return ___manuallyAllocatedViewIds_33; }
	inline List_1_t128053199 ** get_address_of_manuallyAllocatedViewIds_33() { return &___manuallyAllocatedViewIds_33; }
	inline void set_manuallyAllocatedViewIds_33(List_1_t128053199 * value)
	{
		___manuallyAllocatedViewIds_33 = value;
		Il2CppCodeGenWriteBarrier((&___manuallyAllocatedViewIds_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONNETWORK_T1610183659_H
#ifndef LOADBALANCINGCLIENT_T3850494520_H
#define LOADBALANCINGCLIENT_T3850494520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient
struct  LoadBalancingClient_t3850494520  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::loadBalancingPeer
	LoadBalancingPeer_t794198942 * ___loadBalancingPeer_0;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t3382429593 * ___U3CAuthValuesU3Ek__BackingField_3;
	// ExitGames.Client.Photon.LoadBalancing.AuthModeOption ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// ExitGames.Client.Photon.LoadBalancing.EncryptionMode ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ExpectedProtocol
	uint8_t ___ExpectedProtocol_6;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_7;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_8;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::NameServerHttp
	String_t* ___NameServerHttp_9;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_11;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_12;
	// ExitGames.Client.Photon.LoadBalancing.ServerConnection ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_13;
	// ExitGames.Client.Photon.LoadBalancing.ClientState ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::state
	int32_t ___state_14;
	// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnStateChangeAction
	Action_1_t643525275 * ___OnStateChangeAction_15;
	// System.Action`1<ExitGames.Client.Photon.EventData> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnEventAction
	Action_1_t3900690969 * ___OnEventAction_16;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OnOpResponseAction
	Action_1_t596095568 * ___OnOpResponseAction_17;
	// ExitGames.Client.Photon.LoadBalancing.DisconnectCause ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_18;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::inLobby
	bool ___inLobby_19;
	// ExitGames.Client.Photon.LoadBalancing.TypedLobby ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t1646745069 * ___U3CCurrentLobbyU3Ek__BackingField_20;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::autoJoinLobby
	bool ___autoJoinLobby_21;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_22;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::lobbyStatistics
	List_1_t653618646 * ___lobbyStatistics_23;
	// ExitGames.Client.Photon.LoadBalancing.Player ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_t1020606529 * ___U3CLocalPlayerU3Ek__BackingField_24;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.LoadBalancing.RoomInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::RoomInfoList
	Dictionary_2_t3838928456 * ___RoomInfoList_25;
	// ExitGames.Client.Photon.LoadBalancing.Room ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::CurrentRoom
	Room_t3992852750 * ___CurrentRoom_26;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_27;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_28;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_29;
	// ExitGames.Client.Photon.LoadBalancing.JoinType ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_30;
	// ExitGames.Client.Photon.LoadBalancing.EnterRoomParams ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t3162528725 * ___enterRoomParamsCache_31;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::didAuthenticate
	bool ___didAuthenticate_32;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.LoadBalancing.FriendInfo> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<FriendList>k__BackingField
	List_1_t1374400172 * ___U3CFriendListU3Ek__BackingField_33;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::friendListRequested
	StringU5BU5D_t1281789340* ___friendListRequested_34;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::friendListTimestamp
	int32_t ___friendListTimestamp_35;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::isFetchingFriendList
	bool ___isFetchingFriendList_36;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AvailableRegions>k__BackingField
	StringU5BU5D_t1281789340* ___U3CAvailableRegionsU3Ek__BackingField_37;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<AvailableRegionsServers>k__BackingField
	StringU5BU5D_t1281789340* ___U3CAvailableRegionsServersU3Ek__BackingField_38;
	// System.String ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_39;
	// System.Byte[] ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::encryptionSecret
	ByteU5BU5D_t4116647657* ___encryptionSecret_40;

public:
	inline static int32_t get_offset_of_loadBalancingPeer_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___loadBalancingPeer_0)); }
	inline LoadBalancingPeer_t794198942 * get_loadBalancingPeer_0() const { return ___loadBalancingPeer_0; }
	inline LoadBalancingPeer_t794198942 ** get_address_of_loadBalancingPeer_0() { return &___loadBalancingPeer_0; }
	inline void set_loadBalancingPeer_0(LoadBalancingPeer_t794198942 * value)
	{
		___loadBalancingPeer_0 = value;
		Il2CppCodeGenWriteBarrier((&___loadBalancingPeer_0), value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppVersionU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppIdU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CAuthValuesU3Ek__BackingField_3)); }
	inline AuthenticationValues_t3382429593 * get_U3CAuthValuesU3Ek__BackingField_3() const { return ___U3CAuthValuesU3Ek__BackingField_3; }
	inline AuthenticationValues_t3382429593 ** get_address_of_U3CAuthValuesU3Ek__BackingField_3() { return &___U3CAuthValuesU3Ek__BackingField_3; }
	inline void set_U3CAuthValuesU3Ek__BackingField_3(AuthenticationValues_t3382429593 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthValuesU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_AuthMode_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___AuthMode_4)); }
	inline int32_t get_AuthMode_4() const { return ___AuthMode_4; }
	inline int32_t* get_address_of_AuthMode_4() { return &___AuthMode_4; }
	inline void set_AuthMode_4(int32_t value)
	{
		___AuthMode_4 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___EncryptionMode_5)); }
	inline int32_t get_EncryptionMode_5() const { return ___EncryptionMode_5; }
	inline int32_t* get_address_of_EncryptionMode_5() { return &___EncryptionMode_5; }
	inline void set_EncryptionMode_5(int32_t value)
	{
		___EncryptionMode_5 = value;
	}

	inline static int32_t get_offset_of_ExpectedProtocol_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___ExpectedProtocol_6)); }
	inline uint8_t get_ExpectedProtocol_6() const { return ___ExpectedProtocol_6; }
	inline uint8_t* get_address_of_ExpectedProtocol_6() { return &___ExpectedProtocol_6; }
	inline void set_ExpectedProtocol_6(uint8_t value)
	{
		___ExpectedProtocol_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CIsUsingNameServerU3Ek__BackingField_7)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_7() const { return ___U3CIsUsingNameServerU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_7() { return &___U3CIsUsingNameServerU3Ek__BackingField_7; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_7(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___NameServerHost_8)); }
	inline String_t* get_NameServerHost_8() const { return ___NameServerHost_8; }
	inline String_t** get_address_of_NameServerHost_8() { return &___NameServerHost_8; }
	inline void set_NameServerHost_8(String_t* value)
	{
		___NameServerHost_8 = value;
		Il2CppCodeGenWriteBarrier((&___NameServerHost_8), value);
	}

	inline static int32_t get_offset_of_NameServerHttp_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___NameServerHttp_9)); }
	inline String_t* get_NameServerHttp_9() const { return ___NameServerHttp_9; }
	inline String_t** get_address_of_NameServerHttp_9() { return &___NameServerHttp_9; }
	inline void set_NameServerHttp_9(String_t* value)
	{
		___NameServerHttp_9 = value;
		Il2CppCodeGenWriteBarrier((&___NameServerHttp_9), value);
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CMasterServerAddressU3Ek__BackingField_11)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_11() const { return ___U3CMasterServerAddressU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_11() { return &___U3CMasterServerAddressU3Ek__BackingField_11; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_11(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMasterServerAddressU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CGameServerAddressU3Ek__BackingField_12)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_12() const { return ___U3CGameServerAddressU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_12() { return &___U3CGameServerAddressU3Ek__BackingField_12; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_12(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGameServerAddressU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CServerU3Ek__BackingField_13)); }
	inline int32_t get_U3CServerU3Ek__BackingField_13() const { return ___U3CServerU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_13() { return &___U3CServerU3Ek__BackingField_13; }
	inline void set_U3CServerU3Ek__BackingField_13(int32_t value)
	{
		___U3CServerU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_state_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___state_14)); }
	inline int32_t get_state_14() const { return ___state_14; }
	inline int32_t* get_address_of_state_14() { return &___state_14; }
	inline void set_state_14(int32_t value)
	{
		___state_14 = value;
	}

	inline static int32_t get_offset_of_OnStateChangeAction_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___OnStateChangeAction_15)); }
	inline Action_1_t643525275 * get_OnStateChangeAction_15() const { return ___OnStateChangeAction_15; }
	inline Action_1_t643525275 ** get_address_of_OnStateChangeAction_15() { return &___OnStateChangeAction_15; }
	inline void set_OnStateChangeAction_15(Action_1_t643525275 * value)
	{
		___OnStateChangeAction_15 = value;
		Il2CppCodeGenWriteBarrier((&___OnStateChangeAction_15), value);
	}

	inline static int32_t get_offset_of_OnEventAction_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___OnEventAction_16)); }
	inline Action_1_t3900690969 * get_OnEventAction_16() const { return ___OnEventAction_16; }
	inline Action_1_t3900690969 ** get_address_of_OnEventAction_16() { return &___OnEventAction_16; }
	inline void set_OnEventAction_16(Action_1_t3900690969 * value)
	{
		___OnEventAction_16 = value;
		Il2CppCodeGenWriteBarrier((&___OnEventAction_16), value);
	}

	inline static int32_t get_offset_of_OnOpResponseAction_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___OnOpResponseAction_17)); }
	inline Action_1_t596095568 * get_OnOpResponseAction_17() const { return ___OnOpResponseAction_17; }
	inline Action_1_t596095568 ** get_address_of_OnOpResponseAction_17() { return &___OnOpResponseAction_17; }
	inline void set_OnOpResponseAction_17(Action_1_t596095568 * value)
	{
		___OnOpResponseAction_17 = value;
		Il2CppCodeGenWriteBarrier((&___OnOpResponseAction_17), value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CDisconnectedCauseU3Ek__BackingField_18)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_18() const { return ___U3CDisconnectedCauseU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_18() { return &___U3CDisconnectedCauseU3Ek__BackingField_18; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_18(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_inLobby_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___inLobby_19)); }
	inline bool get_inLobby_19() const { return ___inLobby_19; }
	inline bool* get_address_of_inLobby_19() { return &___inLobby_19; }
	inline void set_inLobby_19(bool value)
	{
		___inLobby_19 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CCurrentLobbyU3Ek__BackingField_20)); }
	inline TypedLobby_t1646745069 * get_U3CCurrentLobbyU3Ek__BackingField_20() const { return ___U3CCurrentLobbyU3Ek__BackingField_20; }
	inline TypedLobby_t1646745069 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_20() { return &___U3CCurrentLobbyU3Ek__BackingField_20; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_20(TypedLobby_t1646745069 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentLobbyU3Ek__BackingField_20), value);
	}

	inline static int32_t get_offset_of_autoJoinLobby_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___autoJoinLobby_21)); }
	inline bool get_autoJoinLobby_21() const { return ___autoJoinLobby_21; }
	inline bool* get_address_of_autoJoinLobby_21() { return &___autoJoinLobby_21; }
	inline void set_autoJoinLobby_21(bool value)
	{
		___autoJoinLobby_21 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___EnableLobbyStatistics_22)); }
	inline bool get_EnableLobbyStatistics_22() const { return ___EnableLobbyStatistics_22; }
	inline bool* get_address_of_EnableLobbyStatistics_22() { return &___EnableLobbyStatistics_22; }
	inline void set_EnableLobbyStatistics_22(bool value)
	{
		___EnableLobbyStatistics_22 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___lobbyStatistics_23)); }
	inline List_1_t653618646 * get_lobbyStatistics_23() const { return ___lobbyStatistics_23; }
	inline List_1_t653618646 ** get_address_of_lobbyStatistics_23() { return &___lobbyStatistics_23; }
	inline void set_lobbyStatistics_23(List_1_t653618646 * value)
	{
		___lobbyStatistics_23 = value;
		Il2CppCodeGenWriteBarrier((&___lobbyStatistics_23), value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CLocalPlayerU3Ek__BackingField_24)); }
	inline Player_t1020606529 * get_U3CLocalPlayerU3Ek__BackingField_24() const { return ___U3CLocalPlayerU3Ek__BackingField_24; }
	inline Player_t1020606529 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_24() { return &___U3CLocalPlayerU3Ek__BackingField_24; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_24(Player_t1020606529 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocalPlayerU3Ek__BackingField_24), value);
	}

	inline static int32_t get_offset_of_RoomInfoList_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___RoomInfoList_25)); }
	inline Dictionary_2_t3838928456 * get_RoomInfoList_25() const { return ___RoomInfoList_25; }
	inline Dictionary_2_t3838928456 ** get_address_of_RoomInfoList_25() { return &___RoomInfoList_25; }
	inline void set_RoomInfoList_25(Dictionary_2_t3838928456 * value)
	{
		___RoomInfoList_25 = value;
		Il2CppCodeGenWriteBarrier((&___RoomInfoList_25), value);
	}

	inline static int32_t get_offset_of_CurrentRoom_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___CurrentRoom_26)); }
	inline Room_t3992852750 * get_CurrentRoom_26() const { return ___CurrentRoom_26; }
	inline Room_t3992852750 ** get_address_of_CurrentRoom_26() { return &___CurrentRoom_26; }
	inline void set_CurrentRoom_26(Room_t3992852750 * value)
	{
		___CurrentRoom_26 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentRoom_26), value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CPlayersOnMasterCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_27() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_27() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_27; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CPlayersInRoomsCountU3Ek__BackingField_28)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_28() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_28() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_28; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_28(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CRoomsCountU3Ek__BackingField_29)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_29() const { return ___U3CRoomsCountU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_29() { return &___U3CRoomsCountU3Ek__BackingField_29; }
	inline void set_U3CRoomsCountU3Ek__BackingField_29(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___lastJoinType_30)); }
	inline int32_t get_lastJoinType_30() const { return ___lastJoinType_30; }
	inline int32_t* get_address_of_lastJoinType_30() { return &___lastJoinType_30; }
	inline void set_lastJoinType_30(int32_t value)
	{
		___lastJoinType_30 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___enterRoomParamsCache_31)); }
	inline EnterRoomParams_t3162528725 * get_enterRoomParamsCache_31() const { return ___enterRoomParamsCache_31; }
	inline EnterRoomParams_t3162528725 ** get_address_of_enterRoomParamsCache_31() { return &___enterRoomParamsCache_31; }
	inline void set_enterRoomParamsCache_31(EnterRoomParams_t3162528725 * value)
	{
		___enterRoomParamsCache_31 = value;
		Il2CppCodeGenWriteBarrier((&___enterRoomParamsCache_31), value);
	}

	inline static int32_t get_offset_of_didAuthenticate_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___didAuthenticate_32)); }
	inline bool get_didAuthenticate_32() const { return ___didAuthenticate_32; }
	inline bool* get_address_of_didAuthenticate_32() { return &___didAuthenticate_32; }
	inline void set_didAuthenticate_32(bool value)
	{
		___didAuthenticate_32 = value;
	}

	inline static int32_t get_offset_of_U3CFriendListU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CFriendListU3Ek__BackingField_33)); }
	inline List_1_t1374400172 * get_U3CFriendListU3Ek__BackingField_33() const { return ___U3CFriendListU3Ek__BackingField_33; }
	inline List_1_t1374400172 ** get_address_of_U3CFriendListU3Ek__BackingField_33() { return &___U3CFriendListU3Ek__BackingField_33; }
	inline void set_U3CFriendListU3Ek__BackingField_33(List_1_t1374400172 * value)
	{
		___U3CFriendListU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFriendListU3Ek__BackingField_33), value);
	}

	inline static int32_t get_offset_of_friendListRequested_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___friendListRequested_34)); }
	inline StringU5BU5D_t1281789340* get_friendListRequested_34() const { return ___friendListRequested_34; }
	inline StringU5BU5D_t1281789340** get_address_of_friendListRequested_34() { return &___friendListRequested_34; }
	inline void set_friendListRequested_34(StringU5BU5D_t1281789340* value)
	{
		___friendListRequested_34 = value;
		Il2CppCodeGenWriteBarrier((&___friendListRequested_34), value);
	}

	inline static int32_t get_offset_of_friendListTimestamp_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___friendListTimestamp_35)); }
	inline int32_t get_friendListTimestamp_35() const { return ___friendListTimestamp_35; }
	inline int32_t* get_address_of_friendListTimestamp_35() { return &___friendListTimestamp_35; }
	inline void set_friendListTimestamp_35(int32_t value)
	{
		___friendListTimestamp_35 = value;
	}

	inline static int32_t get_offset_of_isFetchingFriendList_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___isFetchingFriendList_36)); }
	inline bool get_isFetchingFriendList_36() const { return ___isFetchingFriendList_36; }
	inline bool* get_address_of_isFetchingFriendList_36() { return &___isFetchingFriendList_36; }
	inline void set_isFetchingFriendList_36(bool value)
	{
		___isFetchingFriendList_36 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CAvailableRegionsU3Ek__BackingField_37)); }
	inline StringU5BU5D_t1281789340* get_U3CAvailableRegionsU3Ek__BackingField_37() const { return ___U3CAvailableRegionsU3Ek__BackingField_37; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CAvailableRegionsU3Ek__BackingField_37() { return &___U3CAvailableRegionsU3Ek__BackingField_37; }
	inline void set_U3CAvailableRegionsU3Ek__BackingField_37(StringU5BU5D_t1281789340* value)
	{
		___U3CAvailableRegionsU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAvailableRegionsU3Ek__BackingField_37), value);
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsServersU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CAvailableRegionsServersU3Ek__BackingField_38)); }
	inline StringU5BU5D_t1281789340* get_U3CAvailableRegionsServersU3Ek__BackingField_38() const { return ___U3CAvailableRegionsServersU3Ek__BackingField_38; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CAvailableRegionsServersU3Ek__BackingField_38() { return &___U3CAvailableRegionsServersU3Ek__BackingField_38; }
	inline void set_U3CAvailableRegionsServersU3Ek__BackingField_38(StringU5BU5D_t1281789340* value)
	{
		___U3CAvailableRegionsServersU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAvailableRegionsServersU3Ek__BackingField_38), value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___U3CCloudRegionU3Ek__BackingField_39)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_39() const { return ___U3CCloudRegionU3Ek__BackingField_39; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_39() { return &___U3CCloudRegionU3Ek__BackingField_39; }
	inline void set_U3CCloudRegionU3Ek__BackingField_39(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCloudRegionU3Ek__BackingField_39), value);
	}

	inline static int32_t get_offset_of_encryptionSecret_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520, ___encryptionSecret_40)); }
	inline ByteU5BU5D_t4116647657* get_encryptionSecret_40() const { return ___encryptionSecret_40; }
	inline ByteU5BU5D_t4116647657** get_address_of_encryptionSecret_40() { return &___encryptionSecret_40; }
	inline void set_encryptionSecret_40(ByteU5BU5D_t4116647657* value)
	{
		___encryptionSecret_40 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionSecret_40), value);
	}
};

struct LoadBalancingClient_t3850494520_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_t1720840067 * ___ProtocolToNameServerPort_10;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t3850494520_StaticFields, ___ProtocolToNameServerPort_10)); }
	inline Dictionary_2_t1720840067 * get_ProtocolToNameServerPort_10() const { return ___ProtocolToNameServerPort_10; }
	inline Dictionary_2_t1720840067 ** get_address_of_ProtocolToNameServerPort_10() { return &___ProtocolToNameServerPort_10; }
	inline void set_ProtocolToNameServerPort_10(Dictionary_2_t1720840067 * value)
	{
		___ProtocolToNameServerPort_10 = value;
		Il2CppCodeGenWriteBarrier((&___ProtocolToNameServerPort_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADBALANCINGCLIENT_T3850494520_H
#ifndef PHOTONPEER_T1608153861_H
#define PHOTONPEER_T1608153861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t1608153861  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t1253839074 * ___SocketImplementationConfig_9;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_10;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_11;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_13;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_14;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_16;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_17;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_18;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_19;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_21;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_22;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_27;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_t4116647657* ___RandomizedSequenceNumbers_28;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t1302902347 * ___U3CTrafficStatsIncomingU3Ek__BackingField_29;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t1302902347 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_30;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t4013908777 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_31;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t305734070 * ___trafficStatsStopwatch_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_33;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t2956237011 * ___peerBase_34;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_35;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_36;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_37;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_t4116647657* ___PayloadEncryptionSecret_38;
	// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.PhotonPeer::DgramEncryptor
	Encryptor_t200327285 * ___DgramEncryptor_39;
	// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.PhotonPeer::DgramDecryptor
	Decryptor_t2116099858 * ___DgramDecryptor_40;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___ClientSdkId_6)); }
	inline uint8_t get_ClientSdkId_6() const { return ___ClientSdkId_6; }
	inline uint8_t* get_address_of_ClientSdkId_6() { return &___ClientSdkId_6; }
	inline void set_ClientSdkId_6(uint8_t value)
	{
		___ClientSdkId_6 = value;
	}

	inline static int32_t get_offset_of_clientVersion_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___clientVersion_7)); }
	inline String_t* get_clientVersion_7() const { return ___clientVersion_7; }
	inline String_t** get_address_of_clientVersion_7() { return &___clientVersion_7; }
	inline void set_clientVersion_7(String_t* value)
	{
		___clientVersion_7 = value;
		Il2CppCodeGenWriteBarrier((&___clientVersion_7), value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CSerializationProtocolTypeU3Ek__BackingField_8)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_8() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_8() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_8; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_8(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SocketImplementationConfig_9)); }
	inline Dictionary_2_t1253839074 * get_SocketImplementationConfig_9() const { return ___SocketImplementationConfig_9; }
	inline Dictionary_2_t1253839074 ** get_address_of_SocketImplementationConfig_9() { return &___SocketImplementationConfig_9; }
	inline void set_SocketImplementationConfig_9(Dictionary_2_t1253839074 * value)
	{
		___SocketImplementationConfig_9 = value;
		Il2CppCodeGenWriteBarrier((&___SocketImplementationConfig_9), value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CSocketImplementationU3Ek__BackingField_10)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_10() const { return ___U3CSocketImplementationU3Ek__BackingField_10; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_10() { return &___U3CSocketImplementationU3Ek__BackingField_10; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_10(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSocketImplementationU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_DebugOut_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DebugOut_11)); }
	inline uint8_t get_DebugOut_11() const { return ___DebugOut_11; }
	inline uint8_t* get_address_of_DebugOut_11() { return &___DebugOut_11; }
	inline void set_DebugOut_11(uint8_t value)
	{
		___DebugOut_11 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CListenerU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_12() const { return ___U3CListenerU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_12() { return &___U3CListenerU3Ek__BackingField_12; }
	inline void set_U3CListenerU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CListenerU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CEnableServerTracingU3Ek__BackingField_13)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_13() const { return ___U3CEnableServerTracingU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_13() { return &___U3CEnableServerTracingU3Ek__BackingField_13; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_13(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___quickResendAttempts_14)); }
	inline uint8_t get_quickResendAttempts_14() const { return ___quickResendAttempts_14; }
	inline uint8_t* get_address_of_quickResendAttempts_14() { return &___quickResendAttempts_14; }
	inline void set_quickResendAttempts_14(uint8_t value)
	{
		___quickResendAttempts_14 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RhttpMinConnections_15)); }
	inline int32_t get_RhttpMinConnections_15() const { return ___RhttpMinConnections_15; }
	inline int32_t* get_address_of_RhttpMinConnections_15() { return &___RhttpMinConnections_15; }
	inline void set_RhttpMinConnections_15(int32_t value)
	{
		___RhttpMinConnections_15 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RhttpMaxConnections_16)); }
	inline int32_t get_RhttpMaxConnections_16() const { return ___RhttpMaxConnections_16; }
	inline int32_t* get_address_of_RhttpMaxConnections_16() { return &___RhttpMaxConnections_16; }
	inline void set_RhttpMaxConnections_16(int32_t value)
	{
		___RhttpMaxConnections_16 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___ChannelCount_17)); }
	inline uint8_t get_ChannelCount_17() const { return ___ChannelCount_17; }
	inline uint8_t* get_address_of_ChannelCount_17() { return &___ChannelCount_17; }
	inline void set_ChannelCount_17(uint8_t value)
	{
		___ChannelCount_17 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___crcEnabled_18)); }
	inline bool get_crcEnabled_18() const { return ___crcEnabled_18; }
	inline bool* get_address_of_crcEnabled_18() { return &___crcEnabled_18; }
	inline void set_crcEnabled_18(bool value)
	{
		___crcEnabled_18 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SentCountAllowance_19)); }
	inline int32_t get_SentCountAllowance_19() const { return ___SentCountAllowance_19; }
	inline int32_t* get_address_of_SentCountAllowance_19() { return &___SentCountAllowance_19; }
	inline void set_SentCountAllowance_19(int32_t value)
	{
		___SentCountAllowance_19 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___TimePingInterval_20)); }
	inline int32_t get_TimePingInterval_20() const { return ___TimePingInterval_20; }
	inline int32_t* get_address_of_TimePingInterval_20() { return &___TimePingInterval_20; }
	inline void set_TimePingInterval_20(int32_t value)
	{
		___TimePingInterval_20 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DisconnectTimeout_21)); }
	inline int32_t get_DisconnectTimeout_21() const { return ___DisconnectTimeout_21; }
	inline int32_t* get_address_of_DisconnectTimeout_21() { return &___DisconnectTimeout_21; }
	inline void set_DisconnectTimeout_21(int32_t value)
	{
		___DisconnectTimeout_21 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTransportProtocolU3Ek__BackingField_22)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_22() const { return ___U3CTransportProtocolU3Ek__BackingField_22; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_22() { return &___U3CTransportProtocolU3Ek__BackingField_22; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_22(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_mtu_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___mtu_24)); }
	inline int32_t get_mtu_24() const { return ___mtu_24; }
	inline int32_t* get_address_of_mtu_24() { return &___mtu_24; }
	inline void set_mtu_24(int32_t value)
	{
		___mtu_24 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CIsSendingOnlyAcksU3Ek__BackingField_25)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_25() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_25() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_25; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_25(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RandomizeSequenceNumbers_27)); }
	inline bool get_RandomizeSequenceNumbers_27() const { return ___RandomizeSequenceNumbers_27; }
	inline bool* get_address_of_RandomizeSequenceNumbers_27() { return &___RandomizeSequenceNumbers_27; }
	inline void set_RandomizeSequenceNumbers_27(bool value)
	{
		___RandomizeSequenceNumbers_27 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RandomizedSequenceNumbers_28)); }
	inline ByteU5BU5D_t4116647657* get_RandomizedSequenceNumbers_28() const { return ___RandomizedSequenceNumbers_28; }
	inline ByteU5BU5D_t4116647657** get_address_of_RandomizedSequenceNumbers_28() { return &___RandomizedSequenceNumbers_28; }
	inline void set_RandomizedSequenceNumbers_28(ByteU5BU5D_t4116647657* value)
	{
		___RandomizedSequenceNumbers_28 = value;
		Il2CppCodeGenWriteBarrier((&___RandomizedSequenceNumbers_28), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsIncomingU3Ek__BackingField_29)); }
	inline TrafficStats_t1302902347 * get_U3CTrafficStatsIncomingU3Ek__BackingField_29() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_29; }
	inline TrafficStats_t1302902347 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_29() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_29; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_29(TrafficStats_t1302902347 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsIncomingU3Ek__BackingField_29), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsOutgoingU3Ek__BackingField_30)); }
	inline TrafficStats_t1302902347 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_30() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_30; }
	inline TrafficStats_t1302902347 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_30() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_30; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_30(TrafficStats_t1302902347 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsOutgoingU3Ek__BackingField_30), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsGameLevelU3Ek__BackingField_31)); }
	inline TrafficStatsGameLevel_t4013908777 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_31() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_31; }
	inline TrafficStatsGameLevel_t4013908777 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_31() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_31; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_31(TrafficStatsGameLevel_t4013908777 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsGameLevelU3Ek__BackingField_31), value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___trafficStatsStopwatch_32)); }
	inline Stopwatch_t305734070 * get_trafficStatsStopwatch_32() const { return ___trafficStatsStopwatch_32; }
	inline Stopwatch_t305734070 ** get_address_of_trafficStatsStopwatch_32() { return &___trafficStatsStopwatch_32; }
	inline void set_trafficStatsStopwatch_32(Stopwatch_t305734070 * value)
	{
		___trafficStatsStopwatch_32 = value;
		Il2CppCodeGenWriteBarrier((&___trafficStatsStopwatch_32), value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___trafficStatsEnabled_33)); }
	inline bool get_trafficStatsEnabled_33() const { return ___trafficStatsEnabled_33; }
	inline bool* get_address_of_trafficStatsEnabled_33() { return &___trafficStatsEnabled_33; }
	inline void set_trafficStatsEnabled_33(bool value)
	{
		___trafficStatsEnabled_33 = value;
	}

	inline static int32_t get_offset_of_peerBase_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___peerBase_34)); }
	inline PeerBase_t2956237011 * get_peerBase_34() const { return ___peerBase_34; }
	inline PeerBase_t2956237011 ** get_address_of_peerBase_34() { return &___peerBase_34; }
	inline void set_peerBase_34(PeerBase_t2956237011 * value)
	{
		___peerBase_34 = value;
		Il2CppCodeGenWriteBarrier((&___peerBase_34), value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SendOutgoingLockObject_35)); }
	inline RuntimeObject * get_SendOutgoingLockObject_35() const { return ___SendOutgoingLockObject_35; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_35() { return &___SendOutgoingLockObject_35; }
	inline void set_SendOutgoingLockObject_35(RuntimeObject * value)
	{
		___SendOutgoingLockObject_35 = value;
		Il2CppCodeGenWriteBarrier((&___SendOutgoingLockObject_35), value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DispatchLockObject_36)); }
	inline RuntimeObject * get_DispatchLockObject_36() const { return ___DispatchLockObject_36; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_36() { return &___DispatchLockObject_36; }
	inline void set_DispatchLockObject_36(RuntimeObject * value)
	{
		___DispatchLockObject_36 = value;
		Il2CppCodeGenWriteBarrier((&___DispatchLockObject_36), value);
	}

	inline static int32_t get_offset_of_EnqueueLock_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___EnqueueLock_37)); }
	inline RuntimeObject * get_EnqueueLock_37() const { return ___EnqueueLock_37; }
	inline RuntimeObject ** get_address_of_EnqueueLock_37() { return &___EnqueueLock_37; }
	inline void set_EnqueueLock_37(RuntimeObject * value)
	{
		___EnqueueLock_37 = value;
		Il2CppCodeGenWriteBarrier((&___EnqueueLock_37), value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___PayloadEncryptionSecret_38)); }
	inline ByteU5BU5D_t4116647657* get_PayloadEncryptionSecret_38() const { return ___PayloadEncryptionSecret_38; }
	inline ByteU5BU5D_t4116647657** get_address_of_PayloadEncryptionSecret_38() { return &___PayloadEncryptionSecret_38; }
	inline void set_PayloadEncryptionSecret_38(ByteU5BU5D_t4116647657* value)
	{
		___PayloadEncryptionSecret_38 = value;
		Il2CppCodeGenWriteBarrier((&___PayloadEncryptionSecret_38), value);
	}

	inline static int32_t get_offset_of_DgramEncryptor_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DgramEncryptor_39)); }
	inline Encryptor_t200327285 * get_DgramEncryptor_39() const { return ___DgramEncryptor_39; }
	inline Encryptor_t200327285 ** get_address_of_DgramEncryptor_39() { return &___DgramEncryptor_39; }
	inline void set_DgramEncryptor_39(Encryptor_t200327285 * value)
	{
		___DgramEncryptor_39 = value;
		Il2CppCodeGenWriteBarrier((&___DgramEncryptor_39), value);
	}

	inline static int32_t get_offset_of_DgramDecryptor_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DgramDecryptor_40)); }
	inline Decryptor_t2116099858 * get_DgramDecryptor_40() const { return ___DgramDecryptor_40; }
	inline Decryptor_t2116099858 ** get_address_of_DgramDecryptor_40() { return &___DgramDecryptor_40; }
	inline void set_DgramDecryptor_40(Decryptor_t2116099858 * value)
	{
		___DgramDecryptor_40 = value;
		Il2CppCodeGenWriteBarrier((&___DgramDecryptor_40), value);
	}
};

struct PhotonPeer_t1608153861_StaticFields
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_26;

public:
	inline static int32_t get_offset_of_OutgoingStreamBufferSize_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861_StaticFields, ___OutgoingStreamBufferSize_23)); }
	inline int32_t get_OutgoingStreamBufferSize_23() const { return ___OutgoingStreamBufferSize_23; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_23() { return &___OutgoingStreamBufferSize_23; }
	inline void set_OutgoingStreamBufferSize_23(int32_t value)
	{
		___OutgoingStreamBufferSize_23 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861_StaticFields, ___AsyncKeyExchange_26)); }
	inline bool get_AsyncKeyExchange_26() const { return ___AsyncKeyExchange_26; }
	inline bool* get_address_of_AsyncKeyExchange_26() { return &___AsyncKeyExchange_26; }
	inline void set_AsyncKeyExchange_26(bool value)
	{
		___AsyncKeyExchange_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONPEER_T1608153861_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef GUISKIN_T1244372282_H
#define GUISKIN_T1244372282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t1244372282  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t1956802104 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t3956901511 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t3956901511 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t3956901511 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t3956901511 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t3956901511 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t3956901511 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t3956901511 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t3956901511 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t3956901511 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t3956901511 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t3956901511 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t3956901511 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t3956901511 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t3956901511 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t3956901511 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t3956901511 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2383250302* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t1774757634 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t3742157810 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Font_2)); }
	inline Font_t1956802104 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t1956802104 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t1956802104 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_box_3)); }
	inline GUIStyle_t3956901511 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t3956901511 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t3956901511 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_button_4)); }
	inline GUIStyle_t3956901511 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t3956901511 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t3956901511 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_toggle_5)); }
	inline GUIStyle_t3956901511 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t3956901511 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_label_6)); }
	inline GUIStyle_t3956901511 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t3956901511 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t3956901511 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textField_7)); }
	inline GUIStyle_t3956901511 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t3956901511 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textArea_8)); }
	inline GUIStyle_t3956901511 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t3956901511 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_window_9)); }
	inline GUIStyle_t3956901511 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t3956901511 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t3956901511 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSlider_10)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSlider_12)); }
	inline GUIStyle_t3956901511 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t3956901511 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t3956901511 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t3956901511 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_ScrollView_22)); }
	inline GUIStyle_t3956901511 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t3956901511 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t3956901511 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t2383250302* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t2383250302** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t2383250302* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Settings_24)); }
	inline GUISettings_t1774757634 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t1774757634 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t1774757634 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Styles_26)); }
	inline Dictionary_2_t3742157810 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t3742157810 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t3742157810 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t1244372282_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t3956901511 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t1143955295 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t1244372282 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t3956901511 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t3956901511 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t3956901511 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t1143955295 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t1143955295 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t1143955295 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___current_28)); }
	inline GUISkin_t1244372282 * get_current_28() const { return ___current_28; }
	inline GUISkin_t1244372282 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t1244372282 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T1244372282_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef LOADBALANCINGPEER_T3218467959_H
#define LOADBALANCINGPEER_T3218467959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadBalancingPeer
struct  LoadBalancingPeer_t3218467959  : public PhotonPeer_t1608153861
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> LoadBalancingPeer::opParameters
	Dictionary_2_t1405253484 * ___opParameters_41;

public:
	inline static int32_t get_offset_of_opParameters_41() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t3218467959, ___opParameters_41)); }
	inline Dictionary_2_t1405253484 * get_opParameters_41() const { return ___opParameters_41; }
	inline Dictionary_2_t1405253484 ** get_address_of_opParameters_41() { return &___opParameters_41; }
	inline void set_opParameters_41(Dictionary_2_t1405253484 * value)
	{
		___opParameters_41 = value;
		Il2CppCodeGenWriteBarrier((&___opParameters_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADBALANCINGPEER_T3218467959_H
#ifndef TYPEDLOBBYINFO_T2504508049_H
#define TYPEDLOBBYINFO_T2504508049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypedLobbyInfo
struct  TypedLobbyInfo_t2504508049  : public TypedLobby_t3336582029
{
public:
	// System.Int32 TypedLobbyInfo::PlayerCount
	int32_t ___PlayerCount_3;
	// System.Int32 TypedLobbyInfo::RoomCount
	int32_t ___RoomCount_4;

public:
	inline static int32_t get_offset_of_PlayerCount_3() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2504508049, ___PlayerCount_3)); }
	inline int32_t get_PlayerCount_3() const { return ___PlayerCount_3; }
	inline int32_t* get_address_of_PlayerCount_3() { return &___PlayerCount_3; }
	inline void set_PlayerCount_3(int32_t value)
	{
		___PlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_RoomCount_4() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2504508049, ___RoomCount_4)); }
	inline int32_t get_RoomCount_4() const { return ___RoomCount_4; }
	inline int32_t* get_address_of_RoomCount_4() { return &___RoomCount_4; }
	inline void set_RoomCount_4(int32_t value)
	{
		___RoomCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDLOBBYINFO_T2504508049_H
#ifndef ACTION_2_T2360473393_H
#define ACTION_2_T2360473393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Int32,System.Byte>
struct  Action_2_t2360473393  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T2360473393_H
#ifndef REMOTEVOICEINFODELEGATE_T3963975941_H
#define REMOTEVOICEINFODELEGATE_T3963975941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct  RemoteVoiceInfoDelegate_t3963975941  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEVOICEINFODELEGATE_T3963975941_H
#ifndef LOADBALANCINGFRONTEND_T4154771402_H
#define LOADBALANCINGFRONTEND_T4154771402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LoadBalancingFrontend
struct  LoadBalancingFrontend_t4154771402  : public LoadBalancingClient_t3850494520
{
public:
	// ExitGames.Client.Photon.Voice.VoiceClient ExitGames.Client.Photon.Voice.LoadBalancingFrontend::voiceClient
	VoiceClient_t4265131299 * ___voiceClient_41;
	// System.Action`1<ExitGames.Client.Photon.EventData> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::<OnEventAction>k__BackingField
	Action_1_t3900690969 * ___U3COnEventActionU3Ek__BackingField_42;
	// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::<OnStateChangeAction>k__BackingField
	Action_1_t643525275 * ___U3COnStateChangeActionU3Ek__BackingField_43;
	// System.Object ExitGames.Client.Photon.Voice.LoadBalancingFrontend::sendLock
	RuntimeObject * ___sendLock_44;

public:
	inline static int32_t get_offset_of_voiceClient_41() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t4154771402, ___voiceClient_41)); }
	inline VoiceClient_t4265131299 * get_voiceClient_41() const { return ___voiceClient_41; }
	inline VoiceClient_t4265131299 ** get_address_of_voiceClient_41() { return &___voiceClient_41; }
	inline void set_voiceClient_41(VoiceClient_t4265131299 * value)
	{
		___voiceClient_41 = value;
		Il2CppCodeGenWriteBarrier((&___voiceClient_41), value);
	}

	inline static int32_t get_offset_of_U3COnEventActionU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t4154771402, ___U3COnEventActionU3Ek__BackingField_42)); }
	inline Action_1_t3900690969 * get_U3COnEventActionU3Ek__BackingField_42() const { return ___U3COnEventActionU3Ek__BackingField_42; }
	inline Action_1_t3900690969 ** get_address_of_U3COnEventActionU3Ek__BackingField_42() { return &___U3COnEventActionU3Ek__BackingField_42; }
	inline void set_U3COnEventActionU3Ek__BackingField_42(Action_1_t3900690969 * value)
	{
		___U3COnEventActionU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnEventActionU3Ek__BackingField_42), value);
	}

	inline static int32_t get_offset_of_U3COnStateChangeActionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t4154771402, ___U3COnStateChangeActionU3Ek__BackingField_43)); }
	inline Action_1_t643525275 * get_U3COnStateChangeActionU3Ek__BackingField_43() const { return ___U3COnStateChangeActionU3Ek__BackingField_43; }
	inline Action_1_t643525275 ** get_address_of_U3COnStateChangeActionU3Ek__BackingField_43() { return &___U3COnStateChangeActionU3Ek__BackingField_43; }
	inline void set_U3COnStateChangeActionU3Ek__BackingField_43(Action_1_t643525275 * value)
	{
		___U3COnStateChangeActionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnStateChangeActionU3Ek__BackingField_43), value);
	}

	inline static int32_t get_offset_of_sendLock_44() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t4154771402, ___sendLock_44)); }
	inline RuntimeObject * get_sendLock_44() const { return ___sendLock_44; }
	inline RuntimeObject ** get_address_of_sendLock_44() { return &___sendLock_44; }
	inline void set_sendLock_44(RuntimeObject * value)
	{
		___sendLock_44 = value;
		Il2CppCodeGenWriteBarrier((&___sendLock_44), value);
	}
};

struct LoadBalancingFrontend_t4154771402_StaticFields
{
public:
	// System.Func`2<ExitGames.Client.Photon.Voice.LocalVoice,System.Boolean> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::<>f__am$cache0
	Func_2_t1227927439 * ___U3CU3Ef__amU24cache0_45;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_45() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t4154771402_StaticFields, ___U3CU3Ef__amU24cache0_45)); }
	inline Func_2_t1227927439 * get_U3CU3Ef__amU24cache0_45() const { return ___U3CU3Ef__amU24cache0_45; }
	inline Func_2_t1227927439 ** get_address_of_U3CU3Ef__amU24cache0_45() { return &___U3CU3Ef__amU24cache0_45; }
	inline void set_U3CU3Ef__amU24cache0_45(Func_2_t1227927439 * value)
	{
		___U3CU3Ef__amU24cache0_45 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_45), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADBALANCINGFRONTEND_T4154771402_H
#ifndef ACTION_3_T1509206889_H
#define ACTION_3_T1509206889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.Int32,System.Byte,System.Single[]>
struct  Action_3_t1509206889  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T1509206889_H
#ifndef LOCALVOICE_T3918029076_H
#define LOCALVOICE_T3918029076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LocalVoice
struct  LocalVoice_t3918029076  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.Voice.LocalVoice::<Group>k__BackingField
	uint8_t ___U3CGroupU3Ek__BackingField_1;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::<Transmit>k__BackingField
	bool ___U3CTransmitU3Ek__BackingField_2;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::<IsTransmitting>k__BackingField
	bool ___U3CIsTransmittingU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_5;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_6;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::<Encrypt>k__BackingField
	bool ___U3CEncryptU3Ek__BackingField_7;
	// System.Object ExitGames.Client.Photon.Voice.LocalVoice::<LocalUserObject>k__BackingField
	RuntimeObject * ___U3CLocalUserObjectU3Ek__BackingField_8;
	// ExitGames.Client.Photon.Voice.IServiceable ExitGames.Client.Photon.Voice.LocalVoice::<LocalUserServiceable>k__BackingField
	RuntimeObject* ___U3CLocalUserServiceableU3Ek__BackingField_9;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::debugEchoMode
	bool ___debugEchoMode_10;
	// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.LocalVoice::info
	VoiceInfo_t822772786  ___info_11;
	// ExitGames.Client.Photon.Voice.IEncoder ExitGames.Client.Photon.Voice.LocalVoice::encoder
	RuntimeObject* ___encoder_12;
	// System.Byte ExitGames.Client.Photon.Voice.LocalVoice::id
	uint8_t ___id_13;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_14;
	// System.Byte ExitGames.Client.Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_15;
	// ExitGames.Client.Photon.Voice.VoiceClient ExitGames.Client.Photon.Voice.LocalVoice::voiceClient
	VoiceClient_t4265131299 * ___voiceClient_16;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) ExitGames.Client.Photon.Voice.LocalVoice::disposed
	bool ___disposed_17;
	// System.Object ExitGames.Client.Photon.Voice.LocalVoice::disposeLock
	RuntimeObject * ___disposeLock_18;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::noTransmitCnt
	int32_t ___noTransmitCnt_19;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> ExitGames.Client.Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_t1276093073 * ___eventTimestamps_20;

public:
	inline static int32_t get_offset_of_U3CGroupU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CGroupU3Ek__BackingField_1)); }
	inline uint8_t get_U3CGroupU3Ek__BackingField_1() const { return ___U3CGroupU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CGroupU3Ek__BackingField_1() { return &___U3CGroupU3Ek__BackingField_1; }
	inline void set_U3CGroupU3Ek__BackingField_1(uint8_t value)
	{
		___U3CGroupU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTransmitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CTransmitU3Ek__BackingField_2)); }
	inline bool get_U3CTransmitU3Ek__BackingField_2() const { return ___U3CTransmitU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CTransmitU3Ek__BackingField_2() { return &___U3CTransmitU3Ek__BackingField_2; }
	inline void set_U3CTransmitU3Ek__BackingField_2(bool value)
	{
		___U3CTransmitU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsTransmittingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CIsTransmittingU3Ek__BackingField_3)); }
	inline bool get_U3CIsTransmittingU3Ek__BackingField_3() const { return ___U3CIsTransmittingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsTransmittingU3Ek__BackingField_3() { return &___U3CIsTransmittingU3Ek__BackingField_3; }
	inline void set_U3CIsTransmittingU3Ek__BackingField_3(bool value)
	{
		___U3CIsTransmittingU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CFramesSentU3Ek__BackingField_4)); }
	inline int32_t get_U3CFramesSentU3Ek__BackingField_4() const { return ___U3CFramesSentU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFramesSentU3Ek__BackingField_4() { return &___U3CFramesSentU3Ek__BackingField_4; }
	inline void set_U3CFramesSentU3Ek__BackingField_4(int32_t value)
	{
		___U3CFramesSentU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentBytesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CFramesSentBytesU3Ek__BackingField_5)); }
	inline int32_t get_U3CFramesSentBytesU3Ek__BackingField_5() const { return ___U3CFramesSentBytesU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CFramesSentBytesU3Ek__BackingField_5() { return &___U3CFramesSentBytesU3Ek__BackingField_5; }
	inline void set_U3CFramesSentBytesU3Ek__BackingField_5(int32_t value)
	{
		___U3CFramesSentBytesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CReliableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CReliableU3Ek__BackingField_6)); }
	inline bool get_U3CReliableU3Ek__BackingField_6() const { return ___U3CReliableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CReliableU3Ek__BackingField_6() { return &___U3CReliableU3Ek__BackingField_6; }
	inline void set_U3CReliableU3Ek__BackingField_6(bool value)
	{
		___U3CReliableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEncryptU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CEncryptU3Ek__BackingField_7)); }
	inline bool get_U3CEncryptU3Ek__BackingField_7() const { return ___U3CEncryptU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CEncryptU3Ek__BackingField_7() { return &___U3CEncryptU3Ek__BackingField_7; }
	inline void set_U3CEncryptU3Ek__BackingField_7(bool value)
	{
		___U3CEncryptU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserObjectU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CLocalUserObjectU3Ek__BackingField_8)); }
	inline RuntimeObject * get_U3CLocalUserObjectU3Ek__BackingField_8() const { return ___U3CLocalUserObjectU3Ek__BackingField_8; }
	inline RuntimeObject ** get_address_of_U3CLocalUserObjectU3Ek__BackingField_8() { return &___U3CLocalUserObjectU3Ek__BackingField_8; }
	inline void set_U3CLocalUserObjectU3Ek__BackingField_8(RuntimeObject * value)
	{
		___U3CLocalUserObjectU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocalUserObjectU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CLocalUserServiceableU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___U3CLocalUserServiceableU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CLocalUserServiceableU3Ek__BackingField_9() const { return ___U3CLocalUserServiceableU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CLocalUserServiceableU3Ek__BackingField_9() { return &___U3CLocalUserServiceableU3Ek__BackingField_9; }
	inline void set_U3CLocalUserServiceableU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CLocalUserServiceableU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocalUserServiceableU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_debugEchoMode_10() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___debugEchoMode_10)); }
	inline bool get_debugEchoMode_10() const { return ___debugEchoMode_10; }
	inline bool* get_address_of_debugEchoMode_10() { return &___debugEchoMode_10; }
	inline void set_debugEchoMode_10(bool value)
	{
		___debugEchoMode_10 = value;
	}

	inline static int32_t get_offset_of_info_11() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___info_11)); }
	inline VoiceInfo_t822772786  get_info_11() const { return ___info_11; }
	inline VoiceInfo_t822772786 * get_address_of_info_11() { return &___info_11; }
	inline void set_info_11(VoiceInfo_t822772786  value)
	{
		___info_11 = value;
	}

	inline static int32_t get_offset_of_encoder_12() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___encoder_12)); }
	inline RuntimeObject* get_encoder_12() const { return ___encoder_12; }
	inline RuntimeObject** get_address_of_encoder_12() { return &___encoder_12; }
	inline void set_encoder_12(RuntimeObject* value)
	{
		___encoder_12 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_12), value);
	}

	inline static int32_t get_offset_of_id_13() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___id_13)); }
	inline uint8_t get_id_13() const { return ___id_13; }
	inline uint8_t* get_address_of_id_13() { return &___id_13; }
	inline void set_id_13(uint8_t value)
	{
		___id_13 = value;
	}

	inline static int32_t get_offset_of_channelId_14() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___channelId_14)); }
	inline int32_t get_channelId_14() const { return ___channelId_14; }
	inline int32_t* get_address_of_channelId_14() { return &___channelId_14; }
	inline void set_channelId_14(int32_t value)
	{
		___channelId_14 = value;
	}

	inline static int32_t get_offset_of_evNumber_15() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___evNumber_15)); }
	inline uint8_t get_evNumber_15() const { return ___evNumber_15; }
	inline uint8_t* get_address_of_evNumber_15() { return &___evNumber_15; }
	inline void set_evNumber_15(uint8_t value)
	{
		___evNumber_15 = value;
	}

	inline static int32_t get_offset_of_voiceClient_16() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___voiceClient_16)); }
	inline VoiceClient_t4265131299 * get_voiceClient_16() const { return ___voiceClient_16; }
	inline VoiceClient_t4265131299 ** get_address_of_voiceClient_16() { return &___voiceClient_16; }
	inline void set_voiceClient_16(VoiceClient_t4265131299 * value)
	{
		___voiceClient_16 = value;
		Il2CppCodeGenWriteBarrier((&___voiceClient_16), value);
	}

	inline static int32_t get_offset_of_disposed_17() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___disposed_17)); }
	inline bool get_disposed_17() const { return ___disposed_17; }
	inline bool* get_address_of_disposed_17() { return &___disposed_17; }
	inline void set_disposed_17(bool value)
	{
		___disposed_17 = value;
	}

	inline static int32_t get_offset_of_disposeLock_18() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___disposeLock_18)); }
	inline RuntimeObject * get_disposeLock_18() const { return ___disposeLock_18; }
	inline RuntimeObject ** get_address_of_disposeLock_18() { return &___disposeLock_18; }
	inline void set_disposeLock_18(RuntimeObject * value)
	{
		___disposeLock_18 = value;
		Il2CppCodeGenWriteBarrier((&___disposeLock_18), value);
	}

	inline static int32_t get_offset_of_noTransmitCnt_19() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___noTransmitCnt_19)); }
	inline int32_t get_noTransmitCnt_19() const { return ___noTransmitCnt_19; }
	inline int32_t* get_address_of_noTransmitCnt_19() { return &___noTransmitCnt_19; }
	inline void set_noTransmitCnt_19(int32_t value)
	{
		___noTransmitCnt_19 = value;
	}

	inline static int32_t get_offset_of_eventTimestamps_20() { return static_cast<int32_t>(offsetof(LocalVoice_t3918029076, ___eventTimestamps_20)); }
	inline Dictionary_2_t1276093073 * get_eventTimestamps_20() const { return ___eventTimestamps_20; }
	inline Dictionary_2_t1276093073 ** get_address_of_eventTimestamps_20() { return &___eventTimestamps_20; }
	inline void set_eventTimestamps_20(Dictionary_2_t1276093073 * value)
	{
		___eventTimestamps_20 = value;
		Il2CppCodeGenWriteBarrier((&___eventTimestamps_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVOICE_T3918029076_H
#ifndef ACTION_3_T887068424_H
#define ACTION_3_T887068424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>
struct  Action_3_t887068424  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T887068424_H
#ifndef FUNC_1_T3166313951_H
#define FUNC_1_T3166313951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Int64>
struct  Func_1_t3166313951  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3166313951_H
#ifndef ACTION_1_T643525275_H
#define ACTION_1_T643525275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>
struct  Action_1_t643525275  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T643525275_H
#ifndef LOADBALANCINGPEER_T794198942_H
#define LOADBALANCINGPEER_T794198942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer
struct  LoadBalancingPeer_t794198942  : public PhotonPeer_t1608153861
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::opParameters
	Dictionary_2_t1405253484 * ___opParameters_42;

public:
	inline static int32_t get_offset_of_opParameters_42() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t794198942, ___opParameters_42)); }
	inline Dictionary_2_t1405253484 * get_opParameters_42() const { return ___opParameters_42; }
	inline Dictionary_2_t1405253484 ** get_address_of_opParameters_42() { return &___opParameters_42; }
	inline void set_opParameters_42(Dictionary_2_t1405253484 * value)
	{
		___opParameters_42 = value;
		Il2CppCodeGenWriteBarrier((&___opParameters_42), value);
	}
};

struct LoadBalancingPeer_t794198942_StaticFields
{
public:
	// System.Type ExitGames.Client.Photon.LoadBalancing.LoadBalancingPeer::PingImplementation
	Type_t * ___PingImplementation_41;

public:
	inline static int32_t get_offset_of_PingImplementation_41() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t794198942_StaticFields, ___PingImplementation_41)); }
	inline Type_t * get_PingImplementation_41() const { return ___PingImplementation_41; }
	inline Type_t ** get_address_of_PingImplementation_41() { return &___PingImplementation_41; }
	inline void set_PingImplementation_41(Type_t * value)
	{
		___PingImplementation_41 = value;
		Il2CppCodeGenWriteBarrier((&___PingImplementation_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADBALANCINGPEER_T794198942_H
#ifndef SERVERSETTINGS_T2755303613_H
#define SERVERSETTINGS_T2755303613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServerSettings
struct  ServerSettings_t2755303613  : public ScriptableObject_t2528358522
{
public:
	// System.String ServerSettings::AppID
	String_t* ___AppID_2;
	// System.String ServerSettings::VoiceAppID
	String_t* ___VoiceAppID_3;
	// System.String ServerSettings::ChatAppID
	String_t* ___ChatAppID_4;
	// ServerSettings/HostingOption ServerSettings::HostType
	int32_t ___HostType_5;
	// CloudRegionCode ServerSettings::PreferredRegion
	int32_t ___PreferredRegion_6;
	// CloudRegionFlag ServerSettings::EnabledRegions
	int32_t ___EnabledRegions_7;
	// ExitGames.Client.Photon.ConnectionProtocol ServerSettings::Protocol
	uint8_t ___Protocol_8;
	// System.String ServerSettings::ServerAddress
	String_t* ___ServerAddress_9;
	// System.Int32 ServerSettings::ServerPort
	int32_t ___ServerPort_10;
	// System.Int32 ServerSettings::VoiceServerPort
	int32_t ___VoiceServerPort_11;
	// System.Boolean ServerSettings::JoinLobby
	bool ___JoinLobby_12;
	// System.Boolean ServerSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_13;
	// PhotonLogLevel ServerSettings::PunLogging
	int32_t ___PunLogging_14;
	// ExitGames.Client.Photon.DebugLevel ServerSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
	// System.Boolean ServerSettings::RunInBackground
	bool ___RunInBackground_16;
	// System.Collections.Generic.List`1<System.String> ServerSettings::RpcList
	List_1_t3319525431 * ___RpcList_17;
	// System.Boolean ServerSettings::DisableAutoOpenWizard
	bool ___DisableAutoOpenWizard_18;

public:
	inline static int32_t get_offset_of_AppID_2() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___AppID_2)); }
	inline String_t* get_AppID_2() const { return ___AppID_2; }
	inline String_t** get_address_of_AppID_2() { return &___AppID_2; }
	inline void set_AppID_2(String_t* value)
	{
		___AppID_2 = value;
		Il2CppCodeGenWriteBarrier((&___AppID_2), value);
	}

	inline static int32_t get_offset_of_VoiceAppID_3() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___VoiceAppID_3)); }
	inline String_t* get_VoiceAppID_3() const { return ___VoiceAppID_3; }
	inline String_t** get_address_of_VoiceAppID_3() { return &___VoiceAppID_3; }
	inline void set_VoiceAppID_3(String_t* value)
	{
		___VoiceAppID_3 = value;
		Il2CppCodeGenWriteBarrier((&___VoiceAppID_3), value);
	}

	inline static int32_t get_offset_of_ChatAppID_4() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___ChatAppID_4)); }
	inline String_t* get_ChatAppID_4() const { return ___ChatAppID_4; }
	inline String_t** get_address_of_ChatAppID_4() { return &___ChatAppID_4; }
	inline void set_ChatAppID_4(String_t* value)
	{
		___ChatAppID_4 = value;
		Il2CppCodeGenWriteBarrier((&___ChatAppID_4), value);
	}

	inline static int32_t get_offset_of_HostType_5() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___HostType_5)); }
	inline int32_t get_HostType_5() const { return ___HostType_5; }
	inline int32_t* get_address_of_HostType_5() { return &___HostType_5; }
	inline void set_HostType_5(int32_t value)
	{
		___HostType_5 = value;
	}

	inline static int32_t get_offset_of_PreferredRegion_6() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___PreferredRegion_6)); }
	inline int32_t get_PreferredRegion_6() const { return ___PreferredRegion_6; }
	inline int32_t* get_address_of_PreferredRegion_6() { return &___PreferredRegion_6; }
	inline void set_PreferredRegion_6(int32_t value)
	{
		___PreferredRegion_6 = value;
	}

	inline static int32_t get_offset_of_EnabledRegions_7() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___EnabledRegions_7)); }
	inline int32_t get_EnabledRegions_7() const { return ___EnabledRegions_7; }
	inline int32_t* get_address_of_EnabledRegions_7() { return &___EnabledRegions_7; }
	inline void set_EnabledRegions_7(int32_t value)
	{
		___EnabledRegions_7 = value;
	}

	inline static int32_t get_offset_of_Protocol_8() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___Protocol_8)); }
	inline uint8_t get_Protocol_8() const { return ___Protocol_8; }
	inline uint8_t* get_address_of_Protocol_8() { return &___Protocol_8; }
	inline void set_Protocol_8(uint8_t value)
	{
		___Protocol_8 = value;
	}

	inline static int32_t get_offset_of_ServerAddress_9() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___ServerAddress_9)); }
	inline String_t* get_ServerAddress_9() const { return ___ServerAddress_9; }
	inline String_t** get_address_of_ServerAddress_9() { return &___ServerAddress_9; }
	inline void set_ServerAddress_9(String_t* value)
	{
		___ServerAddress_9 = value;
		Il2CppCodeGenWriteBarrier((&___ServerAddress_9), value);
	}

	inline static int32_t get_offset_of_ServerPort_10() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___ServerPort_10)); }
	inline int32_t get_ServerPort_10() const { return ___ServerPort_10; }
	inline int32_t* get_address_of_ServerPort_10() { return &___ServerPort_10; }
	inline void set_ServerPort_10(int32_t value)
	{
		___ServerPort_10 = value;
	}

	inline static int32_t get_offset_of_VoiceServerPort_11() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___VoiceServerPort_11)); }
	inline int32_t get_VoiceServerPort_11() const { return ___VoiceServerPort_11; }
	inline int32_t* get_address_of_VoiceServerPort_11() { return &___VoiceServerPort_11; }
	inline void set_VoiceServerPort_11(int32_t value)
	{
		___VoiceServerPort_11 = value;
	}

	inline static int32_t get_offset_of_JoinLobby_12() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___JoinLobby_12)); }
	inline bool get_JoinLobby_12() const { return ___JoinLobby_12; }
	inline bool* get_address_of_JoinLobby_12() { return &___JoinLobby_12; }
	inline void set_JoinLobby_12(bool value)
	{
		___JoinLobby_12 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_13() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___EnableLobbyStatistics_13)); }
	inline bool get_EnableLobbyStatistics_13() const { return ___EnableLobbyStatistics_13; }
	inline bool* get_address_of_EnableLobbyStatistics_13() { return &___EnableLobbyStatistics_13; }
	inline void set_EnableLobbyStatistics_13(bool value)
	{
		___EnableLobbyStatistics_13 = value;
	}

	inline static int32_t get_offset_of_PunLogging_14() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___PunLogging_14)); }
	inline int32_t get_PunLogging_14() const { return ___PunLogging_14; }
	inline int32_t* get_address_of_PunLogging_14() { return &___PunLogging_14; }
	inline void set_PunLogging_14(int32_t value)
	{
		___PunLogging_14 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_15() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___NetworkLogging_15)); }
	inline uint8_t get_NetworkLogging_15() const { return ___NetworkLogging_15; }
	inline uint8_t* get_address_of_NetworkLogging_15() { return &___NetworkLogging_15; }
	inline void set_NetworkLogging_15(uint8_t value)
	{
		___NetworkLogging_15 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_16() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___RunInBackground_16)); }
	inline bool get_RunInBackground_16() const { return ___RunInBackground_16; }
	inline bool* get_address_of_RunInBackground_16() { return &___RunInBackground_16; }
	inline void set_RunInBackground_16(bool value)
	{
		___RunInBackground_16 = value;
	}

	inline static int32_t get_offset_of_RpcList_17() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___RpcList_17)); }
	inline List_1_t3319525431 * get_RpcList_17() const { return ___RpcList_17; }
	inline List_1_t3319525431 ** get_address_of_RpcList_17() { return &___RpcList_17; }
	inline void set_RpcList_17(List_1_t3319525431 * value)
	{
		___RpcList_17 = value;
		Il2CppCodeGenWriteBarrier((&___RpcList_17), value);
	}

	inline static int32_t get_offset_of_DisableAutoOpenWizard_18() { return static_cast<int32_t>(offsetof(ServerSettings_t2755303613, ___DisableAutoOpenWizard_18)); }
	inline bool get_DisableAutoOpenWizard_18() const { return ___DisableAutoOpenWizard_18; }
	inline bool* get_address_of_DisableAutoOpenWizard_18() { return &___DisableAutoOpenWizard_18; }
	inline void set_DisableAutoOpenWizard_18(bool value)
	{
		___DisableAutoOpenWizard_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERSETTINGS_T2755303613_H
#ifndef ACTION_1_T596095568_H
#define ACTION_1_T596095568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct  Action_1_t596095568  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T596095568_H
#ifndef ACTION_1_T1617378846_H
#define ACTION_1_T1617378846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Single[]>
struct  Action_1_t1617378846  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1617378846_H
#ifndef ACTION_2_T2703621360_H
#define ACTION_2_T2703621360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Single[],System.Int32>
struct  Action_2_t2703621360  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T2703621360_H
#ifndef REMOTEVOICEINFO_T1074502908_H
#define REMOTEVOICEINFO_T1074502908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.RemoteVoiceInfo
struct  RemoteVoiceInfo_t1074502908  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<Info>k__BackingField
	VoiceInfo_t822772786  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_2;
	// System.Byte ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<VoiceId>k__BackingField
	uint8_t ___U3CVoiceIdU3Ek__BackingField_3;
	// System.Object ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<LocalUserObject>k__BackingField
	RuntimeObject * ___U3CLocalUserObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t1074502908, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_t822772786  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_t822772786 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_t822772786  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t1074502908, ___U3CChannelIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_1() const { return ___U3CChannelIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_1() { return &___U3CChannelIdU3Ek__BackingField_1; }
	inline void set_U3CChannelIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t1074502908, ___U3CPlayerIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_2() const { return ___U3CPlayerIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_2() { return &___U3CPlayerIdU3Ek__BackingField_2; }
	inline void set_U3CPlayerIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t1074502908, ___U3CVoiceIdU3Ek__BackingField_3)); }
	inline uint8_t get_U3CVoiceIdU3Ek__BackingField_3() const { return ___U3CVoiceIdU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CVoiceIdU3Ek__BackingField_3() { return &___U3CVoiceIdU3Ek__BackingField_3; }
	inline void set_U3CVoiceIdU3Ek__BackingField_3(uint8_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t1074502908, ___U3CLocalUserObjectU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CLocalUserObjectU3Ek__BackingField_4() const { return ___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CLocalUserObjectU3Ek__BackingField_4() { return &___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline void set_U3CLocalUserObjectU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CLocalUserObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocalUserObjectU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEVOICEINFO_T1074502908_H
#ifndef LOCALVOICEFRAMED_T3264419308_H
#define LOCALVOICEFRAMED_T3264419308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LocalVoiceFramed
struct  LocalVoiceFramed_t3264419308  : public LocalVoice_t3918029076
{
public:
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoiceFramed::<FrameSize>k__BackingField
	int32_t ___U3CFrameSizeU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CFrameSizeU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_t3264419308, ___U3CFrameSizeU3Ek__BackingField_21)); }
	inline int32_t get_U3CFrameSizeU3Ek__BackingField_21() const { return ___U3CFrameSizeU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CFrameSizeU3Ek__BackingField_21() { return &___U3CFrameSizeU3Ek__BackingField_21; }
	inline void set_U3CFrameSizeU3Ek__BackingField_21(int32_t value)
	{
		___U3CFrameSizeU3Ek__BackingField_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVOICEFRAMED_T3264419308_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef NETWORKINGPEER_T264212356_H
#define NETWORKINGPEER_T264212356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkingPeer
struct  NetworkingPeer_t264212356  : public LoadBalancingPeer_t3218467959
{
public:
	// System.String NetworkingPeer::AppId
	String_t* ___AppId_42;
	// AuthenticationValues NetworkingPeer::<AuthValues>k__BackingField
	AuthenticationValues_t660572511 * ___U3CAuthValuesU3Ek__BackingField_43;
	// System.String NetworkingPeer::tokenCache
	String_t* ___tokenCache_44;
	// AuthModeOption NetworkingPeer::AuthMode
	int32_t ___AuthMode_45;
	// EncryptionMode NetworkingPeer::EncryptionMode
	int32_t ___EncryptionMode_46;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_47;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_51;
	// System.String NetworkingPeer::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_52;
	// ServerConnection NetworkingPeer::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_53;
	// ClientState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_54;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect_55;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby_56;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_t3336582029 * ___U3ClobbyU3Ek__BackingField_57;
	// System.Collections.Generic.List`1<TypedLobbyInfo> NetworkingPeer::LobbyStatistics
	List_1_t3976582791 * ___LobbyStatistics_58;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t2955551919 * ___mGameList_59;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_t1491207981* ___mGameListCopy_60;
	// System.String NetworkingPeer::playername
	String_t* ___playername_61;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated_62;
	// Room NetworkingPeer::currentRoom
	Room_t3759828263 * ___currentRoom_63;
	// PhotonPlayer NetworkingPeer::<LocalPlayer>k__BackingField
	PhotonPlayer_t3305149557 * ___U3CLocalPlayerU3Ek__BackingField_64;
	// System.Int32 NetworkingPeer::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_65;
	// System.Int32 NetworkingPeer::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_66;
	// System.Int32 NetworkingPeer::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_67;
	// JoinType NetworkingPeer::lastJoinType
	int32_t ___lastJoinType_68;
	// EnterRoomParams NetworkingPeer::enterRoomParamsCache
	EnterRoomParams_t3960472384 * ___enterRoomParamsCache_69;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate_70;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_t1281789340* ___friendListRequested_71;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp_72;
	// System.Boolean NetworkingPeer::isFetchingFriendList
	bool ___isFetchingFriendList_73;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_t861332708 * ___U3CAvailableRegionsU3Ek__BackingField_74;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField_75;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t2193862888 * ___mActors_76;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t2880637464* ___mOtherPlayerListCopy_77;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t2880637464* ___mPlayerListCopy_78;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC_79;
	// System.Collections.Generic.HashSet`1<System.Byte> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t3994213146 * ___allowedReceivingGroups_80;
	// System.Collections.Generic.HashSet`1<System.Byte> NetworkingPeer::blockSendingGroups
	HashSet_1_t3994213146 * ___blockSendingGroups_81;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t1096435151 * ___photonViewList_82;
	// PhotonStream NetworkingPeer::readStream
	PhotonStream_t1003850889 * ___readStream_83;
	// PhotonStream NetworkingPeer::pStream
	PhotonStream_t1003850889 * ___pStream_84;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t4231889829 * ___dataPerGroupReliable_85;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t4231889829 * ___dataPerGroupUnreliable_86;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix_87;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_88;
	// IPunPrefabPool NetworkingPeer::ObjectPool
	RuntimeObject* ___ObjectPool_92;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t1499080758 * ___monoRPCMethodsCache_94;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_t2736202052 * ___rpcShortcuts_95;
	// System.String NetworkingPeer::cachedServerAddress
	String_t* ___cachedServerAddress_97;
	// System.String NetworkingPeer::cachedApplicationName
	String_t* ___cachedApplicationName_98;
	// ServerConnection NetworkingPeer::cachedServerType
	int32_t ___cachedServerType_99;
	// UnityEngine.AsyncOperation NetworkingPeer::_AsyncLevelLoadingOperation
	AsyncOperation_t1445031843 * ____AsyncLevelLoadingOperation_100;
	// RaiseEventOptions NetworkingPeer::_levelReloadEventOptions
	RaiseEventOptions_t1229553678 * ____levelReloadEventOptions_101;
	// System.Boolean NetworkingPeer::_isReconnecting
	bool ____isReconnecting_102;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t1732652656 * ___tempInstantiationData_103;
	// RaiseEventOptions NetworkingPeer::options
	RaiseEventOptions_t1229553678 * ___options_105;
	// System.Boolean NetworkingPeer::IsReloadingLevel
	bool ___IsReloadingLevel_110;
	// System.Boolean NetworkingPeer::AsynchLevelLoadCall
	bool ___AsynchLevelLoadCall_111;

public:
	inline static int32_t get_offset_of_AppId_42() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___AppId_42)); }
	inline String_t* get_AppId_42() const { return ___AppId_42; }
	inline String_t** get_address_of_AppId_42() { return &___AppId_42; }
	inline void set_AppId_42(String_t* value)
	{
		___AppId_42 = value;
		Il2CppCodeGenWriteBarrier((&___AppId_42), value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CAuthValuesU3Ek__BackingField_43)); }
	inline AuthenticationValues_t660572511 * get_U3CAuthValuesU3Ek__BackingField_43() const { return ___U3CAuthValuesU3Ek__BackingField_43; }
	inline AuthenticationValues_t660572511 ** get_address_of_U3CAuthValuesU3Ek__BackingField_43() { return &___U3CAuthValuesU3Ek__BackingField_43; }
	inline void set_U3CAuthValuesU3Ek__BackingField_43(AuthenticationValues_t660572511 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthValuesU3Ek__BackingField_43), value);
	}

	inline static int32_t get_offset_of_tokenCache_44() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___tokenCache_44)); }
	inline String_t* get_tokenCache_44() const { return ___tokenCache_44; }
	inline String_t** get_address_of_tokenCache_44() { return &___tokenCache_44; }
	inline void set_tokenCache_44(String_t* value)
	{
		___tokenCache_44 = value;
		Il2CppCodeGenWriteBarrier((&___tokenCache_44), value);
	}

	inline static int32_t get_offset_of_AuthMode_45() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___AuthMode_45)); }
	inline int32_t get_AuthMode_45() const { return ___AuthMode_45; }
	inline int32_t* get_address_of_AuthMode_45() { return &___AuthMode_45; }
	inline void set_AuthMode_45(int32_t value)
	{
		___AuthMode_45 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_46() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___EncryptionMode_46)); }
	inline int32_t get_EncryptionMode_46() const { return ___EncryptionMode_46; }
	inline int32_t* get_address_of_EncryptionMode_46() { return &___EncryptionMode_46; }
	inline void set_EncryptionMode_46(int32_t value)
	{
		___EncryptionMode_46 = value;
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CIsUsingNameServerU3Ek__BackingField_47)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_47() const { return ___U3CIsUsingNameServerU3Ek__BackingField_47; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_47() { return &___U3CIsUsingNameServerU3Ek__BackingField_47; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_47(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CMasterServerAddressU3Ek__BackingField_51)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_51() const { return ___U3CMasterServerAddressU3Ek__BackingField_51; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_51() { return &___U3CMasterServerAddressU3Ek__BackingField_51; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_51(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMasterServerAddressU3Ek__BackingField_51), value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CGameServerAddressU3Ek__BackingField_52)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_52() const { return ___U3CGameServerAddressU3Ek__BackingField_52; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_52() { return &___U3CGameServerAddressU3Ek__BackingField_52; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_52(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGameServerAddressU3Ek__BackingField_52), value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CServerU3Ek__BackingField_53)); }
	inline int32_t get_U3CServerU3Ek__BackingField_53() const { return ___U3CServerU3Ek__BackingField_53; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_53() { return &___U3CServerU3Ek__BackingField_53; }
	inline void set_U3CServerU3Ek__BackingField_53(int32_t value)
	{
		___U3CServerU3Ek__BackingField_53 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CStateU3Ek__BackingField_54)); }
	inline int32_t get_U3CStateU3Ek__BackingField_54() const { return ___U3CStateU3Ek__BackingField_54; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_54() { return &___U3CStateU3Ek__BackingField_54; }
	inline void set_U3CStateU3Ek__BackingField_54(int32_t value)
	{
		___U3CStateU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_IsInitialConnect_55() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___IsInitialConnect_55)); }
	inline bool get_IsInitialConnect_55() const { return ___IsInitialConnect_55; }
	inline bool* get_address_of_IsInitialConnect_55() { return &___IsInitialConnect_55; }
	inline void set_IsInitialConnect_55(bool value)
	{
		___IsInitialConnect_55 = value;
	}

	inline static int32_t get_offset_of_insideLobby_56() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___insideLobby_56)); }
	inline bool get_insideLobby_56() const { return ___insideLobby_56; }
	inline bool* get_address_of_insideLobby_56() { return &___insideLobby_56; }
	inline void set_insideLobby_56(bool value)
	{
		___insideLobby_56 = value;
	}

	inline static int32_t get_offset_of_U3ClobbyU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3ClobbyU3Ek__BackingField_57)); }
	inline TypedLobby_t3336582029 * get_U3ClobbyU3Ek__BackingField_57() const { return ___U3ClobbyU3Ek__BackingField_57; }
	inline TypedLobby_t3336582029 ** get_address_of_U3ClobbyU3Ek__BackingField_57() { return &___U3ClobbyU3Ek__BackingField_57; }
	inline void set_U3ClobbyU3Ek__BackingField_57(TypedLobby_t3336582029 * value)
	{
		___U3ClobbyU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClobbyU3Ek__BackingField_57), value);
	}

	inline static int32_t get_offset_of_LobbyStatistics_58() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___LobbyStatistics_58)); }
	inline List_1_t3976582791 * get_LobbyStatistics_58() const { return ___LobbyStatistics_58; }
	inline List_1_t3976582791 ** get_address_of_LobbyStatistics_58() { return &___LobbyStatistics_58; }
	inline void set_LobbyStatistics_58(List_1_t3976582791 * value)
	{
		___LobbyStatistics_58 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyStatistics_58), value);
	}

	inline static int32_t get_offset_of_mGameList_59() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___mGameList_59)); }
	inline Dictionary_2_t2955551919 * get_mGameList_59() const { return ___mGameList_59; }
	inline Dictionary_2_t2955551919 ** get_address_of_mGameList_59() { return &___mGameList_59; }
	inline void set_mGameList_59(Dictionary_2_t2955551919 * value)
	{
		___mGameList_59 = value;
		Il2CppCodeGenWriteBarrier((&___mGameList_59), value);
	}

	inline static int32_t get_offset_of_mGameListCopy_60() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___mGameListCopy_60)); }
	inline RoomInfoU5BU5D_t1491207981* get_mGameListCopy_60() const { return ___mGameListCopy_60; }
	inline RoomInfoU5BU5D_t1491207981** get_address_of_mGameListCopy_60() { return &___mGameListCopy_60; }
	inline void set_mGameListCopy_60(RoomInfoU5BU5D_t1491207981* value)
	{
		___mGameListCopy_60 = value;
		Il2CppCodeGenWriteBarrier((&___mGameListCopy_60), value);
	}

	inline static int32_t get_offset_of_playername_61() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___playername_61)); }
	inline String_t* get_playername_61() const { return ___playername_61; }
	inline String_t** get_address_of_playername_61() { return &___playername_61; }
	inline void set_playername_61(String_t* value)
	{
		___playername_61 = value;
		Il2CppCodeGenWriteBarrier((&___playername_61), value);
	}

	inline static int32_t get_offset_of_mPlayernameHasToBeUpdated_62() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___mPlayernameHasToBeUpdated_62)); }
	inline bool get_mPlayernameHasToBeUpdated_62() const { return ___mPlayernameHasToBeUpdated_62; }
	inline bool* get_address_of_mPlayernameHasToBeUpdated_62() { return &___mPlayernameHasToBeUpdated_62; }
	inline void set_mPlayernameHasToBeUpdated_62(bool value)
	{
		___mPlayernameHasToBeUpdated_62 = value;
	}

	inline static int32_t get_offset_of_currentRoom_63() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___currentRoom_63)); }
	inline Room_t3759828263 * get_currentRoom_63() const { return ___currentRoom_63; }
	inline Room_t3759828263 ** get_address_of_currentRoom_63() { return &___currentRoom_63; }
	inline void set_currentRoom_63(Room_t3759828263 * value)
	{
		___currentRoom_63 = value;
		Il2CppCodeGenWriteBarrier((&___currentRoom_63), value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CLocalPlayerU3Ek__BackingField_64)); }
	inline PhotonPlayer_t3305149557 * get_U3CLocalPlayerU3Ek__BackingField_64() const { return ___U3CLocalPlayerU3Ek__BackingField_64; }
	inline PhotonPlayer_t3305149557 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_64() { return &___U3CLocalPlayerU3Ek__BackingField_64; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_64(PhotonPlayer_t3305149557 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocalPlayerU3Ek__BackingField_64), value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CPlayersOnMasterCountU3Ek__BackingField_65)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_65() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_65; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_65() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_65; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_65(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_65 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CPlayersInRoomsCountU3Ek__BackingField_66)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_66() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_66; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_66() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_66; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_66(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CRoomsCountU3Ek__BackingField_67)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_67() const { return ___U3CRoomsCountU3Ek__BackingField_67; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_67() { return &___U3CRoomsCountU3Ek__BackingField_67; }
	inline void set_U3CRoomsCountU3Ek__BackingField_67(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_67 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_68() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___lastJoinType_68)); }
	inline int32_t get_lastJoinType_68() const { return ___lastJoinType_68; }
	inline int32_t* get_address_of_lastJoinType_68() { return &___lastJoinType_68; }
	inline void set_lastJoinType_68(int32_t value)
	{
		___lastJoinType_68 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_69() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___enterRoomParamsCache_69)); }
	inline EnterRoomParams_t3960472384 * get_enterRoomParamsCache_69() const { return ___enterRoomParamsCache_69; }
	inline EnterRoomParams_t3960472384 ** get_address_of_enterRoomParamsCache_69() { return &___enterRoomParamsCache_69; }
	inline void set_enterRoomParamsCache_69(EnterRoomParams_t3960472384 * value)
	{
		___enterRoomParamsCache_69 = value;
		Il2CppCodeGenWriteBarrier((&___enterRoomParamsCache_69), value);
	}

	inline static int32_t get_offset_of_didAuthenticate_70() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___didAuthenticate_70)); }
	inline bool get_didAuthenticate_70() const { return ___didAuthenticate_70; }
	inline bool* get_address_of_didAuthenticate_70() { return &___didAuthenticate_70; }
	inline void set_didAuthenticate_70(bool value)
	{
		___didAuthenticate_70 = value;
	}

	inline static int32_t get_offset_of_friendListRequested_71() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___friendListRequested_71)); }
	inline StringU5BU5D_t1281789340* get_friendListRequested_71() const { return ___friendListRequested_71; }
	inline StringU5BU5D_t1281789340** get_address_of_friendListRequested_71() { return &___friendListRequested_71; }
	inline void set_friendListRequested_71(StringU5BU5D_t1281789340* value)
	{
		___friendListRequested_71 = value;
		Il2CppCodeGenWriteBarrier((&___friendListRequested_71), value);
	}

	inline static int32_t get_offset_of_friendListTimestamp_72() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___friendListTimestamp_72)); }
	inline int32_t get_friendListTimestamp_72() const { return ___friendListTimestamp_72; }
	inline int32_t* get_address_of_friendListTimestamp_72() { return &___friendListTimestamp_72; }
	inline void set_friendListTimestamp_72(int32_t value)
	{
		___friendListTimestamp_72 = value;
	}

	inline static int32_t get_offset_of_isFetchingFriendList_73() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___isFetchingFriendList_73)); }
	inline bool get_isFetchingFriendList_73() const { return ___isFetchingFriendList_73; }
	inline bool* get_address_of_isFetchingFriendList_73() { return &___isFetchingFriendList_73; }
	inline void set_isFetchingFriendList_73(bool value)
	{
		___isFetchingFriendList_73 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CAvailableRegionsU3Ek__BackingField_74)); }
	inline List_1_t861332708 * get_U3CAvailableRegionsU3Ek__BackingField_74() const { return ___U3CAvailableRegionsU3Ek__BackingField_74; }
	inline List_1_t861332708 ** get_address_of_U3CAvailableRegionsU3Ek__BackingField_74() { return &___U3CAvailableRegionsU3Ek__BackingField_74; }
	inline void set_U3CAvailableRegionsU3Ek__BackingField_74(List_1_t861332708 * value)
	{
		___U3CAvailableRegionsU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAvailableRegionsU3Ek__BackingField_74), value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___U3CCloudRegionU3Ek__BackingField_75)); }
	inline int32_t get_U3CCloudRegionU3Ek__BackingField_75() const { return ___U3CCloudRegionU3Ek__BackingField_75; }
	inline int32_t* get_address_of_U3CCloudRegionU3Ek__BackingField_75() { return &___U3CCloudRegionU3Ek__BackingField_75; }
	inline void set_U3CCloudRegionU3Ek__BackingField_75(int32_t value)
	{
		___U3CCloudRegionU3Ek__BackingField_75 = value;
	}

	inline static int32_t get_offset_of_mActors_76() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___mActors_76)); }
	inline Dictionary_2_t2193862888 * get_mActors_76() const { return ___mActors_76; }
	inline Dictionary_2_t2193862888 ** get_address_of_mActors_76() { return &___mActors_76; }
	inline void set_mActors_76(Dictionary_2_t2193862888 * value)
	{
		___mActors_76 = value;
		Il2CppCodeGenWriteBarrier((&___mActors_76), value);
	}

	inline static int32_t get_offset_of_mOtherPlayerListCopy_77() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___mOtherPlayerListCopy_77)); }
	inline PhotonPlayerU5BU5D_t2880637464* get_mOtherPlayerListCopy_77() const { return ___mOtherPlayerListCopy_77; }
	inline PhotonPlayerU5BU5D_t2880637464** get_address_of_mOtherPlayerListCopy_77() { return &___mOtherPlayerListCopy_77; }
	inline void set_mOtherPlayerListCopy_77(PhotonPlayerU5BU5D_t2880637464* value)
	{
		___mOtherPlayerListCopy_77 = value;
		Il2CppCodeGenWriteBarrier((&___mOtherPlayerListCopy_77), value);
	}

	inline static int32_t get_offset_of_mPlayerListCopy_78() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___mPlayerListCopy_78)); }
	inline PhotonPlayerU5BU5D_t2880637464* get_mPlayerListCopy_78() const { return ___mPlayerListCopy_78; }
	inline PhotonPlayerU5BU5D_t2880637464** get_address_of_mPlayerListCopy_78() { return &___mPlayerListCopy_78; }
	inline void set_mPlayerListCopy_78(PhotonPlayerU5BU5D_t2880637464* value)
	{
		___mPlayerListCopy_78 = value;
		Il2CppCodeGenWriteBarrier((&___mPlayerListCopy_78), value);
	}

	inline static int32_t get_offset_of_hasSwitchedMC_79() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___hasSwitchedMC_79)); }
	inline bool get_hasSwitchedMC_79() const { return ___hasSwitchedMC_79; }
	inline bool* get_address_of_hasSwitchedMC_79() { return &___hasSwitchedMC_79; }
	inline void set_hasSwitchedMC_79(bool value)
	{
		___hasSwitchedMC_79 = value;
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_80() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___allowedReceivingGroups_80)); }
	inline HashSet_1_t3994213146 * get_allowedReceivingGroups_80() const { return ___allowedReceivingGroups_80; }
	inline HashSet_1_t3994213146 ** get_address_of_allowedReceivingGroups_80() { return &___allowedReceivingGroups_80; }
	inline void set_allowedReceivingGroups_80(HashSet_1_t3994213146 * value)
	{
		___allowedReceivingGroups_80 = value;
		Il2CppCodeGenWriteBarrier((&___allowedReceivingGroups_80), value);
	}

	inline static int32_t get_offset_of_blockSendingGroups_81() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___blockSendingGroups_81)); }
	inline HashSet_1_t3994213146 * get_blockSendingGroups_81() const { return ___blockSendingGroups_81; }
	inline HashSet_1_t3994213146 ** get_address_of_blockSendingGroups_81() { return &___blockSendingGroups_81; }
	inline void set_blockSendingGroups_81(HashSet_1_t3994213146 * value)
	{
		___blockSendingGroups_81 = value;
		Il2CppCodeGenWriteBarrier((&___blockSendingGroups_81), value);
	}

	inline static int32_t get_offset_of_photonViewList_82() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___photonViewList_82)); }
	inline Dictionary_2_t1096435151 * get_photonViewList_82() const { return ___photonViewList_82; }
	inline Dictionary_2_t1096435151 ** get_address_of_photonViewList_82() { return &___photonViewList_82; }
	inline void set_photonViewList_82(Dictionary_2_t1096435151 * value)
	{
		___photonViewList_82 = value;
		Il2CppCodeGenWriteBarrier((&___photonViewList_82), value);
	}

	inline static int32_t get_offset_of_readStream_83() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___readStream_83)); }
	inline PhotonStream_t1003850889 * get_readStream_83() const { return ___readStream_83; }
	inline PhotonStream_t1003850889 ** get_address_of_readStream_83() { return &___readStream_83; }
	inline void set_readStream_83(PhotonStream_t1003850889 * value)
	{
		___readStream_83 = value;
		Il2CppCodeGenWriteBarrier((&___readStream_83), value);
	}

	inline static int32_t get_offset_of_pStream_84() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___pStream_84)); }
	inline PhotonStream_t1003850889 * get_pStream_84() const { return ___pStream_84; }
	inline PhotonStream_t1003850889 ** get_address_of_pStream_84() { return &___pStream_84; }
	inline void set_pStream_84(PhotonStream_t1003850889 * value)
	{
		___pStream_84 = value;
		Il2CppCodeGenWriteBarrier((&___pStream_84), value);
	}

	inline static int32_t get_offset_of_dataPerGroupReliable_85() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___dataPerGroupReliable_85)); }
	inline Dictionary_2_t4231889829 * get_dataPerGroupReliable_85() const { return ___dataPerGroupReliable_85; }
	inline Dictionary_2_t4231889829 ** get_address_of_dataPerGroupReliable_85() { return &___dataPerGroupReliable_85; }
	inline void set_dataPerGroupReliable_85(Dictionary_2_t4231889829 * value)
	{
		___dataPerGroupReliable_85 = value;
		Il2CppCodeGenWriteBarrier((&___dataPerGroupReliable_85), value);
	}

	inline static int32_t get_offset_of_dataPerGroupUnreliable_86() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___dataPerGroupUnreliable_86)); }
	inline Dictionary_2_t4231889829 * get_dataPerGroupUnreliable_86() const { return ___dataPerGroupUnreliable_86; }
	inline Dictionary_2_t4231889829 ** get_address_of_dataPerGroupUnreliable_86() { return &___dataPerGroupUnreliable_86; }
	inline void set_dataPerGroupUnreliable_86(Dictionary_2_t4231889829 * value)
	{
		___dataPerGroupUnreliable_86 = value;
		Il2CppCodeGenWriteBarrier((&___dataPerGroupUnreliable_86), value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_87() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___currentLevelPrefix_87)); }
	inline int16_t get_currentLevelPrefix_87() const { return ___currentLevelPrefix_87; }
	inline int16_t* get_address_of_currentLevelPrefix_87() { return &___currentLevelPrefix_87; }
	inline void set_currentLevelPrefix_87(int16_t value)
	{
		___currentLevelPrefix_87 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_88() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___loadingLevelAndPausedNetwork_88)); }
	inline bool get_loadingLevelAndPausedNetwork_88() const { return ___loadingLevelAndPausedNetwork_88; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_88() { return &___loadingLevelAndPausedNetwork_88; }
	inline void set_loadingLevelAndPausedNetwork_88(bool value)
	{
		___loadingLevelAndPausedNetwork_88 = value;
	}

	inline static int32_t get_offset_of_ObjectPool_92() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___ObjectPool_92)); }
	inline RuntimeObject* get_ObjectPool_92() const { return ___ObjectPool_92; }
	inline RuntimeObject** get_address_of_ObjectPool_92() { return &___ObjectPool_92; }
	inline void set_ObjectPool_92(RuntimeObject* value)
	{
		___ObjectPool_92 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectPool_92), value);
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_94() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___monoRPCMethodsCache_94)); }
	inline Dictionary_2_t1499080758 * get_monoRPCMethodsCache_94() const { return ___monoRPCMethodsCache_94; }
	inline Dictionary_2_t1499080758 ** get_address_of_monoRPCMethodsCache_94() { return &___monoRPCMethodsCache_94; }
	inline void set_monoRPCMethodsCache_94(Dictionary_2_t1499080758 * value)
	{
		___monoRPCMethodsCache_94 = value;
		Il2CppCodeGenWriteBarrier((&___monoRPCMethodsCache_94), value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_95() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___rpcShortcuts_95)); }
	inline Dictionary_2_t2736202052 * get_rpcShortcuts_95() const { return ___rpcShortcuts_95; }
	inline Dictionary_2_t2736202052 ** get_address_of_rpcShortcuts_95() { return &___rpcShortcuts_95; }
	inline void set_rpcShortcuts_95(Dictionary_2_t2736202052 * value)
	{
		___rpcShortcuts_95 = value;
		Il2CppCodeGenWriteBarrier((&___rpcShortcuts_95), value);
	}

	inline static int32_t get_offset_of_cachedServerAddress_97() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___cachedServerAddress_97)); }
	inline String_t* get_cachedServerAddress_97() const { return ___cachedServerAddress_97; }
	inline String_t** get_address_of_cachedServerAddress_97() { return &___cachedServerAddress_97; }
	inline void set_cachedServerAddress_97(String_t* value)
	{
		___cachedServerAddress_97 = value;
		Il2CppCodeGenWriteBarrier((&___cachedServerAddress_97), value);
	}

	inline static int32_t get_offset_of_cachedApplicationName_98() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___cachedApplicationName_98)); }
	inline String_t* get_cachedApplicationName_98() const { return ___cachedApplicationName_98; }
	inline String_t** get_address_of_cachedApplicationName_98() { return &___cachedApplicationName_98; }
	inline void set_cachedApplicationName_98(String_t* value)
	{
		___cachedApplicationName_98 = value;
		Il2CppCodeGenWriteBarrier((&___cachedApplicationName_98), value);
	}

	inline static int32_t get_offset_of_cachedServerType_99() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___cachedServerType_99)); }
	inline int32_t get_cachedServerType_99() const { return ___cachedServerType_99; }
	inline int32_t* get_address_of_cachedServerType_99() { return &___cachedServerType_99; }
	inline void set_cachedServerType_99(int32_t value)
	{
		___cachedServerType_99 = value;
	}

	inline static int32_t get_offset_of__AsyncLevelLoadingOperation_100() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ____AsyncLevelLoadingOperation_100)); }
	inline AsyncOperation_t1445031843 * get__AsyncLevelLoadingOperation_100() const { return ____AsyncLevelLoadingOperation_100; }
	inline AsyncOperation_t1445031843 ** get_address_of__AsyncLevelLoadingOperation_100() { return &____AsyncLevelLoadingOperation_100; }
	inline void set__AsyncLevelLoadingOperation_100(AsyncOperation_t1445031843 * value)
	{
		____AsyncLevelLoadingOperation_100 = value;
		Il2CppCodeGenWriteBarrier((&____AsyncLevelLoadingOperation_100), value);
	}

	inline static int32_t get_offset_of__levelReloadEventOptions_101() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ____levelReloadEventOptions_101)); }
	inline RaiseEventOptions_t1229553678 * get__levelReloadEventOptions_101() const { return ____levelReloadEventOptions_101; }
	inline RaiseEventOptions_t1229553678 ** get_address_of__levelReloadEventOptions_101() { return &____levelReloadEventOptions_101; }
	inline void set__levelReloadEventOptions_101(RaiseEventOptions_t1229553678 * value)
	{
		____levelReloadEventOptions_101 = value;
		Il2CppCodeGenWriteBarrier((&____levelReloadEventOptions_101), value);
	}

	inline static int32_t get_offset_of__isReconnecting_102() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ____isReconnecting_102)); }
	inline bool get__isReconnecting_102() const { return ____isReconnecting_102; }
	inline bool* get_address_of__isReconnecting_102() { return &____isReconnecting_102; }
	inline void set__isReconnecting_102(bool value)
	{
		____isReconnecting_102 = value;
	}

	inline static int32_t get_offset_of_tempInstantiationData_103() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___tempInstantiationData_103)); }
	inline Dictionary_2_t1732652656 * get_tempInstantiationData_103() const { return ___tempInstantiationData_103; }
	inline Dictionary_2_t1732652656 ** get_address_of_tempInstantiationData_103() { return &___tempInstantiationData_103; }
	inline void set_tempInstantiationData_103(Dictionary_2_t1732652656 * value)
	{
		___tempInstantiationData_103 = value;
		Il2CppCodeGenWriteBarrier((&___tempInstantiationData_103), value);
	}

	inline static int32_t get_offset_of_options_105() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___options_105)); }
	inline RaiseEventOptions_t1229553678 * get_options_105() const { return ___options_105; }
	inline RaiseEventOptions_t1229553678 ** get_address_of_options_105() { return &___options_105; }
	inline void set_options_105(RaiseEventOptions_t1229553678 * value)
	{
		___options_105 = value;
		Il2CppCodeGenWriteBarrier((&___options_105), value);
	}

	inline static int32_t get_offset_of_IsReloadingLevel_110() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___IsReloadingLevel_110)); }
	inline bool get_IsReloadingLevel_110() const { return ___IsReloadingLevel_110; }
	inline bool* get_address_of_IsReloadingLevel_110() { return &___IsReloadingLevel_110; }
	inline void set_IsReloadingLevel_110(bool value)
	{
		___IsReloadingLevel_110 = value;
	}

	inline static int32_t get_offset_of_AsynchLevelLoadCall_111() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356, ___AsynchLevelLoadCall_111)); }
	inline bool get_AsynchLevelLoadCall_111() const { return ___AsynchLevelLoadCall_111; }
	inline bool* get_address_of_AsynchLevelLoadCall_111() { return &___AsynchLevelLoadCall_111; }
	inline void set_AsynchLevelLoadCall_111(bool value)
	{
		___AsynchLevelLoadCall_111 = value;
	}
};

struct NetworkingPeer_t264212356_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t1720840067 * ___ProtocolToNameServerPort_50;
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache_91;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_t898892918 * ___PrefabCache_93;
	// System.String NetworkingPeer::OnPhotonInstantiateString
	String_t* ___OnPhotonInstantiateString_96;
	// System.Int32 NetworkingPeer::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_104;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_50() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356_StaticFields, ___ProtocolToNameServerPort_50)); }
	inline Dictionary_2_t1720840067 * get_ProtocolToNameServerPort_50() const { return ___ProtocolToNameServerPort_50; }
	inline Dictionary_2_t1720840067 ** get_address_of_ProtocolToNameServerPort_50() { return &___ProtocolToNameServerPort_50; }
	inline void set_ProtocolToNameServerPort_50(Dictionary_2_t1720840067 * value)
	{
		___ProtocolToNameServerPort_50 = value;
		Il2CppCodeGenWriteBarrier((&___ProtocolToNameServerPort_50), value);
	}

	inline static int32_t get_offset_of_UsePrefabCache_91() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356_StaticFields, ___UsePrefabCache_91)); }
	inline bool get_UsePrefabCache_91() const { return ___UsePrefabCache_91; }
	inline bool* get_address_of_UsePrefabCache_91() { return &___UsePrefabCache_91; }
	inline void set_UsePrefabCache_91(bool value)
	{
		___UsePrefabCache_91 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_93() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356_StaticFields, ___PrefabCache_93)); }
	inline Dictionary_2_t898892918 * get_PrefabCache_93() const { return ___PrefabCache_93; }
	inline Dictionary_2_t898892918 ** get_address_of_PrefabCache_93() { return &___PrefabCache_93; }
	inline void set_PrefabCache_93(Dictionary_2_t898892918 * value)
	{
		___PrefabCache_93 = value;
		Il2CppCodeGenWriteBarrier((&___PrefabCache_93), value);
	}

	inline static int32_t get_offset_of_OnPhotonInstantiateString_96() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356_StaticFields, ___OnPhotonInstantiateString_96)); }
	inline String_t* get_OnPhotonInstantiateString_96() const { return ___OnPhotonInstantiateString_96; }
	inline String_t** get_address_of_OnPhotonInstantiateString_96() { return &___OnPhotonInstantiateString_96; }
	inline void set_OnPhotonInstantiateString_96(String_t* value)
	{
		___OnPhotonInstantiateString_96 = value;
		Il2CppCodeGenWriteBarrier((&___OnPhotonInstantiateString_96), value);
	}

	inline static int32_t get_offset_of_ObjectsInOneUpdate_104() { return static_cast<int32_t>(offsetof(NetworkingPeer_t264212356_StaticFields, ___ObjectsInOneUpdate_104)); }
	inline int32_t get_ObjectsInOneUpdate_104() const { return ___ObjectsInOneUpdate_104; }
	inline int32_t* get_address_of_ObjectsInOneUpdate_104() { return &___ObjectsInOneUpdate_104; }
	inline void set_ObjectsInOneUpdate_104(int32_t value)
	{
		___ObjectsInOneUpdate_104 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINGPEER_T264212356_H
#ifndef UNITYVOICEFRONTEND_T1107817756_H
#define UNITYVOICEFRONTEND_T1107817756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityVoiceFrontend
struct  UnityVoiceFrontend_t1107817756  : public LoadBalancingFrontend_t4154771402
{
public:
	// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker> UnityVoiceFrontend::voiceSpeakers
	Dictionary_2_t230268132 * ___voiceSpeakers_46;
	// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo> UnityVoiceFrontend::<OnRemoteVoiceInfoAction>k__BackingField
	Action_3_t887068424 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47;
	// System.Action`2<System.Int32,System.Byte> UnityVoiceFrontend::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_2_t2360473393 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48;
	// System.Action`3<System.Int32,System.Byte,System.Single[]> UnityVoiceFrontend::<OnAudioFrameAction>k__BackingField
	Action_3_t1509206889 * ___U3COnAudioFrameActionU3Ek__BackingField_49;
	// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> UnityVoiceFrontend::<OnStateChangeAction>k__BackingField
	Action_1_t643525275 * ___U3COnStateChangeActionU3Ek__BackingField_50;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> UnityVoiceFrontend::<OnOpResponseAction>k__BackingField
	Action_1_t596095568 * ___U3COnOpResponseActionU3Ek__BackingField_51;
	// System.Boolean UnityVoiceFrontend::reconnect
	bool ___reconnect_52;

public:
	inline static int32_t get_offset_of_voiceSpeakers_46() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t1107817756, ___voiceSpeakers_46)); }
	inline Dictionary_2_t230268132 * get_voiceSpeakers_46() const { return ___voiceSpeakers_46; }
	inline Dictionary_2_t230268132 ** get_address_of_voiceSpeakers_46() { return &___voiceSpeakers_46; }
	inline void set_voiceSpeakers_46(Dictionary_2_t230268132 * value)
	{
		___voiceSpeakers_46 = value;
		Il2CppCodeGenWriteBarrier((&___voiceSpeakers_46), value);
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t1107817756, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47)); }
	inline Action_3_t887068424 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47; }
	inline Action_3_t887068424 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47(Action_3_t887068424 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47), value);
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t1107817756, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48)); }
	inline Action_2_t2360473393 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48; }
	inline Action_2_t2360473393 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48(Action_2_t2360473393 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48), value);
	}

	inline static int32_t get_offset_of_U3COnAudioFrameActionU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t1107817756, ___U3COnAudioFrameActionU3Ek__BackingField_49)); }
	inline Action_3_t1509206889 * get_U3COnAudioFrameActionU3Ek__BackingField_49() const { return ___U3COnAudioFrameActionU3Ek__BackingField_49; }
	inline Action_3_t1509206889 ** get_address_of_U3COnAudioFrameActionU3Ek__BackingField_49() { return &___U3COnAudioFrameActionU3Ek__BackingField_49; }
	inline void set_U3COnAudioFrameActionU3Ek__BackingField_49(Action_3_t1509206889 * value)
	{
		___U3COnAudioFrameActionU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnAudioFrameActionU3Ek__BackingField_49), value);
	}

	inline static int32_t get_offset_of_U3COnStateChangeActionU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t1107817756, ___U3COnStateChangeActionU3Ek__BackingField_50)); }
	inline Action_1_t643525275 * get_U3COnStateChangeActionU3Ek__BackingField_50() const { return ___U3COnStateChangeActionU3Ek__BackingField_50; }
	inline Action_1_t643525275 ** get_address_of_U3COnStateChangeActionU3Ek__BackingField_50() { return &___U3COnStateChangeActionU3Ek__BackingField_50; }
	inline void set_U3COnStateChangeActionU3Ek__BackingField_50(Action_1_t643525275 * value)
	{
		___U3COnStateChangeActionU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnStateChangeActionU3Ek__BackingField_50), value);
	}

	inline static int32_t get_offset_of_U3COnOpResponseActionU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t1107817756, ___U3COnOpResponseActionU3Ek__BackingField_51)); }
	inline Action_1_t596095568 * get_U3COnOpResponseActionU3Ek__BackingField_51() const { return ___U3COnOpResponseActionU3Ek__BackingField_51; }
	inline Action_1_t596095568 ** get_address_of_U3COnOpResponseActionU3Ek__BackingField_51() { return &___U3COnOpResponseActionU3Ek__BackingField_51; }
	inline void set_U3COnOpResponseActionU3Ek__BackingField_51(Action_1_t596095568 * value)
	{
		___U3COnOpResponseActionU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnOpResponseActionU3Ek__BackingField_51), value);
	}

	inline static int32_t get_offset_of_reconnect_52() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t1107817756, ___reconnect_52)); }
	inline bool get_reconnect_52() const { return ___reconnect_52; }
	inline bool* get_address_of_reconnect_52() { return &___reconnect_52; }
	inline void set_reconnect_52(bool value)
	{
		___reconnect_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVOICEFRONTEND_T1107817756_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SCENECONTAINER_T1775811254_H
#define SCENECONTAINER_T1775811254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneContainer
struct  SceneContainer_t1775811254  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SceneContainer::_debugFlg
	bool ____debugFlg_2;

public:
	inline static int32_t get_offset_of__debugFlg_2() { return static_cast<int32_t>(offsetof(SceneContainer_t1775811254, ____debugFlg_2)); }
	inline bool get__debugFlg_2() const { return ____debugFlg_2; }
	inline bool* get_address_of__debugFlg_2() { return &____debugFlg_2; }
	inline void set__debugFlg_2(bool value)
	{
		____debugFlg_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENECONTAINER_T1775811254_H
#ifndef SHOWSTATUSWHENCONNECTING_T1063567576_H
#define SHOWSTATUSWHENCONNECTING_T1063567576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowStatusWhenConnecting
struct  ShowStatusWhenConnecting_t1063567576  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUISkin ShowStatusWhenConnecting::Skin
	GUISkin_t1244372282 * ___Skin_2;

public:
	inline static int32_t get_offset_of_Skin_2() { return static_cast<int32_t>(offsetof(ShowStatusWhenConnecting_t1063567576, ___Skin_2)); }
	inline GUISkin_t1244372282 * get_Skin_2() const { return ___Skin_2; }
	inline GUISkin_t1244372282 ** get_address_of_Skin_2() { return &___Skin_2; }
	inline void set_Skin_2(GUISkin_t1244372282 * value)
	{
		___Skin_2 = value;
		Il2CppCodeGenWriteBarrier((&___Skin_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWSTATUSWHENCONNECTING_T1063567576_H
#ifndef VIEWDRAG_T2793483242_H
#define VIEWDRAG_T2793483242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewDrag
struct  ViewDrag_t2793483242  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 ViewDrag::hit_position
	Vector3_t3722313464  ___hit_position_2;
	// UnityEngine.Vector3 ViewDrag::current_position
	Vector3_t3722313464  ___current_position_3;
	// UnityEngine.Vector3 ViewDrag::camera_position
	Vector3_t3722313464  ___camera_position_4;
	// System.Boolean ViewDrag::invert
	bool ___invert_5;
	// System.Boolean ViewDrag::yBecomesZ
	bool ___yBecomesZ_6;
	// System.Single ViewDrag::speed
	float ___speed_7;

public:
	inline static int32_t get_offset_of_hit_position_2() { return static_cast<int32_t>(offsetof(ViewDrag_t2793483242, ___hit_position_2)); }
	inline Vector3_t3722313464  get_hit_position_2() const { return ___hit_position_2; }
	inline Vector3_t3722313464 * get_address_of_hit_position_2() { return &___hit_position_2; }
	inline void set_hit_position_2(Vector3_t3722313464  value)
	{
		___hit_position_2 = value;
	}

	inline static int32_t get_offset_of_current_position_3() { return static_cast<int32_t>(offsetof(ViewDrag_t2793483242, ___current_position_3)); }
	inline Vector3_t3722313464  get_current_position_3() const { return ___current_position_3; }
	inline Vector3_t3722313464 * get_address_of_current_position_3() { return &___current_position_3; }
	inline void set_current_position_3(Vector3_t3722313464  value)
	{
		___current_position_3 = value;
	}

	inline static int32_t get_offset_of_camera_position_4() { return static_cast<int32_t>(offsetof(ViewDrag_t2793483242, ___camera_position_4)); }
	inline Vector3_t3722313464  get_camera_position_4() const { return ___camera_position_4; }
	inline Vector3_t3722313464 * get_address_of_camera_position_4() { return &___camera_position_4; }
	inline void set_camera_position_4(Vector3_t3722313464  value)
	{
		___camera_position_4 = value;
	}

	inline static int32_t get_offset_of_invert_5() { return static_cast<int32_t>(offsetof(ViewDrag_t2793483242, ___invert_5)); }
	inline bool get_invert_5() const { return ___invert_5; }
	inline bool* get_address_of_invert_5() { return &___invert_5; }
	inline void set_invert_5(bool value)
	{
		___invert_5 = value;
	}

	inline static int32_t get_offset_of_yBecomesZ_6() { return static_cast<int32_t>(offsetof(ViewDrag_t2793483242, ___yBecomesZ_6)); }
	inline bool get_yBecomesZ_6() const { return ___yBecomesZ_6; }
	inline bool* get_address_of_yBecomesZ_6() { return &___yBecomesZ_6; }
	inline void set_yBecomesZ_6(bool value)
	{
		___yBecomesZ_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(ViewDrag_t2793483242, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWDRAG_T2793483242_H
#ifndef TERRITOTYLINE_T3071297039_H
#define TERRITOTYLINE_T3071297039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TerritotyLine
struct  TerritotyLine_t3071297039  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer TerritotyLine::_lineSprite
	SpriteRenderer_t3235626157 * ____lineSprite_2;

public:
	inline static int32_t get_offset_of__lineSprite_2() { return static_cast<int32_t>(offsetof(TerritotyLine_t3071297039, ____lineSprite_2)); }
	inline SpriteRenderer_t3235626157 * get__lineSprite_2() const { return ____lineSprite_2; }
	inline SpriteRenderer_t3235626157 ** get_address_of__lineSprite_2() { return &____lineSprite_2; }
	inline void set__lineSprite_2(SpriteRenderer_t3235626157 * value)
	{
		____lineSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&____lineSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRITOTYLINE_T3071297039_H
#ifndef FADEMANAGER_T2978290776_H
#define FADEMANAGER_T2978290776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeManager
struct  FadeManager_t2978290776  : public MonoBehaviour_t3962482529
{
public:
	// System.Single FadeManager::kFadeSpeed
	float ___kFadeSpeed_2;
	// UnityEngine.UI.Image FadeManager::_fadeImage
	Image_t2670269651 * ____fadeImage_3;
	// System.Action FadeManager::_callback
	Action_t1264377477 * ____callback_4;

public:
	inline static int32_t get_offset_of_kFadeSpeed_2() { return static_cast<int32_t>(offsetof(FadeManager_t2978290776, ___kFadeSpeed_2)); }
	inline float get_kFadeSpeed_2() const { return ___kFadeSpeed_2; }
	inline float* get_address_of_kFadeSpeed_2() { return &___kFadeSpeed_2; }
	inline void set_kFadeSpeed_2(float value)
	{
		___kFadeSpeed_2 = value;
	}

	inline static int32_t get_offset_of__fadeImage_3() { return static_cast<int32_t>(offsetof(FadeManager_t2978290776, ____fadeImage_3)); }
	inline Image_t2670269651 * get__fadeImage_3() const { return ____fadeImage_3; }
	inline Image_t2670269651 ** get_address_of__fadeImage_3() { return &____fadeImage_3; }
	inline void set__fadeImage_3(Image_t2670269651 * value)
	{
		____fadeImage_3 = value;
		Il2CppCodeGenWriteBarrier((&____fadeImage_3), value);
	}

	inline static int32_t get_offset_of__callback_4() { return static_cast<int32_t>(offsetof(FadeManager_t2978290776, ____callback_4)); }
	inline Action_t1264377477 * get__callback_4() const { return ____callback_4; }
	inline Action_t1264377477 ** get_address_of__callback_4() { return &____callback_4; }
	inline void set__callback_4(Action_t1264377477 * value)
	{
		____callback_4 = value;
		Il2CppCodeGenWriteBarrier((&____callback_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FADEMANAGER_T2978290776_H
#ifndef TERRITORY_T680836402_H
#define TERRITORY_T680836402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Territory
struct  Territory_t680836402  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer Territory::_sprite
	SpriteRenderer_t3235626157 * ____sprite_2;
	// System.Int32 Territory::_playerType
	int32_t ____playerType_3;
	// System.Int32 Territory::_direction
	int32_t ____direction_4;

public:
	inline static int32_t get_offset_of__sprite_2() { return static_cast<int32_t>(offsetof(Territory_t680836402, ____sprite_2)); }
	inline SpriteRenderer_t3235626157 * get__sprite_2() const { return ____sprite_2; }
	inline SpriteRenderer_t3235626157 ** get_address_of__sprite_2() { return &____sprite_2; }
	inline void set__sprite_2(SpriteRenderer_t3235626157 * value)
	{
		____sprite_2 = value;
		Il2CppCodeGenWriteBarrier((&____sprite_2), value);
	}

	inline static int32_t get_offset_of__playerType_3() { return static_cast<int32_t>(offsetof(Territory_t680836402, ____playerType_3)); }
	inline int32_t get__playerType_3() const { return ____playerType_3; }
	inline int32_t* get_address_of__playerType_3() { return &____playerType_3; }
	inline void set__playerType_3(int32_t value)
	{
		____playerType_3 = value;
	}

	inline static int32_t get_offset_of__direction_4() { return static_cast<int32_t>(offsetof(Territory_t680836402, ____direction_4)); }
	inline int32_t get__direction_4() const { return ____direction_4; }
	inline int32_t* get_address_of__direction_4() { return &____direction_4; }
	inline void set__direction_4(int32_t value)
	{
		____direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRITORY_T680836402_H
#ifndef SUPPORTLOGGING_T3610999087_H
#define SUPPORTLOGGING_T3610999087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SupportLogging
struct  SupportLogging_t3610999087  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SupportLogging::LogTrafficStats
	bool ___LogTrafficStats_2;

public:
	inline static int32_t get_offset_of_LogTrafficStats_2() { return static_cast<int32_t>(offsetof(SupportLogging_t3610999087, ___LogTrafficStats_2)); }
	inline bool get_LogTrafficStats_2() const { return ___LogTrafficStats_2; }
	inline bool* get_address_of_LogTrafficStats_2() { return &___LogTrafficStats_2; }
	inline void set_LogTrafficStats_2(bool value)
	{
		___LogTrafficStats_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTLOGGING_T3610999087_H
#ifndef SUPPORTLOGGER_T2840230211_H
#define SUPPORTLOGGER_T2840230211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SupportLogger
struct  SupportLogger_t2840230211  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_2;

public:
	inline static int32_t get_offset_of_LogTrafficStats_2() { return static_cast<int32_t>(offsetof(SupportLogger_t2840230211, ___LogTrafficStats_2)); }
	inline bool get_LogTrafficStats_2() const { return ___LogTrafficStats_2; }
	inline bool* get_address_of_LogTrafficStats_2() { return &___LogTrafficStats_2; }
	inline void set_LogTrafficStats_2(bool value)
	{
		___LogTrafficStats_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTLOGGER_T2840230211_H
#ifndef LOCALVOICEFRAMED_1_T4291334645_H
#define LOCALVOICEFRAMED_1_T4291334645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct  LocalVoiceFramed_1_t4291334645  : public LocalVoiceFramed_t3264419308
{
public:
	// ExitGames.Client.Photon.Voice.Framer`1<T> ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t4278948169 * ___framer_22;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_23;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoiceFramed`1/IProcessor<T>> ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t1784583282 * ___processors_24;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_25;
	// System.Collections.Generic.Queue`1<T[]> ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t3533099672 * ___pushDataQueue_26;
	// System.Threading.AutoResetEvent ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t1333520283 * ___pushDataQueueReady_27;
	// ExitGames.Client.Photon.Voice.PrimitiveArrayPool`1<T> ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::pushDataBufferPool
	PrimitiveArrayPool_1_t2830692541 * ___pushDataBufferPool_28;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_29;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_30;

public:
	inline static int32_t get_offset_of_framer_22() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___framer_22)); }
	inline Framer_1_t4278948169 * get_framer_22() const { return ___framer_22; }
	inline Framer_1_t4278948169 ** get_address_of_framer_22() { return &___framer_22; }
	inline void set_framer_22(Framer_1_t4278948169 * value)
	{
		___framer_22 = value;
		Il2CppCodeGenWriteBarrier((&___framer_22), value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___preProcessorsCnt_23)); }
	inline int32_t get_preProcessorsCnt_23() const { return ___preProcessorsCnt_23; }
	inline int32_t* get_address_of_preProcessorsCnt_23() { return &___preProcessorsCnt_23; }
	inline void set_preProcessorsCnt_23(int32_t value)
	{
		___preProcessorsCnt_23 = value;
	}

	inline static int32_t get_offset_of_processors_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___processors_24)); }
	inline List_1_t1784583282 * get_processors_24() const { return ___processors_24; }
	inline List_1_t1784583282 ** get_address_of_processors_24() { return &___processors_24; }
	inline void set_processors_24(List_1_t1784583282 * value)
	{
		___processors_24 = value;
		Il2CppCodeGenWriteBarrier((&___processors_24), value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___dataEncodeThreadStarted_25)); }
	inline bool get_dataEncodeThreadStarted_25() const { return ___dataEncodeThreadStarted_25; }
	inline bool* get_address_of_dataEncodeThreadStarted_25() { return &___dataEncodeThreadStarted_25; }
	inline void set_dataEncodeThreadStarted_25(bool value)
	{
		___dataEncodeThreadStarted_25 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___pushDataQueue_26)); }
	inline Queue_1_t3533099672 * get_pushDataQueue_26() const { return ___pushDataQueue_26; }
	inline Queue_1_t3533099672 ** get_address_of_pushDataQueue_26() { return &___pushDataQueue_26; }
	inline void set_pushDataQueue_26(Queue_1_t3533099672 * value)
	{
		___pushDataQueue_26 = value;
		Il2CppCodeGenWriteBarrier((&___pushDataQueue_26), value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___pushDataQueueReady_27)); }
	inline AutoResetEvent_t1333520283 * get_pushDataQueueReady_27() const { return ___pushDataQueueReady_27; }
	inline AutoResetEvent_t1333520283 ** get_address_of_pushDataQueueReady_27() { return &___pushDataQueueReady_27; }
	inline void set_pushDataQueueReady_27(AutoResetEvent_t1333520283 * value)
	{
		___pushDataQueueReady_27 = value;
		Il2CppCodeGenWriteBarrier((&___pushDataQueueReady_27), value);
	}

	inline static int32_t get_offset_of_pushDataBufferPool_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___pushDataBufferPool_28)); }
	inline PrimitiveArrayPool_1_t2830692541 * get_pushDataBufferPool_28() const { return ___pushDataBufferPool_28; }
	inline PrimitiveArrayPool_1_t2830692541 ** get_address_of_pushDataBufferPool_28() { return &___pushDataBufferPool_28; }
	inline void set_pushDataBufferPool_28(PrimitiveArrayPool_1_t2830692541 * value)
	{
		___pushDataBufferPool_28 = value;
		Il2CppCodeGenWriteBarrier((&___pushDataBufferPool_28), value);
	}

	inline static int32_t get_offset_of_framesSkipped_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___framesSkipped_29)); }
	inline int32_t get_framesSkipped_29() const { return ___framesSkipped_29; }
	inline int32_t* get_address_of_framesSkipped_29() { return &___framesSkipped_29; }
	inline void set_framesSkipped_29(int32_t value)
	{
		___framesSkipped_29 = value;
	}

	inline static int32_t get_offset_of_exitThread_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t4291334645, ___exitThread_30)); }
	inline bool get_exitThread_30() const { return ___exitThread_30; }
	inline bool* get_address_of_exitThread_30() { return &___exitThread_30; }
	inline void set_exitThread_30(bool value)
	{
		___exitThread_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVOICEFRAMED_1_T4291334645_H
#ifndef PHOTONVOICESETTINGS_T1055773440_H
#define PHOTONVOICESETTINGS_T1055773440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonVoiceSettings
struct  PhotonVoiceSettings_t1055773440  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean PhotonVoiceSettings::WorkInOfflineMode
	bool ___WorkInOfflineMode_2;
	// System.Boolean PhotonVoiceSettings::AutoConnect
	bool ___AutoConnect_3;
	// System.Boolean PhotonVoiceSettings::AutoDisconnect
	bool ___AutoDisconnect_4;
	// System.Boolean PhotonVoiceSettings::AutoTransmit
	bool ___AutoTransmit_5;
	// POpusCodec.Enums.SamplingRate PhotonVoiceSettings::SamplingRate
	int32_t ___SamplingRate_6;
	// ExitGames.Client.Photon.Voice.OpusCodec/FrameDuration PhotonVoiceSettings::FrameDuration
	int32_t ___FrameDuration_7;
	// System.Int32 PhotonVoiceSettings::Bitrate
	int32_t ___Bitrate_8;
	// System.Boolean PhotonVoiceSettings::VoiceDetection
	bool ___VoiceDetection_9;
	// System.Single PhotonVoiceSettings::VoiceDetectionThreshold
	float ___VoiceDetectionThreshold_10;
	// System.Int32 PhotonVoiceSettings::PlayDelayMs
	int32_t ___PlayDelayMs_11;
	// PhotonVoiceSettings/MicAudioSourceType PhotonVoiceSettings::MicrophoneType
	int32_t ___MicrophoneType_12;
	// System.Int32 PhotonVoiceSettings::DebugLostPercent
	int32_t ___DebugLostPercent_13;
	// System.Boolean PhotonVoiceSettings::DebugInfo
	bool ___DebugInfo_14;
	// System.Boolean PhotonVoiceSettings::Encrypt
	bool ___Encrypt_15;

public:
	inline static int32_t get_offset_of_WorkInOfflineMode_2() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___WorkInOfflineMode_2)); }
	inline bool get_WorkInOfflineMode_2() const { return ___WorkInOfflineMode_2; }
	inline bool* get_address_of_WorkInOfflineMode_2() { return &___WorkInOfflineMode_2; }
	inline void set_WorkInOfflineMode_2(bool value)
	{
		___WorkInOfflineMode_2 = value;
	}

	inline static int32_t get_offset_of_AutoConnect_3() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___AutoConnect_3)); }
	inline bool get_AutoConnect_3() const { return ___AutoConnect_3; }
	inline bool* get_address_of_AutoConnect_3() { return &___AutoConnect_3; }
	inline void set_AutoConnect_3(bool value)
	{
		___AutoConnect_3 = value;
	}

	inline static int32_t get_offset_of_AutoDisconnect_4() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___AutoDisconnect_4)); }
	inline bool get_AutoDisconnect_4() const { return ___AutoDisconnect_4; }
	inline bool* get_address_of_AutoDisconnect_4() { return &___AutoDisconnect_4; }
	inline void set_AutoDisconnect_4(bool value)
	{
		___AutoDisconnect_4 = value;
	}

	inline static int32_t get_offset_of_AutoTransmit_5() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___AutoTransmit_5)); }
	inline bool get_AutoTransmit_5() const { return ___AutoTransmit_5; }
	inline bool* get_address_of_AutoTransmit_5() { return &___AutoTransmit_5; }
	inline void set_AutoTransmit_5(bool value)
	{
		___AutoTransmit_5 = value;
	}

	inline static int32_t get_offset_of_SamplingRate_6() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___SamplingRate_6)); }
	inline int32_t get_SamplingRate_6() const { return ___SamplingRate_6; }
	inline int32_t* get_address_of_SamplingRate_6() { return &___SamplingRate_6; }
	inline void set_SamplingRate_6(int32_t value)
	{
		___SamplingRate_6 = value;
	}

	inline static int32_t get_offset_of_FrameDuration_7() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___FrameDuration_7)); }
	inline int32_t get_FrameDuration_7() const { return ___FrameDuration_7; }
	inline int32_t* get_address_of_FrameDuration_7() { return &___FrameDuration_7; }
	inline void set_FrameDuration_7(int32_t value)
	{
		___FrameDuration_7 = value;
	}

	inline static int32_t get_offset_of_Bitrate_8() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___Bitrate_8)); }
	inline int32_t get_Bitrate_8() const { return ___Bitrate_8; }
	inline int32_t* get_address_of_Bitrate_8() { return &___Bitrate_8; }
	inline void set_Bitrate_8(int32_t value)
	{
		___Bitrate_8 = value;
	}

	inline static int32_t get_offset_of_VoiceDetection_9() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___VoiceDetection_9)); }
	inline bool get_VoiceDetection_9() const { return ___VoiceDetection_9; }
	inline bool* get_address_of_VoiceDetection_9() { return &___VoiceDetection_9; }
	inline void set_VoiceDetection_9(bool value)
	{
		___VoiceDetection_9 = value;
	}

	inline static int32_t get_offset_of_VoiceDetectionThreshold_10() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___VoiceDetectionThreshold_10)); }
	inline float get_VoiceDetectionThreshold_10() const { return ___VoiceDetectionThreshold_10; }
	inline float* get_address_of_VoiceDetectionThreshold_10() { return &___VoiceDetectionThreshold_10; }
	inline void set_VoiceDetectionThreshold_10(float value)
	{
		___VoiceDetectionThreshold_10 = value;
	}

	inline static int32_t get_offset_of_PlayDelayMs_11() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___PlayDelayMs_11)); }
	inline int32_t get_PlayDelayMs_11() const { return ___PlayDelayMs_11; }
	inline int32_t* get_address_of_PlayDelayMs_11() { return &___PlayDelayMs_11; }
	inline void set_PlayDelayMs_11(int32_t value)
	{
		___PlayDelayMs_11 = value;
	}

	inline static int32_t get_offset_of_MicrophoneType_12() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___MicrophoneType_12)); }
	inline int32_t get_MicrophoneType_12() const { return ___MicrophoneType_12; }
	inline int32_t* get_address_of_MicrophoneType_12() { return &___MicrophoneType_12; }
	inline void set_MicrophoneType_12(int32_t value)
	{
		___MicrophoneType_12 = value;
	}

	inline static int32_t get_offset_of_DebugLostPercent_13() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___DebugLostPercent_13)); }
	inline int32_t get_DebugLostPercent_13() const { return ___DebugLostPercent_13; }
	inline int32_t* get_address_of_DebugLostPercent_13() { return &___DebugLostPercent_13; }
	inline void set_DebugLostPercent_13(int32_t value)
	{
		___DebugLostPercent_13 = value;
	}

	inline static int32_t get_offset_of_DebugInfo_14() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___DebugInfo_14)); }
	inline bool get_DebugInfo_14() const { return ___DebugInfo_14; }
	inline bool* get_address_of_DebugInfo_14() { return &___DebugInfo_14; }
	inline void set_DebugInfo_14(bool value)
	{
		___DebugInfo_14 = value;
	}

	inline static int32_t get_offset_of_Encrypt_15() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440, ___Encrypt_15)); }
	inline bool get_Encrypt_15() const { return ___Encrypt_15; }
	inline bool* get_address_of_Encrypt_15() { return &___Encrypt_15; }
	inline void set_Encrypt_15(bool value)
	{
		___Encrypt_15 = value;
	}
};

struct PhotonVoiceSettings_t1055773440_StaticFields
{
public:
	// PhotonVoiceSettings PhotonVoiceSettings::instance
	PhotonVoiceSettings_t1055773440 * ___instance_16;
	// System.Object PhotonVoiceSettings::instanceLock
	RuntimeObject * ___instanceLock_17;

public:
	inline static int32_t get_offset_of_instance_16() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440_StaticFields, ___instance_16)); }
	inline PhotonVoiceSettings_t1055773440 * get_instance_16() const { return ___instance_16; }
	inline PhotonVoiceSettings_t1055773440 ** get_address_of_instance_16() { return &___instance_16; }
	inline void set_instance_16(PhotonVoiceSettings_t1055773440 * value)
	{
		___instance_16 = value;
		Il2CppCodeGenWriteBarrier((&___instance_16), value);
	}

	inline static int32_t get_offset_of_instanceLock_17() { return static_cast<int32_t>(offsetof(PhotonVoiceSettings_t1055773440_StaticFields, ___instanceLock_17)); }
	inline RuntimeObject * get_instanceLock_17() const { return ___instanceLock_17; }
	inline RuntimeObject ** get_address_of_instanceLock_17() { return &___instanceLock_17; }
	inline void set_instanceLock_17(RuntimeObject * value)
	{
		___instanceLock_17 = value;
		Il2CppCodeGenWriteBarrier((&___instanceLock_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONVOICESETTINGS_T1055773440_H
#ifndef AUDIOOUTCAPTURE_T1501502605_H
#define AUDIOOUTCAPTURE_T1501502605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioOutCapture
struct  AudioOutCapture_t1501502605  : public MonoBehaviour_t3962482529
{
public:
	// System.Action`2<System.Single[],System.Int32> AudioOutCapture::OnAudioFrame
	Action_2_t2703621360 * ___OnAudioFrame_2;

public:
	inline static int32_t get_offset_of_OnAudioFrame_2() { return static_cast<int32_t>(offsetof(AudioOutCapture_t1501502605, ___OnAudioFrame_2)); }
	inline Action_2_t2703621360 * get_OnAudioFrame_2() const { return ___OnAudioFrame_2; }
	inline Action_2_t2703621360 ** get_address_of_OnAudioFrame_2() { return &___OnAudioFrame_2; }
	inline void set_OnAudioFrame_2(Action_2_t2703621360 * value)
	{
		___OnAudioFrame_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioFrame_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOOUTCAPTURE_T1501502605_H
#ifndef TITLESCENEMANAGER_T4033090873_H
#define TITLESCENEMANAGER_T4033090873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleSceneManager
struct  TitleSceneManager_t4033090873  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TitleSceneManager::_sceneContainer
	GameObject_t1113636619 * ____sceneContainer_2;
	// UnityEngine.UI.Button TitleSceneManager::_startButton
	Button_t4055032469 * ____startButton_3;
	// UnityEngine.UI.Button TitleSceneManager::_startButtonDebug
	Button_t4055032469 * ____startButtonDebug_4;
	// FadeManager TitleSceneManager::_fadeManager
	FadeManager_t2978290776 * ____fadeManager_5;

public:
	inline static int32_t get_offset_of__sceneContainer_2() { return static_cast<int32_t>(offsetof(TitleSceneManager_t4033090873, ____sceneContainer_2)); }
	inline GameObject_t1113636619 * get__sceneContainer_2() const { return ____sceneContainer_2; }
	inline GameObject_t1113636619 ** get_address_of__sceneContainer_2() { return &____sceneContainer_2; }
	inline void set__sceneContainer_2(GameObject_t1113636619 * value)
	{
		____sceneContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&____sceneContainer_2), value);
	}

	inline static int32_t get_offset_of__startButton_3() { return static_cast<int32_t>(offsetof(TitleSceneManager_t4033090873, ____startButton_3)); }
	inline Button_t4055032469 * get__startButton_3() const { return ____startButton_3; }
	inline Button_t4055032469 ** get_address_of__startButton_3() { return &____startButton_3; }
	inline void set__startButton_3(Button_t4055032469 * value)
	{
		____startButton_3 = value;
		Il2CppCodeGenWriteBarrier((&____startButton_3), value);
	}

	inline static int32_t get_offset_of__startButtonDebug_4() { return static_cast<int32_t>(offsetof(TitleSceneManager_t4033090873, ____startButtonDebug_4)); }
	inline Button_t4055032469 * get__startButtonDebug_4() const { return ____startButtonDebug_4; }
	inline Button_t4055032469 ** get_address_of__startButtonDebug_4() { return &____startButtonDebug_4; }
	inline void set__startButtonDebug_4(Button_t4055032469 * value)
	{
		____startButtonDebug_4 = value;
		Il2CppCodeGenWriteBarrier((&____startButtonDebug_4), value);
	}

	inline static int32_t get_offset_of__fadeManager_5() { return static_cast<int32_t>(offsetof(TitleSceneManager_t4033090873, ____fadeManager_5)); }
	inline FadeManager_t2978290776 * get__fadeManager_5() const { return ____fadeManager_5; }
	inline FadeManager_t2978290776 ** get_address_of__fadeManager_5() { return &____fadeManager_5; }
	inline void set__fadeManager_5(FadeManager_t2978290776 * value)
	{
		____fadeManager_5 = value;
		Il2CppCodeGenWriteBarrier((&____fadeManager_5), value);
	}
};

struct TitleSceneManager_t4033090873_StaticFields
{
public:
	// System.Action TitleSceneManager::<>f__am$cache0
	Action_t1264377477 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(TitleSceneManager_t4033090873_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_t1264377477 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_t1264377477 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESCENEMANAGER_T4033090873_H
#ifndef SPEEXDSP_T3753572563_H
#define SPEEXDSP_T3753572563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpeexDSP
struct  SpeexDSP_t3753572563  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SpeexDSP::Windows
	bool ___Windows_2;
	// System.Boolean SpeexDSP::Mac
	bool ___Mac_3;
	// System.Boolean SpeexDSP::AEC
	bool ___AEC_4;
	// System.Int32 SpeexDSP::AECPlaybackDelayMs
	int32_t ___AECPlaybackDelayMs_5;
	// System.Int32 SpeexDSP::AECFilterLengthMs
	int32_t ___AECFilterLengthMs_6;
	// System.Boolean SpeexDSP::Denoise
	bool ___Denoise_7;
	// System.Boolean SpeexDSP::AGC
	bool ___AGC_8;
	// System.Single SpeexDSP::AGCLevel
	float ___AGCLevel_9;
	// System.Int32 SpeexDSP::AECPlayDelayCurrentFrames
	int32_t ___AECPlayDelayCurrentFrames_10;
	// System.Boolean SpeexDSP::AECLatencyDetect
	bool ___AECLatencyDetect_11;
	// ExitGames.Client.Photon.Voice.SpeexProcessor SpeexDSP::proc
	SpeexProcessor_t2344027106 * ___proc_12;
	// System.Boolean SpeexDSP::<Active>k__BackingField
	bool ___U3CActiveU3Ek__BackingField_13;
	// System.Boolean SpeexDSP::prevAEC
	bool ___prevAEC_14;
	// System.Int32 SpeexDSP::aecLDState
	int32_t ___aecLDState_15;
	// System.Single SpeexDSP::aecLDStart
	float ___aecLDStart_16;
	// UnityEngine.AudioSource SpeexDSP::aecLDPing
	AudioSource_t3935305588 * ___aecLDPing_17;

public:
	inline static int32_t get_offset_of_Windows_2() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___Windows_2)); }
	inline bool get_Windows_2() const { return ___Windows_2; }
	inline bool* get_address_of_Windows_2() { return &___Windows_2; }
	inline void set_Windows_2(bool value)
	{
		___Windows_2 = value;
	}

	inline static int32_t get_offset_of_Mac_3() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___Mac_3)); }
	inline bool get_Mac_3() const { return ___Mac_3; }
	inline bool* get_address_of_Mac_3() { return &___Mac_3; }
	inline void set_Mac_3(bool value)
	{
		___Mac_3 = value;
	}

	inline static int32_t get_offset_of_AEC_4() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___AEC_4)); }
	inline bool get_AEC_4() const { return ___AEC_4; }
	inline bool* get_address_of_AEC_4() { return &___AEC_4; }
	inline void set_AEC_4(bool value)
	{
		___AEC_4 = value;
	}

	inline static int32_t get_offset_of_AECPlaybackDelayMs_5() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___AECPlaybackDelayMs_5)); }
	inline int32_t get_AECPlaybackDelayMs_5() const { return ___AECPlaybackDelayMs_5; }
	inline int32_t* get_address_of_AECPlaybackDelayMs_5() { return &___AECPlaybackDelayMs_5; }
	inline void set_AECPlaybackDelayMs_5(int32_t value)
	{
		___AECPlaybackDelayMs_5 = value;
	}

	inline static int32_t get_offset_of_AECFilterLengthMs_6() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___AECFilterLengthMs_6)); }
	inline int32_t get_AECFilterLengthMs_6() const { return ___AECFilterLengthMs_6; }
	inline int32_t* get_address_of_AECFilterLengthMs_6() { return &___AECFilterLengthMs_6; }
	inline void set_AECFilterLengthMs_6(int32_t value)
	{
		___AECFilterLengthMs_6 = value;
	}

	inline static int32_t get_offset_of_Denoise_7() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___Denoise_7)); }
	inline bool get_Denoise_7() const { return ___Denoise_7; }
	inline bool* get_address_of_Denoise_7() { return &___Denoise_7; }
	inline void set_Denoise_7(bool value)
	{
		___Denoise_7 = value;
	}

	inline static int32_t get_offset_of_AGC_8() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___AGC_8)); }
	inline bool get_AGC_8() const { return ___AGC_8; }
	inline bool* get_address_of_AGC_8() { return &___AGC_8; }
	inline void set_AGC_8(bool value)
	{
		___AGC_8 = value;
	}

	inline static int32_t get_offset_of_AGCLevel_9() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___AGCLevel_9)); }
	inline float get_AGCLevel_9() const { return ___AGCLevel_9; }
	inline float* get_address_of_AGCLevel_9() { return &___AGCLevel_9; }
	inline void set_AGCLevel_9(float value)
	{
		___AGCLevel_9 = value;
	}

	inline static int32_t get_offset_of_AECPlayDelayCurrentFrames_10() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___AECPlayDelayCurrentFrames_10)); }
	inline int32_t get_AECPlayDelayCurrentFrames_10() const { return ___AECPlayDelayCurrentFrames_10; }
	inline int32_t* get_address_of_AECPlayDelayCurrentFrames_10() { return &___AECPlayDelayCurrentFrames_10; }
	inline void set_AECPlayDelayCurrentFrames_10(int32_t value)
	{
		___AECPlayDelayCurrentFrames_10 = value;
	}

	inline static int32_t get_offset_of_AECLatencyDetect_11() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___AECLatencyDetect_11)); }
	inline bool get_AECLatencyDetect_11() const { return ___AECLatencyDetect_11; }
	inline bool* get_address_of_AECLatencyDetect_11() { return &___AECLatencyDetect_11; }
	inline void set_AECLatencyDetect_11(bool value)
	{
		___AECLatencyDetect_11 = value;
	}

	inline static int32_t get_offset_of_proc_12() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___proc_12)); }
	inline SpeexProcessor_t2344027106 * get_proc_12() const { return ___proc_12; }
	inline SpeexProcessor_t2344027106 ** get_address_of_proc_12() { return &___proc_12; }
	inline void set_proc_12(SpeexProcessor_t2344027106 * value)
	{
		___proc_12 = value;
		Il2CppCodeGenWriteBarrier((&___proc_12), value);
	}

	inline static int32_t get_offset_of_U3CActiveU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___U3CActiveU3Ek__BackingField_13)); }
	inline bool get_U3CActiveU3Ek__BackingField_13() const { return ___U3CActiveU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CActiveU3Ek__BackingField_13() { return &___U3CActiveU3Ek__BackingField_13; }
	inline void set_U3CActiveU3Ek__BackingField_13(bool value)
	{
		___U3CActiveU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_prevAEC_14() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___prevAEC_14)); }
	inline bool get_prevAEC_14() const { return ___prevAEC_14; }
	inline bool* get_address_of_prevAEC_14() { return &___prevAEC_14; }
	inline void set_prevAEC_14(bool value)
	{
		___prevAEC_14 = value;
	}

	inline static int32_t get_offset_of_aecLDState_15() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___aecLDState_15)); }
	inline int32_t get_aecLDState_15() const { return ___aecLDState_15; }
	inline int32_t* get_address_of_aecLDState_15() { return &___aecLDState_15; }
	inline void set_aecLDState_15(int32_t value)
	{
		___aecLDState_15 = value;
	}

	inline static int32_t get_offset_of_aecLDStart_16() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___aecLDStart_16)); }
	inline float get_aecLDStart_16() const { return ___aecLDStart_16; }
	inline float* get_address_of_aecLDStart_16() { return &___aecLDStart_16; }
	inline void set_aecLDStart_16(float value)
	{
		___aecLDStart_16 = value;
	}

	inline static int32_t get_offset_of_aecLDPing_17() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563, ___aecLDPing_17)); }
	inline AudioSource_t3935305588 * get_aecLDPing_17() const { return ___aecLDPing_17; }
	inline AudioSource_t3935305588 ** get_address_of_aecLDPing_17() { return &___aecLDPing_17; }
	inline void set_aecLDPing_17(AudioSource_t3935305588 * value)
	{
		___aecLDPing_17 = value;
		Il2CppCodeGenWriteBarrier((&___aecLDPing_17), value);
	}
};

struct SpeexDSP_t3753572563_StaticFields
{
public:
	// System.Func`1<System.Int64> SpeexDSP::<>f__am$cache0
	Func_1_t3166313951 * ___U3CU3Ef__amU24cache0_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_18() { return static_cast<int32_t>(offsetof(SpeexDSP_t3753572563_StaticFields, ___U3CU3Ef__amU24cache0_18)); }
	inline Func_1_t3166313951 * get_U3CU3Ef__amU24cache0_18() const { return ___U3CU3Ef__amU24cache0_18; }
	inline Func_1_t3166313951 ** get_address_of_U3CU3Ef__amU24cache0_18() { return &___U3CU3Ef__amU24cache0_18; }
	inline void set_U3CU3Ef__amU24cache0_18(Func_1_t3166313951 * value)
	{
		___U3CU3Ef__amU24cache0_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEEXDSP_T3753572563_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef SOUNDMANAGER_T2102329059_H
#define SOUNDMANAGER_T2102329059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2102329059  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource SoundManager::_audioSource
	AudioSource_t3935305588 * ____audioSource_2;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> SoundManager::_seList
	List_1_t857997111 * ____seList_3;

public:
	inline static int32_t get_offset_of__audioSource_2() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ____audioSource_2)); }
	inline AudioSource_t3935305588 * get__audioSource_2() const { return ____audioSource_2; }
	inline AudioSource_t3935305588 ** get_address_of__audioSource_2() { return &____audioSource_2; }
	inline void set__audioSource_2(AudioSource_t3935305588 * value)
	{
		____audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((&____audioSource_2), value);
	}

	inline static int32_t get_offset_of__seList_3() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ____seList_3)); }
	inline List_1_t857997111 * get__seList_3() const { return ____seList_3; }
	inline List_1_t857997111 ** get_address_of__seList_3() { return &____seList_3; }
	inline void set__seList_3(List_1_t857997111 * value)
	{
		____seList_3 = value;
		Il2CppCodeGenWriteBarrier((&____seList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDMANAGER_T2102329059_H
#ifndef MONOBEHAVIOUR_T3225183318_H
#define MONOBEHAVIOUR_T3225183318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.MonoBehaviour
struct  MonoBehaviour_t3225183318  : public MonoBehaviour_t3962482529
{
public:
	// PhotonView Photon.MonoBehaviour::pvCache
	PhotonView_t2207721820 * ___pvCache_2;

public:
	inline static int32_t get_offset_of_pvCache_2() { return static_cast<int32_t>(offsetof(MonoBehaviour_t3225183318, ___pvCache_2)); }
	inline PhotonView_t2207721820 * get_pvCache_2() const { return ___pvCache_2; }
	inline PhotonView_t2207721820 ** get_address_of_pvCache_2() { return &___pvCache_2; }
	inline void set_pvCache_2(PhotonView_t2207721820 * value)
	{
		___pvCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___pvCache_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3225183318_H
#ifndef AUDIOLISTENER_T2734094699_H
#define AUDIOLISTENER_T2734094699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListener
struct  AudioListener_t2734094699  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::spatializerExtension
	AudioListenerExtension_t3242956547 * ___spatializerExtension_2;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioListener_t2734094699, ___spatializerExtension_2)); }
	inline AudioListenerExtension_t3242956547 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioListenerExtension_t3242956547 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioListenerExtension_t3242956547 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENER_T2734094699_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef LOCALVOICEAUDIO_1_T514408568_H
#define LOCALVOICEAUDIO_1_T514408568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct  LocalVoiceAudio_1_t514408568  : public LocalVoiceFramed_1_t4291334645
{
public:
	// ExitGames.Client.Photon.Voice.AudioUtil/VoiceDetector`1<T> ExitGames.Client.Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t3268676890 * ___voiceDetector_31;
	// ExitGames.Client.Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> ExitGames.Client.Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_t1501379953 * ___voiceDetectorCalibration_32;
	// ExitGames.Client.Photon.Voice.AudioUtil/LevelMeter`1<T> ExitGames.Client.Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t2904595747 * ___levelMeter_33;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_34;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoiceAudio`1::sourceSamplingRateHz
	int32_t ___sourceSamplingRateHz_35;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_36;

public:
	inline static int32_t get_offset_of_voiceDetector_31() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t514408568, ___voiceDetector_31)); }
	inline VoiceDetector_1_t3268676890 * get_voiceDetector_31() const { return ___voiceDetector_31; }
	inline VoiceDetector_1_t3268676890 ** get_address_of_voiceDetector_31() { return &___voiceDetector_31; }
	inline void set_voiceDetector_31(VoiceDetector_1_t3268676890 * value)
	{
		___voiceDetector_31 = value;
		Il2CppCodeGenWriteBarrier((&___voiceDetector_31), value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_32() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t514408568, ___voiceDetectorCalibration_32)); }
	inline VoiceDetectorCalibration_1_t1501379953 * get_voiceDetectorCalibration_32() const { return ___voiceDetectorCalibration_32; }
	inline VoiceDetectorCalibration_1_t1501379953 ** get_address_of_voiceDetectorCalibration_32() { return &___voiceDetectorCalibration_32; }
	inline void set_voiceDetectorCalibration_32(VoiceDetectorCalibration_1_t1501379953 * value)
	{
		___voiceDetectorCalibration_32 = value;
		Il2CppCodeGenWriteBarrier((&___voiceDetectorCalibration_32), value);
	}

	inline static int32_t get_offset_of_levelMeter_33() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t514408568, ___levelMeter_33)); }
	inline LevelMeter_1_t2904595747 * get_levelMeter_33() const { return ___levelMeter_33; }
	inline LevelMeter_1_t2904595747 ** get_address_of_levelMeter_33() { return &___levelMeter_33; }
	inline void set_levelMeter_33(LevelMeter_1_t2904595747 * value)
	{
		___levelMeter_33 = value;
		Il2CppCodeGenWriteBarrier((&___levelMeter_33), value);
	}

	inline static int32_t get_offset_of_channels_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t514408568, ___channels_34)); }
	inline int32_t get_channels_34() const { return ___channels_34; }
	inline int32_t* get_address_of_channels_34() { return &___channels_34; }
	inline void set_channels_34(int32_t value)
	{
		___channels_34 = value;
	}

	inline static int32_t get_offset_of_sourceSamplingRateHz_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t514408568, ___sourceSamplingRateHz_35)); }
	inline int32_t get_sourceSamplingRateHz_35() const { return ___sourceSamplingRateHz_35; }
	inline int32_t* get_address_of_sourceSamplingRateHz_35() { return &___sourceSamplingRateHz_35; }
	inline void set_sourceSamplingRateHz_35(int32_t value)
	{
		___sourceSamplingRateHz_35 = value;
	}

	inline static int32_t get_offset_of_resampleSource_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t514408568, ___resampleSource_36)); }
	inline bool get_resampleSource_36() const { return ___resampleSource_36; }
	inline bool* get_address_of_resampleSource_36() { return &___resampleSource_36; }
	inline void set_resampleSource_36(bool value)
	{
		___resampleSource_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVOICEAUDIO_1_T514408568_H
#ifndef PHOTONVOICESPEAKER_T2096685102_H
#define PHOTONVOICESPEAKER_T2096685102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonVoiceSpeaker
struct  PhotonVoiceSpeaker_t2096685102  : public MonoBehaviour_t3225183318
{
public:
	// ExitGames.Client.Photon.Voice.IAudioOut PhotonVoiceSpeaker::player
	RuntimeObject* ___player_3;
	// System.Boolean PhotonVoiceSpeaker::started
	bool ___started_4;
	// System.Int64 PhotonVoiceSpeaker::<LastRecvTime>k__BackingField
	int64_t ___U3CLastRecvTimeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(PhotonVoiceSpeaker_t2096685102, ___player_3)); }
	inline RuntimeObject* get_player_3() const { return ___player_3; }
	inline RuntimeObject** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(RuntimeObject* value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier((&___player_3), value);
	}

	inline static int32_t get_offset_of_started_4() { return static_cast<int32_t>(offsetof(PhotonVoiceSpeaker_t2096685102, ___started_4)); }
	inline bool get_started_4() const { return ___started_4; }
	inline bool* get_address_of_started_4() { return &___started_4; }
	inline void set_started_4(bool value)
	{
		___started_4 = value;
	}

	inline static int32_t get_offset_of_U3CLastRecvTimeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PhotonVoiceSpeaker_t2096685102, ___U3CLastRecvTimeU3Ek__BackingField_5)); }
	inline int64_t get_U3CLastRecvTimeU3Ek__BackingField_5() const { return ___U3CLastRecvTimeU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CLastRecvTimeU3Ek__BackingField_5() { return &___U3CLastRecvTimeU3Ek__BackingField_5; }
	inline void set_U3CLastRecvTimeU3Ek__BackingField_5(int64_t value)
	{
		___U3CLastRecvTimeU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONVOICESPEAKER_T2096685102_H
#ifndef PHOTONVIEW_T2207721820_H
#define PHOTONVIEW_T2207721820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonView
struct  PhotonView_t2207721820  : public MonoBehaviour_t3225183318
{
public:
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId_3;
	// System.Byte PhotonView::group
	uint8_t ___group_4;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_5;
	// System.Boolean PhotonView::OwnerShipWasTransfered
	bool ___OwnerShipWasTransfered_6;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup_7;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_t2843939325* ___instantiationDataField_8;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_t2843939325* ___lastOnSerializeDataSent_9;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t2843939325* ___lastOnSerializeDataReceived_10;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization_11;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption_12;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption_13;
	// OwnershipOption PhotonView::ownershipTransfer
	int32_t ___ownershipTransfer_14;
	// System.Collections.Generic.List`1<UnityEngine.Component> PhotonView::ObservedComponents
	List_1_t3395709193 * ___ObservedComponents_15;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo> PhotonView::m_OnSerializeMethodInfos
	Dictionary_2_t3676033689 * ___m_OnSerializeMethodInfos_16;
	// System.Int32 PhotonView::viewIdField
	int32_t ___viewIdField_17;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId_18;
	// System.Int32 PhotonView::currentMasterID
	int32_t ___currentMasterID_19;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake_20;
	// System.Boolean PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_21;
	// System.Boolean PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_22;
	// UnityEngine.MonoBehaviour[] PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t2007329276* ___RpcMonoBehaviours_23;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t * ___OnSerializeMethodInfo_24;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize_25;

public:
	inline static int32_t get_offset_of_ownerId_3() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___ownerId_3)); }
	inline int32_t get_ownerId_3() const { return ___ownerId_3; }
	inline int32_t* get_address_of_ownerId_3() { return &___ownerId_3; }
	inline void set_ownerId_3(int32_t value)
	{
		___ownerId_3 = value;
	}

	inline static int32_t get_offset_of_group_4() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___group_4)); }
	inline uint8_t get_group_4() const { return ___group_4; }
	inline uint8_t* get_address_of_group_4() { return &___group_4; }
	inline void set_group_4(uint8_t value)
	{
		___group_4 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_5() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___mixedModeIsReliable_5)); }
	inline bool get_mixedModeIsReliable_5() const { return ___mixedModeIsReliable_5; }
	inline bool* get_address_of_mixedModeIsReliable_5() { return &___mixedModeIsReliable_5; }
	inline void set_mixedModeIsReliable_5(bool value)
	{
		___mixedModeIsReliable_5 = value;
	}

	inline static int32_t get_offset_of_OwnerShipWasTransfered_6() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___OwnerShipWasTransfered_6)); }
	inline bool get_OwnerShipWasTransfered_6() const { return ___OwnerShipWasTransfered_6; }
	inline bool* get_address_of_OwnerShipWasTransfered_6() { return &___OwnerShipWasTransfered_6; }
	inline void set_OwnerShipWasTransfered_6(bool value)
	{
		___OwnerShipWasTransfered_6 = value;
	}

	inline static int32_t get_offset_of_prefixBackup_7() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___prefixBackup_7)); }
	inline int32_t get_prefixBackup_7() const { return ___prefixBackup_7; }
	inline int32_t* get_address_of_prefixBackup_7() { return &___prefixBackup_7; }
	inline void set_prefixBackup_7(int32_t value)
	{
		___prefixBackup_7 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_8() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___instantiationDataField_8)); }
	inline ObjectU5BU5D_t2843939325* get_instantiationDataField_8() const { return ___instantiationDataField_8; }
	inline ObjectU5BU5D_t2843939325** get_address_of_instantiationDataField_8() { return &___instantiationDataField_8; }
	inline void set_instantiationDataField_8(ObjectU5BU5D_t2843939325* value)
	{
		___instantiationDataField_8 = value;
		Il2CppCodeGenWriteBarrier((&___instantiationDataField_8), value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_9() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___lastOnSerializeDataSent_9)); }
	inline ObjectU5BU5D_t2843939325* get_lastOnSerializeDataSent_9() const { return ___lastOnSerializeDataSent_9; }
	inline ObjectU5BU5D_t2843939325** get_address_of_lastOnSerializeDataSent_9() { return &___lastOnSerializeDataSent_9; }
	inline void set_lastOnSerializeDataSent_9(ObjectU5BU5D_t2843939325* value)
	{
		___lastOnSerializeDataSent_9 = value;
		Il2CppCodeGenWriteBarrier((&___lastOnSerializeDataSent_9), value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_10() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___lastOnSerializeDataReceived_10)); }
	inline ObjectU5BU5D_t2843939325* get_lastOnSerializeDataReceived_10() const { return ___lastOnSerializeDataReceived_10; }
	inline ObjectU5BU5D_t2843939325** get_address_of_lastOnSerializeDataReceived_10() { return &___lastOnSerializeDataReceived_10; }
	inline void set_lastOnSerializeDataReceived_10(ObjectU5BU5D_t2843939325* value)
	{
		___lastOnSerializeDataReceived_10 = value;
		Il2CppCodeGenWriteBarrier((&___lastOnSerializeDataReceived_10), value);
	}

	inline static int32_t get_offset_of_synchronization_11() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___synchronization_11)); }
	inline int32_t get_synchronization_11() const { return ___synchronization_11; }
	inline int32_t* get_address_of_synchronization_11() { return &___synchronization_11; }
	inline void set_synchronization_11(int32_t value)
	{
		___synchronization_11 = value;
	}

	inline static int32_t get_offset_of_onSerializeTransformOption_12() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___onSerializeTransformOption_12)); }
	inline int32_t get_onSerializeTransformOption_12() const { return ___onSerializeTransformOption_12; }
	inline int32_t* get_address_of_onSerializeTransformOption_12() { return &___onSerializeTransformOption_12; }
	inline void set_onSerializeTransformOption_12(int32_t value)
	{
		___onSerializeTransformOption_12 = value;
	}

	inline static int32_t get_offset_of_onSerializeRigidBodyOption_13() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___onSerializeRigidBodyOption_13)); }
	inline int32_t get_onSerializeRigidBodyOption_13() const { return ___onSerializeRigidBodyOption_13; }
	inline int32_t* get_address_of_onSerializeRigidBodyOption_13() { return &___onSerializeRigidBodyOption_13; }
	inline void set_onSerializeRigidBodyOption_13(int32_t value)
	{
		___onSerializeRigidBodyOption_13 = value;
	}

	inline static int32_t get_offset_of_ownershipTransfer_14() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___ownershipTransfer_14)); }
	inline int32_t get_ownershipTransfer_14() const { return ___ownershipTransfer_14; }
	inline int32_t* get_address_of_ownershipTransfer_14() { return &___ownershipTransfer_14; }
	inline void set_ownershipTransfer_14(int32_t value)
	{
		___ownershipTransfer_14 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_15() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___ObservedComponents_15)); }
	inline List_1_t3395709193 * get_ObservedComponents_15() const { return ___ObservedComponents_15; }
	inline List_1_t3395709193 ** get_address_of_ObservedComponents_15() { return &___ObservedComponents_15; }
	inline void set_ObservedComponents_15(List_1_t3395709193 * value)
	{
		___ObservedComponents_15 = value;
		Il2CppCodeGenWriteBarrier((&___ObservedComponents_15), value);
	}

	inline static int32_t get_offset_of_m_OnSerializeMethodInfos_16() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___m_OnSerializeMethodInfos_16)); }
	inline Dictionary_2_t3676033689 * get_m_OnSerializeMethodInfos_16() const { return ___m_OnSerializeMethodInfos_16; }
	inline Dictionary_2_t3676033689 ** get_address_of_m_OnSerializeMethodInfos_16() { return &___m_OnSerializeMethodInfos_16; }
	inline void set_m_OnSerializeMethodInfos_16(Dictionary_2_t3676033689 * value)
	{
		___m_OnSerializeMethodInfos_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnSerializeMethodInfos_16), value);
	}

	inline static int32_t get_offset_of_viewIdField_17() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___viewIdField_17)); }
	inline int32_t get_viewIdField_17() const { return ___viewIdField_17; }
	inline int32_t* get_address_of_viewIdField_17() { return &___viewIdField_17; }
	inline void set_viewIdField_17(int32_t value)
	{
		___viewIdField_17 = value;
	}

	inline static int32_t get_offset_of_instantiationId_18() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___instantiationId_18)); }
	inline int32_t get_instantiationId_18() const { return ___instantiationId_18; }
	inline int32_t* get_address_of_instantiationId_18() { return &___instantiationId_18; }
	inline void set_instantiationId_18(int32_t value)
	{
		___instantiationId_18 = value;
	}

	inline static int32_t get_offset_of_currentMasterID_19() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___currentMasterID_19)); }
	inline int32_t get_currentMasterID_19() const { return ___currentMasterID_19; }
	inline int32_t* get_address_of_currentMasterID_19() { return &___currentMasterID_19; }
	inline void set_currentMasterID_19(int32_t value)
	{
		___currentMasterID_19 = value;
	}

	inline static int32_t get_offset_of_didAwake_20() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___didAwake_20)); }
	inline bool get_didAwake_20() const { return ___didAwake_20; }
	inline bool* get_address_of_didAwake_20() { return &___didAwake_20; }
	inline void set_didAwake_20(bool value)
	{
		___didAwake_20 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_21() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___isRuntimeInstantiated_21)); }
	inline bool get_isRuntimeInstantiated_21() const { return ___isRuntimeInstantiated_21; }
	inline bool* get_address_of_isRuntimeInstantiated_21() { return &___isRuntimeInstantiated_21; }
	inline void set_isRuntimeInstantiated_21(bool value)
	{
		___isRuntimeInstantiated_21 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_22() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___removedFromLocalViewList_22)); }
	inline bool get_removedFromLocalViewList_22() const { return ___removedFromLocalViewList_22; }
	inline bool* get_address_of_removedFromLocalViewList_22() { return &___removedFromLocalViewList_22; }
	inline void set_removedFromLocalViewList_22(bool value)
	{
		___removedFromLocalViewList_22 = value;
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_23() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___RpcMonoBehaviours_23)); }
	inline MonoBehaviourU5BU5D_t2007329276* get_RpcMonoBehaviours_23() const { return ___RpcMonoBehaviours_23; }
	inline MonoBehaviourU5BU5D_t2007329276** get_address_of_RpcMonoBehaviours_23() { return &___RpcMonoBehaviours_23; }
	inline void set_RpcMonoBehaviours_23(MonoBehaviourU5BU5D_t2007329276* value)
	{
		___RpcMonoBehaviours_23 = value;
		Il2CppCodeGenWriteBarrier((&___RpcMonoBehaviours_23), value);
	}

	inline static int32_t get_offset_of_OnSerializeMethodInfo_24() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___OnSerializeMethodInfo_24)); }
	inline MethodInfo_t * get_OnSerializeMethodInfo_24() const { return ___OnSerializeMethodInfo_24; }
	inline MethodInfo_t ** get_address_of_OnSerializeMethodInfo_24() { return &___OnSerializeMethodInfo_24; }
	inline void set_OnSerializeMethodInfo_24(MethodInfo_t * value)
	{
		___OnSerializeMethodInfo_24 = value;
		Il2CppCodeGenWriteBarrier((&___OnSerializeMethodInfo_24), value);
	}

	inline static int32_t get_offset_of_failedToFindOnSerialize_25() { return static_cast<int32_t>(offsetof(PhotonView_t2207721820, ___failedToFindOnSerialize_25)); }
	inline bool get_failedToFindOnSerialize_25() const { return ___failedToFindOnSerialize_25; }
	inline bool* get_address_of_failedToFindOnSerialize_25() { return &___failedToFindOnSerialize_25; }
	inline void set_failedToFindOnSerialize_25(bool value)
	{
		___failedToFindOnSerialize_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONVIEW_T2207721820_H
#ifndef SMOOTHSYNCMOVEMENT_T1809568931_H
#define SMOOTHSYNCMOVEMENT_T1809568931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothSyncMovement
struct  SmoothSyncMovement_t1809568931  : public MonoBehaviour_t3225183318
{
public:
	// System.Single SmoothSyncMovement::SmoothingDelay
	float ___SmoothingDelay_3;
	// UnityEngine.Vector3 SmoothSyncMovement::correctPlayerPos
	Vector3_t3722313464  ___correctPlayerPos_4;
	// UnityEngine.Quaternion SmoothSyncMovement::correctPlayerRot
	Quaternion_t2301928331  ___correctPlayerRot_5;

public:
	inline static int32_t get_offset_of_SmoothingDelay_3() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t1809568931, ___SmoothingDelay_3)); }
	inline float get_SmoothingDelay_3() const { return ___SmoothingDelay_3; }
	inline float* get_address_of_SmoothingDelay_3() { return &___SmoothingDelay_3; }
	inline void set_SmoothingDelay_3(float value)
	{
		___SmoothingDelay_3 = value;
	}

	inline static int32_t get_offset_of_correctPlayerPos_4() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t1809568931, ___correctPlayerPos_4)); }
	inline Vector3_t3722313464  get_correctPlayerPos_4() const { return ___correctPlayerPos_4; }
	inline Vector3_t3722313464 * get_address_of_correctPlayerPos_4() { return &___correctPlayerPos_4; }
	inline void set_correctPlayerPos_4(Vector3_t3722313464  value)
	{
		___correctPlayerPos_4 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_5() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t1809568931, ___correctPlayerRot_5)); }
	inline Quaternion_t2301928331  get_correctPlayerRot_5() const { return ___correctPlayerRot_5; }
	inline Quaternion_t2301928331 * get_address_of_correctPlayerRot_5() { return &___correctPlayerRot_5; }
	inline void set_correctPlayerRot_5(Quaternion_t2301928331  value)
	{
		___correctPlayerRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHSYNCMOVEMENT_T1809568931_H
#ifndef LOCALVOICEAUDIOSHORT_T1883701567_H
#define LOCALVOICEAUDIOSHORT_T1883701567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LocalVoiceAudioShort
struct  LocalVoiceAudioShort_t1883701567  : public LocalVoiceAudio_1_t514408568
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVOICEAUDIOSHORT_T1883701567_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUIStyle_t3956901511 * m_Items[1];

public:
	inline GUIStyle_t3956901511 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIStyle_t3956901511 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t3956901511 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUIStyle_t3956901511 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIStyle_t3956901511 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIStyle_t3956901511 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t811797299 * m_Items[1];

public:
	inline GUILayoutOption_t811797299 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUILayoutOption_t811797299 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// ExitGames.Client.Photon.Voice.LocalVoiceFramed`1/IProcessor<System.Int16>[]
struct IProcessorU5BU5D_t2310300181  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// PhotonVoiceSpeaker[]
struct PhotonVoiceSpeakerU5BU5D_t1538319195  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PhotonVoiceSpeaker_t2096685102 * m_Items[1];

public:
	inline PhotonVoiceSpeaker_t2096685102 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PhotonVoiceSpeaker_t2096685102 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PhotonVoiceSpeaker_t2096685102 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PhotonVoiceSpeaker_t2096685102 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PhotonVoiceSpeaker_t2096685102 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PhotonVoiceSpeaker_t2096685102 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1095989290_gshared (Action_2_t2340848427 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::.ctor()
extern "C"  void Dictionary_2__ctor_m1407212350_gshared (Dictionary_2_t1750165665 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m3134054041_gshared (Dictionary_2_t1750165665 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::get_Item(!0)
extern "C"  int32_t Dictionary_2_get_Item_m2522243033_gshared (Dictionary_2_t1750165665 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m1164172807_gshared (Func_1_t3166313951 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPreProcessor(ExitGames.Client.Photon.Voice.LocalVoiceFramed`1/IProcessor<!0>[])
extern "C"  void LocalVoiceFramed_1_AddPreProcessor_m652934459_gshared (LocalVoiceFramed_1_t4291334645 * __this, IProcessorU5BU5D_t2310300181* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m4132945285_gshared (Dictionary_2_t1213689194 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3087077418_gshared (Action_1_t643525275 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>::.ctor(!0,!1)
extern "C"  void KeyValuePair_2__ctor_m2678495578_gshared (KeyValuePair_2_t2420681874 * __this, int32_t p0, uint8_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m1870007341_gshared (Dictionary_2_t1213689194 * __this, KeyValuePair_2_t2420681874  p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m1411480280_gshared (Dictionary_2_t1213689194 * __this, KeyValuePair_2_t2420681874  p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m598072357_gshared (Dictionary_2_t1213689194 * __this, KeyValuePair_2_t2420681874  p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>::Invoke(!0,!1,!2)
extern "C"  void Action_3_Invoke_m2195347554_gshared (Action_3_t887068424 * __this, int32_t p0, uint8_t p1, VoiceInfo_t822772786  p2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Byte>::Invoke(!0,!1)
extern "C"  void Action_2_Invoke_m2909171545_gshared (Action_2_t2360473393 * __this, int32_t p0, uint8_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m3891339411_gshared (Dictionary_2_t1213689194 * __this, KeyValuePair_2_t2420681874  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::.ctor()
extern "C"  void List_1__ctor_m3371529868_gshared (List_1_t3892756616 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3167871969  Dictionary_2_GetEnumerator_m709900672_gshared (Dictionary_2_t1213689194 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t3611361361  Enumerator_get_Current_m2565135577_gshared (Enumerator_t3167871969 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2082315985_gshared (KeyValuePair_2_t3611361361 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::get_Key()
extern "C"  KeyValuePair_2_t2420681874  KeyValuePair_2_get_Key_m1954770095_gshared (KeyValuePair_2_t3611361361 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::Add(!0)
extern "C"  void List_1_Add_m1636746552_gshared (List_1_t3892756616 * __this, KeyValuePair_2_t2420681874  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m131355927_gshared (KeyValuePair_2_t2420681874 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>::get_Value()
extern "C"  uint8_t KeyValuePair_2_get_Value_m167480798_gshared (KeyValuePair_2_t2420681874 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m4152354593_gshared (Enumerator_t3167871969 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m2801361812_gshared (Enumerator_t3167871969 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::GetEnumerator()
extern "C"  Enumerator_t1487033197  List_1_GetEnumerator_m4040184051_gshared (List_1_t3892756616 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::get_Current()
extern "C"  KeyValuePair_2_t2420681874  Enumerator_get_Current_m2200437993_gshared (Enumerator_t1487033197 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1157500647_gshared (Enumerator_t1487033197 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::Dispose()
extern "C"  void Enumerator_Dispose_m3718840993_gshared (Enumerator_t1487033197 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Byte,System.Object>::Invoke(!0,!1,!2)
extern "C"  void Action_3_Invoke_m2003192640_gshared (Action_3_t3144401802 * __this, int32_t p0, uint8_t p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>::Invoke(!0)
extern "C"  void Action_1_Invoke_m4214502263_gshared (Action_1_t643525275 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m1372101825_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject ** p1, const RuntimeMethod* method);

// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m3127574091 (Hashtable_t1048209202 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoCleanUpPlayerObjects()
extern "C"  bool PhotonNetwork_get_autoCleanUpPlayerObjects_m1413703245 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo_InternalCacheProperties_m4242051927 (RoomInfo_t3170295620 * __this, Hashtable_t1048209202 * ___propertiesToCache0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_Name()
extern "C"  String_t* RoomInfo_get_Name_m1566372812 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_PlayerCount()
extern "C"  int32_t RoomInfo_get_PlayerCount_m1620500445 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Collections.IDictionary)
extern "C"  String_t* Extensions_ToStringFull_m1484102310 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___origin0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
#define Dictionary_2_get_Count_m3919933788(__this, method) ((  int32_t (*) (Dictionary_2_t132545152 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m2278349286(__this, p0, method) ((  bool (*) (Dictionary_2_t132545152 *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Object)
extern "C"  RuntimeObject * Hashtable_get_Item_m4119173712 (Hashtable_t1048209202 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C"  void RoomInfo_set_removedFromList_m2440681477 (RoomInfo_t3170295620 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
extern "C"  bool RoomInfo_get_removedFromList_m2223007701 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_PlayerCount(System.Int32)
extern "C"  void RoomInfo_set_PlayerCount_m2372803739 (RoomInfo_t3170295620 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C"  void RoomInfo_set_serverSideMasterClient_m1721621728 (RoomInfo_t3170295620 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdateMasterClient()
extern "C"  void NetworkingPeer_UpdateMasterClient_m2520995946 (NetworkingPeer_t264212356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_MergeStringKeys_m2132684723 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
extern "C"  void Extensions_StripKeysWithNullValues_m2665059190 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___original0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_CustomProperties()
extern "C"  Hashtable_t1048209202 * RoomInfo_get_CustomProperties_m3452865736 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_IsLocalClientInside()
extern "C"  bool RoomInfo_get_IsLocalClientInside_m3856641640 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_IsLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_IsLocalClientInside_m2450376962 (RoomInfo_t3170295620 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_MaxPlayers()
extern "C"  uint8_t RoomInfo_get_MaxPlayers_m2331570438 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_IsOpen()
extern "C"  bool RoomInfo_get_IsOpen_m1653737527 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_IsVisible()
extern "C"  bool RoomInfo_get_IsVisible_m4231194594 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m270272723 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Hashtable::set_Item(System.Object,System.Object)
extern "C"  void Hashtable_set_Item_m963063516 (Hashtable_t1048209202 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void PhotonPlayer_SetCustomProperties_m1444427373 (PhotonPlayer_t3305149557 * __this, Hashtable_t1048209202 * ___propertiesToSet0, Hashtable_t1048209202 * ___expectedValues1, bool ___webForward2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScoreExtensions::GetScore(PhotonPlayer)
extern "C"  int32_t ScoreExtensions_GetScore_m1181906475 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_CustomProperties()
extern "C"  Hashtable_t1048209202 * PhotonPlayer_get_CustomProperties_m3745757186 (PhotonPlayer_t3305149557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3280774074(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t132545152 *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.String)
extern "C"  void Guid__ctor_m2423264394 (Guid_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
extern "C"  int32_t PhotonHandler_get_BestRegionCodeInPreferences_m3593100049 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
extern "C"  void PhotonHandler_set_BestRegionCodeInPreferences_m1477608017 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m3073574632 (RuntimeObject * __this /* static, unused */, GUISkin_t1244372282 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t1244372282 * GUI_get_skin_m1874615010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C"  GUIStyle_t3956901511 * GUISkin_get_box_m1243835431 (GUISkin_t1244372282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m1332121664 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, GUIStyle_t3956901511 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ShowStatusWhenConnecting::GetConnectingDots()
extern "C"  String_t* ShowStatusWhenConnecting_GetConnectingDots_m4281251292 (ShowStatusWhenConnecting_t1063567576 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C"  GUIStyleU5BU5D_t2383250302* GUISkin_get_customStyles_m2118532212 (GUISkin_t1244372282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m1096010274 (RuntimeObject * __this /* static, unused */, String_t* p0, GUIStyle_t3956901511 * p1, GUILayoutOptionU5BU5D_t2510215842* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ClientState PhotonNetwork::get_connectionStateDetailed()
extern "C"  int32_t PhotonNetwork_get_connectionStateDetailed_m2029000665 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m1960000298 (RuntimeObject * __this /* static, unused */, String_t* p0, GUILayoutOptionU5BU5D_t2510215842* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m2046611416 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_inRoom()
extern "C"  bool PhotonNetwork_get_inRoom_m1604252032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern "C"  float Time_get_timeSinceLevelLoad_m2224611026 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1256967409 (MonoBehaviour_t3225183318 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// PhotonView Photon.MonoBehaviour::get_photonView()
extern "C"  PhotonView_t2207721820 * MonoBehaviour_get_photonView_m1395439011 (MonoBehaviour_t3225183318 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
#define List_1_GetEnumerator_m4128318975(__this, method) ((  Enumerator_t989985774  (*) (List_1_t3395709193 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::get_Current()
#define Enumerator_get_Current_m1782500462(__this, method) ((  Component_t1923634451 * (*) (Enumerator_t989985774 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::MoveNext()
#define Enumerator_MoveNext_m4232616038(__this, method) ((  bool (*) (Enumerator_t989985774 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::Dispose()
#define Enumerator_Dispose_m4132484595(__this, method) ((  void (*) (Enumerator_t989985774 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
extern "C"  bool PhotonStream_get_isWriting_m2805645485 (PhotonStream_t1003850889 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
extern "C"  void PhotonStream_SendNext_m3094139315 (PhotonStream_t1003850889 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
extern "C"  RuntimeObject * PhotonStream_ReceiveNext_m3398442404 (PhotonStream_t1003850889 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
extern "C"  bool PhotonView_get_isMine_m4153946987 (PhotonView_t2207721820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Lerp_m1238806789 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Count()
#define List_1_get_Count_m67763660(__this, method) ((  int32_t (*) (List_1_t857997111 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
#define List_1_get_Item_m1011483163(__this, p0, method) ((  AudioClip_t3680889665 * (*) (List_1_t857997111 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::ResetAEC()
extern "C"  void SpeexProcessor_ResetAEC_m2654821898 (SpeexProcessor_t2344027106 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpeexDSP::set_Active(System.Boolean)
extern "C"  void SpeexDSP_set_Active_m2159931872 (SpeexDSP_t3753572563 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpeexDSP::setOutputListener(System.Boolean)
extern "C"  void SpeexDSP_setOutputListener_m2923569688 (SpeexDSP_t3753572563 * __this, bool ___set0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::set_AEC(System.Boolean)
extern "C"  void SpeexProcessor_set_AEC_m1227070500 (SpeexProcessor_t2344027106 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::set_AECFilterLengthMs(System.Int32)
extern "C"  void SpeexProcessor_set_AECFilterLengthMs_m464088437 (SpeexProcessor_t2344027106 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::set_AECPlaybackDelayMs(System.Int32)
extern "C"  void SpeexProcessor_set_AECPlaybackDelayMs_m1227826016 (SpeexProcessor_t2344027106 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::set_Denoise(System.Boolean)
extern "C"  void SpeexProcessor_set_Denoise_m1848296518 (SpeexProcessor_t2344027106 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::set_AGC(System.Boolean)
extern "C"  void SpeexProcessor_set_AGC_m1421974596 (SpeexProcessor_t2344027106 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::set_AGCLevel(System.Single)
extern "C"  void SpeexProcessor_set_AGCLevel_m3823364936 (SpeexProcessor_t2344027106 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.SpeexProcessor::get_AECurrentPlayDelayFrames()
extern "C"  int32_t SpeexProcessor_get_AECurrentPlayDelayFrames_m2813651827 (SpeexProcessor_t2344027106 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.SpeexProcessor::get_AECLatencyDetect()
extern "C"  bool SpeexProcessor_get_AECLatencyDetect_m2704368244 (SpeexProcessor_t2344027106 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpeexDSP::InitAECLatencyDetect()
extern "C"  void SpeexDSP_InitAECLatencyDetect_m2917550844 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::set_AECLatencyDetect(System.Boolean)
extern "C"  void SpeexProcessor_set_AECLatencyDetect_m98890430 (SpeexProcessor_t2344027106 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.AudioListener>()
#define Object_FindObjectOfType_TisAudioListener_t2734094699_m3731316164(__this /* static, unused */, method) ((  AudioListener_t2734094699 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<AudioOutCapture>()
#define GameObject_GetComponent_TisAudioOutCapture_t1501502605_m1700239397(__this, method) ((  AudioOutCapture_t1501502605 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void System.Action`2<System.Single[],System.Int32>::.ctor(System.Object,System.IntPtr)
#define Action_2__ctor_m2577363568(__this, p0, p1, method) ((  void (*) (Action_2_t2703621360 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1095989290_gshared)(__this, p0, p1, method)
// System.Void AudioOutCapture::remove_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
extern "C"  void AudioOutCapture_remove_OnAudioFrame_m1172497523 (AudioOutCapture_t1501502605 * __this, Action_2_t2703621360 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<AudioOutCapture>()
#define GameObject_AddComponent_TisAudioOutCapture_t1501502605_m2448204606(__this, method) ((  AudioOutCapture_t1501502605 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void AudioOutCapture::add_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
extern "C"  void AudioOutCapture_add_OnAudioFrame_m466380877 (AudioOutCapture_t1501502605 * __this, Action_2_t2703621360 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpeexDSP::UpdateProcProps()
extern "C"  void SpeexDSP_UpdateProcProps_m753660225 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C"  int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::PrintInfo()
extern "C"  void SpeexProcessor_PrintInfo_m3747453554 (SpeexProcessor_t2344027106 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::AECLatecnyDetectCaliberate()
extern "C"  void SpeexProcessor_AECLatecnyDetectCaliberate_m3805284049 (SpeexProcessor_t2344027106 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
extern "C"  int32_t AudioSettings_get_outputSampleRate_m2086685549 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(__this, method) ((  AudioSource_t3935305588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  AudioClip_t3680889665 * AudioClip_Create_m255819841 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, int32_t p2, int32_t p3, bool p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m3659884460 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t3680889665 * AudioSource_get_clip_m1234340632 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_frequency()
extern "C"  int32_t AudioClip_get_frequency_m3907759635 (AudioClip_t3680889665 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
extern "C"  bool AudioClip_SetData_m313920037 (AudioClip_t3680889665 * __this, SingleU5BU5D_t1444911251* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.LocalVoice PhotonVoiceRecorder/PhotonVoiceCreatedParams::get_Voice()
extern "C"  LocalVoice_t3918029076 * PhotonVoiceCreatedParams_get_Voice_m1686405169 (PhotonVoiceCreatedParams_t2541618965 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpeexDSP::PhotonVoiceCreated(ExitGames.Client.Photon.Voice.LocalVoice)
extern "C"  void SpeexDSP_PhotonVoiceCreated_m898506513 (SpeexDSP_t3753572563 * __this, LocalVoice_t3918029076 * ___localVoice0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpeexDSP::get_Active()
extern "C"  bool SpeexDSP_get_Active_m1458589121 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.LocalVoice::get_Info()
extern "C"  VoiceInfo_t822772786  LocalVoice_get_Info_m1774175973 (LocalVoice_t3918029076 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::get_Channels()
extern "C"  int32_t VoiceInfo_get_Channels_m1717280597 (VoiceInfo_t822772786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::.ctor()
#define Dictionary_2__ctor_m1407212350(__this, method) ((  void (*) (Dictionary_2_t1750165665 *, const RuntimeMethod*))Dictionary_2__ctor_m1407212350_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::Add(!0,!1)
#define Dictionary_2_Add_m3134054041(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1750165665 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m3134054041_gshared)(__this, p0, p1, method)
// UnityEngine.AudioSpeakerMode UnityEngine.AudioSettings::get_speakerMode()
extern "C"  int32_t AudioSettings_get_speakerMode_m4187617941 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::get_Item(!0)
#define Dictionary_2_get_Item_m2522243033(__this, p0, method) ((  int32_t (*) (Dictionary_2_t1750165665 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2522243033_gshared)(__this, p0, method)
// System.Void UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)
extern "C"  void AudioSettings_GetDSPBufferSize_m2546071247 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpeexDSP/Logger::.ctor()
extern "C"  void Logger__ctor_m197743063 (Logger_t1407211853 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`1<System.Int64>::.ctor(System.Object,System.IntPtr)
#define Func_1__ctor_m1164172807(__this, p0, p1, method) ((  void (*) (Func_1_t3166313951 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m1164172807_gshared)(__this, p0, p1, method)
// System.Int32 ExitGames.Client.Photon.Voice.LocalVoiceFramed::get_FrameSize()
extern "C"  int32_t LocalVoiceFramed_get_FrameSize_m656139937 (LocalVoiceFramed_t3264419308 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::get_SourceSamplingRate()
extern "C"  int32_t VoiceInfo_get_SourceSamplingRate_m1583374093 (VoiceInfo_t822772786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::.ctor(ExitGames.Client.Photon.Voice.ILogger,System.Func`1<System.Int64>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SpeexProcessor__ctor_m1558839154 (SpeexProcessor_t2344027106 * __this, RuntimeObject* p0, Func_1_t3166313951 * p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPreProcessor(ExitGames.Client.Photon.Voice.LocalVoiceFramed`1/IProcessor<!0>[])
#define LocalVoiceFramed_1_AddPreProcessor_m652934459(__this, p0, method) ((  void (*) (LocalVoiceFramed_1_t4291334645 *, IProcessorU5BU5D_t2310300181*, const RuntimeMethod*))LocalVoiceFramed_1_AddPreProcessor_m652934459_gshared)(__this, p0, method)
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpeexDSP::reset()
extern "C"  void SpeexDSP_reset_m2118299877 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.SpeexProcessor::Dispose()
extern "C"  void SpeexProcessor_Dispose_m1669248969 (SpeexProcessor_t2344027106 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AudioSettings::get_dspTime()
extern "C"  double AudioSettings_get_dspTime_m2110776959 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
extern "C"  void Debug_LogErrorFormat_m575266265 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C"  void Debug_LogWarningFormat_m2535776735 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C"  void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<SupportLogging>()
#define GameObject_AddComponent_TisSupportLogging_t3610999087_m3906415171(__this, method) ((  SupportLogging_t3610999087 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connected()
extern "C"  bool PhotonNetwork_get_connected_m1765367833 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C"  void MonoBehaviour_CancelInvoke_m4090783926 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::NetworkStatisticsToString()
extern "C"  String_t* PhotonNetwork_NetworkStatisticsToString_m397446506 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m3016532472 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_AppVersion()
extern "C"  String_t* NetworkingPeer_get_AppVersion_m600122273 (NetworkingPeer_t264212356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
extern "C"  String_t* PhotonPeer_get_PeerID_m3871481171 (PhotonPeer_t1608153861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m2403596038 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_ServerAddress()
extern "C"  String_t* PhotonNetwork_get_ServerAddress_m16117006 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
extern "C"  int32_t NetworkingPeer_get_CloudRegion_m608168615 (NetworkingPeer_t264212356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m3255666490 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::LogBasics()
extern "C"  void SupportLogging_LogBasics_m2059416039 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_NetworkStatisticsEnabled(System.Boolean)
extern "C"  void PhotonNetwork_set_NetworkStatisticsEnabled_m3937783244 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TypedLobby PhotonNetwork::get_lobby()
extern "C"  TypedLobby_t3336582029 * PhotonNetwork_get_lobby_m933525236 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Room PhotonNetwork::get_room()
extern "C"  Room_t3759828263 * PhotonNetwork_get_room_m36124698 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connectedAndReady()
extern "C"  bool PhotonNetwork_get_connectedAndReady_m3099072993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// PunTeams/Team TeamExtensions::GetTeam(PhotonPlayer)
extern "C"  uint8_t TeamExtensions_GetTeam_m369910217 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
#define Dictionary_2_Add_m2387223709(__this, p0, p1, method) ((  void (*) (Dictionary_2_t132545152 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C"  void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_magenta()
extern "C"  Color_t2555686324  Color_get_magenta_m208363462 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_size(UnityEngine.Vector2)
extern "C"  void SpriteRenderer_set_size_m3853552092 (SpriteRenderer_t3235626157 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TitleSceneManager/<Start>c__AnonStorey0::.ctor()
extern "C"  void U3CStartU3Ec__AnonStorey0__ctor_m3206654646 (U3CStartU3Ec__AnonStorey0_t3435021521 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<SceneContainer>()
#define Object_FindObjectOfType_TisSceneContainer_t1775811254_m2393505782(__this /* static, unused */, method) ((  SceneContainer_t1775811254 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<SceneContainer>()
#define GameObject_GetComponent_TisSceneContainer_t1775811254_m860327927(__this, method) ((  SceneContainer_t1775811254 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Collections.IEnumerator FadeManager::FadeIn()
extern "C"  RuntimeObject* FadeManager_FadeIn_m3500551312 (FadeManager_t2978290776 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C"  void Selectable_set_interactable_m3105888815 (Selectable_t3250028441 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FadeManager::SetCallBack(System.Action)
extern "C"  void FadeManager_SetCallBack_m1170135310 (FadeManager_t2978290776 * __this, Action_t1264377477 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FadeManager::FadeOut()
extern "C"  RuntimeObject* FadeManager_FadeOut_m2506670024 (FadeManager_t2978290776 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SceneContainer::set_DebugFlg(System.Boolean)
extern "C"  void SceneContainer_set_DebugFlg_m3696152805 (SceneContainer_t1775811254 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TitleSceneManager::StartGame()
extern "C"  void TitleSceneManager_StartGame_m1738189525 (TitleSceneManager_t4033090873 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ToneAudioReader::get_SamplingRate()
extern "C"  int32_t ToneAudioReader_get_SamplingRate_m3084532319 (ToneAudioReader_t486337998 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ToneAudioReader::get_Channels()
extern "C"  int32_t ToneAudioReader_get_Channels_m2132088884 (ToneAudioReader_t486337998 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ServerTimestamp()
extern "C"  int32_t PhotonNetwork_get_ServerTimestamp_m4164654910 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Room_SetCustomProperties_m233552519 (Room_t3759828263 * __this, Hashtable_t1048209202 * ___propertiesToSet0, Hashtable_t1048209202 * ___expectedValues1, bool ___webForward2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::get_ID()
extern "C"  int32_t PhotonPlayer_get_ID_m3529408589 (PhotonPlayer_t3305149557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TypedLobby::.ctor()
extern "C"  void TypedLobby__ctor_m815421660 (TypedLobby_t3336582029 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::.ctor()
#define Dictionary_2__ctor_m2469382965(__this, method) ((  void (*) (Dictionary_2_t230268132 *, const RuntimeMethod*))Dictionary_2__ctor_m4132945285_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingFrontend__ctor_m3606611539 (LoadBalancingFrontend_t4154771402 * __this, uint8_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate ExitGames.Client.Photon.Voice.VoiceClient::get_OnRemoteVoiceInfoAction()
extern "C"  RemoteVoiceInfoDelegate_t3963975941 * VoiceClient_get_OnRemoteVoiceInfoAction_m1848934223 (VoiceClient_t4265131299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoteVoiceInfoDelegate__ctor_m1017217734 (RemoteVoiceInfoDelegate_t3963975941 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_OnRemoteVoiceInfoAction(ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate)
extern "C"  void VoiceClient_set_OnRemoteVoiceInfoAction_m2103075238 (VoiceClient_t4265131299 * __this, RemoteVoiceInfoDelegate_t3963975941 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::set_AutoJoinLobby(System.Boolean)
extern "C"  void LoadBalancingClient_set_AutoJoinLobby_m1491307497 (LoadBalancingClient_t3850494520 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_OnStateChangeAction()
extern "C"  Action_1_t643525275 * LoadBalancingFrontend_get_OnStateChangeAction_m2885812085 (LoadBalancingFrontend_t4154771402 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m3087077418(__this, p0, p1, method) ((  void (*) (Action_1_t643525275 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m3087077418_gshared)(__this, p0, p1, method)
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::set_OnStateChangeAction(System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>)
extern "C"  void LoadBalancingFrontend_set_OnStateChangeAction_m1176494003 (LoadBalancingFrontend_t4154771402 * __this, Action_1_t643525275 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<ExitGames.Client.Photon.OperationResponse>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m3679380596(__this, p0, p1, method) ((  void (*) (Action_1_t596095568 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::add_OnOpResponseAction(System.Action`1<ExitGames.Client.Photon.OperationResponse>)
extern "C"  void LoadBalancingClient_add_OnOpResponseAction_m3326234027 (LoadBalancingClient_t3850494520 * __this, Action_1_t596095568 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.ClientState ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::get_State()
extern "C"  int32_t LoadBalancingClient_get_State_m3496008539 (LoadBalancingClient_t3850494520 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceNetwork::Connect()
extern "C"  bool PhotonVoiceNetwork_Connect_m3076922172 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::Disconnect()
extern "C"  void LoadBalancingClient_Disconnect_m2758039827 (LoadBalancingClient_t3850494520 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`1<ExitGames.Client.Photon.OperationResponse> UnityVoiceFrontend::get_OnOpResponseAction()
extern "C"  Action_1_t596095568 * UnityVoiceFrontend_get_OnOpResponseAction_m3361105898 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<ExitGames.Client.Photon.OperationResponse>::Invoke(!0)
#define Action_1_Invoke_m3844813597(__this, p0, method) ((  void (*) (Action_1_t596095568 *, OperationResponse_t423627973 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::get_SamplingRate()
extern "C"  int32_t VoiceInfo_get_SamplingRate_m968239461 (VoiceInfo_t822772786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceInfo::get_FrameDurationSamples()
extern "C"  int32_t VoiceInfo_get_FrameDurationSamples_m1539934483 (VoiceInfo_t822772786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// PhotonVoiceSettings PhotonVoiceSettings::get_Instance()
extern "C"  PhotonVoiceSettings_t1055773440 * PhotonVoiceSettings_get_Instance_m3115696181 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::OnVoiceLinked(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void PhotonVoiceSpeaker_OnVoiceLinked_m1258226329 (PhotonVoiceSpeaker_t2096685102 * __this, int32_t ___frequency0, int32_t ___channels1, int32_t ___frameSamplesPerChannel2, int32_t ___playDelayMs3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>::.ctor(!0,!1)
#define KeyValuePair_2__ctor_m2678495578(__this, p0, p1, method) ((  void (*) (KeyValuePair_2_t2420681874 *, int32_t, uint8_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2678495578_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3942430338(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t230268132 *, KeyValuePair_2_t2420681874 , PhotonVoiceSpeaker_t2096685102 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1870007341_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1898031008(__this, p0, p1, method) ((  void (*) (Dictionary_2_t230268132 *, KeyValuePair_2_t2420681874 , PhotonVoiceSpeaker_t2096685102 *, const RuntimeMethod*))Dictionary_2_set_Item_m1411480280_gshared)(__this, p0, p1, method)
// System.Void UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0::.ctor()
extern "C"  void U3COnRemoteVoiceInfoU3Ec__AnonStorey0__ctor_m1873335878 (U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.Single[]> ExitGames.Client.Photon.Voice.RemoteVoiceOptions::get_OnDecodedFrameFloatAction()
extern "C"  Action_1_t1617378846 * RemoteVoiceOptions_get_OnDecodedFrameFloatAction_m2864680816 (RemoteVoiceOptions_t865076648 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Single[]>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m4134769895(__this, p0, p1, method) ((  void (*) (Action_1_t1617378846 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void ExitGames.Client.Photon.Voice.RemoteVoiceOptions::set_OnDecodedFrameFloatAction(System.Action`1<System.Single[]>)
extern "C"  void RemoteVoiceOptions_set_OnDecodedFrameFloatAction_m664614929 (RemoteVoiceOptions_t865076648 * __this, Action_1_t1617378846 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action ExitGames.Client.Photon.Voice.RemoteVoiceOptions::get_OnRemoteVoiceRemoveAction()
extern "C"  Action_t1264377477 * RemoteVoiceOptions_get_OnRemoteVoiceRemoveAction_m1818470811 (RemoteVoiceOptions_t865076648 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.RemoteVoiceOptions::set_OnRemoteVoiceRemoveAction(System.Action)
extern "C"  void RemoteVoiceOptions_set_OnRemoteVoiceRemoveAction_m2030137933 (RemoteVoiceOptions_t865076648 * __this, Action_t1264377477 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m384097959(__this, p0, method) ((  bool (*) (Dictionary_2_t230268132 *, KeyValuePair_2_t2420681874 , const RuntimeMethod*))Dictionary_2_ContainsKey_m598072357_gshared)(__this, p0, method)
// !!0[] UnityEngine.Object::FindObjectsOfType<PhotonVoiceSpeaker>()
#define Object_FindObjectsOfType_TisPhotonVoiceSpeaker_t2096685102_m3099739339(__this /* static, unused */, method) ((  PhotonVoiceSpeakerU5BU5D_t1538319195* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// System.Int32 PhotonView::get_viewID()
extern "C"  int32_t PhotonView_get_viewID_m192199062 (PhotonView_t2207721820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Voice.VoiceInfo::get_UserData()
extern "C"  RuntimeObject * VoiceInfo_get_UserData_m2835464164 (VoiceInfo_t822772786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::linkVoice(System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,PhotonVoiceSpeaker)
extern "C"  void UnityVoiceFrontend_linkVoice_m1374844408 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___playerId0, uint8_t ___voiceId1, VoiceInfo_t822772786  ___voiceInfo2, PhotonVoiceSpeaker_t2096685102 * ___speaker3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo> UnityVoiceFrontend::get_OnRemoteVoiceInfoAction()
extern "C"  Action_3_t887068424 * UnityVoiceFrontend_get_OnRemoteVoiceInfoAction_m3486512263 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>::Invoke(!0,!1,!2)
#define Action_3_Invoke_m2195347554(__this, p0, p1, p2, method) ((  void (*) (Action_3_t887068424 *, int32_t, uint8_t, VoiceInfo_t822772786 , const RuntimeMethod*))Action_3_Invoke_m2195347554_gshared)(__this, p0, p1, p2, method)
// ExitGames.Client.Photon.Voice.VoiceClient ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_VoiceClient()
extern "C"  VoiceClient_t4265131299 * LoadBalancingFrontend_get_VoiceClient_m3239701369 (LoadBalancingFrontend_t4154771402 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo> ExitGames.Client.Photon.Voice.VoiceClient::get_RemoteVoiceInfos()
extern "C"  RuntimeObject* VoiceClient_get_RemoteVoiceInfos_m903031786 (VoiceClient_t4265131299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.RemoteVoiceInfo::get_Info()
extern "C"  VoiceInfo_t822772786  RemoteVoiceInfo_get_Info_m1639485344 (RemoteVoiceInfo_t1074502908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.RemoteVoiceInfo::get_PlayerId()
extern "C"  int32_t RemoteVoiceInfo_get_PlayerId_m2572905244 (RemoteVoiceInfo_t1074502908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Voice.RemoteVoiceInfo::get_VoiceId()
extern "C"  uint8_t RemoteVoiceInfo_get_VoiceId_m3498273141 (RemoteVoiceInfo_t1074502908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityVoiceFrontend::unlinkSpeaker(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>)
extern "C"  bool UnityVoiceFrontend_unlinkSpeaker_m1111250791 (UnityVoiceFrontend_t1107817756 * __this, KeyValuePair_2_t2420681874  ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`2<System.Int32,System.Byte> UnityVoiceFrontend::get_OnRemoteVoiceRemoveAction()
extern "C"  Action_2_t2360473393 * UnityVoiceFrontend_get_OnRemoteVoiceRemoveAction_m3664426150 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<System.Int32,System.Byte>::Invoke(!0,!1)
#define Action_2_Invoke_m2909171545(__this, p0, p1, method) ((  void (*) (Action_2_t2360473393 *, int32_t, uint8_t, const RuntimeMethod*))Action_2_Invoke_m2909171545_gshared)(__this, p0, p1, method)
// System.Void PhotonVoiceSpeaker::OnVoiceUnlinked()
extern "C"  void PhotonVoiceSpeaker_OnVoiceUnlinked_m1936388504 (PhotonVoiceSpeaker_t2096685102 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::Remove(!0)
#define Dictionary_2_Remove_m912922756(__this, p0, method) ((  bool (*) (Dictionary_2_t230268132 *, KeyValuePair_2_t2420681874 , const RuntimeMethod*))Dictionary_2_Remove_m3891339411_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::.ctor()
#define List_1__ctor_m3371529868(__this, method) ((  void (*) (List_1_t3892756616 *, const RuntimeMethod*))List_1__ctor_m3371529868_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1404978140(__this, method) ((  Enumerator_t2184450907  (*) (Dictionary_2_t230268132 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m709900672_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::get_Current()
#define Enumerator_get_Current_m2310140764(__this, method) ((  KeyValuePair_2_t2627940299  (*) (Enumerator_t2184450907 *, const RuntimeMethod*))Enumerator_get_Current_m2565135577_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::get_Value()
#define KeyValuePair_2_get_Value_m706906700(__this, method) ((  PhotonVoiceSpeaker_t2096685102 * (*) (KeyValuePair_2_t2627940299 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2082315985_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::get_Key()
#define KeyValuePair_2_get_Key_m956911013(__this, method) ((  KeyValuePair_2_t2420681874  (*) (KeyValuePair_2_t2627940299 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1954770095_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::Add(!0)
#define List_1_Add_m1636746552(__this, p0, method) ((  void (*) (List_1_t3892756616 *, KeyValuePair_2_t2420681874 , const RuntimeMethod*))List_1_Add_m1636746552_gshared)(__this, p0, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>::get_Key()
#define KeyValuePair_2_get_Key_m131355927(__this, method) ((  int32_t (*) (KeyValuePair_2_t2420681874 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m131355927_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>::get_Value()
#define KeyValuePair_2_get_Value_m167480798(__this, method) ((  uint8_t (*) (KeyValuePair_2_t2420681874 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m167480798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::MoveNext()
#define Enumerator_MoveNext_m2952471047(__this, method) ((  bool (*) (Enumerator_t2184450907 *, const RuntimeMethod*))Enumerator_MoveNext_m4152354593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>::Dispose()
#define Enumerator_Dispose_m18579390(__this, method) ((  void (*) (Enumerator_t2184450907 *, const RuntimeMethod*))Enumerator_Dispose_m2801361812_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m4040184051(__this, method) ((  Enumerator_t1487033197  (*) (List_1_t3892756616 *, const RuntimeMethod*))List_1_GetEnumerator_m4040184051_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::get_Current()
#define Enumerator_get_Current_m2200437993(__this, method) ((  KeyValuePair_2_t2420681874  (*) (Enumerator_t1487033197 *, const RuntimeMethod*))Enumerator_get_Current_m2200437993_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::MoveNext()
#define Enumerator_MoveNext_m1157500647(__this, method) ((  bool (*) (Enumerator_t1487033197 *, const RuntimeMethod*))Enumerator_MoveNext_m1157500647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>>::Dispose()
#define Enumerator_Dispose_m3718840993(__this, method) ((  void (*) (Enumerator_t1487033197 *, const RuntimeMethod*))Enumerator_Dispose_m3718840993_gshared)(__this, method)
// System.Void PhotonVoiceSpeaker::OnAudioFrame(System.Single[])
extern "C"  void PhotonVoiceSpeaker_OnAudioFrame_m413203794 (PhotonVoiceSpeaker_t2096685102 * __this, SingleU5BU5D_t1444911251* ___frame0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`3<System.Int32,System.Byte,System.Single[]> UnityVoiceFrontend::get_OnAudioFrameAction()
extern "C"  Action_3_t1509206889 * UnityVoiceFrontend_get_OnAudioFrameAction_m1419373645 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`3<System.Int32,System.Byte,System.Single[]>::Invoke(!0,!1,!2)
#define Action_3_Invoke_m2784781136(__this, p0, p1, p2, method) ((  void (*) (Action_3_t1509206889 *, int32_t, uint8_t, SingleU5BU5D_t1444911251*, const RuntimeMethod*))Action_3_Invoke_m2003192640_gshared)(__this, p0, p1, p2, method)
// System.String Room::get_Name()
extern "C"  String_t* Room_get_Name_m2728611143 (Room_t3759828263 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.RoomOptions::.ctor()
extern "C"  void RoomOptions__ctor_m757104804 (RoomOptions_t1266811903 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.RoomOptions::set_IsVisible(System.Boolean)
extern "C"  void RoomOptions_set_IsVisible_m1703746886 (RoomOptions_t1266811903 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient::OpJoinOrCreateRoom(System.String,ExitGames.Client.Photon.LoadBalancing.RoomOptions,ExitGames.Client.Photon.LoadBalancing.TypedLobby,System.String[])
extern "C"  bool LoadBalancingClient_OpJoinOrCreateRoom_m3690065006 (LoadBalancingClient_t3850494520 * __this, String_t* p0, RoomOptions_t1266811903 * p1, TypedLobby_t1646745069 * p2, StringU5BU5D_t1281789340* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> UnityVoiceFrontend::get_OnStateChangeAction()
extern "C"  Action_1_t643525275 * UnityVoiceFrontend_get_OnStateChangeAction_m2666632057 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>::Invoke(!0)
#define Action_1_Invoke_m4214502263(__this, p0, method) ((  void (*) (Action_1_t643525275 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m4214502263_gshared)(__this, p0, method)
// System.Void UnityVoiceFrontend::OnAudioFrame(System.Int32,System.Byte,System.Single[])
extern "C"  void UnityVoiceFrontend_OnAudioFrame_m945535391 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___playerId0, uint8_t ___voiceId1, SingleU5BU5D_t1444911251* ___frame2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::OnRemoteVoiceRemove(System.Int32,System.Byte)
extern "C"  void UnityVoiceFrontend_OnRemoteVoiceRemove_m2834088081 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___playerId0, uint8_t ___voiceId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ViewDrag::LeftMouseDrag()
extern "C"  void ViewDrag_LeftMouseDrag_m2433549445 (ViewDrag_t2793483242 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1372101825(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t1405253484 *, uint8_t, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1372101825_gshared)(__this, p0, p1, method)
// System.Void WebRpcResponse::set_Name(System.String)
extern "C"  void WebRpcResponse_set_Name_m2676495348 (WebRpcResponse_t4177102182 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
extern "C"  void WebRpcResponse_set_ReturnCode_m3992245468 (WebRpcResponse_t4177102182 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void WebRpcResponse_set_Parameters_m3975464742 (WebRpcResponse_t4177102182 * __this, Dictionary_2_t2865362463 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_DebugMessage(System.String)
extern "C"  void WebRpcResponse_set_DebugMessage_m3578678403 (WebRpcResponse_t4177102182 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_Name()
extern "C"  String_t* WebRpcResponse_get_Name_m1648311298 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
extern "C"  Dictionary_2_t2865362463 * WebRpcResponse_get_Parameters_m77974431 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C"  String_t* SupportClass_DictionaryToString_m1908829707 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebRpcResponse::get_ReturnCode()
extern "C"  int32_t WebRpcResponse_get_ReturnCode_m3292208677 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_DebugMessage()
extern "C"  String_t* WebRpcResponse_get_DebugMessage_m4109436483 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo__ctor_m3808470266 (RoomInfo_t3170295620 * __this, String_t* ___roomName0, Hashtable_t1048209202 * ___properties1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo__ctor_m3808470266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t1048209202 * L_0 = (Hashtable_t1048209202 *)il2cpp_codegen_object_new(Hashtable_t1048209202_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3127574091(L_0, /*hidden argument*/NULL);
		__this->set_customPropertiesField_1(L_0);
		__this->set_openField_6((bool)1);
		__this->set_visibleField_7((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		bool L_1 = PhotonNetwork_get_autoCleanUpPlayerObjects_m1413703245(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_autoCleanUpField_8(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Hashtable_t1048209202 * L_2 = ___properties1;
		RoomInfo_InternalCacheProperties_m4242051927(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___roomName0;
		__this->set_nameField_9(L_3);
		return;
	}
}
// System.Boolean RoomInfo::get_removedFromList()
extern "C"  bool RoomInfo_get_removedFromList_m2223007701 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CremovedFromListU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C"  void RoomInfo_set_removedFromList_m2440681477 (RoomInfo_t3170295620 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CremovedFromListU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean RoomInfo::get_serverSideMasterClient()
extern "C"  bool RoomInfo_get_serverSideMasterClient_m2944711757 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CserverSideMasterClientU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C"  void RoomInfo_set_serverSideMasterClient_m1721621728 (RoomInfo_t3170295620 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CserverSideMasterClientU3Ek__BackingField_11(L_0);
		return;
	}
}
// ExitGames.Client.Photon.Hashtable RoomInfo::get_CustomProperties()
extern "C"  Hashtable_t1048209202 * RoomInfo_get_CustomProperties_m3452865736 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t1048209202 * L_0 = __this->get_customPropertiesField_1();
		return L_0;
	}
}
// System.String RoomInfo::get_Name()
extern "C"  String_t* RoomInfo_get_Name_m1566372812 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_nameField_9();
		return L_0;
	}
}
// System.Int32 RoomInfo::get_PlayerCount()
extern "C"  int32_t RoomInfo_get_PlayerCount_m1620500445 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void RoomInfo::set_PlayerCount(System.Int32)
extern "C"  void RoomInfo_set_PlayerCount_m2372803739 (RoomInfo_t3170295620 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Boolean RoomInfo::get_IsLocalClientInside()
extern "C"  bool RoomInfo_get_IsLocalClientInside_m3856641640 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsLocalClientInsideU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void RoomInfo::set_IsLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_IsLocalClientInside_m2450376962 (RoomInfo_t3170295620 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsLocalClientInsideU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Byte RoomInfo::get_MaxPlayers()
extern "C"  uint8_t RoomInfo_get_MaxPlayers_m2331570438 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_maxPlayersField_2();
		return L_0;
	}
}
// System.Boolean RoomInfo::get_IsOpen()
extern "C"  bool RoomInfo_get_IsOpen_m1653737527 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_openField_6();
		return L_0;
	}
}
// System.Boolean RoomInfo::get_IsVisible()
extern "C"  bool RoomInfo_get_IsVisible_m4231194594 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_visibleField_7();
		return L_0;
	}
}
// System.Boolean RoomInfo::Equals(System.Object)
extern "C"  bool RoomInfo_Equals_m2802094528 (RoomInfo_t3170295620 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_Equals_m2802094528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RoomInfo_t3170295620 * V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = ((RoomInfo_t3170295620 *)IsInstClass((RuntimeObject*)L_0, RoomInfo_t3170295620_il2cpp_TypeInfo_var));
		RoomInfo_t3170295620 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = RoomInfo_get_Name_m1566372812(__this, /*hidden argument*/NULL);
		RoomInfo_t3170295620 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_nameField_9();
		NullCheck(L_2);
		bool L_5 = String_Equals_m2270643605(L_2, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 RoomInfo::GetHashCode()
extern "C"  int32_t RoomInfo_GetHashCode_m2419502995 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_nameField_9();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String RoomInfo::ToString()
extern "C"  String_t* RoomInfo_ToString_m4191279851 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToString_m4191279851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_1 = __this->get_nameField_9();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		bool L_3 = __this->get_visibleField_7();
		G_B1_0 = 1;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = _stringLiteral2787760357;
		if (!L_3)
		{
			G_B2_0 = 1;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = _stringLiteral2787760357;
			goto IL_002b;
		}
	}
	{
		G_B3_0 = _stringLiteral4078974736;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0030;
	}

IL_002b:
	{
		G_B3_0 = _stringLiteral3149596335;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0030:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_4 = G_B3_3;
		bool L_5 = __this->get_openField_6();
		G_B4_0 = 2;
		G_B4_1 = L_4;
		G_B4_2 = L_4;
		G_B4_3 = G_B3_4;
		if (!L_5)
		{
			G_B5_0 = 2;
			G_B5_1 = L_4;
			G_B5_2 = L_4;
			G_B5_3 = G_B3_4;
			goto IL_0048;
		}
	}
	{
		G_B6_0 = _stringLiteral3905732946;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_004d;
	}

IL_0048:
	{
		G_B6_0 = _stringLiteral3481648711;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_004d:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t2843939325* L_6 = G_B6_3;
		uint8_t L_7 = __this->get_maxPlayersField_2();
		uint8_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		int32_t L_11 = RoomInfo_get_PlayerCount_m1620500445(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Format_m630303134(NULL /*static, unused*/, G_B6_4, L_10, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.String RoomInfo::ToStringFull()
extern "C"  String_t* RoomInfo_ToStringFull_m692967795 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToStringFull_m692967795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		String_t* L_1 = __this->get_nameField_9();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		bool L_3 = __this->get_visibleField_7();
		G_B1_0 = 1;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = _stringLiteral2854379022;
		if (!L_3)
		{
			G_B2_0 = 1;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = _stringLiteral2854379022;
			goto IL_002b;
		}
	}
	{
		G_B3_0 = _stringLiteral4078974736;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0030;
	}

IL_002b:
	{
		G_B3_0 = _stringLiteral3149596335;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0030:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_4 = G_B3_3;
		bool L_5 = __this->get_openField_6();
		G_B4_0 = 2;
		G_B4_1 = L_4;
		G_B4_2 = L_4;
		G_B4_3 = G_B3_4;
		if (!L_5)
		{
			G_B5_0 = 2;
			G_B5_1 = L_4;
			G_B5_2 = L_4;
			G_B5_3 = G_B3_4;
			goto IL_0048;
		}
	}
	{
		G_B6_0 = _stringLiteral3905732946;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_004d;
	}

IL_0048:
	{
		G_B6_0 = _stringLiteral3481648711;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_004d:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t2843939325* L_6 = G_B6_3;
		uint8_t L_7 = __this->get_maxPlayersField_2();
		uint8_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		int32_t L_11 = RoomInfo_get_PlayerCount_m1620500445(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_10;
		Hashtable_t1048209202 * L_15 = __this->get_customPropertiesField_1();
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t2612146612_il2cpp_TypeInfo_var);
		String_t* L_16 = Extensions_ToStringFull_m1484102310(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m630303134(NULL /*static, unused*/, G_B6_4, L_14, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo_InternalCacheProperties_m4242051927 (RoomInfo_t3170295620 * __this, Hashtable_t1048209202 * ___propertiesToCache0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_InternalCacheProperties_m4242051927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Hashtable_t1048209202 * L_0 = ___propertiesToCache0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		Hashtable_t1048209202 * L_1 = ___propertiesToCache0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3919933788(L_1, /*hidden argument*/Dictionary_2_get_Count_m3919933788_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Hashtable_t1048209202 * L_3 = __this->get_customPropertiesField_1();
		Hashtable_t1048209202 * L_4 = ___propertiesToCache0;
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		Hashtable_t1048209202 * L_6 = ___propertiesToCache0;
		uint8_t L_7 = ((uint8_t)((int32_t)251));
		RuntimeObject * L_8 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		bool L_9 = Dictionary_2_ContainsKey_m2278349286(L_6, L_8, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		Hashtable_t1048209202 * L_10 = ___propertiesToCache0;
		uint8_t L_11 = ((uint8_t)((int32_t)251));
		RuntimeObject * L_12 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		RuntimeObject * L_13 = Hashtable_get_Item_m4119173712(L_10, L_12, /*hidden argument*/NULL);
		RoomInfo_set_removedFromList_m2440681477(__this, ((*(bool*)((bool*)UnBox(L_13, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		bool L_14 = RoomInfo_get_removedFromList_m2223007701(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		Hashtable_t1048209202 * L_15 = ___propertiesToCache0;
		uint8_t L_16 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_17 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		bool L_18 = Dictionary_2_ContainsKey_m2278349286(L_15, L_17, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		Hashtable_t1048209202 * L_19 = ___propertiesToCache0;
		uint8_t L_20 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_21 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		RuntimeObject * L_22 = Hashtable_get_Item_m4119173712(L_19, L_21, /*hidden argument*/NULL);
		__this->set_maxPlayersField_2(((*(uint8_t*)((uint8_t*)UnBox(L_22, Byte_t1134296376_il2cpp_TypeInfo_var)))));
	}

IL_008f:
	{
		Hashtable_t1048209202 * L_23 = ___propertiesToCache0;
		uint8_t L_24 = ((uint8_t)((int32_t)253));
		RuntimeObject * L_25 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		bool L_26 = Dictionary_2_ContainsKey_m2278349286(L_23, L_25, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		Hashtable_t1048209202 * L_27 = ___propertiesToCache0;
		uint8_t L_28 = ((uint8_t)((int32_t)253));
		RuntimeObject * L_29 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_27);
		RuntimeObject * L_30 = Hashtable_get_Item_m4119173712(L_27, L_29, /*hidden argument*/NULL);
		__this->set_openField_6(((*(bool*)((bool*)UnBox(L_30, Boolean_t97287965_il2cpp_TypeInfo_var)))));
	}

IL_00bf:
	{
		Hashtable_t1048209202 * L_31 = ___propertiesToCache0;
		uint8_t L_32 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_33 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		bool L_34 = Dictionary_2_ContainsKey_m2278349286(L_31, L_33, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_00ef;
		}
	}
	{
		Hashtable_t1048209202 * L_35 = ___propertiesToCache0;
		uint8_t L_36 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_37 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_35);
		RuntimeObject * L_38 = Hashtable_get_Item_m4119173712(L_35, L_37, /*hidden argument*/NULL);
		__this->set_visibleField_7(((*(bool*)((bool*)UnBox(L_38, Boolean_t97287965_il2cpp_TypeInfo_var)))));
	}

IL_00ef:
	{
		Hashtable_t1048209202 * L_39 = ___propertiesToCache0;
		uint8_t L_40 = ((uint8_t)((int32_t)252));
		RuntimeObject * L_41 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_39);
		bool L_42 = Dictionary_2_ContainsKey_m2278349286(L_39, L_41, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_011f;
		}
	}
	{
		Hashtable_t1048209202 * L_43 = ___propertiesToCache0;
		uint8_t L_44 = ((uint8_t)((int32_t)252));
		RuntimeObject * L_45 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_43);
		RuntimeObject * L_46 = Hashtable_get_Item_m4119173712(L_43, L_45, /*hidden argument*/NULL);
		RoomInfo_set_PlayerCount_m2372803739(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_46, Byte_t1134296376_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_011f:
	{
		Hashtable_t1048209202 * L_47 = ___propertiesToCache0;
		uint8_t L_48 = ((uint8_t)((int32_t)249));
		RuntimeObject * L_49 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_47);
		bool L_50 = Dictionary_2_ContainsKey_m2278349286(L_47, L_49, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_50)
		{
			goto IL_014f;
		}
	}
	{
		Hashtable_t1048209202 * L_51 = ___propertiesToCache0;
		uint8_t L_52 = ((uint8_t)((int32_t)249));
		RuntimeObject * L_53 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_51);
		RuntimeObject * L_54 = Hashtable_get_Item_m4119173712(L_51, L_53, /*hidden argument*/NULL);
		__this->set_autoCleanUpField_8(((*(bool*)((bool*)UnBox(L_54, Boolean_t97287965_il2cpp_TypeInfo_var)))));
	}

IL_014f:
	{
		Hashtable_t1048209202 * L_55 = ___propertiesToCache0;
		uint8_t L_56 = ((uint8_t)((int32_t)248));
		RuntimeObject * L_57 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_56);
		NullCheck(L_55);
		bool L_58 = Dictionary_2_ContainsKey_m2278349286(L_55, L_57, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_58)
		{
			goto IL_01a3;
		}
	}
	{
		RoomInfo_set_serverSideMasterClient_m1721621728(__this, (bool)1, /*hidden argument*/NULL);
		int32_t L_59 = __this->get_masterClientIdField_10();
		V_0 = (bool)((((int32_t)((((int32_t)L_59) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Hashtable_t1048209202 * L_60 = ___propertiesToCache0;
		uint8_t L_61 = ((uint8_t)((int32_t)248));
		RuntimeObject * L_62 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_60);
		RuntimeObject * L_63 = Hashtable_get_Item_m4119173712(L_60, L_62, /*hidden argument*/NULL);
		__this->set_masterClientIdField_10(((*(int32_t*)((int32_t*)UnBox(L_63, Int32_t2950945753_il2cpp_TypeInfo_var)))));
		bool L_64 = V_0;
		if (!L_64)
		{
			goto IL_01a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		NetworkingPeer_t264212356 * L_65 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_65);
		NetworkingPeer_UpdateMasterClient_m2520995946(L_65, /*hidden argument*/NULL);
	}

IL_01a3:
	{
		Hashtable_t1048209202 * L_66 = ___propertiesToCache0;
		uint8_t L_67 = ((uint8_t)((int32_t)247));
		RuntimeObject * L_68 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_66);
		bool L_69 = Dictionary_2_ContainsKey_m2278349286(L_66, L_68, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_69)
		{
			goto IL_01d3;
		}
	}
	{
		Hashtable_t1048209202 * L_70 = ___propertiesToCache0;
		uint8_t L_71 = ((uint8_t)((int32_t)247));
		RuntimeObject * L_72 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_70);
		RuntimeObject * L_73 = Hashtable_get_Item_m4119173712(L_70, L_72, /*hidden argument*/NULL);
		__this->set_expectedUsersField_5(((StringU5BU5D_t1281789340*)Castclass((RuntimeObject*)L_73, StringU5BU5D_t1281789340_il2cpp_TypeInfo_var)));
	}

IL_01d3:
	{
		Hashtable_t1048209202 * L_74 = ___propertiesToCache0;
		uint8_t L_75 = ((uint8_t)((int32_t)245));
		RuntimeObject * L_76 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_74);
		bool L_77 = Dictionary_2_ContainsKey_m2278349286(L_74, L_76, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_77)
		{
			goto IL_0203;
		}
	}
	{
		Hashtable_t1048209202 * L_78 = ___propertiesToCache0;
		uint8_t L_79 = ((uint8_t)((int32_t)245));
		RuntimeObject * L_80 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_78);
		RuntimeObject * L_81 = Hashtable_get_Item_m4119173712(L_78, L_80, /*hidden argument*/NULL);
		__this->set_emptyRoomTtlField_3(((*(int32_t*)((int32_t*)UnBox(L_81, Int32_t2950945753_il2cpp_TypeInfo_var)))));
	}

IL_0203:
	{
		Hashtable_t1048209202 * L_82 = ___propertiesToCache0;
		uint8_t L_83 = ((uint8_t)((int32_t)246));
		RuntimeObject * L_84 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_82);
		bool L_85 = Dictionary_2_ContainsKey_m2278349286(L_82, L_84, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (!L_85)
		{
			goto IL_0233;
		}
	}
	{
		Hashtable_t1048209202 * L_86 = ___propertiesToCache0;
		uint8_t L_87 = ((uint8_t)((int32_t)246));
		RuntimeObject * L_88 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_87);
		NullCheck(L_86);
		RuntimeObject * L_89 = Hashtable_get_Item_m4119173712(L_86, L_88, /*hidden argument*/NULL);
		__this->set_playerTtlField_4(((*(int32_t*)((int32_t*)UnBox(L_89, Int32_t2950945753_il2cpp_TypeInfo_var)))));
	}

IL_0233:
	{
		Hashtable_t1048209202 * L_90 = __this->get_customPropertiesField_1();
		Hashtable_t1048209202 * L_91 = ___propertiesToCache0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t2612146612_il2cpp_TypeInfo_var);
		Extensions_MergeStringKeys_m2132684723(NULL /*static, unused*/, L_90, L_91, /*hidden argument*/NULL);
		Hashtable_t1048209202 * L_92 = __this->get_customPropertiesField_1();
		Extensions_StripKeysWithNullValues_m2665059190(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
extern "C"  Hashtable_t1048209202 * RoomInfo_get_customProperties_m3007015976 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t1048209202 * L_0 = RoomInfo_get_CustomProperties_m3452865736(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String RoomInfo::get_name()
extern "C"  String_t* RoomInfo_get_name_m1566371820 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = RoomInfo_get_Name_m1566372812(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 RoomInfo::get_playerCount()
extern "C"  int32_t RoomInfo_get_playerCount_m4017605564 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = RoomInfo_get_PlayerCount_m1620500445(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void RoomInfo::set_playerCount(System.Int32)
extern "C"  void RoomInfo_set_playerCount_m1636966368 (RoomInfo_t3170295620 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		RoomInfo_set_PlayerCount_m2372803739(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RoomInfo::get_isLocalClientInside()
extern "C"  bool RoomInfo_get_isLocalClientInside_m1740434396 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = RoomInfo_get_IsLocalClientInside_m3856641640(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_isLocalClientInside_m1482686654 (RoomInfo_t3170295620 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		RoomInfo_set_IsLocalClientInside_m2450376962(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte RoomInfo::get_maxPlayers()
extern "C"  uint8_t RoomInfo_get_maxPlayers_m160065894 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = RoomInfo_get_MaxPlayers_m2331570438(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean RoomInfo::get_open()
extern "C"  bool RoomInfo_get_open_m1431253649 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = RoomInfo_get_IsOpen_m1653737527(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean RoomInfo::get_visible()
extern "C"  bool RoomInfo_get_visible_m3284070714 (RoomInfo_t3170295620 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = RoomInfo_get_IsVisible_m4231194594(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RoomOptions::.ctor()
extern "C"  void RoomOptions__ctor_m3263086371 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomOptions__ctor_m3263086371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isVisibleField_0((bool)1);
		__this->set_isOpenField_1((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_autoCleanUpPlayerObjects_m1413703245(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cleanupCacheOnLeaveField_5(L_0);
		__this->set_CustomRoomPropertiesForLobby_7(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)0)));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RoomOptions::get_IsVisible()
extern "C"  bool RoomOptions_get_IsVisible_m2339012639 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isVisibleField_0();
		return L_0;
	}
}
// System.Void RoomOptions::set_IsVisible(System.Boolean)
extern "C"  void RoomOptions_set_IsVisible_m4267195445 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isVisibleField_0(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_IsOpen()
extern "C"  bool RoomOptions_get_IsOpen_m577801275 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isOpenField_1();
		return L_0;
	}
}
// System.Void RoomOptions::set_IsOpen(System.Boolean)
extern "C"  void RoomOptions_set_IsOpen_m502747827 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isOpenField_1(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_CleanupCacheOnLeave()
extern "C"  bool RoomOptions_get_CleanupCacheOnLeave_m3710249550 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_cleanupCacheOnLeaveField_5();
		return L_0;
	}
}
// System.Void RoomOptions::set_CleanupCacheOnLeave(System.Boolean)
extern "C"  void RoomOptions_set_CleanupCacheOnLeave_m2168754380 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_cleanupCacheOnLeaveField_5(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_SuppressRoomEvents()
extern "C"  bool RoomOptions_get_SuppressRoomEvents_m2321419168 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_suppressRoomEventsField_9();
		return L_0;
	}
}
// System.Boolean RoomOptions::get_PublishUserId()
extern "C"  bool RoomOptions_get_PublishUserId_m3268433179 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_publishUserIdField_10();
		return L_0;
	}
}
// System.Void RoomOptions::set_PublishUserId(System.Boolean)
extern "C"  void RoomOptions_set_PublishUserId_m232859217 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_publishUserIdField_10(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_DeleteNullProperties()
extern "C"  bool RoomOptions_get_DeleteNullProperties_m981551833 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_deleteNullPropertiesField_11();
		return L_0;
	}
}
// System.Void RoomOptions::set_DeleteNullProperties(System.Boolean)
extern "C"  void RoomOptions_set_DeleteNullProperties_m3169514634 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_deleteNullPropertiesField_11(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_isVisible()
extern "C"  bool RoomOptions_get_isVisible_m2339053887 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isVisibleField_0();
		return L_0;
	}
}
// System.Void RoomOptions::set_isVisible(System.Boolean)
extern "C"  void RoomOptions_set_isVisible_m2671500818 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isVisibleField_0(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_isOpen()
extern "C"  bool RoomOptions_get_isOpen_m577802523 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isOpenField_1();
		return L_0;
	}
}
// System.Void RoomOptions::set_isOpen(System.Boolean)
extern "C"  void RoomOptions_set_isOpen_m437720211 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isOpenField_1(L_0);
		return;
	}
}
// System.Byte RoomOptions::get_maxPlayers()
extern "C"  uint8_t RoomOptions_get_maxPlayers_m1608725487 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_MaxPlayers_2();
		return L_0;
	}
}
// System.Void RoomOptions::set_maxPlayers(System.Byte)
extern "C"  void RoomOptions_set_maxPlayers_m218542419 (RoomOptions_t1787645948 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_MaxPlayers_2(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_cleanupCacheOnLeave()
extern "C"  bool RoomOptions_get_cleanupCacheOnLeave_m325971437 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_cleanupCacheOnLeaveField_5();
		return L_0;
	}
}
// System.Void RoomOptions::set_cleanupCacheOnLeave(System.Boolean)
extern "C"  void RoomOptions_set_cleanupCacheOnLeave_m3715004307 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_cleanupCacheOnLeaveField_5(L_0);
		return;
	}
}
// ExitGames.Client.Photon.Hashtable RoomOptions::get_customRoomProperties()
extern "C"  Hashtable_t1048209202 * RoomOptions_get_customRoomProperties_m2226537698 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t1048209202 * L_0 = __this->get_CustomRoomProperties_6();
		return L_0;
	}
}
// System.Void RoomOptions::set_customRoomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomOptions_set_customRoomProperties_m2513438851 (RoomOptions_t1787645948 * __this, Hashtable_t1048209202 * ___value0, const RuntimeMethod* method)
{
	{
		Hashtable_t1048209202 * L_0 = ___value0;
		__this->set_CustomRoomProperties_6(L_0);
		return;
	}
}
// System.String[] RoomOptions::get_customRoomPropertiesForLobby()
extern "C"  StringU5BU5D_t1281789340* RoomOptions_get_customRoomPropertiesForLobby_m1527615327 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_CustomRoomPropertiesForLobby_7();
		return L_0;
	}
}
// System.Void RoomOptions::set_customRoomPropertiesForLobby(System.String[])
extern "C"  void RoomOptions_set_customRoomPropertiesForLobby_m46213191 (RoomOptions_t1787645948 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___value0;
		__this->set_CustomRoomPropertiesForLobby_7(L_0);
		return;
	}
}
// System.String[] RoomOptions::get_plugins()
extern "C"  StringU5BU5D_t1281789340* RoomOptions_get_plugins_m145319849 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_Plugins_8();
		return L_0;
	}
}
// System.Void RoomOptions::set_plugins(System.String[])
extern "C"  void RoomOptions_set_plugins_m3655335167 (RoomOptions_t1787645948 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___value0;
		__this->set_Plugins_8(L_0);
		return;
	}
}
// System.Boolean RoomOptions::get_suppressRoomEvents()
extern "C"  bool RoomOptions_get_suppressRoomEvents_m2287862720 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_suppressRoomEventsField_9();
		return L_0;
	}
}
// System.Boolean RoomOptions::get_publishUserId()
extern "C"  bool RoomOptions_get_publishUserId_m3265312763 (RoomOptions_t1787645948 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_publishUserIdField_10();
		return L_0;
	}
}
// System.Void RoomOptions::set_publishUserId(System.Boolean)
extern "C"  void RoomOptions_set_publishUserId_m3899297739 (RoomOptions_t1787645948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_publishUserIdField_10(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneContainer::.ctor()
extern "C"  void SceneContainer__ctor_m1378273975 (SceneContainer_t1775811254 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SceneContainer::get_DebugFlg()
extern "C"  bool SceneContainer_get_DebugFlg_m1527929307 (SceneContainer_t1775811254 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__debugFlg_2();
		return L_0;
	}
}
// System.Void SceneContainer::set_DebugFlg(System.Boolean)
extern "C"  void SceneContainer_set_DebugFlg_m3696152805 (SceneContainer_t1775811254 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__debugFlg_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneManagerHelper::.ctor()
extern "C"  void SceneManagerHelper__ctor_m776891481 (SceneManagerHelper_t3665721098 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String SceneManagerHelper::get_ActiveSceneName()
extern "C"  String_t* SceneManagerHelper_get_ActiveSceneName_m1633867580 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 SceneManagerHelper::get_ActiveSceneBuildIndex()
extern "C"  int32_t SceneManagerHelper_get_ActiveSceneBuildIndex_m4039024987 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m270272723((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreExtensions::SetScore(PhotonPlayer,System.Int32)
extern "C"  void ScoreExtensions_SetScore_m650688815 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, int32_t ___newScore1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreExtensions_SetScore_m650688815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t1048209202 * V_0 = NULL;
	{
		Hashtable_t1048209202 * L_0 = (Hashtable_t1048209202 *)il2cpp_codegen_object_new(Hashtable_t1048209202_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3127574091(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Hashtable_t1048209202 * L_1 = V_0;
		int32_t L_2 = ___newScore1;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		Hashtable_set_Item_m963063516(L_1, _stringLiteral1512030231, L_4, /*hidden argument*/NULL);
		PhotonPlayer_t3305149557 * L_5 = ___player0;
		Hashtable_t1048209202 * L_6 = V_0;
		NullCheck(L_5);
		PhotonPlayer_SetCustomProperties_m1444427373(L_5, L_6, (Hashtable_t1048209202 *)NULL, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreExtensions::AddScore(PhotonPlayer,System.Int32)
extern "C"  void ScoreExtensions_AddScore_m3409814160 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, int32_t ___scoreToAddToCurrent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreExtensions_AddScore_m3409814160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_t1048209202 * V_1 = NULL;
	{
		PhotonPlayer_t3305149557 * L_0 = ___player0;
		int32_t L_1 = ScoreExtensions_GetScore_m1181906475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___scoreToAddToCurrent1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		Hashtable_t1048209202 * L_4 = (Hashtable_t1048209202 *)il2cpp_codegen_object_new(Hashtable_t1048209202_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3127574091(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		Hashtable_t1048209202 * L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_set_Item_m963063516(L_5, _stringLiteral1512030231, L_8, /*hidden argument*/NULL);
		PhotonPlayer_t3305149557 * L_9 = ___player0;
		Hashtable_t1048209202 * L_10 = V_1;
		NullCheck(L_9);
		PhotonPlayer_SetCustomProperties_m1444427373(L_9, L_10, (Hashtable_t1048209202 *)NULL, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ScoreExtensions::GetScore(PhotonPlayer)
extern "C"  int32_t ScoreExtensions_GetScore_m1181906475 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreExtensions_GetScore_m1181906475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		PhotonPlayer_t3305149557 * L_0 = ___player0;
		NullCheck(L_0);
		Hashtable_t1048209202 * L_1 = PhotonPlayer_get_CustomProperties_m3745757186(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Dictionary_2_TryGetValue_m3280774074(L_1, _stringLiteral1512030231, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3280774074_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		return ((*(int32_t*)((int32_t*)UnBox(L_3, Int32_t2950945753_il2cpp_TypeInfo_var))));
	}

IL_001e:
	{
		return 0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ServerSettings::.ctor()
extern "C"  void ServerSettings__ctor_m1448665227 (ServerSettings_t2755303613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSettings__ctor_m1448665227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_AppID_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_VoiceAppID_3(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_ChatAppID_4(L_2);
		__this->set_EnabledRegions_7((-1));
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_ServerAddress_9(L_3);
		__this->set_ServerPort_10(((int32_t)5055));
		__this->set_VoiceServerPort_11(((int32_t)5055));
		__this->set_NetworkLogging_15(1);
		__this->set_RunInBackground_16((bool)1);
		List_1_t3319525431 * L_4 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_4, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_RpcList_17(L_4);
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ServerSettings::UseCloudBestRegion(System.String)
extern "C"  void ServerSettings_UseCloudBestRegion_m3618407569 (ServerSettings_t2755303613 * __this, String_t* ___cloudAppid0, const RuntimeMethod* method)
{
	{
		__this->set_HostType_5(4);
		String_t* L_0 = ___cloudAppid0;
		__this->set_AppID_2(L_0);
		return;
	}
}
// System.Void ServerSettings::UseCloud(System.String)
extern "C"  void ServerSettings_UseCloud_m3696146211 (ServerSettings_t2755303613 * __this, String_t* ___cloudAppid0, const RuntimeMethod* method)
{
	{
		__this->set_HostType_5(1);
		String_t* L_0 = ___cloudAppid0;
		__this->set_AppID_2(L_0);
		return;
	}
}
// System.Void ServerSettings::UseCloud(System.String,CloudRegionCode)
extern "C"  void ServerSettings_UseCloud_m3034448918 (ServerSettings_t2755303613 * __this, String_t* ___cloudAppid0, int32_t ___code1, const RuntimeMethod* method)
{
	{
		__this->set_HostType_5(1);
		String_t* L_0 = ___cloudAppid0;
		__this->set_AppID_2(L_0);
		int32_t L_1 = ___code1;
		__this->set_PreferredRegion_6(L_1);
		return;
	}
}
// System.Void ServerSettings::UseMyServer(System.String,System.Int32,System.String)
extern "C"  void ServerSettings_UseMyServer_m2379333996 (ServerSettings_t2755303613 * __this, String_t* ___serverAddress0, int32_t ___serverPort1, String_t* ___application2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSettings_UseMyServer_m2379333996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ServerSettings_t2755303613 * G_B2_0 = NULL;
	ServerSettings_t2755303613 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	ServerSettings_t2755303613 * G_B3_1 = NULL;
	{
		__this->set_HostType_5(2);
		String_t* L_0 = ___application2;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___application2;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0014:
	{
		G_B3_0 = _stringLiteral2752530441;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_AppID_2(G_B3_0);
		String_t* L_2 = ___serverAddress0;
		__this->set_ServerAddress_9(L_2);
		int32_t L_3 = ___serverPort1;
		__this->set_ServerPort_10(L_3);
		return;
	}
}
// System.Boolean ServerSettings::IsAppId(System.String)
extern "C"  bool ServerSettings_IsAppId_m2900859773 (RuntimeObject * __this /* static, unused */, String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSettings_IsAppId_m2900859773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___val0;
		Guid_t  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Guid__ctor_m2423264394((&L_1), L_0, /*hidden argument*/NULL);
		goto IL_0014;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.Object)
		V_0 = (bool)0;
		goto IL_0016;
	} // end catch (depth: 1)

IL_0014:
	{
		return (bool)1;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// CloudRegionCode ServerSettings::get_BestRegionCodeInPreferences()
extern "C"  int32_t ServerSettings_get_BestRegionCodeInPreferences_m2341611427 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSettings_get_BestRegionCodeInPreferences_m2341611427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t2139970417_il2cpp_TypeInfo_var);
		int32_t L_0 = PhotonHandler_get_BestRegionCodeInPreferences_m3593100049(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void ServerSettings::ResetBestRegionCodeInPreferences()
extern "C"  void ServerSettings_ResetBestRegionCodeInPreferences_m2677648169 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSettings_ResetBestRegionCodeInPreferences_m2677648169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t2139970417_il2cpp_TypeInfo_var);
		PhotonHandler_set_BestRegionCodeInPreferences_m1477608017(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.String ServerSettings::ToString()
extern "C"  String_t* ServerSettings_ToString_m2874290298 (ServerSettings_t2755303613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSettings_ToString_m2874290298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2328556060);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2328556060);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = __this->get_HostType_5();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(HostingOption_t2949276063_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3452614528);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = __this->get_ServerAddress_9();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShowStatusWhenConnecting::.ctor()
extern "C"  void ShowStatusWhenConnecting__ctor_m3022673622 (ShowStatusWhenConnecting_t1063567576 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShowStatusWhenConnecting::OnGUI()
extern "C"  void ShowStatusWhenConnecting_OnGUI_m2526820743 (ShowStatusWhenConnecting_t1063567576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowStatusWhenConnecting_OnGUI_m2526820743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GUISkin_t1244372282 * L_0 = __this->get_Skin_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GUISkin_t1244372282 * L_2 = __this->get_Skin_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_set_skin_m3073574632(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		V_0 = (400.0f);
		V_1 = (100.0f);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = V_0;
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = V_1;
		float L_7 = V_0;
		float L_8 = V_1;
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_2), ((float)((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_3))), (float)L_4))/(float)(2.0f))), ((float)((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_5))), (float)L_6))/(float)(2.0f))), L_7, L_8, /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_10 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyle_t3956901511 * L_11 = GUISkin_get_box_m1243835431(L_10, /*hidden argument*/NULL);
		GUILayout_BeginArea_m1332121664(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		String_t* L_12 = ShowStatusWhenConnecting_GetConnectingDots_m4281251292(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2745515193, L_12, /*hidden argument*/NULL);
		GUISkin_t1244372282 * L_14 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		GUIStyleU5BU5D_t2383250302* L_15 = GUISkin_get_customStyles_m2118532212(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = 0;
		GUIStyle_t3956901511 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		GUILayout_Label_m1096010274(NULL /*static, unused*/, L_13, L_17, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		int32_t L_18 = PhotonNetwork_get_connectionStateDetailed_m2029000665(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(ClientState_t1348705391_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3928422333, L_20, /*hidden argument*/NULL);
		GUILayout_Label_m1960000298(NULL /*static, unused*/, L_21, ((GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		GUILayout_EndArea_m2046611416(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_22 = PhotonNetwork_get_inRoom_m1604252032(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b9;
		}
	}
	{
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		return;
	}
}
// System.String ShowStatusWhenConnecting::GetConnectingDots()
extern "C"  String_t* ShowStatusWhenConnecting_GetConnectingDots_m4281251292 (ShowStatusWhenConnecting_t1063567576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowStatusWhenConnecting_GetConnectingDots_m4281251292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		float L_1 = Time_get_timeSinceLevelLoad_m2224611026(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, (fmodf(((float)il2cpp_codegen_multiply((float)L_1, (float)(3.0f))), (4.0f))), /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0034;
	}

IL_0024:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, L_3, _stringLiteral3450648448, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SmoothSyncMovement::.ctor()
extern "C"  void SmoothSyncMovement__ctor_m1559543711 (SmoothSyncMovement_t1809568931 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothSyncMovement__ctor_m1559543711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_SmoothingDelay_3((5.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_correctPlayerPos_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_1 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_correctPlayerRot_5(L_1);
		MonoBehaviour__ctor_m1256967409(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SmoothSyncMovement::Awake()
extern "C"  void SmoothSyncMovement_Awake_m593888716 (SmoothSyncMovement_t1809568931 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothSyncMovement_Awake_m593888716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Component_t1923634451 * V_1 = NULL;
	Enumerator_t989985774  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		PhotonView_t2207721820 * L_0 = MonoBehaviour_get_photonView_m1395439011(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t3395709193 * L_1 = L_0->get_ObservedComponents_15();
		NullCheck(L_1);
		Enumerator_t989985774  L_2 = List_1_GetEnumerator_m4128318975(L_1, /*hidden argument*/List_1_GetEnumerator_m4128318975_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0018:
		{
			Component_t1923634451 * L_3 = Enumerator_get_Current_m1782500462((Enumerator_t989985774 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1782500462_RuntimeMethod_var);
			V_1 = L_3;
			Component_t1923634451 * L_4 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_002c:
		{
			V_0 = (bool)1;
			goto IL_003f;
		}

IL_0033:
		{
			bool L_6 = Enumerator_MoveNext_m4232616038((Enumerator_t989985774 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m4232616038_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0018;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4132484595((Enumerator_t989985774 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4132484595_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0052:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral2688095987, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void SmoothSyncMovement::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void SmoothSyncMovement_OnPhotonSerializeView_m1517933553 (SmoothSyncMovement_t1809568931 * __this, PhotonStream_t1003850889 * ___stream0, PhotonMessageInfo_t3855471533  ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothSyncMovement_OnPhotonSerializeView_m1517933553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonStream_t1003850889 * L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m2805645485(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		PhotonStream_t1003850889 * L_2 = ___stream0;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = L_4;
		RuntimeObject * L_6 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		PhotonStream_SendNext_m3094139315(L_2, L_6, /*hidden argument*/NULL);
		PhotonStream_t1003850889 * L_7 = ___stream0;
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_10 = L_9;
		RuntimeObject * L_11 = Box(Quaternion_t2301928331_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		PhotonStream_SendNext_m3094139315(L_7, L_11, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_003c:
	{
		PhotonStream_t1003850889 * L_12 = ___stream0;
		NullCheck(L_12);
		RuntimeObject * L_13 = PhotonStream_ReceiveNext_m3398442404(L_12, /*hidden argument*/NULL);
		__this->set_correctPlayerPos_4(((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_13, Vector3_t3722313464_il2cpp_TypeInfo_var)))));
		PhotonStream_t1003850889 * L_14 = ___stream0;
		NullCheck(L_14);
		RuntimeObject * L_15 = PhotonStream_ReceiveNext_m3398442404(L_14, /*hidden argument*/NULL);
		__this->set_correctPlayerRot_5(((*(Quaternion_t2301928331 *)((Quaternion_t2301928331 *)UnBox(L_15, Quaternion_t2301928331_il2cpp_TypeInfo_var)))));
	}

IL_005e:
	{
		return;
	}
}
// System.Void SmoothSyncMovement::Update()
extern "C"  void SmoothSyncMovement_Update_m340845157 (SmoothSyncMovement_t1809568931 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothSyncMovement_Update_m340845157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotonView_t2207721820 * L_0 = MonoBehaviour_get_photonView_m1395439011(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m4153946987(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_correctPlayerPos_4();
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = __this->get_SmoothingDelay_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t2301928331  L_11 = Transform_get_rotation_m3502953881(L_10, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_12 = __this->get_correctPlayerRot_5();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_SmoothingDelay_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_15 = Quaternion_Lerp_m1238806789(NULL /*static, unused*/, L_11, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_rotation_m3524318132(L_9, L_15, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m1311707663 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PlayOnShot(System.Int32)
extern "C"  void SoundManager_PlayOnShot_m3015943341 (SoundManager_t2102329059 * __this, int32_t ___seID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_PlayOnShot_m3015943341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___seID0;
		List_1_t857997111 * L_1 = __this->get__seList_3();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m67763660(L_1, /*hidden argument*/List_1_get_Count_m67763660_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		AudioSource_t3935305588 * L_3 = __this->get__audioSource_2();
		List_1_t857997111 * L_4 = __this->get__seList_3();
		int32_t L_5 = ___seID0;
		NullCheck(L_4);
		AudioClip_t3680889665 * L_6 = List_1_get_Item_m1011483163(L_4, L_5, /*hidden argument*/List_1_get_Item_m1011483163_RuntimeMethod_var);
		NullCheck(L_3);
		AudioSource_PlayOneShot_m1688286683(L_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpeexDSP::.ctor()
extern "C"  void SpeexDSP__ctor_m809998800 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Windows_2((bool)1);
		__this->set_Mac_3((bool)1);
		__this->set_AEC_4((bool)1);
		__this->set_AECPlaybackDelayMs_5(((int32_t)100));
		__this->set_AECFilterLengthMs_6(((int32_t)200));
		__this->set_Denoise_7((bool)1);
		__this->set_AGC_8((bool)1);
		__this->set_AGCLevel_9((20000.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.Photon.Voice.SpeexProcessor SpeexDSP::get_Processor()
extern "C"  SpeexProcessor_t2344027106 * SpeexDSP_get_Processor_m3272885255 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		SpeexProcessor_t2344027106 * L_0 = __this->get_proc_12();
		return L_0;
	}
}
// System.Boolean SpeexDSP::get_Active()
extern "C"  bool SpeexDSP_get_Active_m1458589121 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CActiveU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void SpeexDSP::set_Active(System.Boolean)
extern "C"  void SpeexDSP_set_Active_m2159931872 (SpeexDSP_t3753572563 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CActiveU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Void SpeexDSP::ResetAEC()
extern "C"  void SpeexDSP_ResetAEC_m1868934865 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		SpeexProcessor_t2344027106 * L_0 = __this->get_proc_12();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SpeexProcessor_t2344027106 * L_1 = __this->get_proc_12();
		NullCheck(L_1);
		SpeexProcessor_ResetAEC_m2654821898(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void SpeexDSP::Awake()
extern "C"  void SpeexDSP_Awake_m2862632649 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0053;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0053;
			}
			case 6:
			{
				goto IL_0053;
			}
			case 7:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0031:
	{
		bool L_2 = __this->get_Windows_2();
		SpeexDSP_set_Active_m2159931872(__this, L_2, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0042:
	{
		bool L_3 = __this->get_Mac_3();
		SpeexDSP_set_Active_m2159931872(__this, L_3, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0053:
	{
		return;
	}
}
// System.Void SpeexDSP::Start()
extern "C"  void SpeexDSP_Start_m4086670972 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SpeexDSP::UpdateProcProps()
extern "C"  void SpeexDSP_UpdateProcProps_m753660225 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeexDSP_UpdateProcProps_m753660225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpeexProcessor_t2344027106 * L_0 = __this->get_proc_12();
		if (!L_0)
		{
			goto IL_00fb;
		}
	}
	{
		bool L_1 = __this->get_prevAEC_14();
		bool L_2 = __this->get_AEC_4();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		bool L_3 = __this->get_AEC_4();
		SpeexDSP_setOutputListener_m2923569688(__this, L_3, /*hidden argument*/NULL);
		bool L_4 = __this->get_AEC_4();
		__this->set_prevAEC_14(L_4);
	}

IL_0034:
	{
		SpeexProcessor_t2344027106 * L_5 = __this->get_proc_12();
		bool L_6 = __this->get_AEC_4();
		NullCheck(L_5);
		SpeexProcessor_set_AEC_m1227070500(L_5, L_6, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_7 = __this->get_proc_12();
		int32_t L_8 = __this->get_AECFilterLengthMs_6();
		NullCheck(L_7);
		SpeexProcessor_set_AECFilterLengthMs_m464088437(L_7, L_8, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_9 = __this->get_proc_12();
		int32_t L_10 = __this->get_AECPlaybackDelayMs_5();
		NullCheck(L_9);
		SpeexProcessor_set_AECPlaybackDelayMs_m1227826016(L_9, L_10, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_11 = __this->get_proc_12();
		bool L_12 = __this->get_Denoise_7();
		NullCheck(L_11);
		SpeexProcessor_set_Denoise_m1848296518(L_11, L_12, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_13 = __this->get_proc_12();
		bool L_14 = __this->get_AGC_8();
		NullCheck(L_13);
		SpeexProcessor_set_AGC_m1421974596(L_13, L_14, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_15 = __this->get_proc_12();
		float L_16 = __this->get_AGCLevel_9();
		NullCheck(L_15);
		SpeexProcessor_set_AGCLevel_m3823364936(L_15, L_16, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_17 = __this->get_proc_12();
		NullCheck(L_17);
		int32_t L_18 = SpeexProcessor_get_AECurrentPlayDelayFrames_m2813651827(L_17, /*hidden argument*/NULL);
		__this->set_AECPlayDelayCurrentFrames_10(L_18);
		SpeexProcessor_t2344027106 * L_19 = __this->get_proc_12();
		NullCheck(L_19);
		bool L_20 = SpeexProcessor_get_AECLatencyDetect_m2704368244(L_19, /*hidden argument*/NULL);
		bool L_21 = __this->get_AECLatencyDetect_11();
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_00fb;
		}
	}
	{
		bool L_22 = __this->get_AECLatencyDetect_11();
		if (!L_22)
		{
			goto IL_00ea;
		}
	}
	{
		__this->set_aecLDState_15(0);
		AudioSource_t3935305588 * L_23 = __this->get_aecLDPing_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ea;
		}
	}
	{
		SpeexDSP_InitAECLatencyDetect_m2917550844(__this, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		SpeexProcessor_t2344027106 * L_25 = __this->get_proc_12();
		bool L_26 = __this->get_AECLatencyDetect_11();
		NullCheck(L_25);
		SpeexProcessor_set_AECLatencyDetect_m98890430(L_25, L_26, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		return;
	}
}
// System.Void SpeexDSP::setOutputListener(System.Boolean)
extern "C"  void SpeexDSP_setOutputListener_m2923569688 (SpeexDSP_t3753572563 * __this, bool ___set0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeexDSP_setOutputListener_m2923569688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t2734094699 * V_0 = NULL;
	AudioOutCapture_t1501502605 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		AudioListener_t2734094699 * L_0 = Object_FindObjectOfType_TisAudioListener_t2734094699_m3731316164(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisAudioListener_t2734094699_m3731316164_RuntimeMethod_var);
		V_0 = L_0;
		AudioListener_t2734094699 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		AudioListener_t2734094699 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioOutCapture_t1501502605 * L_5 = GameObject_GetComponent_TisAudioOutCapture_t1501502605_m1700239397(L_4, /*hidden argument*/GameObject_GetComponent_TisAudioOutCapture_t1501502605_m1700239397_RuntimeMethod_var);
		V_1 = L_5;
		AudioOutCapture_t1501502605 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		AudioOutCapture_t1501502605 * L_8 = V_1;
		SpeexProcessor_t2344027106 * L_9 = __this->get_proc_12();
		intptr_t L_10 = (intptr_t)SpeexProcessor_OnAudioOutFrame_m512143840_RuntimeMethod_var;
		Action_2_t2703621360 * L_11 = (Action_2_t2703621360 *)il2cpp_codegen_object_new(Action_2_t2703621360_il2cpp_TypeInfo_var);
		Action_2__ctor_m2577363568(L_11, L_9, L_10, /*hidden argument*/Action_2__ctor_m2577363568_RuntimeMethod_var);
		NullCheck(L_8);
		AudioOutCapture_remove_OnAudioFrame_m1172497523(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0041:
	{
		bool L_12 = ___set0;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		AudioOutCapture_t1501502605 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		AudioListener_t2734094699 * L_15 = V_0;
		NullCheck(L_15);
		GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		AudioOutCapture_t1501502605 * L_17 = GameObject_AddComponent_TisAudioOutCapture_t1501502605_m2448204606(L_16, /*hidden argument*/GameObject_AddComponent_TisAudioOutCapture_t1501502605_m2448204606_RuntimeMethod_var);
		V_1 = L_17;
	}

IL_005f:
	{
		AudioOutCapture_t1501502605 * L_18 = V_1;
		SpeexProcessor_t2344027106 * L_19 = __this->get_proc_12();
		intptr_t L_20 = (intptr_t)SpeexProcessor_OnAudioOutFrame_m512143840_RuntimeMethod_var;
		Action_2_t2703621360 * L_21 = (Action_2_t2703621360 *)il2cpp_codegen_object_new(Action_2_t2703621360_il2cpp_TypeInfo_var);
		Action_2__ctor_m2577363568(L_21, L_19, L_20, /*hidden argument*/Action_2__ctor_m2577363568_RuntimeMethod_var);
		NullCheck(L_18);
		AudioOutCapture_add_OnAudioFrame_m466380877(L_18, L_21, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
// System.Void SpeexDSP::Update()
extern "C"  void SpeexDSP_Update_m2159197422 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		SpeexDSP_UpdateProcProps_m753660225(__this, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_0 = __this->get_proc_12();
		if (!L_0)
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_1%(int32_t)((int32_t)10))))
		{
			goto IL_0029;
		}
	}
	{
		SpeexProcessor_t2344027106 * L_2 = __this->get_proc_12();
		NullCheck(L_2);
		SpeexProcessor_PrintInfo_m3747453554(L_2, /*hidden argument*/NULL);
	}

IL_0029:
	{
		bool L_3 = __this->get_AECLatencyDetect_11();
		if (!L_3)
		{
			goto IL_00cc;
		}
	}
	{
		float L_4 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_aecLDState_15();
		if (L_5)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_aecLDState_15(1);
		float L_6 = V_0;
		__this->set_aecLDStart_16(L_6);
	}

IL_0053:
	{
		float L_7 = V_0;
		float L_8 = __this->get_aecLDStart_16();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
		int32_t L_9 = __this->get_aecLDState_15();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0085;
		}
	}
	{
		float L_10 = V_1;
		if ((!(((float)L_10) > ((float)(1.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		__this->set_aecLDState_15(2);
		SpeexProcessor_t2344027106 * L_11 = __this->get_proc_12();
		NullCheck(L_11);
		SpeexProcessor_AECLatecnyDetectCaliberate_m3805284049(L_11, /*hidden argument*/NULL);
	}

IL_0085:
	{
		int32_t L_12 = __this->get_aecLDState_15();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_00ae;
		}
	}
	{
		float L_13 = V_1;
		if ((!(((float)L_13) > ((float)(4.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		__this->set_aecLDState_15(3);
		AudioSource_t3935305588 * L_14 = __this->get_aecLDPing_17();
		NullCheck(L_14);
		AudioSource_Play_m48294159(L_14, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		int32_t L_15 = __this->get_aecLDState_15();
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_00cc;
		}
	}
	{
		float L_16 = V_1;
		if ((!(((float)L_16) > ((float)(5.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_aecLDState_15(0);
	}

IL_00cc:
	{
		return;
	}
}
// System.Void SpeexDSP::InitAECLatencyDetect()
extern "C"  void SpeexDSP_InitAECLatencyDetect_m2917550844 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeexDSP_InitAECLatencyDetect_m2917550844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU5D_t1444911251* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		V_0 = ((int32_t)200);
		int32_t L_0 = AudioSettings_get_outputSampleRate_m2086685549(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		AudioSource_t3935305588 * L_2 = GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(L_1, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var);
		__this->set_aecLDPing_17(L_2);
		AudioSource_t3935305588 * L_3 = __this->get_aecLDPing_17();
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		AudioClip_t3680889665 * L_7 = AudioClip_Create_m255819841(NULL /*static, unused*/, _stringLiteral2973547888, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5))/(int32_t)((int32_t)1000))), 2, L_6, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		AudioSource_set_clip_m31653938(L_3, L_7, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_8 = __this->get_aecLDPing_17();
		NullCheck(L_8);
		AudioSource_set_loop_m3659884460(L_8, (bool)0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_9 = __this->get_aecLDPing_17();
		NullCheck(L_9);
		AudioClip_t3680889665 * L_10 = AudioSource_get_clip_m1234340632(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = AudioClip_get_frequency_m3907759635(L_10, /*hidden argument*/NULL);
		V_2 = ((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2))));
		V_3 = 0;
		goto IL_008d;
	}

IL_0069:
	{
		SingleU5BU5D_t1444911251* L_12 = V_2;
		int32_t L_13 = V_3;
		SingleU5BU5D_t1444911251* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_3;
		double L_17 = sin((((double)((double)((float)((float)(((float)((float)L_16)))/(float)(4.0f)))))));
		float L_18 = (((float)((float)L_17)));
		V_4 = L_18;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_15)), (int32_t)1))), (float)L_18);
		float L_19 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_13))), (float)L_19);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_21 = V_3;
		AudioSource_t3935305588 * L_22 = __this->get_aecLDPing_17();
		NullCheck(L_22);
		AudioClip_t3680889665 * L_23 = AudioSource_get_clip_m1234340632(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = AudioClip_get_frequency_m3907759635(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_24)))
		{
			goto IL_0069;
		}
	}
	{
		AudioSource_t3935305588 * L_25 = __this->get_aecLDPing_17();
		NullCheck(L_25);
		AudioClip_t3680889665 * L_26 = AudioSource_get_clip_m1234340632(L_25, /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_27 = V_2;
		NullCheck(L_26);
		AudioClip_SetData_m313920037(L_26, L_27, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP::PhotonVoiceCreated(PhotonVoiceRecorder/PhotonVoiceCreatedParams)
extern "C"  void SpeexDSP_PhotonVoiceCreated_m213608323 (SpeexDSP_t3753572563 * __this, PhotonVoiceCreatedParams_t2541618965 * ___p0, const RuntimeMethod* method)
{
	{
		PhotonVoiceCreatedParams_t2541618965 * L_0 = ___p0;
		NullCheck(L_0);
		LocalVoice_t3918029076 * L_1 = PhotonVoiceCreatedParams_get_Voice_m1686405169(L_0, /*hidden argument*/NULL);
		SpeexDSP_PhotonVoiceCreated_m898506513(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP::PhotonVoiceCreated(ExitGames.Client.Photon.Voice.LocalVoice)
extern "C"  void SpeexDSP_PhotonVoiceCreated_m898506513 (SpeexDSP_t3753572563 * __this, LocalVoice_t3918029076 * ___localVoice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeexDSP_PhotonVoiceCreated_m898506513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoiceInfo_t822772786  V_0;
	memset(&V_0, 0, sizeof(V_0));
	LocalVoiceAudioShort_t1883701567 * V_1 = NULL;
	int32_t V_2 = 0;
	Dictionary_2_t1750165665 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	VoiceInfo_t822772786  V_6;
	memset(&V_6, 0, sizeof(V_6));
	VoiceInfo_t822772786  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Logger_t1407211853 * G_B8_0 = NULL;
	SpeexDSP_t3753572563 * G_B8_1 = NULL;
	Logger_t1407211853 * G_B7_0 = NULL;
	SpeexDSP_t3753572563 * G_B7_1 = NULL;
	{
		bool L_0 = SpeexDSP_get_Active_m1458589121(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		LocalVoice_t3918029076 * L_1 = ___localVoice0;
		NullCheck(L_1);
		VoiceInfo_t822772786  L_2 = LocalVoice_get_Info_m1774175973(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = VoiceInfo_get_Channels_m1717280597((VoiceInfo_t822772786 *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_4, _stringLiteral2261787205, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, SpeexDSP_PhotonVoiceCreated_m898506513_RuntimeMethod_var);
	}

IL_002b:
	{
		LocalVoice_t3918029076 * L_5 = ___localVoice0;
		if (((LocalVoiceAudioShort_t1883701567 *)IsInstClass((RuntimeObject*)L_5, LocalVoiceAudioShort_t1883701567_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_6, _stringLiteral722502618, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SpeexDSP_PhotonVoiceCreated_m898506513_RuntimeMethod_var);
	}

IL_0041:
	{
		LocalVoice_t3918029076 * L_7 = ___localVoice0;
		V_1 = ((LocalVoiceAudioShort_t1883701567 *)CastclassClass((RuntimeObject*)L_7, LocalVoiceAudioShort_t1883701567_il2cpp_TypeInfo_var));
		Dictionary_2_t1750165665 * L_8 = (Dictionary_2_t1750165665 *)il2cpp_codegen_object_new(Dictionary_2_t1750165665_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1407212350(L_8, /*hidden argument*/Dictionary_2__ctor_m1407212350_RuntimeMethod_var);
		V_3 = L_8;
		Dictionary_2_t1750165665 * L_9 = V_3;
		NullCheck(L_9);
		Dictionary_2_Add_m3134054041(L_9, 0, 0, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_10 = V_3;
		NullCheck(L_10);
		Dictionary_2_Add_m3134054041(L_10, 1, 1, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_11 = V_3;
		NullCheck(L_11);
		Dictionary_2_Add_m3134054041(L_11, 2, 2, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_12 = V_3;
		NullCheck(L_12);
		Dictionary_2_Add_m3134054041(L_12, 3, 4, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_13 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_m3134054041(L_13, 4, 5, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_14 = V_3;
		NullCheck(L_14);
		Dictionary_2_Add_m3134054041(L_14, 5, 6, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_15 = V_3;
		NullCheck(L_15);
		Dictionary_2_Add_m3134054041(L_15, 6, 8, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_16 = V_3;
		NullCheck(L_16);
		Dictionary_2_Add_m3134054041(L_16, 7, 0, /*hidden argument*/Dictionary_2_Add_m3134054041_RuntimeMethod_var);
		Dictionary_2_t1750165665 * L_17 = V_3;
		int32_t L_18 = AudioSettings_get_speakerMode_m4187617941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_19 = Dictionary_2_get_Item_m2522243033(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_m2522243033_RuntimeMethod_var);
		V_2 = L_19;
		AudioSettings_GetDSPBufferSize_m2546071247(NULL /*static, unused*/, (int32_t*)(&V_4), (int32_t*)(&V_5), /*hidden argument*/NULL);
		Logger_t1407211853 * L_20 = (Logger_t1407211853 *)il2cpp_codegen_object_new(Logger_t1407211853_il2cpp_TypeInfo_var);
		Logger__ctor_m197743063(L_20, /*hidden argument*/NULL);
		Func_1_t3166313951 * L_21 = ((SpeexDSP_t3753572563_StaticFields*)il2cpp_codegen_static_fields_for(SpeexDSP_t3753572563_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_18();
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_21)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00c1;
		}
	}
	{
		intptr_t L_22 = (intptr_t)SpeexDSP_U3CPhotonVoiceCreatedU3Em__0_m246539666_RuntimeMethod_var;
		Func_1_t3166313951 * L_23 = (Func_1_t3166313951 *)il2cpp_codegen_object_new(Func_1_t3166313951_il2cpp_TypeInfo_var);
		Func_1__ctor_m1164172807(L_23, NULL, L_22, /*hidden argument*/Func_1__ctor_m1164172807_RuntimeMethod_var);
		((SpeexDSP_t3753572563_StaticFields*)il2cpp_codegen_static_fields_for(SpeexDSP_t3753572563_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_18(L_23);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00c1:
	{
		Func_1_t3166313951 * L_24 = ((SpeexDSP_t3753572563_StaticFields*)il2cpp_codegen_static_fields_for(SpeexDSP_t3753572563_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_18();
		LocalVoiceAudioShort_t1883701567 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = LocalVoiceFramed_get_FrameSize_m656139937(L_25, /*hidden argument*/NULL);
		LocalVoice_t3918029076 * L_27 = ___localVoice0;
		NullCheck(L_27);
		VoiceInfo_t822772786  L_28 = LocalVoice_get_Info_m1774175973(L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		int32_t L_29 = VoiceInfo_get_SourceSamplingRate_m1583374093((VoiceInfo_t822772786 *)(&V_6), /*hidden argument*/NULL);
		LocalVoice_t3918029076 * L_30 = ___localVoice0;
		NullCheck(L_30);
		VoiceInfo_t822772786  L_31 = LocalVoice_get_Info_m1774175973(L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		int32_t L_32 = VoiceInfo_get_Channels_m1717280597((VoiceInfo_t822772786 *)(&V_7), /*hidden argument*/NULL);
		int32_t L_33 = AudioSettings_get_outputSampleRate_m2086685549(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_34 = V_2;
		int32_t L_35 = V_4;
		SpeexProcessor_t2344027106 * L_36 = (SpeexProcessor_t2344027106 *)il2cpp_codegen_object_new(SpeexProcessor_t2344027106_il2cpp_TypeInfo_var);
		SpeexProcessor__ctor_m1558839154(L_36, G_B8_0, L_24, L_26, L_29, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(G_B8_1);
		G_B8_1->set_proc_12(L_36);
		LocalVoiceAudioShort_t1883701567 * L_37 = V_1;
		IProcessorU5BU5D_t2310300181* L_38 = ((IProcessorU5BU5D_t2310300181*)SZArrayNew(IProcessorU5BU5D_t2310300181_il2cpp_TypeInfo_var, (uint32_t)1));
		SpeexProcessor_t2344027106 * L_39 = __this->get_proc_12();
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
		NullCheck(L_37);
		LocalVoiceFramed_1_AddPreProcessor_m652934459(L_37, L_38, /*hidden argument*/LocalVoiceFramed_1_AddPreProcessor_m652934459_RuntimeMethod_var);
		SpeexDSP_UpdateProcProps_m753660225(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1719727583, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP::PhotonVoiceRemoved()
extern "C"  void SpeexDSP_PhotonVoiceRemoved_m3000920490 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		SpeexDSP_reset_m2118299877(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP::OnDestroy()
extern "C"  void SpeexDSP_OnDestroy_m28092280 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		SpeexDSP_reset_m2118299877(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP::reset()
extern "C"  void SpeexDSP_reset_m2118299877 (SpeexDSP_t3753572563 * __this, const RuntimeMethod* method)
{
	{
		SpeexProcessor_t2344027106 * L_0 = __this->get_proc_12();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		SpeexDSP_setOutputListener_m2923569688(__this, (bool)0, /*hidden argument*/NULL);
		SpeexProcessor_t2344027106 * L_1 = __this->get_proc_12();
		NullCheck(L_1);
		SpeexProcessor_Dispose_m1669248969(L_1, /*hidden argument*/NULL);
		__this->set_proc_12((SpeexProcessor_t2344027106 *)NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Int64 SpeexDSP::<PhotonVoiceCreated>m__0()
extern "C"  int64_t SpeexDSP_U3CPhotonVoiceCreatedU3Em__0_m246539666 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		double L_0 = AudioSettings_get_dspTime_m2110776959(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (((int64_t)((int64_t)((double)il2cpp_codegen_multiply((double)L_0, (double)(1000.0))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpeexDSP/Logger::.ctor()
extern "C"  void Logger__ctor_m197743063 (Logger_t1407211853 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP/Logger::LogError(System.String,System.Object[])
extern "C"  void Logger_LogError_m1006299873 (Logger_t1407211853 * __this, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_LogError_m1006299873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m575266265(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP/Logger::LogWarning(System.String,System.Object[])
extern "C"  void Logger_LogWarning_m807044983 (Logger_t1407211853 * __this, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_LogWarning_m807044983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP/Logger::LogInfo(System.String,System.Object[])
extern "C"  void Logger_LogInfo_m3918638185 (Logger_t1407211853 * __this, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_LogInfo_m3918638185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeexDSP/Logger::LogDebug(System.String,System.Object[])
extern "C"  void Logger_LogDebug_m2205660324 (Logger_t1407211853 * __this, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_LogDebug_m2205660324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SupportLogger::.ctor()
extern "C"  void SupportLogger__ctor_m3857759642 (SupportLogger_t2840230211 * __this, const RuntimeMethod* method)
{
	{
		__this->set_LogTrafficStats_2((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogger::Start()
extern "C"  void SupportLogger_Start_m4228716924 (SupportLogger_t2840230211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_Start_m4228716924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	SupportLogging_t3610999087 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2668676434, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_t1113636619 * L_3 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_3, _stringLiteral2668676434, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		SupportLogging_t3610999087 * L_6 = GameObject_AddComponent_TisSupportLogging_t3610999087_m3906415171(L_5, /*hidden argument*/GameObject_AddComponent_TisSupportLogging_t3610999087_m3906415171_RuntimeMethod_var);
		V_1 = L_6;
		SupportLogging_t3610999087 * L_7 = V_1;
		bool L_8 = __this->get_LogTrafficStats_2();
		NullCheck(L_7);
		L_7->set_LogTrafficStats_2(L_8);
	}

IL_003b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SupportLogging::.ctor()
extern "C"  void SupportLogging__ctor_m1513032022 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::Start()
extern "C"  void SupportLogging_Start_m615266166 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_Start_m615266166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_LogTrafficStats_2();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral2903119551, (10.0f), (10.0f), /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void SupportLogging::OnApplicationPause(System.Boolean)
extern "C"  void SupportLogging_OnApplicationPause_m1998044826 (SupportLogging_t3610999087 * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnApplicationPause_m1998044826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1193874114);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1193874114);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		bool L_2 = ___pause0;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2500080693);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2500080693);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		bool L_7 = PhotonNetwork_get_connected_m1765367833(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnApplicationQuit()
extern "C"  void SupportLogging_OnApplicationQuit_m3753711955 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour_CancelInvoke_m4090783926(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::LogStats()
extern "C"  void SupportLogging_LogStats_m357709987 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_LogStats_m357709987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_LogTrafficStats_2();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		String_t* L_1 = PhotonNetwork_NetworkStatisticsToString_m397446506(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1837502969, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void SupportLogging::LogBasics()
extern "C"  void SupportLogging_LogBasics_m2059416039 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_LogBasics_m2059416039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_AppendFormat_m3016532472(L_1, _stringLiteral1340198547, _stringLiteral1623009004, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		NetworkingPeer_t264212356 * L_3 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_AppId_42();
		NullCheck(L_4);
		String_t* L_5 = String_Substring_m1610150815(L_4, 0, 8, /*hidden argument*/NULL);
		NetworkingPeer_t264212356 * L_6 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_6);
		String_t* L_7 = NetworkingPeer_get_AppVersion_m600122273(L_6, /*hidden argument*/NULL);
		NetworkingPeer_t264212356 * L_8 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_8);
		String_t* L_9 = PhotonPeer_get_PeerID_m3871481171(L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_AppendFormat_m2403596038(L_2, _stringLiteral227414809, L_5, L_7, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		String_t* L_11 = PhotonNetwork_get_ServerAddress_m16117006(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetworkingPeer_t264212356 * L_12 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_12);
		int32_t L_13 = NetworkingPeer_get_CloudRegion_m608168615(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(CloudRegionCode_t1925019500_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_10);
		StringBuilder_AppendFormat_m3255666490(L_10, _stringLiteral2918654047, L_11, L_15, /*hidden argument*/NULL);
		StringBuilder_t * L_16 = V_0;
		ServerSettings_t2755303613 * L_17 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_PhotonServerSettings_6();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_HostType_5();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(HostingOption_t2949276063_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		StringBuilder_AppendFormat_m3016532472(L_16, _stringLiteral2154486352, L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnConnectedToPhoton()
extern "C"  void SupportLogging_OnConnectedToPhoton_m4286413539 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnConnectedToPhoton_m4286413539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3428758596, /*hidden argument*/NULL);
		SupportLogging_LogBasics_m2059416039(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_LogTrafficStats_2();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		PhotonNetwork_set_NetworkStatisticsEnabled_m3937783244(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SupportLogging::OnFailedToConnectToPhoton(DisconnectCause)
extern "C"  void SupportLogging_OnFailedToConnectToPhoton_m1253602912 (SupportLogging_t3610999087 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnFailedToConnectToPhoton_m1253602912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___cause0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(DisconnectCause_t501870387_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3086498198, L_2, _stringLiteral3450648455, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		SupportLogging_LogBasics_m2059416039(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnJoinedLobby()
extern "C"  void SupportLogging_OnJoinedLobby_m1882645112 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnJoinedLobby_m1882645112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		TypedLobby_t3336582029 * L_0 = PhotonNetwork_get_lobby_m933525236(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral1475082161, L_0, _stringLiteral3450648455, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnJoinedRoom()
extern "C"  void SupportLogging_OnJoinedRoom_m1699194386 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnJoinedRoom_m1699194386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2085003243);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2085003243);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		Room_t3759828263 * L_2 = PhotonNetwork_get_room_m36124698(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3786186961);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3786186961);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		TypedLobby_t3336582029 * L_5 = PhotonNetwork_get_lobby_m933525236(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1476776628);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1476776628);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = PhotonNetwork_get_ServerAddress_m16117006(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2971454694(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnCreatedRoom()
extern "C"  void SupportLogging_OnCreatedRoom_m909910432 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnCreatedRoom_m909910432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1688728708);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1688728708);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		Room_t3759828263 * L_2 = PhotonNetwork_get_room_m36124698(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3786186961);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3786186961);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		TypedLobby_t3336582029 * L_5 = PhotonNetwork_get_lobby_m933525236(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1476776628);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1476776628);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = PhotonNetwork_get_ServerAddress_m16117006(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2971454694(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnLeftRoom()
extern "C"  void SupportLogging_OnLeftRoom_m1053673117 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnLeftRoom_m1053673117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4292058329, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnDisconnectedFromPhoton()
extern "C"  void SupportLogging_OnDisconnectedFromPhoton_m3427121297 (SupportLogging_t3610999087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogging_OnDisconnectedFromPhoton_m3427121297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral176793290, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// PunTeams/Team TeamExtensions::GetTeam(PhotonPlayer)
extern "C"  uint8_t TeamExtensions_GetTeam_m369910217 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeamExtensions_GetTeam_m369910217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		PhotonPlayer_t3305149557 * L_0 = ___player0;
		NullCheck(L_0);
		Hashtable_t1048209202 * L_1 = PhotonPlayer_get_CustomProperties_m3745757186(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Dictionary_2_TryGetValue_m3280774074(L_1, _stringLiteral3917410033, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3280774074_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		return ((*(uint8_t*)((uint8_t*)UnBox(L_3, Team_t2865224648_il2cpp_TypeInfo_var))));
	}

IL_001e:
	{
		return (uint8_t)(0);
	}
}
// System.Void TeamExtensions::SetTeam(PhotonPlayer,PunTeams/Team)
extern "C"  void TeamExtensions_SetTeam_m2985934832 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, uint8_t ___team1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeamExtensions_SetTeam_m2985934832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	Hashtable_t1048209202 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_connectedAndReady_m3099072993(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		int32_t L_1 = PhotonNetwork_get_connectionStateDetailed_m2029000665(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(ClientState_t1348705391_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2950688325, L_3, _stringLiteral2277785952, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		PhotonPlayer_t3305149557 * L_5 = ___player0;
		uint8_t L_6 = TeamExtensions_GetTeam_m369910217(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		uint8_t L_7 = V_0;
		uint8_t L_8 = ___team1;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		PhotonPlayer_t3305149557 * L_9 = ___player0;
		Hashtable_t1048209202 * L_10 = (Hashtable_t1048209202 *)il2cpp_codegen_object_new(Hashtable_t1048209202_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3127574091(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		Hashtable_t1048209202 * L_11 = V_1;
		uint8_t L_12 = ___team1;
		uint8_t L_13 = ((uint8_t)L_12);
		RuntimeObject * L_14 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		Dictionary_2_Add_m2387223709(L_11, _stringLiteral3917410033, L_14, /*hidden argument*/Dictionary_2_Add_m2387223709_RuntimeMethod_var);
		Hashtable_t1048209202 * L_15 = V_1;
		NullCheck(L_9);
		PhotonPlayer_SetCustomProperties_m1444427373(L_9, L_15, (Hashtable_t1048209202 *)NULL, (bool)0, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Territory::.ctor()
extern "C"  void Territory__ctor_m2392122713 (Territory_t680836402 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Territory::Init(System.Int32,System.Int32)
extern "C"  void Territory_Init_m566608978 (Territory_t680836402 * __this, int32_t ___playerType0, int32_t ___parentPlayerType1, const RuntimeMethod* method)
{
	Territory_t680836402 * G_B5_0 = NULL;
	Territory_t680836402 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Territory_t680836402 * G_B6_1 = NULL;
	Territory_t680836402 * G_B9_0 = NULL;
	Territory_t680836402 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Territory_t680836402 * G_B10_1 = NULL;
	{
		int32_t L_0 = ___playerType0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___playerType0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0065;
	}

IL_0013:
	{
		SpriteRenderer_t3235626157 * L_2 = __this->get__sprite_2();
		Color_t2555686324  L_3 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		SpriteRenderer_set_color_m3056777566(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___playerType0;
		int32_t L_5 = ___parentPlayerType1;
		G_B4_0 = __this;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			G_B5_0 = __this;
			goto IL_0031;
		}
	}
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B4_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0032:
	{
		NullCheck(G_B6_1);
		G_B6_1->set__direction_4(G_B6_0);
		goto IL_0065;
	}

IL_003c:
	{
		SpriteRenderer_t3235626157 * L_6 = __this->get__sprite_2();
		Color_t2555686324  L_7 = Color_get_magenta_m208363462(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		SpriteRenderer_set_color_m3056777566(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___playerType0;
		int32_t L_9 = ___parentPlayerType1;
		G_B8_0 = __this;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			G_B9_0 = __this;
			goto IL_005a;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_005b:
	{
		NullCheck(G_B10_1);
		G_B10_1->set__direction_4(G_B10_0);
		goto IL_0065;
	}

IL_0065:
	{
		int32_t L_10 = ___playerType0;
		__this->set__playerType_3(L_10);
		return;
	}
}
// System.Void Territory::SetSize(System.Int32)
extern "C"  void Territory_SetSize_m3106613257 (Territory_t680836402 * __this, int32_t ___line0, const RuntimeMethod* method)
{
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get__sprite_2();
		int32_t L_1 = ___line0;
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), (5.12f), ((float)il2cpp_codegen_multiply((float)(0.64f), (float)(((float)((float)L_1))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		SpriteRenderer_set_size_m3853552092(L_0, L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___line0;
		int32_t L_5 = __this->get__direction_4();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)8, (int32_t)L_4))))), (float)(0.32f))), (float)(((float)((float)L_5))))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_m4128471975(L_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TerritotyLine::.ctor()
extern "C"  void TerritotyLine__ctor_m1750665247 (TerritotyLine_t3071297039 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TerritotyLine::SetPos(System.Int32)
extern "C"  void TerritotyLine_SetPos_m3022484125 (TerritotyLine_t3071297039 * __this, int32_t ___lineNum0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___lineNum0;
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (0.0f), ((float)il2cpp_codegen_add((float)(-2.56f), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)(0.64f))))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m4128471975(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TitleSceneManager::.ctor()
extern "C"  void TitleSceneManager__ctor_m3288592238 (TitleSceneManager_t4033090873 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TitleSceneManager::Start()
extern "C"  void TitleSceneManager_Start_m201537892 (TitleSceneManager_t4033090873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TitleSceneManager_Start_m201537892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__AnonStorey0_t3435021521 * V_0 = NULL;
	{
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_0 = (U3CStartU3Ec__AnonStorey0_t3435021521 *)il2cpp_codegen_object_new(U3CStartU3Ec__AnonStorey0_t3435021521_il2cpp_TypeInfo_var);
		U3CStartU3Ec__AnonStorey0__ctor_m3206654646(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		SceneContainer_t1775811254 * L_3 = Object_FindObjectOfType_TisSceneContainer_t1775811254_m2393505782(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisSceneContainer_t1775811254_m2393505782_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_sceneContainer_0(L_3);
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_4 = V_0;
		NullCheck(L_4);
		SceneContainer_t1775811254 * L_5 = L_4->get_sceneContainer_0();
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_7 = V_0;
		GameObject_t1113636619 * L_8 = __this->get__sceneContainer_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_9 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		NullCheck(L_9);
		SceneContainer_t1775811254 * L_10 = GameObject_GetComponent_TisSceneContainer_t1775811254_m860327927(L_9, /*hidden argument*/GameObject_GetComponent_TisSceneContainer_t1775811254_m860327927_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_sceneContainer_0(L_10);
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_11 = V_0;
		NullCheck(L_11);
		SceneContainer_t1775811254 * L_12 = L_11->get_sceneContainer_0();
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_004a:
	{
		FadeManager_t2978290776 * L_13 = __this->get__fadeManager_5();
		NullCheck(L_13);
		RuntimeObject* L_14 = FadeManager_FadeIn_m3500551312(L_13, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_14, /*hidden argument*/NULL);
		Button_t4055032469 * L_15 = __this->get__startButton_3();
		NullCheck(L_15);
		ButtonClickedEvent_t48803504 * L_16 = Button_get_onClick_m2332132945(L_15, /*hidden argument*/NULL);
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_17 = V_0;
		intptr_t L_18 = (intptr_t)U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m4065313163_RuntimeMethod_var;
		UnityAction_t3245792599 * L_19 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_19, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m2276267359(L_16, L_19, /*hidden argument*/NULL);
		Button_t4055032469 * L_20 = __this->get__startButtonDebug_4();
		NullCheck(L_20);
		ButtonClickedEvent_t48803504 * L_21 = Button_get_onClick_m2332132945(L_20, /*hidden argument*/NULL);
		U3CStartU3Ec__AnonStorey0_t3435021521 * L_22 = V_0;
		intptr_t L_23 = (intptr_t)U3CStartU3Ec__AnonStorey0_U3CU3Em__1_m2499229222_RuntimeMethod_var;
		UnityAction_t3245792599 * L_24 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_24, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		UnityEvent_AddListener_m2276267359(L_21, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TitleSceneManager::StartGame()
extern "C"  void TitleSceneManager_StartGame_m1738189525 (TitleSceneManager_t4033090873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TitleSceneManager_StartGame_m1738189525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FadeManager_t2978290776 * G_B2_0 = NULL;
	FadeManager_t2978290776 * G_B1_0 = NULL;
	{
		Button_t4055032469 * L_0 = __this->get__startButton_3();
		NullCheck(L_0);
		Selectable_set_interactable_m3105888815(L_0, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_1 = __this->get__startButtonDebug_4();
		NullCheck(L_1);
		Selectable_set_interactable_m3105888815(L_1, (bool)0, /*hidden argument*/NULL);
		FadeManager_t2978290776 * L_2 = __this->get__fadeManager_5();
		Action_t1264377477 * L_3 = ((TitleSceneManager_t4033090873_StaticFields*)il2cpp_codegen_static_fields_for(TitleSceneManager_t4033090873_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0036;
		}
	}
	{
		intptr_t L_4 = (intptr_t)TitleSceneManager_U3CStartGameU3Em__0_m111598282_RuntimeMethod_var;
		Action_t1264377477 * L_5 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_5, NULL, L_4, /*hidden argument*/NULL);
		((TitleSceneManager_t4033090873_StaticFields*)il2cpp_codegen_static_fields_for(TitleSceneManager_t4033090873_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_6(L_5);
		G_B2_0 = G_B1_0;
	}

IL_0036:
	{
		Action_t1264377477 * L_6 = ((TitleSceneManager_t4033090873_StaticFields*)il2cpp_codegen_static_fields_for(TitleSceneManager_t4033090873_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		NullCheck(G_B2_0);
		FadeManager_SetCallBack_m1170135310(G_B2_0, L_6, /*hidden argument*/NULL);
		FadeManager_t2978290776 * L_7 = __this->get__fadeManager_5();
		NullCheck(L_7);
		RuntimeObject* L_8 = FadeManager_FadeOut_m2506670024(L_7, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TitleSceneManager::<StartGame>m__0()
extern "C"  void TitleSceneManager_U3CStartGameU3Em__0_m111598282 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TitleSceneManager_U3CStartGameU3Em__0_m111598282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1222789680, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TitleSceneManager/<Start>c__AnonStorey0::.ctor()
extern "C"  void U3CStartU3Ec__AnonStorey0__ctor_m3206654646 (U3CStartU3Ec__AnonStorey0_t3435021521 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TitleSceneManager/<Start>c__AnonStorey0::<>m__0()
extern "C"  void U3CStartU3Ec__AnonStorey0_U3CU3Em__0_m4065313163 (U3CStartU3Ec__AnonStorey0_t3435021521 * __this, const RuntimeMethod* method)
{
	{
		SceneContainer_t1775811254 * L_0 = __this->get_sceneContainer_0();
		NullCheck(L_0);
		SceneContainer_set_DebugFlg_m3696152805(L_0, (bool)0, /*hidden argument*/NULL);
		TitleSceneManager_t4033090873 * L_1 = __this->get_U24this_1();
		NullCheck(L_1);
		TitleSceneManager_StartGame_m1738189525(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TitleSceneManager/<Start>c__AnonStorey0::<>m__1()
extern "C"  void U3CStartU3Ec__AnonStorey0_U3CU3Em__1_m2499229222 (U3CStartU3Ec__AnonStorey0_t3435021521 * __this, const RuntimeMethod* method)
{
	{
		SceneContainer_t1775811254 * L_0 = __this->get_sceneContainer_0();
		NullCheck(L_0);
		SceneContainer_set_DebugFlg_m3696152805(L_0, (bool)1, /*hidden argument*/NULL);
		TitleSceneManager_t4033090873 * L_1 = __this->get_U24this_1();
		NullCheck(L_1);
		TitleSceneManager_StartGame_m1738189525(L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToneAudioReader::.ctor()
extern "C"  void ToneAudioReader__ctor_m3517999316 (ToneAudioReader_t486337998 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ToneAudioReader_get_SamplingRate_m3084532319(__this, /*hidden argument*/NULL);
		__this->set_k_0(((double)((double)(2764.6015351590181)/(double)(((double)((double)L_0))))));
		return;
	}
}
// System.Int32 ToneAudioReader::get_Channels()
extern "C"  int32_t ToneAudioReader_get_Channels_m2132088884 (ToneAudioReader_t486337998 * __this, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// System.Int32 ToneAudioReader::get_SamplingRate()
extern "C"  int32_t ToneAudioReader_get_SamplingRate_m3084532319 (ToneAudioReader_t486337998 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)24000);
	}
}
// System.Void ToneAudioReader::Dispose()
extern "C"  void ToneAudioReader_Dispose_m1850811795 (ToneAudioReader_t486337998 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ToneAudioReader::Read(System.Single[])
extern "C"  bool ToneAudioReader_Read_m2966630126 (ToneAudioReader_t486337998 * __this, SingleU5BU5D_t1444911251* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToneAudioReader_Read_m2966630126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	{
		SingleU5BU5D_t1444911251* L_0 = ___buf0;
		NullCheck(L_0);
		int32_t L_1 = ToneAudioReader_get_Channels_m2132088884(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))/(int32_t)L_1));
		double L_2 = AudioSettings_get_dspTime_m2110776959(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = ToneAudioReader_get_SamplingRate_m3084532319(__this, /*hidden argument*/NULL);
		V_1 = (((int64_t)((int64_t)((double)il2cpp_codegen_multiply((double)L_2, (double)(((double)((double)L_3))))))));
		int64_t L_4 = V_1;
		int64_t L_5 = __this->get_timeSamples_1();
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)L_5));
		int64_t L_6 = V_2;
		int64_t L_7 = il2cpp_codegen_abs(L_6);
		int32_t L_8 = ToneAudioReader_get_SamplingRate_m3084532319(__this, /*hidden argument*/NULL);
		if ((((int64_t)L_7) <= ((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_8/(int32_t)4))))))))
		{
			goto IL_006b;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_9 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		int64_t L_10 = __this->get_timeSamples_1();
		int64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		int64_t L_14 = V_1;
		int64_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral3911351878, L_13, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		V_2 = (((int64_t)((int64_t)L_17)));
		int64_t L_18 = V_1;
		int32_t L_19 = V_0;
		__this->set_timeSamples_1(((int64_t)il2cpp_codegen_subtract((int64_t)L_18, (int64_t)(((int64_t)((int64_t)L_19))))));
	}

IL_006b:
	{
		int64_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int64_t)L_20) >= ((int64_t)(((int64_t)((int64_t)L_21))))))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0075:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_00d3;
	}

IL_007f:
	{
		int64_t L_22 = __this->get_timeSamples_1();
		int64_t L_23 = L_22;
		V_6 = L_23;
		__this->set_timeSamples_1(((int64_t)il2cpp_codegen_add((int64_t)L_23, (int64_t)(((int64_t)((int64_t)1))))));
		int64_t L_24 = V_6;
		double L_25 = __this->get_k_0();
		double L_26 = sin(((double)il2cpp_codegen_multiply((double)(((double)((double)L_24))), (double)L_25)));
		V_5 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_26))), (float)(0.2f)));
		V_7 = 0;
		goto IL_00c0;
	}

IL_00b1:
	{
		SingleU5BU5D_t1444911251* L_27 = ___buf0;
		int32_t L_28 = V_3;
		int32_t L_29 = L_28;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		float L_30 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (float)L_30);
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00c0:
	{
		int32_t L_32 = V_7;
		int32_t L_33 = ToneAudioReader_get_Channels_m2132088884(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00d3:
	{
		int32_t L_35 = V_4;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_007f;
		}
	}
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TurnExtensions::SetTurn(Room,System.Int32,System.Boolean)
extern "C"  void TurnExtensions_SetTurn_m2738922425 (RuntimeObject * __this /* static, unused */, Room_t3759828263 * ___room0, int32_t ___turn1, bool ___setStartTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnExtensions_SetTurn_m2738922425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t1048209202 * V_0 = NULL;
	{
		Room_t3759828263 * L_0 = ___room0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Room_t3759828263 * L_1 = ___room0;
		NullCheck(L_1);
		Hashtable_t1048209202 * L_2 = RoomInfo_get_CustomProperties_m3452865736(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Hashtable_t1048209202 * L_3 = (Hashtable_t1048209202 *)il2cpp_codegen_object_new(Hashtable_t1048209202_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3127574091(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t1048209202 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_TurnPropKey_0();
		int32_t L_6 = ___turn1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		Hashtable_set_Item_m963063516(L_4, L_5, L_8, /*hidden argument*/NULL);
		bool L_9 = ___setStartTime2;
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		Hashtable_t1048209202 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_11 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_TurnStartPropKey_1();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		int32_t L_12 = PhotonNetwork_get_ServerTimestamp_m4164654910(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		Hashtable_set_Item_m963063516(L_10, L_11, L_14, /*hidden argument*/NULL);
	}

IL_0044:
	{
		Room_t3759828263 * L_15 = ___room0;
		Hashtable_t1048209202 * L_16 = V_0;
		NullCheck(L_15);
		Room_SetCustomProperties_m233552519(L_15, L_16, (Hashtable_t1048209202 *)NULL, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TurnExtensions::GetTurn(RoomInfo)
extern "C"  int32_t TurnExtensions_GetTurn_m4131414938 (RuntimeObject * __this /* static, unused */, RoomInfo_t3170295620 * ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnExtensions_GetTurn_m4131414938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RoomInfo_t3170295620 * L_0 = ___room0;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		RoomInfo_t3170295620 * L_1 = ___room0;
		NullCheck(L_1);
		Hashtable_t1048209202 * L_2 = RoomInfo_get_CustomProperties_m3452865736(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RoomInfo_t3170295620 * L_3 = ___room0;
		NullCheck(L_3);
		Hashtable_t1048209202 * L_4 = RoomInfo_get_CustomProperties_m3452865736(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_TurnPropKey_0();
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m2278349286(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return 0;
	}

IL_0028:
	{
		RoomInfo_t3170295620 * L_7 = ___room0;
		NullCheck(L_7);
		Hashtable_t1048209202 * L_8 = RoomInfo_get_CustomProperties_m3452865736(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_9 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_TurnPropKey_0();
		NullCheck(L_8);
		RuntimeObject * L_10 = Hashtable_get_Item_m4119173712(L_8, L_9, /*hidden argument*/NULL);
		return ((*(int32_t*)((int32_t*)UnBox(L_10, Int32_t2950945753_il2cpp_TypeInfo_var))));
	}
}
// System.Int32 TurnExtensions::GetTurnStart(RoomInfo)
extern "C"  int32_t TurnExtensions_GetTurnStart_m3702491223 (RuntimeObject * __this /* static, unused */, RoomInfo_t3170295620 * ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnExtensions_GetTurnStart_m3702491223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RoomInfo_t3170295620 * L_0 = ___room0;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		RoomInfo_t3170295620 * L_1 = ___room0;
		NullCheck(L_1);
		Hashtable_t1048209202 * L_2 = RoomInfo_get_CustomProperties_m3452865736(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RoomInfo_t3170295620 * L_3 = ___room0;
		NullCheck(L_3);
		Hashtable_t1048209202 * L_4 = RoomInfo_get_CustomProperties_m3452865736(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_TurnStartPropKey_1();
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m2278349286(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return 0;
	}

IL_0028:
	{
		RoomInfo_t3170295620 * L_7 = ___room0;
		NullCheck(L_7);
		Hashtable_t1048209202 * L_8 = RoomInfo_get_CustomProperties_m3452865736(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_9 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_TurnStartPropKey_1();
		NullCheck(L_8);
		RuntimeObject * L_10 = Hashtable_get_Item_m4119173712(L_8, L_9, /*hidden argument*/NULL);
		return ((*(int32_t*)((int32_t*)UnBox(L_10, Int32_t2950945753_il2cpp_TypeInfo_var))));
	}
}
// System.Int32 TurnExtensions::GetFinishedTurn(PhotonPlayer)
extern "C"  int32_t TurnExtensions_GetFinishedTurn_m96341076 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnExtensions_GetFinishedTurn_m96341076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Room_t3759828263 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		Room_t3759828263 * L_0 = PhotonNetwork_get_room_m36124698(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Room_t3759828263 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Room_t3759828263 * L_2 = V_0;
		NullCheck(L_2);
		Hashtable_t1048209202 * L_3 = RoomInfo_get_CustomProperties_m3452865736(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Room_t3759828263 * L_4 = V_0;
		NullCheck(L_4);
		Hashtable_t1048209202 * L_5 = RoomInfo_get_CustomProperties_m3452865736(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_6 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_TurnPropKey_0();
		NullCheck(L_5);
		bool L_7 = Dictionary_2_ContainsKey_m2278349286(L_5, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_002e;
		}
	}

IL_002c:
	{
		return 0;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_8 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_FinishedTurnPropKey_2();
		PhotonPlayer_t3305149557 * L_9 = ___player0;
		NullCheck(L_9);
		int32_t L_10 = PhotonPlayer_get_ID_m3529408589(L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m904156431(NULL /*static, unused*/, L_8, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		Room_t3759828263 * L_14 = V_0;
		NullCheck(L_14);
		Hashtable_t1048209202 * L_15 = RoomInfo_get_CustomProperties_m3452865736(L_14, /*hidden argument*/NULL);
		String_t* L_16 = V_1;
		NullCheck(L_15);
		RuntimeObject * L_17 = Hashtable_get_Item_m4119173712(L_15, L_16, /*hidden argument*/NULL);
		return ((*(int32_t*)((int32_t*)UnBox(L_17, Int32_t2950945753_il2cpp_TypeInfo_var))));
	}
}
// System.Void TurnExtensions::SetFinishedTurn(PhotonPlayer,System.Int32)
extern "C"  void TurnExtensions_SetFinishedTurn_m862379605 (RuntimeObject * __this /* static, unused */, PhotonPlayer_t3305149557 * ___player0, int32_t ___turn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnExtensions_SetFinishedTurn_m862379605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Room_t3759828263 * V_0 = NULL;
	String_t* V_1 = NULL;
	Hashtable_t1048209202 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		Room_t3759828263 * L_0 = PhotonNetwork_get_room_m36124698(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Room_t3759828263 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Room_t3759828263 * L_2 = V_0;
		NullCheck(L_2);
		Hashtable_t1048209202 * L_3 = RoomInfo_get_CustomProperties_m3452865736(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		return;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TurnExtensions_t3150044944_il2cpp_TypeInfo_var);
		String_t* L_4 = ((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->get_FinishedTurnPropKey_2();
		PhotonPlayer_t3305149557 * L_5 = ___player0;
		NullCheck(L_5);
		int32_t L_6 = PhotonPlayer_get_ID_m3529408589(L_5, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Hashtable_t1048209202 * L_10 = (Hashtable_t1048209202 *)il2cpp_codegen_object_new(Hashtable_t1048209202_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3127574091(L_10, /*hidden argument*/NULL);
		V_2 = L_10;
		Hashtable_t1048209202 * L_11 = V_2;
		String_t* L_12 = V_1;
		int32_t L_13 = ___turn1;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		Hashtable_set_Item_m963063516(L_11, L_12, L_15, /*hidden argument*/NULL);
		Room_t3759828263 * L_16 = V_0;
		Hashtable_t1048209202 * L_17 = V_2;
		NullCheck(L_16);
		Room_SetCustomProperties_m233552519(L_16, L_17, (Hashtable_t1048209202 *)NULL, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TurnExtensions::.cctor()
extern "C"  void TurnExtensions__cctor_m1640371730 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurnExtensions__cctor_m1640371730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->set_TurnPropKey_0(_stringLiteral3596229116);
		((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->set_TurnStartPropKey_1(_stringLiteral950452602);
		((TurnExtensions_t3150044944_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t3150044944_il2cpp_TypeInfo_var))->set_FinishedTurnPropKey_2(_stringLiteral3815572937);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TypedLobby::.ctor()
extern "C"  void TypedLobby__ctor_m815421660 (TypedLobby_t3336582029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby__ctor_m815421660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_Name_0(L_0);
		__this->set_Type_1(0);
		return;
	}
}
// System.Void TypedLobby::.ctor(System.String,LobbyType)
extern "C"  void TypedLobby__ctor_m260949797 (TypedLobby_t3336582029 * __this, String_t* ___name0, uint8_t ___type1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
		uint8_t L_1 = ___type1;
		__this->set_Type_1(L_1);
		return;
	}
}
// System.Boolean TypedLobby::get_IsDefault()
extern "C"  bool TypedLobby_get_IsDefault_m342755869 (TypedLobby_t3336582029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby_get_IsDefault_m342755869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get_Type_1();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = __this->get_Name_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return (bool)G_B3_0;
	}
}
// System.String TypedLobby::ToString()
extern "C"  String_t* TypedLobby_ToString_m2822648706 (TypedLobby_t3336582029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby_ToString_m2822648706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_0();
		uint8_t L_1 = __this->get_Type_1();
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(LobbyType_t3695323860_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral4016121227, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void TypedLobby::.cctor()
extern "C"  void TypedLobby__cctor_m1081382309 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby__cctor_m1081382309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypedLobby_t3336582029 * L_0 = (TypedLobby_t3336582029 *)il2cpp_codegen_object_new(TypedLobby_t3336582029_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m815421660(L_0, /*hidden argument*/NULL);
		((TypedLobby_t3336582029_StaticFields*)il2cpp_codegen_static_fields_for(TypedLobby_t3336582029_il2cpp_TypeInfo_var))->set_Default_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TypedLobbyInfo::.ctor()
extern "C"  void TypedLobbyInfo__ctor_m701921937 (TypedLobbyInfo_t2504508049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo__ctor_m701921937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypedLobby_t3336582029_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m815421660(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String TypedLobbyInfo::ToString()
extern "C"  String_t* TypedLobbyInfo_ToString_m241642779 (TypedLobbyInfo_t2504508049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo_ToString_m241642779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		String_t* L_1 = ((TypedLobby_t3336582029 *)__this)->get_Name_0();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint8_t L_3 = ((TypedLobby_t3336582029 *)__this)->get_Type_1();
		uint8_t L_4 = L_3;
		RuntimeObject * L_5 = Box(LobbyType_t3695323860_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		int32_t L_7 = __this->get_RoomCount_4();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		int32_t L_11 = __this->get_PlayerCount_3();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral4274446839, L_10, /*hidden argument*/NULL);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityVoiceFrontend::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void UnityVoiceFrontend__ctor_m2262757560 (UnityVoiceFrontend_t1107817756 * __this, uint8_t ___connetProtocol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend__ctor_m2262757560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t230268132 * L_0 = (Dictionary_2_t230268132 *)il2cpp_codegen_object_new(Dictionary_2_t230268132_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2469382965(L_0, /*hidden argument*/Dictionary_2__ctor_m2469382965_RuntimeMethod_var);
		__this->set_voiceSpeakers_46(L_0);
		uint8_t L_1 = ___connetProtocol0;
		LoadBalancingFrontend__ctor_m3606611539(__this, L_1, /*hidden argument*/NULL);
		VoiceClient_t4265131299 * L_2 = ((LoadBalancingFrontend_t4154771402 *)__this)->get_voiceClient_41();
		VoiceClient_t4265131299 * L_3 = L_2;
		NullCheck(L_3);
		RemoteVoiceInfoDelegate_t3963975941 * L_4 = VoiceClient_get_OnRemoteVoiceInfoAction_m1848934223(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)UnityVoiceFrontend_OnRemoteVoiceInfo_m2331815543_RuntimeMethod_var;
		RemoteVoiceInfoDelegate_t3963975941 * L_6 = (RemoteVoiceInfoDelegate_t3963975941 *)il2cpp_codegen_object_new(RemoteVoiceInfoDelegate_t3963975941_il2cpp_TypeInfo_var);
		RemoteVoiceInfoDelegate__ctor_m1017217734(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_7 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VoiceClient_set_OnRemoteVoiceInfoAction_m2103075238(L_3, ((RemoteVoiceInfoDelegate_t3963975941 *)CastclassSealed((RuntimeObject*)L_7, RemoteVoiceInfoDelegate_t3963975941_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		LoadBalancingClient_set_AutoJoinLobby_m1491307497(__this, (bool)0, /*hidden argument*/NULL);
		Action_1_t643525275 * L_8 = LoadBalancingFrontend_get_OnStateChangeAction_m2885812085(__this, /*hidden argument*/NULL);
		intptr_t L_9 = (intptr_t)UnityVoiceFrontend_OnStateChange_m2537733427_RuntimeMethod_var;
		Action_1_t643525275 * L_10 = (Action_1_t643525275 *)il2cpp_codegen_object_new(Action_1_t643525275_il2cpp_TypeInfo_var);
		Action_1__ctor_m3087077418(L_10, __this, L_9, /*hidden argument*/Action_1__ctor_m3087077418_RuntimeMethod_var);
		Delegate_t1188392813 * L_11 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		LoadBalancingFrontend_set_OnStateChangeAction_m1176494003(__this, ((Action_1_t643525275 *)CastclassSealed((RuntimeObject*)L_11, Action_1_t643525275_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)UnityVoiceFrontend_OnOpResponse_m455553206_RuntimeMethod_var;
		Action_1_t596095568 * L_13 = (Action_1_t596095568 *)il2cpp_codegen_object_new(Action_1_t596095568_il2cpp_TypeInfo_var);
		Action_1__ctor_m3679380596(L_13, __this, L_12, /*hidden argument*/Action_1__ctor_m3679380596_RuntimeMethod_var);
		LoadBalancingClient_add_OnOpResponseAction_m3326234027(__this, L_13, /*hidden argument*/NULL);
		LoadBalancingPeer_t794198942 * L_14 = ((LoadBalancingClient_t3850494520 *)__this)->get_loadBalancingPeer_0();
		NullCheck(L_14);
		((PhotonPeer_t1608153861 *)L_14)->set_DebugOut_11(3);
		return;
	}
}
// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo> UnityVoiceFrontend::get_OnRemoteVoiceInfoAction()
extern "C"  Action_3_t887068424 * UnityVoiceFrontend_get_OnRemoteVoiceInfoAction_m3486512263 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method)
{
	{
		Action_3_t887068424 * L_0 = __this->get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void UnityVoiceFrontend::set_OnRemoteVoiceInfoAction(System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>)
extern "C"  void UnityVoiceFrontend_set_OnRemoteVoiceInfoAction_m3056274097 (UnityVoiceFrontend_t1107817756 * __this, Action_3_t887068424 * ___value0, const RuntimeMethod* method)
{
	{
		Action_3_t887068424 * L_0 = ___value0;
		__this->set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47(L_0);
		return;
	}
}
// System.Action`2<System.Int32,System.Byte> UnityVoiceFrontend::get_OnRemoteVoiceRemoveAction()
extern "C"  Action_2_t2360473393 * UnityVoiceFrontend_get_OnRemoteVoiceRemoveAction_m3664426150 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method)
{
	{
		Action_2_t2360473393 * L_0 = __this->get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void UnityVoiceFrontend::set_OnRemoteVoiceRemoveAction(System.Action`2<System.Int32,System.Byte>)
extern "C"  void UnityVoiceFrontend_set_OnRemoteVoiceRemoveAction_m1500371562 (UnityVoiceFrontend_t1107817756 * __this, Action_2_t2360473393 * ___value0, const RuntimeMethod* method)
{
	{
		Action_2_t2360473393 * L_0 = ___value0;
		__this->set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48(L_0);
		return;
	}
}
// System.Action`3<System.Int32,System.Byte,System.Single[]> UnityVoiceFrontend::get_OnAudioFrameAction()
extern "C"  Action_3_t1509206889 * UnityVoiceFrontend_get_OnAudioFrameAction_m1419373645 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method)
{
	{
		Action_3_t1509206889 * L_0 = __this->get_U3COnAudioFrameActionU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void UnityVoiceFrontend::set_OnAudioFrameAction(System.Action`3<System.Int32,System.Byte,System.Single[]>)
extern "C"  void UnityVoiceFrontend_set_OnAudioFrameAction_m1757371156 (UnityVoiceFrontend_t1107817756 * __this, Action_3_t1509206889 * ___value0, const RuntimeMethod* method)
{
	{
		Action_3_t1509206889 * L_0 = ___value0;
		__this->set_U3COnAudioFrameActionU3Ek__BackingField_49(L_0);
		return;
	}
}
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> UnityVoiceFrontend::get_OnStateChangeAction()
extern "C"  Action_1_t643525275 * UnityVoiceFrontend_get_OnStateChangeAction_m2666632057 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method)
{
	{
		Action_1_t643525275 * L_0 = __this->get_U3COnStateChangeActionU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void UnityVoiceFrontend::set_OnStateChangeAction(System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>)
extern "C"  void UnityVoiceFrontend_set_OnStateChangeAction_m3575248274 (UnityVoiceFrontend_t1107817756 * __this, Action_1_t643525275 * ___value0, const RuntimeMethod* method)
{
	{
		Action_1_t643525275 * L_0 = ___value0;
		__this->set_U3COnStateChangeActionU3Ek__BackingField_50(L_0);
		return;
	}
}
// System.Action`1<ExitGames.Client.Photon.OperationResponse> UnityVoiceFrontend::get_OnOpResponseAction()
extern "C"  Action_1_t596095568 * UnityVoiceFrontend_get_OnOpResponseAction_m3361105898 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method)
{
	{
		Action_1_t596095568 * L_0 = __this->get_U3COnOpResponseActionU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void UnityVoiceFrontend::set_OnOpResponseAction(System.Action`1<ExitGames.Client.Photon.OperationResponse>)
extern "C"  void UnityVoiceFrontend_set_OnOpResponseAction_m1351343958 (UnityVoiceFrontend_t1107817756 * __this, Action_1_t596095568 * ___value0, const RuntimeMethod* method)
{
	{
		Action_1_t596095568 * L_0 = ___value0;
		__this->set_U3COnOpResponseActionU3Ek__BackingField_51(L_0);
		return;
	}
}
// System.Void UnityVoiceFrontend::Reconnect()
extern "C"  void UnityVoiceFrontend_Reconnect_m1609299506 (UnityVoiceFrontend_t1107817756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_Reconnect_m1609299506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = LoadBalancingClient_get_State_m3496008539(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)13))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = LoadBalancingClient_get_State_m3496008539(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t1485168188_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_Connect_m3076922172(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0023:
	{
		__this->set_reconnect_52((bool)1);
		LoadBalancingClient_Disconnect_m2758039827(__this, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityVoiceFrontend::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void UnityVoiceFrontend_DebugReturn_m3811711366 (UnityVoiceFrontend_t1107817756 * __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_DebugReturn_m3811711366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1490770793, L_0, /*hidden argument*/NULL);
		___message1 = L_1;
		uint8_t L_2 = ___level0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_001f:
	{
		uint8_t L_4 = ___level0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_5 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0031:
	{
		uint8_t L_6 = ___level0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		int32_t L_7 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_logLevel_8();
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_004e:
	{
		uint8_t L_9 = ___level0;
		if ((!(((uint32_t)L_9) == ((uint32_t)5))))
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		int32_t L_10 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_logLevel_8();
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_11 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityVoiceFrontend::OnOpResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void UnityVoiceFrontend_OnOpResponse_m455553206 (UnityVoiceFrontend_t1107817756 * __this, OperationResponse_t423627973 * ___resp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_OnOpResponse_m455553206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t596095568 * L_0 = UnityVoiceFrontend_get_OnOpResponseAction_m3361105898(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t596095568 * L_1 = UnityVoiceFrontend_get_OnOpResponseAction_m3361105898(__this, /*hidden argument*/NULL);
		OperationResponse_t423627973 * L_2 = ___resp0;
		NullCheck(L_1);
		Action_1_Invoke_m3844813597(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3844813597_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityVoiceFrontend::linkVoice(System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,PhotonVoiceSpeaker)
extern "C"  void UnityVoiceFrontend_linkVoice_m1374844408 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___playerId0, uint8_t ___voiceId1, VoiceInfo_t822772786  ___voiceInfo2, PhotonVoiceSpeaker_t2096685102 * ___speaker3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_linkVoice_m1374844408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2420681874  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PhotonVoiceSpeaker_t2096685102 * V_1 = NULL;
	{
		PhotonVoiceSpeaker_t2096685102 * L_0 = ___speaker3;
		int32_t L_1 = VoiceInfo_get_SamplingRate_m968239461((VoiceInfo_t822772786 *)(&___voiceInfo2), /*hidden argument*/NULL);
		int32_t L_2 = VoiceInfo_get_Channels_m1717280597((VoiceInfo_t822772786 *)(&___voiceInfo2), /*hidden argument*/NULL);
		int32_t L_3 = VoiceInfo_get_FrameDurationSamples_m1539934483((VoiceInfo_t822772786 *)(&___voiceInfo2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceSettings_t1055773440_il2cpp_TypeInfo_var);
		PhotonVoiceSettings_t1055773440 * L_4 = PhotonVoiceSettings_get_Instance_m3115696181(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = L_4->get_PlayDelayMs_11();
		NullCheck(L_0);
		PhotonVoiceSpeaker_OnVoiceLinked_m1258226329(L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___playerId0;
		uint8_t L_7 = ___voiceId1;
		KeyValuePair_2__ctor_m2678495578((KeyValuePair_2_t2420681874 *)(&V_0), L_6, L_7, /*hidden argument*/KeyValuePair_2__ctor_m2678495578_RuntimeMethod_var);
		Dictionary_2_t230268132 * L_8 = __this->get_voiceSpeakers_46();
		KeyValuePair_2_t2420681874  L_9 = V_0;
		NullCheck(L_8);
		bool L_10 = Dictionary_2_TryGetValue_m3942430338(L_8, L_9, (PhotonVoiceSpeaker_t2096685102 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3942430338_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		PhotonVoiceSpeaker_t2096685102 * L_11 = V_1;
		PhotonVoiceSpeaker_t2096685102 * L_12 = ___speaker3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		ObjectU5BU5D_t2843939325* L_14 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		int32_t L_15 = ___playerId0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_14;
		uint8_t L_19 = ___voiceId1;
		uint8_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral4108131830, L_18, /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_0077:
	{
		ObjectU5BU5D_t2843939325* L_22 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		int32_t L_23 = ___playerId0;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_25);
		ObjectU5BU5D_t2843939325* L_26 = L_22;
		uint8_t L_27 = ___voiceId1;
		uint8_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral524394959, L_26, /*hidden argument*/NULL);
	}

IL_0099:
	{
		Dictionary_2_t230268132 * L_30 = __this->get_voiceSpeakers_46();
		KeyValuePair_2_t2420681874  L_31 = V_0;
		PhotonVoiceSpeaker_t2096685102 * L_32 = ___speaker3;
		NullCheck(L_30);
		Dictionary_2_set_Item_m1898031008(L_30, L_31, L_32, /*hidden argument*/Dictionary_2_set_Item_m1898031008_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityVoiceFrontend::OnRemoteVoiceInfo(System.Int32,System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,ExitGames.Client.Photon.Voice.RemoteVoiceOptions&)
extern "C"  void UnityVoiceFrontend_OnRemoteVoiceInfo_m2331815543 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_t822772786  ___voiceInfo3, RemoteVoiceOptions_t865076648 * ___options4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_OnRemoteVoiceInfo_m2331815543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * V_0 = NULL;
	KeyValuePair_2_t2420681874  V_1;
	memset(&V_1, 0, sizeof(V_1));
	PhotonVoiceSpeaker_t2096685102 * V_2 = NULL;
	PhotonVoiceSpeakerU5BU5D_t1538319195* V_3 = NULL;
	PhotonVoiceSpeaker_t2096685102 * V_4 = NULL;
	PhotonVoiceSpeakerU5BU5D_t1538319195* V_5 = NULL;
	int32_t V_6 = 0;
	{
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_0 = (U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 *)il2cpp_codegen_object_new(U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485_il2cpp_TypeInfo_var);
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0__ctor_m1873335878(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_1 = V_0;
		int32_t L_2 = ___playerId1;
		NullCheck(L_1);
		L_1->set_playerId_0(L_2);
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_3 = V_0;
		uint8_t L_4 = ___voiceId2;
		NullCheck(L_3);
		L_3->set_voiceId_1(L_4);
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_2(__this);
		RemoteVoiceOptions_t865076648 * L_6 = ___options4;
		RemoteVoiceOptions_t865076648 * L_7 = L_6;
		Action_1_t1617378846 * L_8 = RemoteVoiceOptions_get_OnDecodedFrameFloatAction_m2864680816((RemoteVoiceOptions_t865076648 *)L_7, /*hidden argument*/NULL);
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3COnRemoteVoiceInfoU3Ec__AnonStorey0_U3CU3Em__0_m1722068814_RuntimeMethod_var;
		Action_1_t1617378846 * L_11 = (Action_1_t1617378846 *)il2cpp_codegen_object_new(Action_1_t1617378846_il2cpp_TypeInfo_var);
		Action_1__ctor_m4134769895(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m4134769895_RuntimeMethod_var);
		Delegate_t1188392813 * L_12 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		RemoteVoiceOptions_set_OnDecodedFrameFloatAction_m664614929((RemoteVoiceOptions_t865076648 *)L_7, ((Action_1_t1617378846 *)CastclassSealed((RuntimeObject*)L_12, Action_1_t1617378846_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		RemoteVoiceOptions_t865076648 * L_13 = ___options4;
		RemoteVoiceOptions_t865076648 * L_14 = L_13;
		Action_t1264377477 * L_15 = RemoteVoiceOptions_get_OnRemoteVoiceRemoveAction_m1818470811((RemoteVoiceOptions_t865076648 *)L_14, /*hidden argument*/NULL);
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_16 = V_0;
		intptr_t L_17 = (intptr_t)U3COnRemoteVoiceInfoU3Ec__AnonStorey0_U3CU3Em__1_m1042055423_RuntimeMethod_var;
		Action_t1264377477 * L_18 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_18, L_16, L_17, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_19 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		RemoteVoiceOptions_set_OnRemoteVoiceRemoveAction_m2030137933((RemoteVoiceOptions_t865076648 *)L_14, ((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_19, Action_t1264377477_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_playerId_0();
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_22 = V_0;
		NullCheck(L_22);
		uint8_t L_23 = L_22->get_voiceId_1();
		KeyValuePair_2__ctor_m2678495578((KeyValuePair_2_t2420681874 *)(&V_1), L_21, L_23, /*hidden argument*/KeyValuePair_2__ctor_m2678495578_RuntimeMethod_var);
		Dictionary_2_t230268132 * L_24 = __this->get_voiceSpeakers_46();
		KeyValuePair_2_t2420681874  L_25 = V_1;
		NullCheck(L_24);
		bool L_26 = Dictionary_2_ContainsKey_m384097959(L_24, L_25, /*hidden argument*/Dictionary_2_ContainsKey_m384097959_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_27 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_28 = V_0;
		NullCheck(L_28);
		uint8_t L_29 = L_28->get_voiceId_1();
		uint8_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_27;
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_playerId_0();
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral1906930396, L_32, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		V_2 = (PhotonVoiceSpeaker_t2096685102 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		PhotonVoiceSpeakerU5BU5D_t1538319195* L_37 = Object_FindObjectsOfType_TisPhotonVoiceSpeaker_t2096685102_m3099739339(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisPhotonVoiceSpeaker_t2096685102_m3099739339_RuntimeMethod_var);
		V_3 = L_37;
		PhotonVoiceSpeakerU5BU5D_t1538319195* L_38 = V_3;
		V_5 = L_38;
		V_6 = 0;
		goto IL_00f6;
	}

IL_00c4:
	{
		PhotonVoiceSpeakerU5BU5D_t1538319195* L_39 = V_5;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		PhotonVoiceSpeaker_t2096685102 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_4 = L_42;
		PhotonVoiceSpeaker_t2096685102 * L_43 = V_4;
		NullCheck(L_43);
		PhotonView_t2207721820 * L_44 = MonoBehaviour_get_photonView_m1395439011(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		int32_t L_45 = PhotonView_get_viewID_m192199062(L_44, /*hidden argument*/NULL);
		RuntimeObject * L_46 = VoiceInfo_get_UserData_m2835464164((VoiceInfo_t822772786 *)(&___voiceInfo3), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)((*(int32_t*)((int32_t*)UnBox(L_46, Int32_t2950945753_il2cpp_TypeInfo_var))))))))
		{
			goto IL_00f0;
		}
	}
	{
		PhotonVoiceSpeaker_t2096685102 * L_47 = V_4;
		V_2 = L_47;
		goto IL_0101;
	}

IL_00f0:
	{
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_49 = V_6;
		PhotonVoiceSpeakerU5BU5D_t1538319195* L_50 = V_5;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length)))))))
		{
			goto IL_00c4;
		}
	}

IL_0101:
	{
		PhotonVoiceSpeaker_t2096685102 * L_51 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_52 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_51, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0127;
	}

IL_0112:
	{
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_playerId_0();
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_55 = V_0;
		NullCheck(L_55);
		uint8_t L_56 = L_55->get_voiceId_1();
		VoiceInfo_t822772786  L_57 = ___voiceInfo3;
		PhotonVoiceSpeaker_t2096685102 * L_58 = V_2;
		UnityVoiceFrontend_linkVoice_m1374844408(__this, L_54, L_56, L_57, L_58, /*hidden argument*/NULL);
	}

IL_0127:
	{
		Action_3_t887068424 * L_59 = UnityVoiceFrontend_get_OnRemoteVoiceInfoAction_m3486512263(__this, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_014b;
		}
	}
	{
		Action_3_t887068424 * L_60 = UnityVoiceFrontend_get_OnRemoteVoiceInfoAction_m3486512263(__this, /*hidden argument*/NULL);
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_playerId_0();
		U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * L_63 = V_0;
		NullCheck(L_63);
		uint8_t L_64 = L_63->get_voiceId_1();
		VoiceInfo_t822772786  L_65 = ___voiceInfo3;
		NullCheck(L_60);
		Action_3_Invoke_m2195347554(L_60, L_62, L_64, L_65, /*hidden argument*/Action_3_Invoke_m2195347554_RuntimeMethod_var);
	}

IL_014b:
	{
		return;
	}
}
// System.Void UnityVoiceFrontend::LinkSpeakerToRemoteVoice(PhotonVoiceSpeaker)
extern "C"  void UnityVoiceFrontend_LinkSpeakerToRemoteVoice_m1193148566 (UnityVoiceFrontend_t1107817756 * __this, PhotonVoiceSpeaker_t2096685102 * ___speaker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_LinkSpeakerToRemoteVoice_m1193148566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RemoteVoiceInfo_t1074502908 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	VoiceInfo_t822772786  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		VoiceClient_t4265131299 * L_0 = LoadBalancingFrontend_get_VoiceClient_m3239701369(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VoiceClient_get_RemoteVoiceInfos_m903031786(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo>::GetEnumerator() */, IEnumerable_1_t54355797_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RemoteVoiceInfo_t1074502908 * L_4 = InterfaceFuncInvoker0< RemoteVoiceInfo_t1074502908 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo>::get_Current() */, IEnumerator_1_t1507073376_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			PhotonVoiceSpeaker_t2096685102 * L_5 = ___speaker0;
			NullCheck(L_5);
			PhotonView_t2207721820 * L_6 = MonoBehaviour_get_photonView_m1395439011(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_7 = PhotonView_get_viewID_m192199062(L_6, /*hidden argument*/NULL);
			RemoteVoiceInfo_t1074502908 * L_8 = V_0;
			NullCheck(L_8);
			VoiceInfo_t822772786  L_9 = RemoteVoiceInfo_get_Info_m1639485344(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			RuntimeObject * L_10 = VoiceInfo_get_UserData_m2835464164((VoiceInfo_t822772786 *)(&V_2), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_7) == ((uint32_t)((*(int32_t*)((int32_t*)UnBox(L_10, Int32_t2950945753_il2cpp_TypeInfo_var))))))))
			{
				goto IL_0059;
			}
		}

IL_0040:
		{
			RemoteVoiceInfo_t1074502908 * L_11 = V_0;
			NullCheck(L_11);
			int32_t L_12 = RemoteVoiceInfo_get_PlayerId_m2572905244(L_11, /*hidden argument*/NULL);
			RemoteVoiceInfo_t1074502908 * L_13 = V_0;
			NullCheck(L_13);
			uint8_t L_14 = RemoteVoiceInfo_get_VoiceId_m3498273141(L_13, /*hidden argument*/NULL);
			RemoteVoiceInfo_t1074502908 * L_15 = V_0;
			NullCheck(L_15);
			VoiceInfo_t822772786  L_16 = RemoteVoiceInfo_get_Info_m1639485344(L_15, /*hidden argument*/NULL);
			PhotonVoiceSpeaker_t2096685102 * L_17 = ___speaker0;
			UnityVoiceFrontend_linkVoice_m1374844408(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		}

IL_0059:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0016;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x76, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_1;
			if (!L_20)
			{
				goto IL_0075;
			}
		}

IL_006f:
		{
			RuntimeObject* L_21 = V_1;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_21);
		}

IL_0075:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x76, IL_0076)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0076:
	{
		return;
	}
}
// System.Void UnityVoiceFrontend::OnRemoteVoiceRemove(System.Int32,System.Byte)
extern "C"  void UnityVoiceFrontend_OnRemoteVoiceRemove_m2834088081 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___playerId0, uint8_t ___voiceId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_OnRemoteVoiceRemove_m2834088081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2420681874  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___playerId0;
		uint8_t L_1 = ___voiceId1;
		KeyValuePair_2__ctor_m2678495578((KeyValuePair_2_t2420681874 *)(&V_0), L_0, L_1, /*hidden argument*/KeyValuePair_2__ctor_m2678495578_RuntimeMethod_var);
		KeyValuePair_2_t2420681874  L_2 = V_0;
		bool L_3 = UnityVoiceFrontend_unlinkSpeaker_m1111250791(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		uint8_t L_5 = ___voiceId1;
		uint8_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		int32_t L_9 = ___playerId0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral902197579, L_8, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_003c:
	{
		ObjectU5BU5D_t2843939325* L_12 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		int32_t L_13 = ___playerId0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		uint8_t L_17 = ___voiceId1;
		uint8_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral819371593, L_16, /*hidden argument*/NULL);
	}

IL_005e:
	{
		Action_2_t2360473393 * L_20 = UnityVoiceFrontend_get_OnRemoteVoiceRemoveAction_m3664426150(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0076;
		}
	}
	{
		Action_2_t2360473393 * L_21 = UnityVoiceFrontend_get_OnRemoteVoiceRemoveAction_m3664426150(__this, /*hidden argument*/NULL);
		int32_t L_22 = ___playerId0;
		uint8_t L_23 = ___voiceId1;
		NullCheck(L_21);
		Action_2_Invoke_m2909171545(L_21, L_22, L_23, /*hidden argument*/Action_2_Invoke_m2909171545_RuntimeMethod_var);
	}

IL_0076:
	{
		return;
	}
}
// System.Boolean UnityVoiceFrontend::unlinkSpeaker(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>)
extern "C"  bool UnityVoiceFrontend_unlinkSpeaker_m1111250791 (UnityVoiceFrontend_t1107817756 * __this, KeyValuePair_2_t2420681874  ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_unlinkSpeaker_m1111250791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotonVoiceSpeaker_t2096685102 * V_0 = NULL;
	{
		Dictionary_2_t230268132 * L_0 = __this->get_voiceSpeakers_46();
		KeyValuePair_2_t2420681874  L_1 = ___key0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m3942430338(L_0, L_1, (PhotonVoiceSpeaker_t2096685102 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3942430338_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		PhotonVoiceSpeaker_t2096685102 * L_3 = V_0;
		NullCheck(L_3);
		PhotonVoiceSpeaker_OnVoiceUnlinked_m1936388504(L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		Dictionary_2_t230268132 * L_4 = __this->get_voiceSpeakers_46();
		KeyValuePair_2_t2420681874  L_5 = ___key0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_Remove_m912922756(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m912922756_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void UnityVoiceFrontend::UnlinkSpeakerFromRemoteVoice(PhotonVoiceSpeaker)
extern "C"  void UnityVoiceFrontend_UnlinkSpeakerFromRemoteVoice_m3148887489 (UnityVoiceFrontend_t1107817756 * __this, PhotonVoiceSpeaker_t2096685102 * ___speaker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_UnlinkSpeakerFromRemoteVoice_m3148887489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3892756616 * V_0 = NULL;
	KeyValuePair_2_t2627940299  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t2184450907  V_2;
	memset(&V_2, 0, sizeof(V_2));
	KeyValuePair_2_t2420681874  V_3;
	memset(&V_3, 0, sizeof(V_3));
	KeyValuePair_2_t2420681874  V_4;
	memset(&V_4, 0, sizeof(V_4));
	KeyValuePair_2_t2420681874  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t1487033197  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3892756616 * L_0 = (List_1_t3892756616 *)il2cpp_codegen_object_new(List_1_t3892756616_il2cpp_TypeInfo_var);
		List_1__ctor_m3371529868(L_0, /*hidden argument*/List_1__ctor_m3371529868_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t230268132 * L_1 = __this->get_voiceSpeakers_46();
		NullCheck(L_1);
		Enumerator_t2184450907  L_2 = Dictionary_2_GetEnumerator_m1404978140(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m1404978140_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007d;
		}

IL_0017:
		{
			KeyValuePair_2_t2627940299  L_3 = Enumerator_get_Current_m2310140764((Enumerator_t2184450907 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2310140764_RuntimeMethod_var);
			V_1 = L_3;
			PhotonVoiceSpeaker_t2096685102 * L_4 = KeyValuePair_2_get_Value_m706906700((KeyValuePair_2_t2627940299 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m706906700_RuntimeMethod_var);
			PhotonVoiceSpeaker_t2096685102 * L_5 = ___speaker0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_007d;
			}
		}

IL_0031:
		{
			List_1_t3892756616 * L_7 = V_0;
			KeyValuePair_2_t2420681874  L_8 = KeyValuePair_2_get_Key_m956911013((KeyValuePair_2_t2627940299 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m956911013_RuntimeMethod_var);
			NullCheck(L_7);
			List_1_Add_m1636746552(L_7, L_8, /*hidden argument*/List_1_Add_m1636746552_RuntimeMethod_var);
			ObjectU5BU5D_t2843939325* L_9 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
			KeyValuePair_2_t2420681874  L_10 = KeyValuePair_2_get_Key_m956911013((KeyValuePair_2_t2627940299 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m956911013_RuntimeMethod_var);
			V_3 = L_10;
			int32_t L_11 = KeyValuePair_2_get_Key_m131355927((KeyValuePair_2_t2420681874 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m131355927_RuntimeMethod_var);
			int32_t L_12 = L_11;
			RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_13);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
			ObjectU5BU5D_t2843939325* L_14 = L_9;
			KeyValuePair_2_t2420681874  L_15 = KeyValuePair_2_get_Key_m956911013((KeyValuePair_2_t2627940299 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m956911013_RuntimeMethod_var);
			V_4 = L_15;
			uint8_t L_16 = KeyValuePair_2_get_Value_m167480798((KeyValuePair_2_t2420681874 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m167480798_RuntimeMethod_var);
			uint8_t L_17 = L_16;
			RuntimeObject * L_18 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_17);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_18);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral819371593, L_14, /*hidden argument*/NULL);
		}

IL_007d:
		{
			bool L_19 = Enumerator_MoveNext_m2952471047((Enumerator_t2184450907 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2952471047_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0017;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m18579390((Enumerator_t2184450907 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m18579390_RuntimeMethod_var);
		IL2CPP_END_FINALLY(142)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009c:
	{
		List_1_t3892756616 * L_20 = V_0;
		NullCheck(L_20);
		Enumerator_t1487033197  L_21 = List_1_GetEnumerator_m4040184051(L_20, /*hidden argument*/List_1_GetEnumerator_m4040184051_RuntimeMethod_var);
		V_6 = L_21;
	}

IL_00a4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bb;
		}

IL_00a9:
		{
			KeyValuePair_2_t2420681874  L_22 = Enumerator_get_Current_m2200437993((Enumerator_t1487033197 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m2200437993_RuntimeMethod_var);
			V_5 = L_22;
			KeyValuePair_2_t2420681874  L_23 = V_5;
			UnityVoiceFrontend_unlinkSpeaker_m1111250791(__this, L_23, /*hidden argument*/NULL);
		}

IL_00bb:
		{
			bool L_24 = Enumerator_MoveNext_m1157500647((Enumerator_t1487033197 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m1157500647_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00a9;
			}
		}

IL_00c7:
		{
			IL2CPP_LEAVE(0xDA, FINALLY_00cc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cc;
	}

FINALLY_00cc:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3718840993((Enumerator_t1487033197 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m3718840993_RuntimeMethod_var);
		IL2CPP_END_FINALLY(204)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(204)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00da:
	{
		return;
	}
}
// System.Void UnityVoiceFrontend::OnAudioFrame(System.Int32,System.Byte,System.Single[])
extern "C"  void UnityVoiceFrontend_OnAudioFrame_m945535391 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___playerId0, uint8_t ___voiceId1, SingleU5BU5D_t1444911251* ___frame2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_OnAudioFrame_m945535391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotonVoiceSpeaker_t2096685102 * V_0 = NULL;
	{
		V_0 = (PhotonVoiceSpeaker_t2096685102 *)NULL;
		Dictionary_2_t230268132 * L_0 = __this->get_voiceSpeakers_46();
		int32_t L_1 = ___playerId0;
		uint8_t L_2 = ___voiceId1;
		KeyValuePair_2_t2420681874  L_3;
		memset(&L_3, 0, sizeof(L_3));
		KeyValuePair_2__ctor_m2678495578((&L_3), L_1, L_2, /*hidden argument*/KeyValuePair_2__ctor_m2678495578_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_4 = Dictionary_2_TryGetValue_m3942430338(L_0, L_3, (PhotonVoiceSpeaker_t2096685102 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3942430338_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		PhotonVoiceSpeaker_t2096685102 * L_5 = V_0;
		SingleU5BU5D_t1444911251* L_6 = ___frame2;
		NullCheck(L_5);
		PhotonVoiceSpeaker_OnAudioFrame_m413203794(L_5, L_6, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0027:
	{
		ObjectU5BU5D_t2843939325* L_7 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		uint8_t L_8 = ___voiceId1;
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		int32_t L_12 = ___playerId0;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral647675415, L_11, /*hidden argument*/NULL);
	}

IL_0049:
	{
		Action_3_t1509206889 * L_15 = UnityVoiceFrontend_get_OnAudioFrameAction_m1419373645(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		Action_3_t1509206889 * L_16 = UnityVoiceFrontend_get_OnAudioFrameAction_m1419373645(__this, /*hidden argument*/NULL);
		int32_t L_17 = ___playerId0;
		uint8_t L_18 = ___voiceId1;
		SingleU5BU5D_t1444911251* L_19 = ___frame2;
		NullCheck(L_16);
		Action_3_Invoke_m2784781136(L_16, L_17, L_18, L_19, /*hidden argument*/Action_3_Invoke_m2784781136_RuntimeMethod_var);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityVoiceFrontend::OnStateChange(ExitGames.Client.Photon.LoadBalancing.ClientState)
extern "C"  void UnityVoiceFrontend_OnStateChange_m2537733427 (UnityVoiceFrontend_t1107817756 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVoiceFrontend_OnStateChange_m2537733427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RoomOptions_t1266811903 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PhotonNetwork_t1610183659_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var))->get_logLevel_8();
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		int32_t L_2 = ___state0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(ClientState_t471057680_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral4173677005, L_1, /*hidden argument*/NULL);
	}

IL_0024:
	{
		int32_t L_5 = ___state0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)14))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_6 = ___state0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)13))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_00a5;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		bool L_7 = PhotonNetwork_get_inRoom_m1604252032(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t1610183659_il2cpp_TypeInfo_var);
		Room_t3759828263 * L_8 = PhotonNetwork_get_room_m36124698(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = Room_get_Name_m2728611143(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2974682513, L_9, /*hidden argument*/NULL);
		RoomOptions_t1266811903 * L_11 = (RoomOptions_t1266811903 *)il2cpp_codegen_object_new(RoomOptions_t1266811903_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m757104804(L_11, /*hidden argument*/NULL);
		V_0 = L_11;
		RoomOptions_t1266811903 * L_12 = V_0;
		NullCheck(L_12);
		RoomOptions_set_IsVisible_m1703746886(L_12, (bool)0, /*hidden argument*/NULL);
		RoomOptions_t1266811903 * L_13 = V_0;
		LoadBalancingClient_OpJoinOrCreateRoom_m3690065006(__this, L_10, L_13, (TypedLobby_t1646745069 *)NULL, (StringU5BU5D_t1281789340*)(StringU5BU5D_t1281789340*)NULL, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral153682067, /*hidden argument*/NULL);
		LoadBalancingClient_Disconnect_m2758039827(__this, /*hidden argument*/NULL);
	}

IL_0083:
	{
		goto IL_00a5;
	}

IL_0088:
	{
		bool L_14 = __this->get_reconnect_52();
		if (!L_14)
		{
			goto IL_0099;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t1485168188_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_Connect_m3076922172(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0099:
	{
		__this->set_reconnect_52((bool)0);
		goto IL_00a5;
	}

IL_00a5:
	{
		Action_1_t643525275 * L_15 = UnityVoiceFrontend_get_OnStateChangeAction_m2666632057(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00bc;
		}
	}
	{
		Action_1_t643525275 * L_16 = UnityVoiceFrontend_get_OnStateChangeAction_m2666632057(__this, /*hidden argument*/NULL);
		int32_t L_17 = ___state0;
		NullCheck(L_16);
		Action_1_Invoke_m4214502263(L_16, L_17, /*hidden argument*/Action_1_Invoke_m4214502263_RuntimeMethod_var);
	}

IL_00bc:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0::.ctor()
extern "C"  void U3COnRemoteVoiceInfoU3Ec__AnonStorey0__ctor_m1873335878 (U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0::<>m__0(System.Single[])
extern "C"  void U3COnRemoteVoiceInfoU3Ec__AnonStorey0_U3CU3Em__0_m1722068814 (U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * __this, SingleU5BU5D_t1444911251* ___frame0, const RuntimeMethod* method)
{
	{
		UnityVoiceFrontend_t1107817756 * L_0 = __this->get_U24this_2();
		int32_t L_1 = __this->get_playerId_0();
		uint8_t L_2 = __this->get_voiceId_1();
		SingleU5BU5D_t1444911251* L_3 = ___frame0;
		NullCheck(L_0);
		UnityVoiceFrontend_OnAudioFrame_m945535391(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityVoiceFrontend/<OnRemoteVoiceInfo>c__AnonStorey0::<>m__1()
extern "C"  void U3COnRemoteVoiceInfoU3Ec__AnonStorey0_U3CU3Em__1_m1042055423 (U3COnRemoteVoiceInfoU3Ec__AnonStorey0_t2894919485 * __this, const RuntimeMethod* method)
{
	{
		UnityVoiceFrontend_t1107817756 * L_0 = __this->get_U24this_2();
		int32_t L_1 = __this->get_playerId_0();
		uint8_t L_2 = __this->get_voiceId_1();
		NullCheck(L_0);
		UnityVoiceFrontend_OnRemoteVoiceRemove_m2834088081(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ViewDrag::.ctor()
extern "C"  void ViewDrag__ctor_m1198465158 (ViewDrag_t2793483242 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewDrag__ctor_m1198465158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_hit_position_2(L_0);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_current_position_3(L_1);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_camera_position_4(L_2);
		__this->set_yBecomesZ_6((bool)1);
		__this->set_speed_7((2.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ViewDrag::Start()
extern "C"  void ViewDrag_Start_m3651174146 (ViewDrag_t2793483242 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ViewDrag::Update()
extern "C"  void ViewDrag_Update_m2303743768 (ViewDrag_t2793483242 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewDrag_Update_m2303743768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_hit_position_2(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		__this->set_camera_position_4(L_3);
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_current_position_3(L_5);
		ViewDrag_LeftMouseDrag_m2433549445(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void ViewDrag::LeftMouseDrag()
extern "C"  void ViewDrag_LeftMouseDrag_m2433549445 (ViewDrag_t2793483242 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewDrag_LeftMouseDrag_m2433549445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_current_position_3();
		Vector3_t3722313464 * L_1 = __this->get_address_of_hit_position_2();
		Vector3_t3722313464 * L_2 = __this->get_address_of_camera_position_4();
		float L_3 = L_2->get_y_2();
		float L_4 = L_3;
		V_0 = L_4;
		L_1->set_z_3(L_4);
		float L_5 = V_0;
		L_0->set_z_3(L_5);
		Camera_t4157153871 * L_6 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = __this->get_current_position_3();
		NullCheck(L_6);
		Vector3_t3722313464  L_8 = Camera_ScreenToWorldPoint_m3978588570(L_6, L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = __this->get_hit_position_2();
		NullCheck(L_9);
		Vector3_t3722313464  L_11 = Camera_ScreenToWorldPoint_m3978588570(L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		bool L_13 = __this->get_invert_5();
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t3722313464  L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_14, (-1.0f), /*hidden argument*/NULL);
		V_1 = L_15;
	}

IL_0061:
	{
		bool L_16 = __this->get_yBecomesZ_6();
		if (!L_16)
		{
			goto IL_0086;
		}
	}
	{
		float L_17 = (&V_1)->get_y_2();
		(&V_1)->set_z_3(L_17);
		(&V_1)->set_y_2((0.0f));
	}

IL_0086:
	{
		Vector3_t3722313464  L_18 = __this->get_camera_position_4();
		Vector3_t3722313464  L_19 = V_1;
		float L_20 = __this->get_speed_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_18, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = V_2;
		NullCheck(L_23);
		Transform_set_position_m3387557959(L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
extern "C"  void WebRpcResponse__ctor_m4000971832 (WebRpcResponse_t4177102182 * __this, OperationResponse_t423627973 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse__ctor_m4000971832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	WebRpcResponse_t4177102182 * G_B2_0 = NULL;
	WebRpcResponse_t4177102182 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WebRpcResponse_t4177102182 * G_B3_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		OperationResponse_t423627973 * L_0 = ___response0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		Dictionary_2_TryGetValue_m1372101825(L_1, (uint8_t)((int32_t)209), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var);
		RuntimeObject * L_2 = V_0;
		WebRpcResponse_set_Name_m2676495348(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		OperationResponse_t423627973 * L_3 = ___response0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_3();
		NullCheck(L_4);
		Dictionary_2_TryGetValue_m1372101825(L_4, (uint8_t)((int32_t)207), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var);
		RuntimeObject * L_5 = V_0;
		G_B1_0 = __this;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_004a;
		}
	}
	{
		RuntimeObject * L_6 = V_0;
		G_B3_0 = ((int32_t)(((*(uint8_t*)((uint8_t*)UnBox(L_6, Byte_t1134296376_il2cpp_TypeInfo_var))))));
		G_B3_1 = G_B1_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_004b:
	{
		NullCheck(G_B3_1);
		WebRpcResponse_set_ReturnCode_m3992245468(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		OperationResponse_t423627973 * L_7 = ___response0;
		NullCheck(L_7);
		Dictionary_2_t1405253484 * L_8 = L_7->get_Parameters_3();
		NullCheck(L_8);
		Dictionary_2_TryGetValue_m1372101825(L_8, (uint8_t)((int32_t)208), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var);
		RuntimeObject * L_9 = V_0;
		WebRpcResponse_set_Parameters_m3975464742(__this, ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_9, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		OperationResponse_t423627973 * L_10 = ___response0;
		NullCheck(L_10);
		Dictionary_2_t1405253484 * L_11 = L_10->get_Parameters_3();
		NullCheck(L_11);
		Dictionary_2_TryGetValue_m1372101825(L_11, (uint8_t)((int32_t)206), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var);
		RuntimeObject * L_12 = V_0;
		WebRpcResponse_set_DebugMessage_m3578678403(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.String WebRpcResponse::get_Name()
extern "C"  String_t* WebRpcResponse_get_Name_m1648311298 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void WebRpcResponse::set_Name(System.String)
extern "C"  void WebRpcResponse_set_Name_m2676495348 (WebRpcResponse_t4177102182 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 WebRpcResponse::get_ReturnCode()
extern "C"  int32_t WebRpcResponse_get_ReturnCode_m3292208677 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReturnCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
extern "C"  void WebRpcResponse_set_ReturnCode_m3992245468 (WebRpcResponse_t4177102182 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReturnCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String WebRpcResponse::get_DebugMessage()
extern "C"  String_t* WebRpcResponse_get_DebugMessage_m4109436483 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDebugMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void WebRpcResponse::set_DebugMessage(System.String)
extern "C"  void WebRpcResponse_set_DebugMessage_m3578678403 (WebRpcResponse_t4177102182 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDebugMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
extern "C"  Dictionary_2_t2865362463 * WebRpcResponse_get_Parameters_m77974431 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2865362463 * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void WebRpcResponse_set_Parameters_m3975464742 (WebRpcResponse_t4177102182 * __this, Dictionary_2_t2865362463 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2865362463 * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String WebRpcResponse::ToStringFull()
extern "C"  String_t* WebRpcResponse_ToStringFull_m3199251698 (WebRpcResponse_t4177102182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse_ToStringFull_m3199251698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		String_t* L_1 = WebRpcResponse_get_Name_m1648311298(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		Dictionary_2_t2865362463 * L_3 = WebRpcResponse_get_Parameters_m77974431(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		String_t* L_4 = SupportClass_DictionaryToString_m1908829707(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_2;
		int32_t L_6 = WebRpcResponse_get_ReturnCode_m3292208677(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		String_t* L_10 = WebRpcResponse_get_DebugMessage_m4109436483(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2663913931, L_9, /*hidden argument*/NULL);
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
