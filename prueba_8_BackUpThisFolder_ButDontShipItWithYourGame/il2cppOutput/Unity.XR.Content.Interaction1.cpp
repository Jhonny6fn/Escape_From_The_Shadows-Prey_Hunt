#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct Action_1_t253935EBEC6470ADBF9515523E953BB179550B28;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.XRInteractableSnapVolume>
struct Dictionary_2_t0656BBB97C60F5E8FCF233011632EEA5F601B241;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.ValueTuple`2<UnityEngine.MeshFilter,UnityEngine.Renderer>[]>
struct Dictionary_2_t14A82D8EE895A25F44AC7AA14CC61ACFFAB8DC95;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Transform>
struct Dictionary_2_t1144A8AA23B959F161D7F0A815D7E64424804D25;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single>
struct Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct Dictionary_2_tC5C84A32C9B20E8410708E4451B5D63451CC3856;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter>
struct ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>
struct HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct HashSet_1_t6B8E4B90487F48FD475841A041733E061ED91601;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct HashSet_1_tD23C14FE172DE7F2894A3E41903EDCA5C6172BAF;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct IEqualityComparer_1_tE07E55CA1B6313FD9AAEFCF707E6F2EC0C7B0791;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct KeyCollection_t564282972C01B8565FB9A5F85D864C59560D1808;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct LinkedPool_1_tC253D76E8F52E23D166062D7609A341C95911E17;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct LinkedPool_1_t4EEC56F1534A4EC21AC8706EBAC87402AD3F17BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct LinkedPool_1_tC453A1423D0BB4062CA1606FC4BB837E9E86BCF2;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct List_1_tC2CA2F00C214B8C7E92F689464A85292A6D89FA8;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.Content.Interaction.Key>
struct List_1_t37D632FAD678E288EF49853AD613C89579B407EA;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>
struct List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct RegistrationList_1_t5B8AA175E254DFA1F9440925B6607DDCE1A48078;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct RegistrationList_1_t59D6072B55134A385BD91BA10DD1C732AD6C2E6C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct RegistrationList_1_t1AFBA9D926D100296ED3F61A8BE02BA1EDC23859;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>[]
struct EntryU5BU5D_tC99B1D6C4116074FF4FF32881026E7AEC3E25093;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Transform[,]
struct TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.XR.Content.Interaction.ClawMachine
struct ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.Content.Interaction.FlippyDoor
struct FlippyDoor_t2F162685F41C0F3D0EAA09707FAB894DA281CA8C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.XR.Content.Interaction.IKeychain
struct IKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable
struct IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor
struct IXRHoverInteractor_tE2EF7002213610DA0D67421CFA21B1A95113BA61;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.XR.Content.Interaction.Lock
struct Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor
struct TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2;
// UnityEngine.XR.Content.Interaction.UfoAbductionForce
struct UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Content.Interaction.XRGridSocketInteractor
struct XRGridSocketInteractor_t01F91C8982DBD3EF4F7628B88A2D317554CF980B;
// UnityEngine.XR.Content.Interaction.XRGripButton
struct XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9;
// UnityEngine.XR.Content.Interaction.XRInfiniteInteractable
struct XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Content.Interaction.XRJoystick
struct XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF;
// UnityEngine.XR.Content.Interaction.XRKnob
struct XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126;
// UnityEngine.XR.Content.Interaction.XRLever
struct XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510;
// UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor
struct XRLockGridSocketInteractor_t9B6E3DA9DC45C93487D24AC94FBFF4790012750C;
// UnityEngine.XR.Content.Interaction.XRLockSocketInteractor
struct XRLockSocketInteractor_tC5C5DE68A719BD5CBE374865CED208EBFC319B92;
// UnityEngine.XR.Content.Interaction.XRPushButton
struct XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3;
// UnityEngine.XR.Content.Interaction.XRSlider
struct XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51;
// UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor
struct XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591;
// UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14
struct U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F;
// UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16
struct U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4;
// UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15
struct U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82;
// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150;
// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent
struct ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17;
// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo
struct PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C;
// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent
struct ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;
// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent
struct ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralD59BAAF9BB26A3D7DFEB5313F915B62882A98523;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m07C977650071BA2868766F319367644BB006A29F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE5EB1011929CA6332FA47E6969BE302D3E2B9160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_mD5F842EA80D43738DF2B3FA0C92719A5DBA4FCFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNoPrizeStateU3Ed__14_System_Collections_IEnumerator_Reset_mBD779F5ECF71D40A6552C8A6B4B51D5B78CF4704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReleasePrizeStateU3Ed__16_System_Collections_IEnumerator_Reset_m4E2F6460D4AC757B0A9152AAFA7C6AF64382D157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryGrabPrizeStateU3Ed__15_System_Collections_IEnumerator_Reset_mA56C6533DA384420DB30E26E96B59FCB482FB5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGripButton_EndHover_mC3ACC7271E762790374D6C8342DC8D87653D4E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGripButton_EndPress_m649D6A90E63F33BCEEDA64ECE9E27A4B3238522D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGripButton_StartHover_m8ECF94E94EE58BA78025C8FE693351D488C787D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGripButton_StartPress_mC0A34BF8BDA0119A0F3E81F39356AD4C8F0E1BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGripButton_StartTogglePress_m6556F01991CCE06586856DC0DAC1BF277B8F8867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRInfiniteInteractable_OnSelectExited_mCE18BF9017D5CFDD91DBE2856BFFEC6CFEC0E9F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRJoystick_EndGrab_m0A67A012DA30073E634B0A4CBA554F906AE9BD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRJoystick_StartGrab_mBF2838EAA577F87FE45DAFD41CC95A0E2F233E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC99B1D6C4116074FF4FF32881026E7AEC3E25093* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t564282972C01B8565FB9A5F85D864C59560D1808* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ____dictionary_0;
};
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// UnityEngine.XR.Content.Interaction.Lock
struct Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Content.Interaction.Key> UnityEngine.XR.Content.Interaction.Lock::m_RequiredKeys
	List_1_t37D632FAD678E288EF49853AD613C89579B407EA* ___m_RequiredKeys_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14
struct U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.Content.Interaction.ClawMachine UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::<>4__this
	ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* ___U3CU3E4__this_2;
};

// UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16
struct U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.Content.Interaction.ClawMachine UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::<>4__this
	ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* ___U3CU3E4__this_2;
};

// UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15
struct U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.Content.Interaction.ClawMachine UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::<>4__this
	ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* ___U3CU3E4__this_2;
};

// UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo
struct PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_Interactor
	RuntimeObject* ___m_Interactor_0;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_InPressRegion
	bool ___m_InPressRegion_1;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::m_WrongSide
	bool ___m_WrongSide_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>
struct Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>
struct Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation
struct TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 
{
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_BaseAngle
	float ___m_BaseAngle_0;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_CurrentOffset
	float ___m_CurrentOffset_1;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::m_AccumulatedAngle
	float ___m_AccumulatedAngle_2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent
struct ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent
struct ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent
struct ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Content.Interaction.ClawMachine
struct ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.ClawMachine::m_ClawTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ClawTransform_4;
	// UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor UnityEngine.XR.Content.Interaction.ClawMachine::m_ClawSocket
	XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* ___m_ClawSocket_5;
	// UnityEngine.XR.Content.Interaction.UfoAbductionForce UnityEngine.XR.Content.Interaction.ClawMachine::m_UfoAbductionForce
	UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* ___m_UfoAbductionForce_6;
	// System.Single UnityEngine.XR.Content.Interaction.ClawMachine::m_ClawWithoutPrizeSpeed
	float ___m_ClawWithoutPrizeSpeed_7;
	// System.Single UnityEngine.XR.Content.Interaction.ClawMachine::m_ClawWithPrizeSpeed
	float ___m_ClawWithPrizeSpeed_8;
	// System.Single UnityEngine.XR.Content.Interaction.ClawMachine::m_ClawAbductionSpeed
	float ___m_ClawAbductionSpeed_9;
	// UnityEngine.Vector2 UnityEngine.XR.Content.Interaction.ClawMachine::m_MinClawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MinClawPosition_10;
	// UnityEngine.Vector2 UnityEngine.XR.Content.Interaction.ClawMachine::m_MaxClawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MaxClawPosition_11;
	// UnityEngine.ParticleSystem UnityEngine.XR.Content.Interaction.ClawMachine::m_SparkliesParticle
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_SparkliesParticle_12;
	// UnityEngine.ParticleSystem UnityEngine.XR.Content.Interaction.ClawMachine::m_UfoBeamParticle
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_UfoBeamParticle_13;
	// System.Boolean UnityEngine.XR.Content.Interaction.ClawMachine::m_ButtonPressed
	bool ___m_ButtonPressed_14;
	// UnityEngine.Vector2 UnityEngine.XR.Content.Interaction.ClawMachine::m_JoystickValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_JoystickValue_15;
};

// UnityEngine.XR.Content.Interaction.FlippyDoor
struct FlippyDoor_t2F162685F41C0F3D0EAA09707FAB894DA281CA8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.FlippyDoor::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_4;
	// System.Int32 UnityEngine.XR.Content.Interaction.FlippyDoor::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.Content.Interaction.UfoAbductionForce
struct UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Content.Interaction.UfoAbductionForce::m_MinForceMagnitude
	float ___m_MinForceMagnitude_4;
	// System.Single UnityEngine.XR.Content.Interaction.UfoAbductionForce::m_MaxForceMagnitude
	float ___m_MaxForceMagnitude_5;
	// UnityEngine.Collider UnityEngine.XR.Content.Interaction.UfoAbductionForce::m_Trigger
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Trigger_6;
	// System.Single UnityEngine.XR.Content.Interaction.UfoAbductionForce::m_ButtonValue
	float ___m_ButtonValue_7;
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody> UnityEngine.XR.Content.Interaction.UfoAbductionForce::m_Rigidbodies
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* ___m_Rigidbodies_8;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_7;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_8;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_10;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_12;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_14;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeInteraction
	bool ___m_AllowGazeInteraction_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeSelect
	bool ___m_AllowGazeSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideGazeTimeToSelect
	bool ___m_OverrideGazeTimeToSelect_18;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_GazeTimeToSelect
	float ___m_GazeTimeToSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideTimeToAutoDeselectGaze
	bool ___m_OverrideTimeToAutoDeselectGaze_20;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_TimeToAutoDeselectGaze
	float ___m_TimeToAutoDeselectGaze_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeAssistance
	bool ___m_AllowGazeAssistance_22;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_23;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_24;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_25;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_26;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_27;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_28;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_30;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_31;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_32;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsHovering
	HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE* ___m_InteractorsHovering_33;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsSelecting
	HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B* ___m_InteractorsSelecting_34;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_36;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_37;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_38;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_39;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingInteractionStrengthFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingInteractionStrengthFilters_40;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengthFilters
	ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B* ___m_InteractionStrengthFilters_41;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_42;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_43;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_44;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_45;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_VariableSelectInteractors
	HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5* ___m_VariableSelectInteractors_46;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengths
	Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61* ___m_InteractionStrengths_47;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_48;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_51;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_52;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_53;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_59;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_60;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_49;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_50;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<useAttachPointVelocity>k__BackingField
	bool ___U3CuseAttachPointVelocityU3Ek__BackingField_42;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<attachPointVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CattachPointVelocityU3Ek__BackingField_43;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<attachPointAngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CattachPointAngularVelocityU3Ek__BackingField_44;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_45;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_46;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DeltaTimeStart
	float ___m_DeltaTimeStart_47;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FrameOn
	int32_t ___m_FrameOn_49;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityPositionsCache_50;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityNormalsCache_51;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityPositionsSum_52;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityNormalsSum_53;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_57;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_58;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_40;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_41;
};

// UnityEngine.XR.Content.Interaction.XRInfiniteInteractable
struct XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::m_Active
	bool ___m_Active_4;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::m_OverrideStartingSelectedInteractable
	bool ___m_OverrideStartingSelectedInteractable_5;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::m_InteractablePrefab
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_InteractablePrefab_6;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::m_Interactor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___m_Interactor_7;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactionGroupRegistered
	Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C* ___interactionGroupRegistered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactionGroupUnregistered
	Action_1_t253935EBEC6470ADBF9515523E953BB179550B28* ___interactionGroupUnregistered_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorRegistered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___interactorRegistered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorUnregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___interactorUnregistered_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableRegistered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___interactableRegistered_8;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableUnregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___interactableUnregistered_9;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_10;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_11;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_13;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToInteractableMap
	Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5* ___m_ColliderToInteractableMap_15;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.XRInteractableSnapVolume> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToSnapVolumes
	Dictionary_2_t0656BBB97C60F5E8FCF233011632EEA5F601B241* ___m_ColliderToSnapVolumes_16;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactors
	RegistrationList_1_t1AFBA9D926D100296ED3F61A8BE02BA1EDC23859* ___m_Interactors_17;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractionGroups
	RegistrationList_1_t59D6072B55134A385BD91BA10DD1C732AD6C2E6C* ___m_InteractionGroups_18;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactables
	RegistrationList_1_t5B8AA175E254DFA1F9440925B6607DDCE1A48078* ___m_Interactables_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___m_CurrentHovered_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___m_CurrentSelected_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HighestPriorityTargetMap
	Dictionary_2_tC5C84A32C9B20E8410708E4451B5D63451CC3856* ___m_HighestPriorityTargetMap_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_24;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_UnorderedValidTargets
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___m_UnorderedValidTargets_25;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorsInGroup
	HashSet_1_tD23C14FE172DE7F2894A3E41903EDCA5C6172BAF* ___m_InteractorsInGroup_26;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_GroupsInGroup
	HashSet_1_t6B8E4B90487F48FD475841A041733E061ED91601* ___m_GroupsInGroup_27;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_28;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractionGroups
	List_1_tC2CA2F00C214B8C7E92F689464A85292A6D89FA8* ___m_ScratchInteractionGroups_29;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractors
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___m_ScratchInteractors_30;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ScratchInteractables_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectEnterEventArgs
	LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67* ___m_SelectEnterEventArgs_32;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectExitEventArgs
	LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62* ___m_SelectExitEventArgs_33;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverEnterEventArgs
	LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD* ___m_HoverEnterEventArgs_34;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverExitEventArgs
	LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F* ___m_HoverExitEventArgs_35;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractionGroupRegisteredEventArgs
	LinkedPool_1_t4EEC56F1534A4EC21AC8706EBAC87402AD3F17BE* ___m_InteractionGroupRegisteredEventArgs_36;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractionGroupUnregisteredEventArgs
	LinkedPool_1_tC453A1423D0BB4062CA1606FC4BB837E9E86BCF2* ___m_InteractionGroupUnregisteredEventArgs_37;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorRegisteredEventArgs
	LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F* ___m_InteractorRegisteredEventArgs_38;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorUnregisteredEventArgs
	LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0* ___m_InteractorUnregisteredEventArgs_39;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableRegisteredEventArgs
	LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B* ___m_InteractableRegisteredEventArgs_40;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableUnregisteredEventArgs
	LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE* ___m_InteractableUnregisteredEventArgs_41;
};

struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<activeInteractionManagers>k__BackingField
	List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B* ___U3CactiveInteractionManagersU3Ek__BackingField_14;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_TargetPriorityInteractorListPool
	LinkedPool_1_tC253D76E8F52E23D166062D7609A341C95911E17* ___s_TargetPriorityInteractorListPool_23;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_PreprocessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_PreprocessInteractorsMarker_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractorsMarker_44;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractablesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractablesMarker_45;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_UpdateGroupMemberInteractionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_UpdateGroupMemberInteractionsMarker_46;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_GetValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_GetValidTargetsMarker_47;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FilterRegisteredValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FilterRegisteredValidTargetsMarker_48;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidSelectionsMarker_49;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidHoversMarker_50;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidSelectionsMarker_51;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidHoversMarker_52;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectEnterMarker_53;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectExitMarker_54;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverEnterMarker_55;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverExitMarker_56;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_61;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_63;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_65;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_67;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_69;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_71;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_73;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_75;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_76;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_78;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_80;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_83;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_86;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_87;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_89;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_92;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_93;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_94;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_95;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_96;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_97;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_101;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_102;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_103;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_104;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_99;
};

// UnityEngine.XR.Content.Interaction.XRGripButton
struct XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRGripButton::m_Button
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Button_61;
	// System.Single UnityEngine.XR.Content.Interaction.XRGripButton::m_PressDistance
	float ___m_PressDistance_62;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRGripButton::m_ToggleButton
	bool ___m_ToggleButton_63;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRGripButton::m_OnPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnPress_64;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRGripButton::m_OnRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnRelease_65;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRGripButton::m_Hovered
	bool ___m_Hovered_66;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRGripButton::m_Selected
	bool ___m_Selected_67;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRGripButton::m_Toggled
	bool ___m_Toggled_68;
};

// UnityEngine.XR.Content.Interaction.XRJoystick
struct XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.XR.Content.Interaction.XRJoystick/JoystickType UnityEngine.XR.Content.Interaction.XRJoystick::m_JoystickMotion
	int32_t ___m_JoystickMotion_62;
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRJoystick::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_63;
	// UnityEngine.Vector2 UnityEngine.XR.Content.Interaction.XRJoystick::m_Value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Value_64;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRJoystick::m_RecenterOnRelease
	bool ___m_RecenterOnRelease_65;
	// System.Single UnityEngine.XR.Content.Interaction.XRJoystick::m_MaxAngle
	float ___m_MaxAngle_66;
	// System.Single UnityEngine.XR.Content.Interaction.XRJoystick::m_DeadZoneAngle
	float ___m_DeadZoneAngle_67;
	// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRJoystick::m_OnValueChangeX
	ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* ___m_OnValueChangeX_68;
	// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRJoystick::m_OnValueChangeY
	ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* ___m_OnValueChangeY_69;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRJoystick::m_Interactor
	RuntimeObject* ___m_Interactor_70;
};

// UnityEngine.XR.Content.Interaction.XRKnob
struct XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRKnob::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_62;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_Value
	float ___m_Value_63;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_ClampedMotion
	bool ___m_ClampedMotion_64;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_MaxAngle
	float ___m_MaxAngle_65;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_MinAngle
	float ___m_MinAngle_66;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_AngleIncrement
	float ___m_AngleIncrement_67;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_PositionTrackedRadius
	float ___m_PositionTrackedRadius_68;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_TwistSensitivity
	float ___m_TwistSensitivity_69;
	// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRKnob::m_OnValueChange
	ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* ___m_OnValueChange_70;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRKnob::m_Interactor
	RuntimeObject* ___m_Interactor_71;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_PositionDriven
	bool ___m_PositionDriven_72;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::m_UpVectorDriven
	bool ___m_UpVectorDriven_73;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_PositionAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_PositionAngles_74;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_UpVectorAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_UpVectorAngles_75;
	// UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation UnityEngine.XR.Content.Interaction.XRKnob::m_ForwardVectorAngles
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3 ___m_ForwardVectorAngles_76;
	// System.Single UnityEngine.XR.Content.Interaction.XRKnob::m_BaseKnobRotation
	float ___m_BaseKnobRotation_77;
};

// UnityEngine.XR.Content.Interaction.XRLever
struct XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRLever::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_62;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::m_Value
	bool ___m_Value_63;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::m_LockToValue
	bool ___m_LockToValue_64;
	// System.Single UnityEngine.XR.Content.Interaction.XRLever::m_MaxAngle
	float ___m_MaxAngle_65;
	// System.Single UnityEngine.XR.Content.Interaction.XRLever::m_MinAngle
	float ___m_MinAngle_66;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::m_OnLeverActivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnLeverActivate_67;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::m_OnLeverDeactivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnLeverDeactivate_68;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRLever::m_Interactor
	RuntimeObject* ___m_Interactor_69;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::<lockToValue>k__BackingField
	bool ___U3ClockToValueU3Ek__BackingField_70;
};

// UnityEngine.XR.Content.Interaction.XRPushButton
struct XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRPushButton::m_Button
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Button_61;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_PressDistance
	float ___m_PressDistance_62;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_PressBuffer
	float ___m_PressBuffer_63;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_ButtonOffset
	float ___m_ButtonOffset_64;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_ButtonSize
	float ___m_ButtonSize_65;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_ToggleButton
	bool ___m_ToggleButton_66;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnPress_67;
	// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnRelease_68;
	// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRPushButton::m_OnValueChange
	ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* ___m_OnValueChange_69;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_Pressed
	bool ___m_Pressed_70;
	// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::m_Toggled
	bool ___m_Toggled_71;
	// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::m_Value
	float ___m_Value_72;
	// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRPushButton::m_BaseButtonPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_BaseButtonPosition_73;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo> UnityEngine.XR.Content.Interaction.XRPushButton::m_HoveringInteractors
	Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* ___m_HoveringInteractors_74;
};

// UnityEngine.XR.Content.Interaction.XRSlider
struct XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRSlider::m_Handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Handle_61;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_Value
	float ___m_Value_62;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_MaxPosition
	float ___m_MaxPosition_63;
	// System.Single UnityEngine.XR.Content.Interaction.XRSlider::m_MinPosition
	float ___m_MinPosition_64;
	// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRSlider::m_OnValueChange
	ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* ___m_OnValueChange_65;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Content.Interaction.XRSlider::m_Interactor
	RuntimeObject* ___m_Interactor_66;
};

// UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor
struct XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_ShowInteractableHoverMeshes
	bool ___m_ShowInteractableHoverMeshes_59;
	// UnityEngine.Material UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_InteractableHoverMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_InteractableHoverMeshMaterial_60;
	// UnityEngine.Material UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_InteractableCantHoverMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_InteractableCantHoverMeshMaterial_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_SocketActive
	bool ___m_SocketActive_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_InteractableHoverScale
	float ___m_InteractableHoverScale_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_RecycleDelayTime
	float ___m_RecycleDelayTime_64;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_LastRemoveTime
	float ___m_LastRemoveTime_65;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::<unsortedValidTargets>k__BackingField
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___U3CunsortedValidTargetsU3Ek__BackingField_66;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_StayedColliders
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ___m_StayedColliders_67;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_TriggerContactMonitor
	TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2* ___m_TriggerContactMonitor_68;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.ValueTuple`2<UnityEngine.MeshFilter,UnityEngine.Renderer>[]> UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_MeshFilterCache
	Dictionary_2_t14A82D8EE895A25F44AC7AA14CC61ACFFAB8DC95* ___m_MeshFilterCache_69;
	// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::m_UpdateCollidersAfterTriggerStay
	RuntimeObject* ___m_UpdateCollidersAfterTriggerStay_72;
};

struct XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::s_MeshFilters
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___s_MeshFilters_70;
	// UnityEngine.WaitForFixedUpdate UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::s_WaitForFixedUpdate
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___s_WaitForFixedUpdate_71;
};

// UnityEngine.XR.Content.Interaction.XRGridSocketInteractor
struct XRGridSocketInteractor_t01F91C8982DBD3EF4F7628B88A2D317554CF980B  : public XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591
{
	// System.Int32 UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::m_GridWidth
	int32_t ___m_GridWidth_73;
	// System.Int32 UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::m_GridHeight
	int32_t ___m_GridHeight_74;
	// UnityEngine.Vector2 UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::m_CellOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellOffset_75;
	// System.Collections.Generic.HashSet`1<UnityEngine.Transform> UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::m_UnorderedUsedAttachedTransform
	HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ___m_UnorderedUsedAttachedTransform_76;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Transform> UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::m_UsedAttachTransformByInteractable
	Dictionary_2_t1144A8AA23B959F161D7F0A815D7E64424804D25* ___m_UsedAttachTransformByInteractable_77;
	// UnityEngine.Transform[,] UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::m_Grid
	TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* ___m_Grid_78;
};

// UnityEngine.XR.Content.Interaction.XRLockSocketInteractor
struct XRLockSocketInteractor_tC5C5DE68A719BD5CBE374865CED208EBFC319B92  : public XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591
{
	// UnityEngine.XR.Content.Interaction.Lock UnityEngine.XR.Content.Interaction.XRLockSocketInteractor::m_Lock
	Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* ___m_Lock_73;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_110;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_111;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_112;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_113;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_114;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_117;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_118;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_119;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_120;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_121;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_122;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_123;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_124;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_125;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_126;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastSnapVolumeInteraction
	int32_t ___m_RaycastSnapVolumeInteraction_127;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_128;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_129;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_130;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AutoDeselect
	bool ___m_AutoDeselect_131;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TimeToAutoDeselect
	float ___m_TimeToAutoDeselect_132;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_133;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_134;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_135;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_136;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_137;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_138;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_139;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<currentNearestValidTarget>k__BackingField
	RuntimeObject* ___U3CcurrentNearestValidTargetU3Ek__BackingField_140;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_141;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_142;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_143;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeAutoSelected
	float ___m_LastTimeAutoSelected_144;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedTimeToAutoDeselect
	bool ___m_PassedTimeToAutoDeselect_145;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_146;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_147;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_148;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_149;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_150;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_151;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_152;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_153;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_154;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_157;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413* ___m_RegisteredUIInteractorCache_158;
};

struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_105;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_155;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_156;
};

// UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor
struct XRLockGridSocketInteractor_t9B6E3DA9DC45C93487D24AC94FBFF4790012750C  : public XRGridSocketInteractor_t01F91C8982DBD3EF4F7628B88A2D317554CF980B
{
	// UnityEngine.XR.Content.Interaction.Lock UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor::m_Lock
	Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* ___m_Lock_79;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1 (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::InstantiateAndSelectInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_InstantiateAndSelectInteractable_mF0E71416CEEDFA67D64DCCC2713DBC0C97929621 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>()
inline XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::OverrideStartingSelectedInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_OverrideStartingSelectedInteractable_m0CC61BE4FB09C8947FD3DE3404FADCCE36E3FDCA (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::get_isCanceled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectExitEventArgs_get_isCanceled_m4C9FCCB6A51201B8728DAF9BA356BB589A149FF7_inline (SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRInfiniteInteractable_get_active_m083472E89FF3DEFF2714DE4A5940C97AB5AFB0A6_inline (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* Object_Instantiate_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_mD5F842EA80D43738DF2B3FA0C92719A5DBA4FCFC (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* (*) (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::InstantiateInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* XRInfiniteInteractable_InstantiateInteractable_m7F744564CD17105DBEA2A9C8AE3A7C0536363A80 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::set_startingSelectedInteractable(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseInteractor_set_startingSelectedInteractable_m875C82466909DF095E03CE0F3E3376CFF7BF24C9_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_interactionManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::CanHover(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRGridSocketInteractor_CanHover_m44E835860AA06B5422F1858992BB70FA370EBC7F (XRGridSocketInteractor_t01F91C8982DBD3EF4F7628B88A2D317554CF980B* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Content.Interaction.IKeychain>()
inline RuntimeObject* Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.Content.Interaction.Lock::CanUnlock(UnityEngine.XR.Content.Interaction.IKeychain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lock_CanUnlock_m9244FB9E223A75665242ADFBA35806B85E3E8653 (Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* __this, RuntimeObject* ___keychain0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::CanSelect(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRGridSocketInteractor_CanSelect_mA26BCD648EEB99702137827A0742F502A90FC396 (XRGridSocketInteractor_t01F91C8982DBD3EF4F7628B88A2D317554CF980B* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRGridSocketInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGridSocketInteractor__ctor_m189E5C01A95E38DC2E1D30B708C3734BE29D9533 (XRGridSocketInteractor_t01F91C8982DBD3EF4F7628B88A2D317554CF980B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::CanHover(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSocketInteractor_CanHover_mC11E4C207BD6D5C2436146D6730190861E82F460 (XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::CanSelect(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSocketInteractor_CanSelect_mDF980B26B103D799D1D7A775B6F7B7BCAE1753D1 (XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSocketInteractor__ctor_m5976C30C655C920BB7D715E7703471C2695DC48B (XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Content.Interaction.ClawMachine::NoPrizeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClawMachine_NoPrizeState_mB3AD0D849ADB6D91477BEC9CC3E8545B61C76E3D (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoPrizeStateU3Ed__14__ctor_m1A9B012BF5F114892EAB66F8D06A1C7B70C72887 (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGrabPrizeStateU3Ed__15__ctor_mCB9BC9109FAA43D90FF73A0510D0A47A3D9FFCAA (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReleasePrizeStateU3Ed__16__ctor_mDE53F6E89BB4481F1CC76F0B6BEA77404C4D56E0 (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::UpdateClawPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine_UpdateClawPosition_mD2C60C32541C0A7BCB042C852D11885FECD02179 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Content.Interaction.ClawMachine::TryGrabPrizeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClawMachine_TryGrabPrizeState_m723F0A3F97AE50D70E3285D32DEEAC9C2423FAF9 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor::set_socketActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSocketInteractor_set_socketActive_m63F82455B5998A4A68851C3CD6864147E6FDE95A_inline (XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Content.Interaction.ClawMachine::ReleasePrizeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClawMachine_ReleasePrizeState_m2FB8BD21C1209713B0683E2083E43DF0639902B7 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Clear()
inline void List_1_Clear_m07C977650071BA2868766F319367644BB006A29F_inline (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody>::GetEnumerator()
inline Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::Dispose()
inline void Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280 (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::get_Current()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_inline (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::MoveNext()
inline bool Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Add(T)
inline void List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Remove(T)
inline bool List_1_Remove_mE5EB1011929CA6332FA47E6969BE302D3E2B9160 (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::.ctor()
inline void List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025 (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, float ___height0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33 (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::SetValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_SetValue_mB284764EFA6C400041ED91F3C974E0E5EA31C8A8 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::SetHandleAngle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_SetHandleAngle_m37061DB6908DB1FE9A37A1D96D3D6B37A8DB0BD5 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___angles0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C (SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_UpdateValue_m2B7F6BDF686B9C24538A0E3A6B016381668E408C (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, int32_t ___updatePhase0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRJoystick::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRJoystick_GetLookDirection_mFF3C2D9BE6FF761730E4783593166A875521320B (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mB08B11080CE454CBC4CB39B37FD66F817EA51D49 (ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ValueToRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetKnobRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___angle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateBaseKnobRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___freshCheck0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetBaseFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetTargetFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3 (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::get_totalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4E1DA076090EC56955724109B3EE12AA07548016_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF5A9A9AC62D7BAD992CEAB2E5B6A49F5D2B87700_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372 (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ShortestAngleDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ShortestAngleDistance_mF604FBD4790ECAF9C6FAE5D32D609C47899D7104 (float ___start0, float ___end1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetValue(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___isOn0, bool ___forceRotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetHandleAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___angle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___height0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::IsHoverableBy(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_IsHoverableBy_mA746CF4F19A39315495C004ED35EF6AF75AA8429 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19 (HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15 (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, RuntimeObject* ___key0, PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, RuntimeObject*, PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverExitEventArgs_get_interactorObject_m0018175DBF0540C147451C1E11B5EE5DA64CB150 (HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Remove(TKey)
inline bool Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Count()
inline int32_t Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::UpdatePress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Values()
inline ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::GetEnumerator()
inline Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6 (ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB (*) (ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::Dispose()
inline void Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::get_Current()
inline PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_inline (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	return ((  PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::MoveNext()
inline bool Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885 (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m916F9A7A8ACC51F304BB5BB4536854A045EF844B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo>::.ctor()
inline void Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9 (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetSliderPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::UpdateSliderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4 (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInfiniteInteractable_get_active_m083472E89FF3DEFF2714DE4A5940C97AB5AFB0A6 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Active;
		bool L_0 = __this->___m_Active_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::set_active(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_set_active_m59E38F4C9D77CE578775CEA0FAFF7BDBB61D0C18 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// m_Active = value;
		bool L_0 = ___value0;
		__this->___m_Active_4 = L_0;
		// if (enabled && value && !m_Interactor.hasSelection)
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		bool L_2 = ___value0;
		if (!((int32_t)((int32_t)L_1&(int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_3 = __this->___m_Interactor_7;
		NullCheck(L_3);
		bool L_4;
		L_4 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// InstantiateAndSelectInteractable();
		XRInfiniteInteractable_InstantiateAndSelectInteractable_mF0E71416CEEDFA67D64DCCC2713DBC0C97929621(__this, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_Awake_mF2B7736B8AFD0B7C45E6CCF14DFA21F38E14C516 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_Interactor = GetComponent<XRBaseInteractor>();
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0;
		L_0 = Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316(__this, Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316_RuntimeMethod_var);
		__this->___m_Interactor_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_7), (void*)L_0);
		// if (m_OverrideStartingSelectedInteractable)
		bool L_1 = __this->___m_OverrideStartingSelectedInteractable_5;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// OverrideStartingSelectedInteractable();
		XRInfiniteInteractable_OverrideStartingSelectedInteractable_m0CC61BE4FB09C8947FD3DE3404FADCCE36E3FDCA(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_OnEnable_m920CF5EB476F4D8F0859D2399132687FDBC17F07 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInfiniteInteractable_OnSelectExited_mCE18BF9017D5CFDD91DBE2856BFFEC6CFEC0E9F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD59BAAF9BB26A3D7DFEB5313F915B62882A98523);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_InteractablePrefab == null)
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_0 = __this->___m_InteractablePrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.LogWarning("No interactable prefab set - nothing to spawn!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralD59BAAF9BB26A3D7DFEB5313F915B62882A98523, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		goto IL_0044;
	}

IL_0027:
	{
		// m_Interactor.selectExited.AddListener(OnSelectExited);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_3 = __this->___m_Interactor_7;
		NullCheck(L_3);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_4;
		L_4 = XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline(L_3, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_5 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_5, __this, (intptr_t)((void*)XRInfiniteInteractable_OnSelectExited_mCE18BF9017D5CFDD91DBE2856BFFEC6CFEC0E9F7_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_4, L_5, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_OnDisable_m7C21761127030BD9BAD29D4C5C9725F720124CA1 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInfiniteInteractable_OnSelectExited_mCE18BF9017D5CFDD91DBE2856BFFEC6CFEC0E9F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Interactor.selectExited.RemoveListener(OnSelectExited);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___m_Interactor_7;
		NullCheck(L_0);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_1;
		L_1 = XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline(L_0, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_2 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_2, __this, (intptr_t)((void*)XRInfiniteInteractable_OnSelectExited_mCE18BF9017D5CFDD91DBE2856BFFEC6CFEC0E9F7_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_1, L_2, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_OnSelectExited_mCE18BF9017D5CFDD91DBE2856BFFEC6CFEC0E9F7 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___selectExitEventArgs0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (selectExitEventArgs.isCanceled || !active)
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_0 = ___selectExitEventArgs0;
		NullCheck(L_0);
		bool L_1;
		L_1 = SelectExitEventArgs_get_isCanceled_m4C9FCCB6A51201B8728DAF9BA356BB589A149FF7_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2;
		L_2 = XRInfiniteInteractable_get_active_m083472E89FF3DEFF2714DE4A5940C97AB5AFB0A6_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_0022;
	}

IL_001b:
	{
		// InstantiateAndSelectInteractable();
		XRInfiniteInteractable_InstantiateAndSelectInteractable_mF0E71416CEEDFA67D64DCCC2713DBC0C97929621(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::InstantiateInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* XRInfiniteInteractable_InstantiateInteractable_m7F744564CD17105DBEA2A9C8AE3A7C0536363A80 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_mD5F842EA80D43738DF2B3FA0C92719A5DBA4FCFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* V_1 = NULL;
	{
		// var socketTransform = m_Interactor.transform;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___m_Interactor_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_0 = L_1;
		// return Instantiate(m_InteractablePrefab, socketTransform.position, socketTransform.rotation);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_2 = __this->___m_InteractablePrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_7;
		L_7 = Object_Instantiate_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_mD5F842EA80D43738DF2B3FA0C92719A5DBA4FCFC(L_2, L_4, L_6, Object_Instantiate_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_mD5F842EA80D43738DF2B3FA0C92719A5DBA4FCFC_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::OverrideStartingSelectedInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_OverrideStartingSelectedInteractable_m0CC61BE4FB09C8947FD3DE3404FADCCE36E3FDCA (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	{
		// m_Interactor.startingSelectedInteractable = InstantiateInteractable();
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___m_Interactor_7;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_1;
		L_1 = XRInfiniteInteractable_InstantiateInteractable_m7F744564CD17105DBEA2A9C8AE3A7C0536363A80(__this, NULL);
		NullCheck(L_0);
		XRBaseInteractor_set_startingSelectedInteractable_m875C82466909DF095E03CE0F3E3376CFF7BF24C9_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::InstantiateAndSelectInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable_InstantiateAndSelectInteractable_mF0E71416CEEDFA67D64DCCC2713DBC0C97929621 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!gameObject.activeInHierarchy || m_Interactor.interactionManager == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_2 = __this->___m_Interactor_7;
		NullCheck(L_2);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_3;
		L_3 = XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// return;
		goto IL_0045;
	}

IL_0028:
	{
		// m_Interactor.interactionManager.SelectEnter((IXRSelectInteractor)m_Interactor, InstantiateInteractable());
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_6 = __this->___m_Interactor_7;
		NullCheck(L_6);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_7;
		L_7 = XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline(L_6, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_8 = __this->___m_Interactor_7;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_9;
		L_9 = XRInfiniteInteractable_InstantiateInteractable_m7F744564CD17105DBEA2A9C8AE3A7C0536363A80(__this, NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(35 /* System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::SelectEnter(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable) */, L_7, L_8, L_9);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRInfiniteInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInfiniteInteractable__ctor_m1E58787A557EA82DDBCAAE7488AF43E00524F5A0 (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	{
		// bool m_Active = true;
		__this->___m_Active_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.XR.Content.Interaction.Lock UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor::get_keychainLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* XRLockGridSocketInteractor_get_keychainLock_m280D63717C43748B606E9678A78AA4935E7079AF (XRLockGridSocketInteractor_t9B6E3DA9DC45C93487D24AC94FBFF4790012750C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Lock;
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_0 = __this->___m_Lock_79;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor::set_keychainLock(UnityEngine.XR.Content.Interaction.Lock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLockGridSocketInteractor_set_keychainLock_m5F5C82631EBA67BB58431AB22FEFA4B86DB8007A (XRLockGridSocketInteractor_t9B6E3DA9DC45C93487D24AC94FBFF4790012750C* __this, Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Lock = value;
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_0 = ___value0;
		__this->___m_Lock_79 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lock_79), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor::CanHover(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLockGridSocketInteractor_CanHover_mCE393BCC0E406217439CD9F22153B7D50ED421F4 (XRLockGridSocketInteractor_t9B6E3DA9DC45C93487D24AC94FBFF4790012750C* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!base.CanHover(interactable))
		RuntimeObject* L_0 = ___interactable0;
		bool L_1;
		L_1 = XRGridSocketInteractor_CanHover_m44E835860AA06B5422F1858992BB70FA370EBC7F(__this, L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0013:
	{
		// var keyChain = interactable.transform.GetComponent<IKeychain>();
		RuntimeObject* L_3 = ___interactable0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC(L_4, Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		V_0 = L_5;
		// return m_Lock.CanUnlock(keyChain);
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_6 = __this->___m_Lock_79;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Lock_CanUnlock_m9244FB9E223A75665242ADFBA35806B85E3E8653(L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor::CanSelect(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLockGridSocketInteractor_CanSelect_m06E7ACB9EE9AC475C17A4B1DEBD5A8572451A84A (XRLockGridSocketInteractor_t9B6E3DA9DC45C93487D24AC94FBFF4790012750C* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!base.CanSelect(interactable))
		RuntimeObject* L_0 = ___interactable0;
		bool L_1;
		L_1 = XRGridSocketInteractor_CanSelect_mA26BCD648EEB99702137827A0742F502A90FC396(__this, L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0013:
	{
		// var keyChain = interactable.transform.GetComponent<IKeychain>();
		RuntimeObject* L_3 = ___interactable0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC(L_4, Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		V_0 = L_5;
		// return m_Lock.CanUnlock(keyChain);
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_6 = __this->___m_Lock_79;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Lock_CanUnlock_m9244FB9E223A75665242ADFBA35806B85E3E8653(L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLockGridSocketInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLockGridSocketInteractor__ctor_m47D48A60BC57BF8A4704D146C7BF6B92297E881B (XRLockGridSocketInteractor_t9B6E3DA9DC45C93487D24AC94FBFF4790012750C* __this, const RuntimeMethod* method) 
{
	{
		XRGridSocketInteractor__ctor_m189E5C01A95E38DC2E1D30B708C3734BE29D9533(__this, NULL);
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
// UnityEngine.XR.Content.Interaction.Lock UnityEngine.XR.Content.Interaction.XRLockSocketInteractor::get_keychainLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* XRLockSocketInteractor_get_keychainLock_m7D726062140F2CA7B2A5BB4B3FB70A72650D150B (XRLockSocketInteractor_tC5C5DE68A719BD5CBE374865CED208EBFC319B92* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Lock;
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_0 = __this->___m_Lock_73;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLockSocketInteractor::set_keychainLock(UnityEngine.XR.Content.Interaction.Lock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLockSocketInteractor_set_keychainLock_mA4D209117A1314AF6AE1A348303B475D0FE2AA0C (XRLockSocketInteractor_tC5C5DE68A719BD5CBE374865CED208EBFC319B92* __this, Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Lock = value;
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_0 = ___value0;
		__this->___m_Lock_73 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lock_73), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLockSocketInteractor::CanHover(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLockSocketInteractor_CanHover_m8D47C01AFADA7D5AF182AE6E9CF90BE175355850 (XRLockSocketInteractor_tC5C5DE68A719BD5CBE374865CED208EBFC319B92* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!base.CanHover(interactable))
		RuntimeObject* L_0 = ___interactable0;
		bool L_1;
		L_1 = XRSocketInteractor_CanHover_mC11E4C207BD6D5C2436146D6730190861E82F460(__this, L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0013:
	{
		// var keyChain = interactable.transform.GetComponent<IKeychain>();
		RuntimeObject* L_3 = ___interactable0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC(L_4, Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		V_0 = L_5;
		// return m_Lock.CanUnlock(keyChain);
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_6 = __this->___m_Lock_73;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Lock_CanUnlock_m9244FB9E223A75665242ADFBA35806B85E3E8653(L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLockSocketInteractor::CanSelect(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLockSocketInteractor_CanSelect_mC114ED191242DFAE9EBF5057D7D673EF60A91934 (XRLockSocketInteractor_tC5C5DE68A719BD5CBE374865CED208EBFC319B92* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!base.CanSelect(interactable))
		RuntimeObject* L_0 = ___interactable0;
		bool L_1;
		L_1 = XRSocketInteractor_CanSelect_mDF980B26B103D799D1D7A775B6F7B7BCAE1753D1(__this, L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0013:
	{
		// var keyChain = interactable.transform.GetComponent<IKeychain>();
		RuntimeObject* L_3 = ___interactable0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC(L_4, Component_GetComponent_TisIKeychain_tA6FAB978B9E4088BAA3D7ECBDB68D9C5E1351A27_mB8A76FDACE5E007B544E7E21210D7CB6C4E873AC_RuntimeMethod_var);
		V_0 = L_5;
		// return m_Lock.CanUnlock(keyChain);
		Lock_t19E6FD6AF8898D52775D15709ECBE44DE1658B8B* L_6 = __this->___m_Lock_73;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Lock_CanUnlock_m9244FB9E223A75665242ADFBA35806B85E3E8653(L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLockSocketInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLockSocketInteractor__ctor_m31240AC4054B46C3EA989F761486C992FF561766 (XRLockSocketInteractor_tC5C5DE68A719BD5CBE374865CED208EBFC319B92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591_il2cpp_TypeInfo_var);
		XRSocketInteractor__ctor_m5976C30C655C920BB7D715E7703471C2695DC48B(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine_Start_m2F574C559D617EE889D23716B4BD7F281DCB0197 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(NoPrizeState());
		RuntimeObject* L_0;
		L_0 = ClawMachine_NoPrizeState_mB3AD0D849ADB6D91477BEC9CC3E8545B61C76E3D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::UpdateClawPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine_UpdateClawPosition_mD2C60C32541C0A7BCB042C852D11885FECD02179 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, float ___speed0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var clawPosition = m_ClawTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_ClawTransform_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		V_0 = L_1;
		// clawPosition += new Vector3(m_JoystickValue.x * speed * Time.deltaTime, 0f,
		//     m_JoystickValue.y * speed * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___m_JoystickValue_15);
		float L_4 = L_3->___x_0;
		float L_5 = ___speed0;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___m_JoystickValue_15);
		float L_8 = L_7->___y_1;
		float L_9 = ___speed0;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_11, NULL);
		V_0 = L_12;
		// clawPosition.x = Mathf.Clamp(clawPosition.x, m_MinClawPosition.x, m_MaxClawPosition.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___m_MinClawPosition_10);
		float L_16 = L_15->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___m_MaxClawPosition_11);
		float L_18 = L_17->___x_0;
		float L_19;
		L_19 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_14, L_16, L_18, NULL);
		(&V_0)->___x_2 = L_19;
		// clawPosition.z = Mathf.Clamp(clawPosition.z, m_MinClawPosition.y, m_MaxClawPosition.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		float L_21 = L_20.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___m_MinClawPosition_10);
		float L_23 = L_22->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___m_MaxClawPosition_11);
		float L_25 = L_24->___y_1;
		float L_26;
		L_26 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_21, L_23, L_25, NULL);
		(&V_0)->___z_4 = L_26;
		// m_ClawTransform.localPosition = clawPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___m_ClawTransform_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		NullCheck(L_27);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Content.Interaction.ClawMachine::NoPrizeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClawMachine_NoPrizeState_mB3AD0D849ADB6D91477BEC9CC3E8545B61C76E3D (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* L_0 = (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F*)il2cpp_codegen_object_new(U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNoPrizeStateU3Ed__14__ctor_m1A9B012BF5F114892EAB66F8D06A1C7B70C72887(L_0, 0, NULL);
		U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Content.Interaction.ClawMachine::TryGrabPrizeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClawMachine_TryGrabPrizeState_m723F0A3F97AE50D70E3285D32DEEAC9C2423FAF9 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* L_0 = (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82*)il2cpp_codegen_object_new(U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTryGrabPrizeStateU3Ed__15__ctor_mCB9BC9109FAA43D90FF73A0510D0A47A3D9FFCAA(L_0, 0, NULL);
		U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Content.Interaction.ClawMachine::ReleasePrizeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClawMachine_ReleasePrizeState_m2FB8BD21C1209713B0683E2083E43DF0639902B7 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* L_0 = (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4*)il2cpp_codegen_object_new(U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReleasePrizeStateU3Ed__16__ctor_mDE53F6E89BB4481F1CC76F0B6BEA77404C4D56E0(L_0, 0, NULL);
		U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::OnButtonPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine_OnButtonPress_mAA3CB48AF6F18B4549C112225A4E832D07DEA8D5 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) 
{
	{
		// m_ButtonPressed = true;
		__this->___m_ButtonPressed_14 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::OnButtonRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine_OnButtonRelease_m1B5E2A787C8045436C830B98B4CFE62B87F7796B (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) 
{
	{
		// m_ButtonPressed = false;
		__this->___m_ButtonPressed_14 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::OnJoystickValueChangeX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine_OnJoystickValueChangeX_mB742F29087C805FD0D36F4D80765CA1C218C6947 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		// m_JoystickValue.x = x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___m_JoystickValue_15);
		float L_1 = ___x0;
		L_0->___x_0 = L_1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::OnJoystickValueChangeY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine_OnJoystickValueChangeY_mCF3D3F349A2B6722E574E23E704874C6449359F2 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, float ___y0, const RuntimeMethod* method) 
{
	{
		// m_JoystickValue.y = y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___m_JoystickValue_15);
		float L_1 = ___y0;
		L_0->___y_1 = L_1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClawMachine__ctor_mE2B0BBD9D688B3FDCB14EC5D1A423221E1EF7F96 (ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoPrizeStateU3Ed__14__ctor_m1A9B012BF5F114892EAB66F8D06A1C7B70C72887 (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoPrizeStateU3Ed__14_System_IDisposable_Dispose_m2BCD75313FDCA76CB17CDFEB104E02EA50A5F78D (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNoPrizeStateU3Ed__14_MoveNext_mB903A68E97504F10696C45570B3DC8AE684531F4 (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0052;
	}

IL_0022:
	{
		// UpdateClawPosition(m_ClawWithoutPrizeSpeed);
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_3 = __this->___U3CU3E4__this_2;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		float L_5 = L_4->___m_ClawWithoutPrizeSpeed_7;
		NullCheck(L_3);
		ClawMachine_UpdateClawPosition_mD2C60C32541C0A7BCB042C852D11885FECD02179(L_3, L_5, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0052:
	{
		// while (!m_ButtonPressed)
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		bool L_7 = L_6->___m_ButtonPressed_14;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0022;
		}
	}
	{
		// StartCoroutine(TryGrabPrizeState());
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_9 = __this->___U3CU3E4__this_2;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ClawMachine_TryGrabPrizeState_m723F0A3F97AE50D70E3285D32DEEAC9C2423FAF9(L_10, NULL);
		NullCheck(L_9);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_9, L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNoPrizeStateU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAAF68A8436990EC2887A61D1ED076C1CC76A9DC2 (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoPrizeStateU3Ed__14_System_Collections_IEnumerator_Reset_mBD779F5ECF71D40A6552C8A6B4B51D5B78CF4704 (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNoPrizeStateU3Ed__14_System_Collections_IEnumerator_Reset_mBD779F5ECF71D40A6552C8A6B4B51D5B78CF4704_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<NoPrizeState>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNoPrizeStateU3Ed__14_System_Collections_IEnumerator_get_Current_mDCD27D932DE60E6321E671FB64FBB748D982F2E5 (U3CNoPrizeStateU3Ed__14_t82A1FA30C2E84D36AFAA8CA3C1BEBB5ADE9B4E1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGrabPrizeStateU3Ed__15__ctor_mCB9BC9109FAA43D90FF73A0510D0A47A3D9FFCAA (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGrabPrizeStateU3Ed__15_System_IDisposable_Dispose_m3328163F9FC89B310E1237BC4FE7422452401ED6 (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryGrabPrizeStateU3Ed__15_MoveNext_m1E034A28DA13D61C23F45BA4E7C8D555B0ECC1A4 (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0090;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_SparkliesParticle.Play();
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = L_3->___m_SparkliesParticle_12;
		NullCheck(L_4);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_4, NULL);
		// m_UfoBeamParticle.Play();
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = L_5->___m_UfoBeamParticle_13;
		NullCheck(L_6);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_6, NULL);
		// m_ClawSocket.socketActive = true;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* L_8 = L_7->___m_ClawSocket_5;
		NullCheck(L_8);
		XRSocketInteractor_set_socketActive_m63F82455B5998A4A68851C3CD6864147E6FDE95A_inline(L_8, (bool)1, NULL);
		// m_UfoAbductionForce.enabled = true;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* L_10 = L_9->___m_UfoAbductionForce_6;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		goto IL_0098;
	}

IL_0068:
	{
		// UpdateClawPosition(m_ClawAbductionSpeed);
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_11 = __this->___U3CU3E4__this_2;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		float L_13 = L_12->___m_ClawAbductionSpeed_9;
		NullCheck(L_11);
		ClawMachine_UpdateClawPosition_mD2C60C32541C0A7BCB042C852D11885FECD02179(L_11, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0098:
	{
		// while (m_ButtonPressed && !m_ClawSocket.hasSelection)
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		bool L_15 = L_14->___m_ButtonPressed_14;
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* L_17 = L_16->___m_ClawSocket_5;
		NullCheck(L_17);
		bool L_18;
		L_18 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_17, NULL);
		G_B13_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B13_0 = 0;
	}

IL_00bb:
	{
		V_1 = (bool)G_B13_0;
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_0068;
		}
	}
	{
		// m_UfoAbductionForce.enabled = false;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* L_21 = L_20->___m_UfoAbductionForce_6;
		NullCheck(L_21);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)0, NULL);
		// m_SparkliesParticle.Stop();
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23 = L_22->___m_SparkliesParticle_12;
		NullCheck(L_23);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_23, NULL);
		// StartCoroutine(ReleasePrizeState());
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_24 = __this->___U3CU3E4__this_2;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_25 = __this->___U3CU3E4__this_2;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = ClawMachine_ReleasePrizeState_m2FB8BD21C1209713B0683E2083E43DF0639902B7(L_25, NULL);
		NullCheck(L_24);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_27;
		L_27 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_24, L_26, NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryGrabPrizeStateU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9C247830712E16CD0FBD76F247AFC40667BA4AE8 (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGrabPrizeStateU3Ed__15_System_Collections_IEnumerator_Reset_mA56C6533DA384420DB30E26E96B59FCB482FB5B2 (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryGrabPrizeStateU3Ed__15_System_Collections_IEnumerator_Reset_mA56C6533DA384420DB30E26E96B59FCB482FB5B2_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<TryGrabPrizeState>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryGrabPrizeStateU3Ed__15_System_Collections_IEnumerator_get_Current_m613099D661F2EFC9DC235E782B0E35D1E43A8A0A (U3CTryGrabPrizeStateU3Ed__15_t5551054DB528D2A6B4CF056CDBEFE88B6940CE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReleasePrizeStateU3Ed__16__ctor_mDE53F6E89BB4481F1CC76F0B6BEA77404C4D56E0 (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReleasePrizeStateU3Ed__16_System_IDisposable_Dispose_m5B71E1A9777A267254C70A470CF2DC7F1C7C4EE5 (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReleasePrizeStateU3Ed__16_MoveNext_m44344AA20ECBE1D36F21A529698ED79C96864E7C (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0052;
	}

IL_0022:
	{
		// UpdateClawPosition(m_ClawWithPrizeSpeed);
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_3 = __this->___U3CU3E4__this_2;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		float L_5 = L_4->___m_ClawWithPrizeSpeed_8;
		NullCheck(L_3);
		ClawMachine_UpdateClawPosition_mD2C60C32541C0A7BCB042C852D11885FECD02179(L_3, L_5, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0052:
	{
		// while (m_ButtonPressed)
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		bool L_7 = L_6->___m_ButtonPressed_14;
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0022;
		}
	}
	{
		// m_ClawSocket.socketActive = false;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* L_10 = L_9->___m_ClawSocket_5;
		NullCheck(L_10);
		XRSocketInteractor_set_socketActive_m63F82455B5998A4A68851C3CD6864147E6FDE95A_inline(L_10, (bool)0, NULL);
		// m_UfoBeamParticle.Stop();
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = L_11->___m_UfoBeamParticle_13;
		NullCheck(L_12);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_12, NULL);
		// StartCoroutine(NoPrizeState());
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_13 = __this->___U3CU3E4__this_2;
		ClawMachine_tBDB20B548A0AE336510701F4C850F1B7ABDB1356* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ClawMachine_NoPrizeState_mB3AD0D849ADB6D91477BEC9CC3E8545B61C76E3D(L_14, NULL);
		NullCheck(L_13);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_13, L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReleasePrizeStateU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CE3C1E404AB3D75C6FF57AC00B7AEC842623AC4 (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReleasePrizeStateU3Ed__16_System_Collections_IEnumerator_Reset_m4E2F6460D4AC757B0A9152AAFA7C6AF64382D157 (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReleasePrizeStateU3Ed__16_System_Collections_IEnumerator_Reset_m4E2F6460D4AC757B0A9152AAFA7C6AF64382D157_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.Content.Interaction.ClawMachine/<ReleasePrizeState>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReleasePrizeStateU3Ed__16_System_Collections_IEnumerator_get_Current_mEE42DEC22398F79173141DEED9389EF3BA6E0B53 (U3CReleasePrizeStateU3Ed__16_tB684EC455FF6709FF6520E63389D68610A60B6B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void UnityEngine.XR.Content.Interaction.FlippyDoor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlippyDoor_Update_mE19A1F46A97CC7815067396202CCC4BEDD59EDA2 (FlippyDoor_t2F162685F41C0F3D0EAA09707FAB894DA281CA8C* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// var eulerAngles = m_Transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Transform_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		V_0 = L_1;
		// var desiredAngle = m_Count > 0 ? 90f : 0f;
		int32_t L_2 = __this->___m_Count_5;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0022;
	}

IL_001d:
	{
		G_B3_0 = (90.0f);
	}

IL_0022:
	{
		V_1 = G_B3_0;
		// eulerAngles.x = Mathf.LerpAngle(eulerAngles.x, desiredAngle, Time.deltaTime * 4f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		float L_5 = V_1;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_7;
		L_7 = Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, (4.0f))), NULL);
		(&V_0)->___x_2 = L_7;
		// m_Transform.eulerAngles = eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_Transform_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.FlippyDoor::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlippyDoor_OnTriggerEnter_m8E73E43BFA0F6A3E89088DC8C9D31811EDB920C4 (FlippyDoor_t2F162685F41C0F3D0EAA09707FAB894DA281CA8C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// m_Count++;
		int32_t L_0 = __this->___m_Count_5;
		__this->___m_Count_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.FlippyDoor::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlippyDoor_OnTriggerExit_m5F1311B34317A942654BBD0F2AD0345D654F8203 (FlippyDoor_t2F162685F41C0F3D0EAA09707FAB894DA281CA8C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// m_Count--;
		int32_t L_0 = __this->___m_Count_5;
		__this->___m_Count_5 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.FlippyDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlippyDoor__ctor_mD4C61E7F65D019CB41F20BD1E927A4A7069C3262 (FlippyDoor_t2F162685F41C0F3D0EAA09707FAB894DA281CA8C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce_Awake_m08726D02FED900D4574E46BEE68EC43750BF5F76 (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, const RuntimeMethod* method) 
{
	{
		// m_Trigger.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___m_Trigger_6;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce_OnEnable_mF6B5F5BFE8321D98291467880F8796CD966B4FCD (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, const RuntimeMethod* method) 
{
	{
		// m_Trigger.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___m_Trigger_6;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce_OnDisable_m553375E2144FE523AB2CF97D287EC40E6508D9FE (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m07C977650071BA2868766F319367644BB006A29F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Trigger.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___m_Trigger_6;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, (bool)0, NULL);
		// m_Rigidbodies.Clear();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_1 = __this->___m_Rigidbodies_8;
		NullCheck(L_1);
		List_1_Clear_m07C977650071BA2868766F319367644BB006A29F_inline(L_1, List_1_Clear_m07C977650071BA2868766F319367644BB006A29F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce_FixedUpdate_m3CBC5C901260A7F8FC7FD95CBE5EE0350FD1CF16 (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_3 = NULL;
	{
		// var deltaForce = m_MaxForceMagnitude - m_MinForceMagnitude;
		float L_0 = __this->___m_MaxForceMagnitude_5;
		float L_1 = __this->___m_MinForceMagnitude_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// var force = transform.up * (m_MinForceMagnitude + deltaForce * m_ButtonValue);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		float L_4 = __this->___m_MinForceMagnitude_4;
		float L_5 = V_0;
		float L_6 = __this->___m_ButtonValue_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)))), NULL);
		V_1 = L_7;
		// foreach (var rigidbody in m_Rigidbodies)
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_8 = __this->___m_Rigidbodies_8;
		NullCheck(L_8);
		Enumerator_tBCCFDD88A8829D356C04401970D47F72C0DDE842 L_9;
		L_9 = List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE(L_8, List_1_GetEnumerator_mCC0586D4E8BFC53C6DC7C0EC51807A6EC0C471BE_RuntimeMethod_var);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280((&V_2), Enumerator_Dispose_m3B62AD039A11BDA3C9140A67B3F38E869492B280_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_003e_1:
			{
				// foreach (var rigidbody in m_Rigidbodies)
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
				L_10 = Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_inline((&V_2), Enumerator_get_Current_mB522A37542943714D1AD1A0A5E1421F587A6D000_RuntimeMethod_var);
				V_3 = L_10;
				// rigidbody.AddForce(force, ForceMode.Acceleration);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
				NullCheck(L_11);
				Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_11, L_12, 5, NULL);
			}

IL_004f_1:
			{
				// foreach (var rigidbody in m_Rigidbodies)
				bool L_13;
				L_13 = Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A((&V_2), Enumerator_MoveNext_m5A4644C9C797A794B5707DFF60547FC580FEAE2A_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce_OnTriggerEnter_m51662A029B14BE1C36562F81D1CF8783C43B1862 (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	bool V_1 = false;
	{
		// var otherRigidbody = other.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_0, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_0 = L_1;
		// if (otherRigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// m_Rigidbodies.Add(otherRigidbody);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_5 = __this->___m_Rigidbodies_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline(L_5, L_6, List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce_OnTriggerExit_m95C9D9689F892DBDAD92BAB81E596EE6B2FCD956 (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE5EB1011929CA6332FA47E6969BE302D3E2B9160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	bool V_1 = false;
	{
		// var otherRigidbody = other.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_0, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_0 = L_1;
		// if (otherRigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// m_Rigidbodies.Remove(otherRigidbody);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_5 = __this->___m_Rigidbodies_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_mE5EB1011929CA6332FA47E6969BE302D3E2B9160(L_5, L_6, List_1_Remove_mE5EB1011929CA6332FA47E6969BE302D3E2B9160_RuntimeMethod_var);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::OnButtonValueChange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce_OnButtonValueChange_m27F80EE5C2FBBCBC735A2E1F7832E31CEDDD8FD4 (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_ButtonValue = value;
		float L_0 = ___value0;
		__this->___m_ButtonValue_7 = L_0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.UfoAbductionForce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UfoAbductionForce__ctor_m0C7D520C49B62BE556E3672163BA37A2EB98BE2E (UfoAbductionForce_t9E138B0A4B9E10B4106551172FA850F66E4227DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<Rigidbody> m_Rigidbodies = new List<Rigidbody>();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_0 = (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*)il2cpp_codegen_object_new(List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025(L_0, List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		__this->___m_Rigidbodies_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbodies_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRGripButton::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRGripButton_get_button_mBF34577C4B3EAB498C1FC5BB648C3BB5E0A79BBB (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Button;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::set_button(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_set_button_mDF8CFDA4901963F6DF9FC18BA09E0D771117E21E (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Button = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Button_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_61), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRGripButton::get_pressDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRGripButton_get_pressDistance_m7EB930B3116D7920640C3B5363244505A1D93A1D (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PressDistance;
		float L_0 = __this->___m_PressDistance_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::set_pressDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_set_pressDistance_mEDFFF963D0BB298DA4F581520A99CCC74C412735 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PressDistance = value;
		float L_0 = ___value0;
		__this->___m_PressDistance_62 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRGripButton::get_onPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRGripButton_get_onPress_m9845FC36DFC45CE57A4F25EE104B48F0D6CC6D6D (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onPress => m_OnPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnPress_64;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRGripButton::get_onRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRGripButton_get_onRelease_mE52F945FE2E106C49B30F37BF401A01ED8CBE9DA (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onRelease => m_OnRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnRelease_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_Start_m69EA12E1EC14734B9E01FAA100DD5144AB7982BF (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	{
		// SetButtonHeight(0.0f);
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_OnEnable_mC24BF0836EEC69F6D5FA449B35CC647876D8EE2A (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_EndHover_mC3ACC7271E762790374D6C8342DC8D87653D4E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_EndPress_m649D6A90E63F33BCEEDA64ECE9E27A4B3238522D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_StartHover_m8ECF94E94EE58BA78025C8FE693351D488C787D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_StartPress_mC0A34BF8BDA0119A0F3E81F39356AD4C8F0E1BE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_StartTogglePress_m6556F01991CCE06586856DC0DAC1BF277B8F8867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// if (m_ToggleButton)
		bool L_0 = __this->___m_ToggleButton_63;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// selectEntered.AddListener(StartTogglePress);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_2;
		L_2 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_3 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_3, __this, (intptr_t)((void*)XRGripButton_StartTogglePress_m6556F01991CCE06586856DC0DAC1BF277B8F8867_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_2, L_3, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		goto IL_008e;
	}

IL_002c:
	{
		// selectEntered.AddListener(StartPress);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
		L_4 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)XRGripButton_StartPress_mC0A34BF8BDA0119A0F3E81F39356AD4C8F0E1BE8_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_4, L_5, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndPress);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_7 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_7, __this, (intptr_t)((void*)XRGripButton_EndPress_m649D6A90E63F33BCEEDA64ECE9E27A4B3238522D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_6, L_7, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// hoverEntered.AddListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_8;
		L_8 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_9 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_9, __this, (intptr_t)((void*)XRGripButton_StartHover_m8ECF94E94EE58BA78025C8FE693351D488C787D4_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_8, L_9, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// hoverExited.AddListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_10;
		L_10 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_11 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_11, __this, (intptr_t)((void*)XRGripButton_EndHover_mC3ACC7271E762790374D6C8342DC8D87653D4E87_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_10, L_11, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_OnDisable_mFDA62F5E126E5CC84BF0B882632800706B677160 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_EndHover_mC3ACC7271E762790374D6C8342DC8D87653D4E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_EndPress_m649D6A90E63F33BCEEDA64ECE9E27A4B3238522D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_StartHover_m8ECF94E94EE58BA78025C8FE693351D488C787D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_StartPress_mC0A34BF8BDA0119A0F3E81F39356AD4C8F0E1BE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGripButton_StartTogglePress_m6556F01991CCE06586856DC0DAC1BF277B8F8867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_ToggleButton)
		bool L_0 = __this->___m_ToggleButton_63;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// selectEntered.RemoveListener(StartTogglePress);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_2;
		L_2 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_3 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_3, __this, (intptr_t)((void*)XRGripButton_StartTogglePress_m6556F01991CCE06586856DC0DAC1BF277B8F8867_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_2, L_3, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		goto IL_008e;
	}

IL_0025:
	{
		// selectEntered.RemoveListener(StartPress);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
		L_4 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)XRGripButton_StartPress_mC0A34BF8BDA0119A0F3E81F39356AD4C8F0E1BE8_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_4, L_5, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndPress);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_7 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_7, __this, (intptr_t)((void*)XRGripButton_EndPress_m649D6A90E63F33BCEEDA64ECE9E27A4B3238522D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_6, L_7, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// hoverEntered.RemoveListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_8;
		L_8 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_9 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_9, __this, (intptr_t)((void*)XRGripButton_StartHover_m8ECF94E94EE58BA78025C8FE693351D488C787D4_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_8, L_9, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// hoverExited.RemoveListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_10;
		L_10 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_11 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_11, __this, (intptr_t)((void*)XRGripButton_EndHover_mC3ACC7271E762790374D6C8342DC8D87653D4E87_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_10, L_11, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::StartTogglePress(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_StartTogglePress_m6556F01991CCE06586856DC0DAC1BF277B8F8867 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// m_Toggled = !m_Toggled;
		bool L_0 = __this->___m_Toggled_68;
		__this->___m_Toggled_68 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (m_Toggled)
		bool L_1 = __this->___m_Toggled_68;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_3 = __this->___m_PressDistance_62;
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, ((-L_3)), NULL);
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___m_OnPress_64;
		NullCheck(L_4);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
		goto IL_0052;
	}

IL_0038:
	{
		// SetButtonHeight(0.0f);
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, (0.0f), NULL);
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = __this->___m_OnRelease_65;
		NullCheck(L_5);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_5, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::StartPress(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_StartPress_mC0A34BF8BDA0119A0F3E81F39356AD4C8F0E1BE8 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// SetButtonHeight(-m_PressDistance);
		float L_0 = __this->___m_PressDistance_62;
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, ((-L_0)), NULL);
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___m_OnPress_64;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// m_Selected = true;
		__this->___m_Selected_67 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::EndPress(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_EndPress_m649D6A90E63F33BCEEDA64ECE9E27A4B3238522D (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (m_Hovered)
		bool L_0 = __this->___m_Hovered_66;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___m_OnRelease_65;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
	}

IL_0017:
	{
		// SetButtonHeight(0.0f);
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, (0.0f), NULL);
		// m_Selected = false;
		__this->___m_Selected_67 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::StartHover(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_StartHover_m8ECF94E94EE58BA78025C8FE693351D488C787D4 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* ___args0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// m_Hovered = true;
		__this->___m_Hovered_66 = (bool)1;
		// if (m_Selected)
		bool L_0 = __this->___m_Selected_67;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_2 = __this->___m_PressDistance_62;
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, ((-L_2)), NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::EndHover(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_EndHover_mC3ACC7271E762790374D6C8342DC8D87653D4E87 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Hovered = false;
		__this->___m_Hovered_66 = (bool)0;
		// SetButtonHeight(0.0f);
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, float ___height0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (m_Button == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0013:
	{
		// Vector3 newPosition = m_Button.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Button_61;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// newPosition.y = height;
		float L_5 = ___height0;
		(&V_0)->___y_3 = L_5;
		// m_Button.localPosition = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_Button_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_OnDrawGizmosSelected_m9C65DB782CECCCD4B8FAA14964C9F6796D8856E5 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// var pressStartPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// var pressDownDirection = -transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_3, NULL);
		V_1 = L_4;
		// if (m_Button != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// pressStartPoint = m_Button.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_Button_61;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_0 = L_9;
		// pressDownDirection = -m_Button.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_Button_61;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_11, NULL);
		V_1 = L_12;
	}

IL_004d:
	{
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_13, NULL);
		// Gizmos.DrawLine(pressStartPoint, pressStartPoint + (pressDownDirection * m_PressDistance));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17 = __this->___m_PressDistance_62;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_18, NULL);
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_14, L_19, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton_OnValidate_m38161AE88D3C6CCEB6669EEEBAB18CE6BEDBB085 (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	{
		// SetButtonHeight(0.0f);
		XRGripButton_SetButtonHeight_mC57E4E8BFCD99C5B1605D0EC031F22E6D49538F7(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRGripButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGripButton__ctor_mC7E2CFC5EFA6C35F61F1041245AD5562FDE1AC6D (XRGripButton_t7FC0D0AA5D322E41AC52CF70E13DE5DE9E71B9A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Button = null;
		__this->___m_Button_61 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_61), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// float m_PressDistance = 0.1f;
		__this->___m_PressDistance_62 = (0.100000001f);
		// bool m_ToggleButton = false;
		__this->___m_ToggleButton_63 = (bool)0;
		// bool m_Hovered = false;
		__this->___m_Hovered_66 = (bool)0;
		// bool m_Selected = false;
		__this->___m_Selected_67 = (bool)0;
		// bool m_Toggled = false;
		__this->___m_Toggled_68 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// UnityEngine.XR.Content.Interaction.XRJoystick/JoystickType UnityEngine.XR.Content.Interaction.XRJoystick::get_joystickMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRJoystick_get_joystickMotion_m6FEC2FFE45B8466667446BC855A517E6D5A185D4 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_JoystickMotion;
		int32_t L_0 = __this->___m_JoystickMotion_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::set_joystickMotion(UnityEngine.XR.Content.Interaction.XRJoystick/JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_set_joystickMotion_m5880F481E08970E2A9EE2E634C4B54B21838689D (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_JoystickMotion = value;
		int32_t L_0 = ___value0;
		__this->___m_JoystickMotion_62 = L_0;
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRJoystick::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRJoystick_get_handle_mC4C179A939C7B9F8FBC3500A6C450FF2E7F3AA54 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Handle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_63;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::set_handle(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_set_handle_m355B1D446D489D626AB0C20D7AFBB008EA3CA176 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Handle = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Handle_63 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_63), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.XR.Content.Interaction.XRJoystick::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRJoystick_get_value_mF6B99BDFFE99CB871F44A34088D4839A6DD2805F (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Value_64;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::set_value(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_set_value_mC0F9A15F1C72D2679D1382D399E94A99C3E5206E (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!m_RecenterOnRelease)
		bool L_0 = __this->___m_RecenterOnRelease_65;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// SetValue(value);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___value0;
		XRJoystick_SetValue_mB284764EFA6C400041ED91F3C974E0E5EA31C8A8(__this, L_2, NULL);
		// SetHandleAngle(value * m_MaxAngle);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___value0;
		float L_4 = __this->___m_MaxAngle_66;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, L_4, NULL);
		XRJoystick_SetHandleAngle_m37061DB6908DB1FE9A37A1D96D3D6B37A8DB0BD5(__this, L_5, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRJoystick::get_recenterOnRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRJoystick_get_recenterOnRelease_mB6E9D7F6333F73E0379B68EE7016A0520D3C895F (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RecenterOnRelease;
		bool L_0 = __this->___m_RecenterOnRelease_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::set_recenterOnRelease(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_set_recenterOnRelease_mFA13FB0BC6DC346EF8D91946479D146B14E8EAE9 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RecenterOnRelease = value;
		bool L_0 = ___value0;
		__this->___m_RecenterOnRelease_65 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRJoystick::get_maxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRJoystick_get_maxAngle_mEF033BCEA3461F8FB8DA71EB742199207C6E6374 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxAngle;
		float L_0 = __this->___m_MaxAngle_66;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::set_maxAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_set_maxAngle_m2564DCEB284CA27C60D4F3F1F71141594677A11E (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxAngle = value;
		float L_0 = ___value0;
		__this->___m_MaxAngle_66 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRJoystick::get_deadZoneAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRJoystick_get_deadZoneAngle_m5C1C5F0D1B6DBB5C31C171632250CAD0739FB50A (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DeadZoneAngle;
		float L_0 = __this->___m_DeadZoneAngle_67;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::set_deadZoneAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_set_deadZoneAngle_mC11BE146E388F9BF471A02D4EE95C48855638E10 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DeadZoneAngle = value;
		float L_0 = ___value0;
		__this->___m_DeadZoneAngle_67 = L_0;
		return;
	}
}
// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRJoystick::get_onValueChangeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* XRJoystick_get_onValueChangeX_m98E08619BE593461E5686B5B58BD38683B327BFE (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChangeX => m_OnValueChangeX;
		ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* L_0 = __this->___m_OnValueChangeX_68;
		return L_0;
	}
}
// UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRJoystick::get_onValueChangeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* XRJoystick_get_onValueChangeY_m4A543D45D3F9E9BEF16E5D82825370B0A79E1BA6 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChangeY => m_OnValueChangeY;
		ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* L_0 = __this->___m_OnValueChangeY_69;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_Start_m6A9A14469BDF82F2B92C565603C4A29789807664 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (m_RecenterOnRelease)
		bool L_0 = __this->___m_RecenterOnRelease_65;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// SetHandleAngle(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		XRJoystick_SetHandleAngle_m37061DB6908DB1FE9A37A1D96D3D6B37A8DB0BD5(__this, L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_OnEnable_mC1B079D629AD48AC7D7C028BD49409BF795C2931 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_EndGrab_m0A67A012DA30073E634B0A4CBA554F906AE9BD36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_StartGrab_mBF2838EAA577F87FE45DAFD41CC95A0E2F233E55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRJoystick_StartGrab_mBF2838EAA577F87FE45DAFD41CC95A0E2F233E55_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRJoystick_EndGrab_m0A67A012DA30073E634B0A4CBA554F906AE9BD36_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_OnDisable_m1BD84AAF8F50961316020F685D74BA2F4714F2F8 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_EndGrab_m0A67A012DA30073E634B0A4CBA554F906AE9BD36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_StartGrab_mBF2838EAA577F87FE45DAFD41CC95A0E2F233E55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRJoystick_StartGrab_mBF2838EAA577F87FE45DAFD41CC95A0E2F233E55_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRJoystick_EndGrab_m0A67A012DA30073E634B0A4CBA554F906AE9BD36_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_StartGrab_mBF2838EAA577F87FE45DAFD41CC95A0E2F233E55 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_70 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_70), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_EndGrab_m0A67A012DA30073E634B0A4CBA554F906AE9BD36 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___arts0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// UpdateValue();
		XRJoystick_UpdateValue_m2B7F6BDF686B9C24538A0E3A6B016381668E408C(__this, NULL);
		// if (m_RecenterOnRelease)
		bool L_0 = __this->___m_RecenterOnRelease_65;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// SetHandleAngle(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		XRJoystick_SetHandleAngle_m37061DB6908DB1FE9A37A1D96D3D6B37A8DB0BD5(__this, L_2, NULL);
		// SetValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		XRJoystick_SetValue_mB284764EFA6C400041ED91F3C974E0E5EA31C8A8(__this, L_3, NULL);
	}

IL_002c:
	{
		// m_Interactor = null;
		__this->___m_Interactor_70 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_70), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_ProcessInteractable_m0C0E66B407A85A0999E945483FA90676199F89AA (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (isSelected)
		bool L_3;
		L_3 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// UpdateValue();
		XRJoystick_UpdateValue_m2B7F6BDF686B9C24538A0E3A6B016381668E408C(__this, NULL);
	}

IL_0025:
	{
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRJoystick::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRJoystick_GetLookDirection_mFF3C2D9BE6FF761730E4783593166A875521320B (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 direction = m_Interactor.GetAttachTransform(this).position - m_Handle.position;
		RuntimeObject* L_0 = __this->___m_Interactor_70;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0, __this);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_63;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// direction = transform.InverseTransformDirection(direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_6, L_7, NULL);
		V_0 = L_8;
		// switch (m_JoystickMotion)
		int32_t L_9 = __this->___m_JoystickMotion_62;
		V_2 = L_9;
		int32_t L_10 = V_2;
		V_1 = L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_003f;
	}

IL_003f:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0061;
	}

IL_0045:
	{
		// direction.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// break;
		goto IL_0061;
	}

IL_0053:
	{
		// direction.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// break;
		goto IL_0061;
	}

IL_0061:
	{
		// direction.y = Mathf.Clamp(direction.y, 0.01f, 1.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___y_3;
		float L_15;
		L_15 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_14, (0.00999999978f), (1.0f), NULL);
		(&V_0)->___y_3 = L_15;
		// return direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		V_3 = L_16;
		goto IL_0087;
	}

IL_0087:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		return L_17;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_UpdateValue_m2B7F6BDF686B9C24538A0E3A6B016381668E408C (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	{
		// var lookDirection = GetLookDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = XRJoystick_GetLookDirection_mFF3C2D9BE6FF761730E4783593166A875521320B(__this, NULL);
		V_0 = L_0;
		// var upDownAngle = Mathf.Atan2(lookDirection.z, lookDirection.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		float L_2 = L_1.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = atan2f(L_2, L_4);
		V_1 = ((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		// var leftRightAngle = Mathf.Atan2(lookDirection.x, lookDirection.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = atan2f(L_7, L_9);
		V_2 = ((float)il2cpp_codegen_multiply(L_10, (57.2957802f)));
		// var signX = Mathf.Sign(leftRightAngle);
		float L_11 = V_2;
		float L_12;
		L_12 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_11, NULL);
		V_3 = L_12;
		// var signY = Mathf.Sign(upDownAngle);
		float L_13 = V_1;
		float L_14;
		L_14 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_13, NULL);
		V_4 = L_14;
		// upDownAngle = Mathf.Abs(upDownAngle);
		float L_15 = V_1;
		float L_16;
		L_16 = fabsf(L_15);
		V_1 = L_16;
		// leftRightAngle = Mathf.Abs(leftRightAngle);
		float L_17 = V_2;
		float L_18;
		L_18 = fabsf(L_17);
		V_2 = L_18;
		// var stickValue = new Vector2(leftRightAngle, upDownAngle) * (1.0f / m_MaxAngle);
		float L_19 = V_2;
		float L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_19, L_20, /*hidden argument*/NULL);
		float L_22 = __this->___m_MaxAngle_66;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_21, ((float)((1.0f)/L_22)), NULL);
		V_5 = L_23;
		// if (m_JoystickMotion != JoystickType.BothCircle)
		int32_t L_24 = __this->___m_JoystickMotion_62;
		V_8 = (bool)((!(((uint32_t)L_24) <= ((uint32_t)0)))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		// stickValue.x = Mathf.Clamp01(stickValue.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_5;
		float L_27 = L_26.___x_0;
		float L_28;
		L_28 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_27, NULL);
		(&V_5)->___x_0 = L_28;
		// stickValue.y = Mathf.Clamp01(stickValue.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_5;
		float L_30 = L_29.___y_1;
		float L_31;
		L_31 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_30, NULL);
		(&V_5)->___y_1 = L_31;
		goto IL_00c8;
	}

IL_00a8:
	{
		// if (stickValue.magnitude > 1.0f)
		float L_32;
		L_32 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		V_9 = (bool)((((float)L_32) > ((float)(1.0f)))? 1 : 0);
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_00c7;
		}
	}
	{
		// stickValue.Normalize();
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_5), NULL);
	}

IL_00c7:
	{
	}

IL_00c8:
	{
		// leftRightAngle = stickValue.x * signX * m_MaxAngle;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_5;
		float L_35 = L_34.___x_0;
		float L_36 = V_3;
		float L_37 = __this->___m_MaxAngle_66;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_35, L_36)), L_37));
		// upDownAngle = stickValue.y * signY * m_MaxAngle;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_5;
		float L_39 = L_38.___y_1;
		float L_40 = V_4;
		float L_41 = __this->___m_MaxAngle_66;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_39, L_40)), L_41));
		// var deadZone = m_DeadZoneAngle / m_MaxAngle;
		float L_42 = __this->___m_DeadZoneAngle_67;
		float L_43 = __this->___m_MaxAngle_66;
		V_6 = ((float)(L_42/L_43));
		// var aliveZone = (1.0f - deadZone);
		float L_44 = V_6;
		V_7 = ((float)il2cpp_codegen_subtract((1.0f), L_44));
		// stickValue.x = Mathf.Clamp01((stickValue.x - deadZone)) / aliveZone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_5;
		float L_46 = L_45.___x_0;
		float L_47 = V_6;
		float L_48;
		L_48 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_subtract(L_46, L_47)), NULL);
		float L_49 = V_7;
		(&V_5)->___x_0 = ((float)(L_48/L_49));
		// stickValue.y = Mathf.Clamp01((stickValue.y - deadZone)) / aliveZone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_5;
		float L_51 = L_50.___y_1;
		float L_52 = V_6;
		float L_53;
		L_53 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_subtract(L_51, L_52)), NULL);
		float L_54 = V_7;
		(&V_5)->___y_1 = ((float)(L_53/L_54));
		// stickValue.x *= signX;
		float* L_55 = (&(&V_5)->___x_0);
		float* L_56 = L_55;
		float L_57 = *((float*)L_56);
		float L_58 = V_3;
		*((float*)L_56) = (float)((float)il2cpp_codegen_multiply(L_57, L_58));
		// stickValue.y *= signY;
		float* L_59 = (&(&V_5)->___y_1);
		float* L_60 = L_59;
		float L_61 = *((float*)L_60);
		float L_62 = V_4;
		*((float*)L_60) = (float)((float)il2cpp_codegen_multiply(L_61, L_62));
		// SetHandleAngle(new Vector2(leftRightAngle, upDownAngle));
		float L_63 = V_2;
		float L_64 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), L_63, L_64, /*hidden argument*/NULL);
		XRJoystick_SetHandleAngle_m37061DB6908DB1FE9A37A1D96D3D6B37A8DB0BD5(__this, L_65, NULL);
		// SetValue(stickValue);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_5;
		XRJoystick_SetValue_mB284764EFA6C400041ED91F3C974E0E5EA31C8A8(__this, L_66, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::SetValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_SetValue_mB284764EFA6C400041ED91F3C974E0E5EA31C8A8 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Value = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___m_Value_64 = L_0;
		// m_OnValueChangeX.Invoke(m_Value.x);
		ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* L_1 = __this->___m_OnValueChangeX_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___m_Value_64);
		float L_3 = L_2->___x_0;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// m_OnValueChangeY.Invoke(m_Value.y);
		ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* L_4 = __this->___m_OnValueChangeY_69;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___m_Value_64);
		float L_6 = L_5->___y_1;
		NullCheck(L_4);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_4, L_6, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::SetHandleAngle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_SetHandleAngle_m37061DB6908DB1FE9A37A1D96D3D6B37A8DB0BD5 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___angles0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		// if (m_Handle == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_63;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_00a6;
	}

IL_0018:
	{
		// var xComp = Mathf.Tan(angles.x * Mathf.Deg2Rad);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___angles0;
		float L_4 = L_3.___x_0;
		float L_5;
		L_5 = tanf(((float)il2cpp_codegen_multiply(L_4, (0.0174532924f))));
		V_0 = L_5;
		// var zComp = Mathf.Tan(angles.y * Mathf.Deg2Rad);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___angles0;
		float L_7 = L_6.___y_1;
		float L_8;
		L_8 = tanf(((float)il2cpp_codegen_multiply(L_7, (0.0174532924f))));
		V_1 = L_8;
		// var largerComp = Mathf.Max(Mathf.Abs(xComp), Mathf.Abs(zComp));
		float L_9 = V_0;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11 = V_1;
		float L_12;
		L_12 = fabsf(L_11);
		float L_13;
		L_13 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_10, L_12, NULL);
		V_2 = L_13;
		// var yComp = Mathf.Sqrt(1.0f - largerComp * largerComp);
		float L_14 = V_2;
		float L_15 = V_2;
		float L_16;
		L_16 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_14, L_15)))));
		V_3 = L_16;
		// m_Handle.up = (transform.up * yComp) + (transform.right * xComp) + (transform.forward * zComp);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___m_Handle_63;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		float L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_22, NULL);
		float L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_27, NULL);
		float L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_26, L_30, NULL);
		NullCheck(L_17);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_17, L_31, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_OnDrawGizmosSelected_mEA8C6333DFDF1AB6B6116DC97E9060863222A5E4 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// var angleStartPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Handle_63;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// angleStartPoint = m_Handle.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_63;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_0 = L_6;
	}

IL_0029:
	{
		// if (m_JoystickMotion != JoystickType.LeftRight)
		int32_t L_7 = __this->___m_JoystickMotion_62;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_017e;
		}
	}
	{
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_9, NULL);
		// var axisPoint1 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_MaxAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_12 = __this->___m_MaxAngle_66;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_12, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_13, L_14, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_11, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_17, NULL);
		V_3 = L_18;
		// var axisPoint2 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(-m_MaxAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_21 = __this->___m_MaxAngle_66;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((-L_21)), (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_22, L_23, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_20, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_26, NULL);
		V_4 = L_27;
		// Gizmos.DrawLine(angleStartPoint, axisPoint1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_28, L_29, NULL);
		// Gizmos.DrawLine(angleStartPoint, axisPoint2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_4;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_30, L_31, NULL);
		// if (m_DeadZoneAngle > 0.0f)
		float L_32 = __this->___m_DeadZoneAngle_67;
		V_5 = (bool)((((float)L_32) > ((float)(0.0f)))? 1 : 0);
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_017d;
		}
	}
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_34, NULL);
		// axisPoint1 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_DeadZoneAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_37 = __this->___m_DeadZoneAngle_67;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_37, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_38, L_39, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_36, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_35, L_42, NULL);
		V_3 = L_43;
		// axisPoint2 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(-m_DeadZoneAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_46 = __this->___m_DeadZoneAngle_67;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((-L_46)), (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_47, L_48, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_45, L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_50, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_44, L_51, NULL);
		V_4 = L_52;
		// Gizmos.DrawLine(angleStartPoint, axisPoint1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_3;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_53, L_54, NULL);
		// Gizmos.DrawLine(angleStartPoint, axisPoint2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_4;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_55, L_56, NULL);
	}

IL_017d:
	{
	}

IL_017e:
	{
		// if (m_JoystickMotion != JoystickType.FrontBack)
		int32_t L_57 = __this->___m_JoystickMotion_62;
		V_6 = (bool)((((int32_t)((((int32_t)L_57) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_6;
		if (!L_58)
		{
			goto IL_02d9;
		}
	}
	{
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_59, NULL);
		// var axisPoint1 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(0.0f, 0.0f, m_MaxAngle) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_62 = __this->___m_MaxAngle_66;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
		L_63 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_63, L_64, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_61, L_65, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_66, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_60, L_67, NULL);
		V_7 = L_68;
		// var axisPoint2 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(0.0f, 0.0f, -m_MaxAngle) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_71 = __this->___m_MaxAngle_66;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((-L_71)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_72, L_73, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_70, L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_75, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_69, L_76, NULL);
		V_8 = L_77;
		// Gizmos.DrawLine(angleStartPoint, axisPoint1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_7;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_78, L_79, NULL);
		// Gizmos.DrawLine(angleStartPoint, axisPoint2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_8;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_80, L_81, NULL);
		// if (m_DeadZoneAngle > 0.0f)
		float L_82 = __this->___m_DeadZoneAngle_67;
		V_9 = (bool)((((float)L_82) > ((float)(0.0f)))? 1 : 0);
		bool L_83 = V_9;
		if (!L_83)
		{
			goto IL_02d8;
		}
	}
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
		L_84 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_84, NULL);
		// axisPoint1 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(0.0f, 0.0f, m_DeadZoneAngle) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_87 = __this->___m_DeadZoneAngle_67;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		L_88 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_88, L_89, NULL);
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_86, L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_91, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_85, L_92, NULL);
		V_7 = L_93;
		// axisPoint2 = angleStartPoint + transform.TransformDirection(Quaternion.Euler(0.0f, 0.0f, -m_DeadZoneAngle) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_96 = __this->___m_DeadZoneAngle_67;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_97;
		L_97 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((-L_96)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_97, L_98, NULL);
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_95, L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_100, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_94, L_101, NULL);
		V_8 = L_102;
		// Gizmos.DrawLine(angleStartPoint, axisPoint1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_7;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_103, L_104, NULL);
		// Gizmos.DrawLine(angleStartPoint, axisPoint2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_8;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_105, L_106, NULL);
	}

IL_02d8:
	{
	}

IL_02d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_OnValidate_mC2405C73086789694E0084CC58B996B066562AED (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	{
		// m_DeadZoneAngle = Mathf.Min(m_DeadZoneAngle, m_MaxAngle * k_MaxDeadZonePercent);
		float L_0 = __this->___m_DeadZoneAngle_67;
		float L_1 = __this->___m_MaxAngle_66;
		float L_2;
		L_2 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (0.899999976f))), NULL);
		__this->___m_DeadZoneAngle_67 = L_2;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick__ctor_mB90E8948C1EC23A1FA1618CEC119313160646334 (XRJoystick_t982F6DBF7EBD356E1C3C3488DCC413B7BB9375BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JoystickType m_JoystickMotion = JoystickType.BothCircle;
		__this->___m_JoystickMotion_62 = 0;
		// Transform m_Handle = null;
		__this->___m_Handle_63 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_63), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// Vector2 m_Value = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___m_Value_64 = L_0;
		// bool m_RecenterOnRelease = true;
		__this->___m_RecenterOnRelease_65 = (bool)1;
		// float m_MaxAngle = 60.0f;
		__this->___m_MaxAngle_66 = (60.0f);
		// float m_DeadZoneAngle = 10.0f;
		__this->___m_DeadZoneAngle_67 = (10.0f);
		// ValueChangeEvent m_OnValueChangeX = new ValueChangeEvent();
		ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* L_1 = (ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150*)il2cpp_codegen_object_new(ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ValueChangeEvent__ctor_mB08B11080CE454CBC4CB39B37FD66F817EA51D49(L_1, NULL);
		__this->___m_OnValueChangeX_68 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChangeX_68), (void*)L_1);
		// ValueChangeEvent m_OnValueChangeY = new ValueChangeEvent();
		ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* L_2 = (ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150*)il2cpp_codegen_object_new(ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ValueChangeEvent__ctor_mB08B11080CE454CBC4CB39B37FD66F817EA51D49(L_2, NULL);
		__this->___m_OnValueChangeY_69 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChangeY_69), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.XRJoystick/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mB08B11080CE454CBC4CB39B37FD66F817EA51D49 (ValueChangeEvent_t392051F7A8D00C8652081F922180C02CA3043150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRKnob::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRKnob_get_handle_m7F6B8F24D831A17AB8CD99A79B626BBF83AC4D39 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Handle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_handle(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_handle_m1CFBFCA56E72D9A549283A38765E40E3E8F5CA6B (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Handle = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Handle_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_62), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_value_m036F021BC339E0693B7124D00AD9875CB861EF4A (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		float L_0 = __this->___m_Value_63;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_value_m8AD52C0F9D6013794943E32005C0FF0F62E64C0C (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// SetValue(value);
		float L_0 = ___value0;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_0, NULL);
		// SetKnobRotation(ValueToRotation());
		float L_1;
		L_1 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRKnob::get_clampedMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRKnob_get_clampedMotion_m4EF4962B0C2434D133706267F161CC9124D09AFA (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClampedMotion;
		bool L_0 = __this->___m_ClampedMotion_64;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_clampedMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_clampedMotion_mFEB66402DC0BF4BF5E15A9BF90B6F3CD473E9934 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClampedMotion = value;
		bool L_0 = ___value0;
		__this->___m_ClampedMotion_64 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_maxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_maxAngle_m39B05E0691B03E142AE17FCF074B29A292FA3FBA (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxAngle;
		float L_0 = __this->___m_MaxAngle_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_maxAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_maxAngle_mADDF8207D8313AC4D6AF2115FB24A849F282015C (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxAngle = value;
		float L_0 = ___value0;
		__this->___m_MaxAngle_65 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_minAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_minAngle_mF2F223E11482E07D52EC7190FA57EAB4E128DAE8 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinAngle;
		float L_0 = __this->___m_MinAngle_66;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_minAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_minAngle_m98EA7CA2B323D43AB5A132506B03D92E170A5AAD (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MinAngle = value;
		float L_0 = ___value0;
		__this->___m_MinAngle_66 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::get_positionTrackedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_positionTrackedRadius_m06D2C86AD84AED23FF77EE96153C467E36B493F5 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PositionTrackedRadius;
		float L_0 = __this->___m_PositionTrackedRadius_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::set_positionTrackedRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_positionTrackedRadius_mA486838E52AFC38306FAE8BBF931B6054B38B1A2 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PositionTrackedRadius = value;
		float L_0 = ___value0;
		__this->___m_PositionTrackedRadius_68 = L_0;
		return;
	}
}
// UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRKnob::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* XRKnob_get_onValueChange_m920F1FD70F30013B5F7D4581458D1905E262FFF6 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_0 = __this->___m_OnValueChange_70;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_Start_m54A81813A1E7AA065B75DBC4F2655532956F9963 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value);
		float L_0 = __this->___m_Value_63;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_0, NULL);
		// SetKnobRotation(ValueToRotation());
		float L_1;
		L_1 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnEnable_m4579BC2D391B93DB43B31FE5E6D7073406695460 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnDisable_mDA8DD83B30DF53874BEAED4465593BA1A2EFA095 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_StartGrab_m2C4B91DD007ABB767E6E9302875B7EFEEAC49463 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_71 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_71), (void*)L_1);
		// m_PositionAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_2 = (&__this->___m_PositionAngles_74);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_2, NULL);
		// m_UpVectorAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_3 = (&__this->___m_UpVectorAngles_75);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_3, NULL);
		// m_ForwardVectorAngles.Reset();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_4 = (&__this->___m_ForwardVectorAngles_76);
		TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(L_4, NULL);
		// UpdateBaseKnobRotation();
		XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670(__this, NULL);
		// UpdateRotation(true);
		XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_EndGrab_m5895C8F96BCD0988A398D02433A2A71759A7D604 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = null;
		__this->___m_Interactor_71 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_71), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_ProcessInteractable_m85660AF86FF7C80552D7B88BA601FDE0E930C6D3 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// if (isSelected)
		bool L_3;
		L_3 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// UpdateRotation();
		XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397(__this, (bool)0, NULL);
	}

IL_0026:
	{
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateRotation_m0E4BD48C3FFF352C9228A01ACA40EAA0F523B397 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, bool ___freshCheck0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B3_0 = 0;
	{
		// var interactorTransform = m_Interactor.GetAttachTransform(this);
		RuntimeObject* L_0 = __this->___m_Interactor_71;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0, __this);
		V_0 = L_1;
		// var localOffset = transform.InverseTransformVector(interactorTransform.position - m_Handle.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_62;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_6, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_2, L_7, NULL);
		V_1 = L_8;
		// localOffset.y = 0.0f;
		(&V_1)->___y_3 = (0.0f);
		// var radiusOffset = transform.TransformVector(localOffset).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_9, L_10, NULL);
		V_8 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		V_2 = L_12;
		// localOffset.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_1), NULL);
		// var localForward = transform.InverseTransformDirection(interactorTransform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_13, L_15, NULL);
		V_3 = L_16;
		// var localY = Math.Abs(localForward.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		float L_18 = L_17.___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(L_18);
		V_4 = L_19;
		// localForward.y = 0.0f;
		(&V_3)->___y_3 = (0.0f);
		// localForward.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_3), NULL);
		// var localUp = transform.InverseTransformDirection(interactorTransform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_0;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_21, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_20, L_22, NULL);
		V_5 = L_23;
		// localUp.y = 0.0f;
		(&V_5)->___y_3 = (0.0f);
		// localUp.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_5), NULL);
		// if (m_PositionDriven && !freshCheck)
		bool L_24 = __this->___m_PositionDriven_72;
		if (!L_24)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_25 = ___freshCheck0;
		G_B3_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B3_0 = 0;
	}

IL_00c3:
	{
		V_9 = (bool)G_B3_0;
		bool L_26 = V_9;
		if (!L_26)
		{
			goto IL_00d1;
		}
	}
	{
		// radiusOffset *= (1.0f + k_ModeSwitchDeadZone);
		float L_27 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_27, (1.10000002f)));
	}

IL_00d1:
	{
		// if (radiusOffset >= m_PositionTrackedRadius)
		float L_28 = V_2;
		float L_29 = __this->___m_PositionTrackedRadius_68;
		V_10 = (bool)((((int32_t)((!(((float)L_28) >= ((float)L_29)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_010e;
		}
	}
	{
		// if (!m_PositionDriven || freshCheck)
		bool L_31 = __this->___m_PositionDriven_72;
		bool L_32 = ___freshCheck0;
		V_11 = (bool)((int32_t)(((((int32_t)L_31) == ((int32_t)0))? 1 : 0)|(int32_t)L_32));
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_010b;
		}
	}
	{
		// m_PositionAngles.SetBaseFromVector(localOffset);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_34 = (&__this->___m_PositionAngles_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_34, L_35, NULL);
		// m_PositionDriven = true;
		__this->___m_PositionDriven_72 = (bool)1;
	}

IL_010b:
	{
		goto IL_0115;
	}

IL_010e:
	{
		// m_PositionDriven = false;
		__this->___m_PositionDriven_72 = (bool)0;
	}

IL_0115:
	{
		// if (!freshCheck)
		bool L_36 = ___freshCheck0;
		V_12 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_0146;
		}
	}
	{
		// if (!m_UpVectorDriven)
		bool L_38 = __this->___m_UpVectorDriven_73;
		V_13 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_13;
		if (!L_39)
		{
			goto IL_013b;
		}
	}
	{
		// localY *= (1.0f - (k_ModeSwitchDeadZone * 0.5f));
		float L_40 = V_4;
		V_4 = ((float)il2cpp_codegen_multiply(L_40, (0.949999988f)));
		goto IL_0145;
	}

IL_013b:
	{
		// localY *= (1.0f + (k_ModeSwitchDeadZone * 0.5f));
		float L_41 = V_4;
		V_4 = ((float)il2cpp_codegen_multiply(L_41, (1.04999995f)));
	}

IL_0145:
	{
	}

IL_0146:
	{
		// if (localY > 0.707f)
		float L_42 = V_4;
		V_14 = (bool)((((float)L_42) > ((float)(0.707000017f)))? 1 : 0);
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_0181;
		}
	}
	{
		// if (!m_UpVectorDriven || freshCheck)
		bool L_44 = __this->___m_UpVectorDriven_73;
		bool L_45 = ___freshCheck0;
		V_15 = (bool)((int32_t)(((((int32_t)L_44) == ((int32_t)0))? 1 : 0)|(int32_t)L_45));
		bool L_46 = V_15;
		if (!L_46)
		{
			goto IL_017e;
		}
	}
	{
		// m_UpVectorAngles.SetBaseFromVector(localUp);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_47 = (&__this->___m_UpVectorAngles_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_5;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_47, L_48, NULL);
		// m_UpVectorDriven = true;
		__this->___m_UpVectorDriven_73 = (bool)1;
	}

IL_017e:
	{
		goto IL_01a7;
	}

IL_0181:
	{
		// if (m_UpVectorDriven || freshCheck)
		bool L_49 = __this->___m_UpVectorDriven_73;
		bool L_50 = ___freshCheck0;
		V_16 = (bool)((int32_t)((int32_t)L_49|(int32_t)L_50));
		bool L_51 = V_16;
		if (!L_51)
		{
			goto IL_01a6;
		}
	}
	{
		// m_ForwardVectorAngles.SetBaseFromVector(localForward);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_52 = (&__this->___m_ForwardVectorAngles_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(L_52, L_53, NULL);
		// m_UpVectorDriven = false;
		__this->___m_UpVectorDriven_73 = (bool)0;
	}

IL_01a6:
	{
	}

IL_01a7:
	{
		// if (m_PositionDriven)
		bool L_54 = __this->___m_PositionDriven_72;
		V_17 = L_54;
		bool L_55 = V_17;
		if (!L_55)
		{
			goto IL_01c0;
		}
	}
	{
		// m_PositionAngles.SetTargetFromVector(localOffset);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_56 = (&__this->___m_PositionAngles_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_1;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_56, L_57, NULL);
	}

IL_01c0:
	{
		// if (m_UpVectorDriven)
		bool L_58 = __this->___m_UpVectorDriven_73;
		V_18 = L_58;
		bool L_59 = V_18;
		if (!L_59)
		{
			goto IL_01dc;
		}
	}
	{
		// m_UpVectorAngles.SetTargetFromVector(localUp);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_60 = (&__this->___m_UpVectorAngles_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_5;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_60, L_61, NULL);
		goto IL_01e9;
	}

IL_01dc:
	{
		// m_ForwardVectorAngles.SetTargetFromVector(localForward);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_62 = (&__this->___m_ForwardVectorAngles_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_3;
		TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(L_62, L_63, NULL);
	}

IL_01e9:
	{
		// var knobRotation = m_BaseKnobRotation - ((m_UpVectorAngles.totalOffset + m_ForwardVectorAngles.totalOffset) * m_TwistSensitivity) - m_PositionAngles.totalOffset;
		float L_64 = __this->___m_BaseKnobRotation_77;
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_65 = (&__this->___m_UpVectorAngles_75);
		float L_66;
		L_66 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_65, NULL);
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_67 = (&__this->___m_ForwardVectorAngles_76);
		float L_68;
		L_68 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_67, NULL);
		float L_69 = __this->___m_TwistSensitivity_69;
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_70 = (&__this->___m_PositionAngles_74);
		float L_71;
		L_71 = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(L_70, NULL);
		V_6 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_64, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_66, L_68)), L_69)))), L_71));
		// if (m_ClampedMotion)
		bool L_72 = __this->___m_ClampedMotion_64;
		V_19 = L_72;
		bool L_73 = V_19;
		if (!L_73)
		{
			goto IL_023d;
		}
	}
	{
		// knobRotation = Mathf.Clamp(knobRotation, m_MinAngle, m_MaxAngle);
		float L_74 = V_6;
		float L_75 = __this->___m_MinAngle_66;
		float L_76 = __this->___m_MaxAngle_65;
		float L_77;
		L_77 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_74, L_75, L_76, NULL);
		V_6 = L_77;
	}

IL_023d:
	{
		// SetKnobRotation(knobRotation);
		float L_78 = V_6;
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_78, NULL);
		// var knobValue = (knobRotation - m_MinAngle) / (m_MaxAngle - m_MinAngle);
		float L_79 = V_6;
		float L_80 = __this->___m_MinAngle_66;
		float L_81 = __this->___m_MaxAngle_65;
		float L_82 = __this->___m_MinAngle_66;
		V_7 = ((float)(((float)il2cpp_codegen_subtract(L_79, L_80))/((float)il2cpp_codegen_subtract(L_81, L_82))));
		// SetValue(knobValue);
		float L_83 = V_7;
		XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51(__this, L_83, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetKnobRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (m_AngleIncrement > 0)
		float L_0 = __this->___m_AngleIncrement_67;
		V_0 = (bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// var normalizeAngle = angle - m_MinAngle;
		float L_2 = ___angle0;
		float L_3 = __this->___m_MinAngle_66;
		V_1 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// angle = (Mathf.Round(normalizeAngle / m_AngleIncrement) * m_AngleIncrement) + m_MinAngle;
		float L_4 = V_1;
		float L_5 = __this->___m_AngleIncrement_67;
		float L_6;
		L_6 = bankers_roundf(((float)(L_4/L_5)));
		float L_7 = __this->___m_AngleIncrement_67;
		float L_8 = __this->___m_MinAngle_66;
		___angle0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), L_8));
	}

IL_003a:
	{
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// m_Handle.localEulerAngles = new Vector3(0.0f, angle, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___m_Handle_62;
		float L_13 = ___angle0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_12, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_mFB522CDCE5120523A96EA6D7036B78EEEE29BB51 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// if (m_ClampedMotion)
		bool L_0 = __this->___m_ClampedMotion_64;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// value = Mathf.Clamp01(value);
		float L_2 = ___value0;
		float L_3;
		L_3 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_2, NULL);
		___value0 = L_3;
	}

IL_0013:
	{
		// if (m_AngleIncrement > 0)
		float L_4 = __this->___m_AngleIncrement_67;
		V_1 = (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// var angleRange = m_MaxAngle - m_MinAngle;
		float L_6 = __this->___m_MaxAngle_65;
		float L_7 = __this->___m_MinAngle_66;
		V_2 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// var angle = Mathf.Lerp(0.0f, angleRange, value);
		float L_8 = V_2;
		float L_9 = ___value0;
		float L_10;
		L_10 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_8, L_9, NULL);
		V_3 = L_10;
		// angle = Mathf.Round(angle / m_AngleIncrement) * m_AngleIncrement;
		float L_11 = V_3;
		float L_12 = __this->___m_AngleIncrement_67;
		float L_13;
		L_13 = bankers_roundf(((float)(L_11/L_12)));
		float L_14 = __this->___m_AngleIncrement_67;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		// value = Mathf.InverseLerp(0.0f, angleRange, angle);
		float L_15 = V_2;
		float L_16 = V_3;
		float L_17;
		L_17 = Mathf_InverseLerp_m4E1DA076090EC56955724109B3EE12AA07548016_inline((0.0f), L_15, L_16, NULL);
		___value0 = L_17;
	}

IL_0064:
	{
		// m_Value = value;
		float L_18 = ___value0;
		__this->___m_Value_63 = L_18;
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_19 = __this->___m_OnValueChange_70;
		float L_20 = __this->___m_Value_63;
		NullCheck(L_19);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_19, L_20, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ValueToRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// return m_ClampedMotion ? Mathf.Lerp(m_MinAngle, m_MaxAngle, m_Value) : Mathf.LerpUnclamped(m_MinAngle, m_MaxAngle, m_Value);
		bool L_0 = __this->___m_ClampedMotion_64;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->___m_MinAngle_66;
		float L_2 = __this->___m_MaxAngle_65;
		float L_3 = __this->___m_Value_63;
		float L_4;
		L_4 = Mathf_LerpUnclamped_mF5A9A9AC62D7BAD992CEAB2E5B6A49F5D2B87700_inline(L_1, L_2, L_3, NULL);
		G_B3_0 = L_4;
		goto IL_0039;
	}

IL_0022:
	{
		float L_5 = __this->___m_MinAngle_66;
		float L_6 = __this->___m_MaxAngle_65;
		float L_7 = __this->___m_Value_63;
		float L_8;
		L_8 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_5, L_6, L_7, NULL);
		G_B3_0 = L_8;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		float L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::UpdateBaseKnobRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_UpdateBaseKnobRotation_m59532D40C91665CAB7CBBE2C463DF6D4364BF670 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	{
		// m_BaseKnobRotation = Mathf.LerpUnclamped(m_MinAngle, m_MaxAngle, m_Value);
		float L_0 = __this->___m_MinAngle_66;
		float L_1 = __this->___m_MaxAngle_65;
		float L_2 = __this->___m_Value_63;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF5A9A9AC62D7BAD992CEAB2E5B6A49F5D2B87700_inline(L_0, L_1, L_2, NULL);
		__this->___m_BaseKnobRotation_77 = L_3;
		// }
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRKnob::ShortestAngleDistance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ShortestAngleDistance_mF604FBD4790ECAF9C6FAE5D32D609C47899D7104 (float ___start0, float ___end1, float ___max2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		// var angleDelta = end - start;
		float L_0 = ___end1;
		float L_1 = ___start0;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// var angleSign = Mathf.Sign(angleDelta);
		float L_2 = V_0;
		float L_3;
		L_3 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_2, NULL);
		V_1 = L_3;
		// angleDelta = Math.Abs(angleDelta) % max;
		float L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = fabsf(L_4);
		float L_6 = ___max2;
		V_0 = (fmodf(L_5, L_6));
		// if (angleDelta > (max * 0.5f))
		float L_7 = V_0;
		float L_8 = ___max2;
		V_2 = (bool)((((float)L_7) > ((float)((float)il2cpp_codegen_multiply(L_8, (0.5f)))))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0028;
		}
	}
	{
		// angleDelta = -(max - angleDelta);
		float L_10 = ___max2;
		float L_11 = V_0;
		V_0 = ((-((float)il2cpp_codegen_subtract(L_10, L_11))));
	}

IL_0028:
	{
		// return angleDelta * angleSign;
		float L_12 = V_0;
		float L_13 = V_1;
		V_3 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		goto IL_002e;
	}

IL_002e:
	{
		// }
		float L_14 = V_3;
		return L_14;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnDrawGizmosSelected_mA7FC5CE9A43661870BBB78F34B316E97D61F5264 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	{
		// if (m_PositionTrackedRadius <= Mathf.Epsilon)
		float L_0 = __this->___m_PositionTrackedRadius_68;
		float L_1 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_4 = (bool)((((int32_t)((!(((float)L_0) <= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0116;
	}

IL_001c:
	{
		// var circleCenter = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_6;
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// circleCenter = m_Handle.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_Handle_62;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_0 = L_9;
	}

IL_0046:
	{
		// var circleX = transform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_10, NULL);
		V_1 = L_11;
		// var circleY = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		V_2 = L_13;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_14, NULL);
		// var segmentCounter = 0;
		V_3 = 0;
		goto IL_0108;
	}

IL_0070:
	{
		// var startAngle = (float)segmentCounter * k_SegmentRatio * 2.0f * Mathf.PI;
		int32_t L_15 = V_3;
		V_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_15), (0.0625f))), (2.0f))), (3.14159274f)));
		// segmentCounter++;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// var endAngle = (float)segmentCounter * k_SegmentRatio * 2.0f * Mathf.PI;
		int32_t L_17 = V_3;
		V_7 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_17), (0.0625f))), (2.0f))), (3.14159274f)));
		// Gizmos.DrawLine(circleCenter + (Mathf.Cos(startAngle) * circleX + Mathf.Sin(startAngle) * circleY) * m_PositionTrackedRadius,
		//     circleCenter + (Mathf.Cos(endAngle) * circleX + Mathf.Sin(endAngle) * circleY) * m_PositionTrackedRadius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = V_6;
		float L_20;
		L_20 = cosf(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_20, L_21, NULL);
		float L_23 = V_6;
		float L_24;
		L_24 = sinf(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_22, L_26, NULL);
		float L_28 = __this->___m_PositionTrackedRadius_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = V_7;
		float L_33;
		L_33 = cosf(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_33, L_34, NULL);
		float L_36 = V_7;
		float L_37;
		L_37 = sinf(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_35, L_39, NULL);
		float L_41 = __this->___m_PositionTrackedRadius_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_31, L_42, NULL);
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_30, L_43, NULL);
	}

IL_0108:
	{
		// while (segmentCounter < k_CircleSegments)
		int32_t L_44 = V_3;
		V_8 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_45 = V_8;
		if (L_45)
		{
			goto IL_0070;
		}
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnValidate_mB08147D8DC4B8E860E6B7D09696CC81082CC9F22 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_ClampedMotion)
		bool L_0 = __this->___m_ClampedMotion_64;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// m_Value = Mathf.Clamp01(m_Value);
		float L_2 = __this->___m_Value_63;
		float L_3;
		L_3 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_2, NULL);
		__this->___m_Value_63 = L_3;
	}

IL_001c:
	{
		// if (m_MinAngle > m_MaxAngle)
		float L_4 = __this->___m_MinAngle_66;
		float L_5 = __this->___m_MaxAngle_65;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// m_MinAngle = m_MaxAngle;
		float L_7 = __this->___m_MaxAngle_65;
		__this->___m_MinAngle_66 = L_7;
	}

IL_003a:
	{
		// SetKnobRotation(ValueToRotation());
		float L_8;
		L_8 = XRKnob_ValueToRotation_m08003B34EF3CE2A8ADAF502323B956318EB66127(__this, NULL);
		XRKnob_SetKnobRotation_m57EDEE417136FA2B730323B632BE0498FBAD38E0(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob__ctor_mE285342CE8BB3795515A292269CFA539A4882F20 (XRKnob_t515317ECC5A9200F3EA297D8D17848C033F4F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Handle = null;
		__this->___m_Handle_62 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_62), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// float m_Value = 0.5f;
		__this->___m_Value_63 = (0.5f);
		// bool m_ClampedMotion = true;
		__this->___m_ClampedMotion_64 = (bool)1;
		// float m_MaxAngle = 90.0f;
		__this->___m_MaxAngle_65 = (90.0f);
		// float m_MinAngle = -90.0f;
		__this->___m_MinAngle_66 = (-90.0f);
		// float m_AngleIncrement = 0.0f;
		__this->___m_AngleIncrement_67 = (0.0f);
		// float m_PositionTrackedRadius = 0.1f;
		__this->___m_PositionTrackedRadius_68 = (0.100000001f);
		// float m_TwistSensitivity = 1.5f;
		__this->___m_TwistSensitivity_69 = (1.5f);
		// ValueChangeEvent m_OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* L_0 = (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17*)il2cpp_codegen_object_new(ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372(L_0, NULL);
		__this->___m_OnValueChange_70 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChange_70), (void*)L_0);
		// bool m_PositionDriven = false;
		__this->___m_PositionDriven_72 = (bool)0;
		// bool m_UpVectorDriven = false;
		__this->___m_UpVectorDriven_73 = (bool)0;
		// TrackedRotation m_PositionAngles = new TrackedRotation();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_1 = (&__this->___m_PositionAngles_74);
		il2cpp_codegen_initobj(L_1, sizeof(TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3));
		// TrackedRotation m_UpVectorAngles = new TrackedRotation();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_2 = (&__this->___m_UpVectorAngles_75);
		il2cpp_codegen_initobj(L_2, sizeof(TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3));
		// TrackedRotation m_ForwardVectorAngles = new TrackedRotation();
		TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* L_3 = (&__this->___m_ForwardVectorAngles_76);
		il2cpp_codegen_initobj(L_3, sizeof(TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3));
		// float m_BaseKnobRotation = 0.0f;
		__this->___m_BaseKnobRotation_77 = (0.0f);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Single UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::get_totalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) 
{
	{
		// public float totalOffset => m_AccumulatedAngle + m_CurrentOffset;
		float L_0 = __this->___m_AccumulatedAngle_2;
		float L_1 = __this->___m_CurrentOffset_1;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  float TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	float _returnValue;
	_returnValue = TrackedRotation_get_totalOffset_m8335EC621910854624A3139B652A87FA934B264D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, const RuntimeMethod* method) 
{
	{
		// m_BaseAngle = 0.0f;
		__this->___m_BaseAngle_0 = (0.0f);
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
		// m_AccumulatedAngle = 0.0f;
		__this->___m_AccumulatedAngle_2 = (0.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_Reset_mF730ABE399B03C83625A408F8D5F99414728E77E(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetBaseFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) 
{
	{
		// m_AccumulatedAngle += m_CurrentOffset;
		float L_0 = __this->___m_AccumulatedAngle_2;
		float L_1 = __this->___m_CurrentOffset_1;
		__this->___m_AccumulatedAngle_2 = ((float)il2cpp_codegen_add(L_0, L_1));
		// m_BaseAngle = Mathf.Atan2(direction.z, direction.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___direction0;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___direction0;
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = atan2f(L_3, L_5);
		__this->___m_BaseAngle_0 = ((float)il2cpp_codegen_multiply(L_6, (57.2957802f)));
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_SetBaseFromVector_m495E86D66761EAC401B17C46FF596AD744A5F56B(_thisAdjusted, ___direction0, method);
}
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/TrackedRotation::SetTargetFromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3 (TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// var targetAngle = Mathf.Atan2(direction.z, direction.x) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___direction0;
		float L_1 = L_0.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___direction0;
		float L_3 = L_2.___x_2;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		V_0 = ((float)il2cpp_codegen_multiply(L_4, (57.2957802f)));
		// m_CurrentOffset = ShortestAngleDistance(m_BaseAngle, targetAngle, 360.0f);
		float L_5 = __this->___m_BaseAngle_0;
		float L_6 = V_0;
		float L_7;
		L_7 = XRKnob_ShortestAngleDistance_mF604FBD4790ECAF9C6FAE5D32D609C47899D7104(L_5, L_6, (360.0f), NULL);
		__this->___m_CurrentOffset_1 = L_7;
		// if (Mathf.Abs(m_CurrentOffset) > 90.0f)
		float L_8 = __this->___m_CurrentOffset_1;
		float L_9;
		L_9 = fabsf(L_8);
		V_1 = (bool)((((float)L_9) > ((float)(90.0f)))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// m_BaseAngle = targetAngle;
		float L_11 = V_0;
		__this->___m_BaseAngle_0 = L_11;
		// m_AccumulatedAngle += m_CurrentOffset;
		float L_12 = __this->___m_AccumulatedAngle_2;
		float L_13 = __this->___m_CurrentOffset_1;
		__this->___m_AccumulatedAngle_2 = ((float)il2cpp_codegen_add(L_12, L_13));
		// m_CurrentOffset = 0.0f;
		__this->___m_CurrentOffset_1 = (0.0f);
	}

IL_006d:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method)
{
	TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackedRotation_t66CAAA8384E11A2A6F9BDA0CE9FDF8A333A3F6A3*>(__this + _offset);
	TrackedRotation_SetTargetFromVector_mBDE9D3F3DFB8AEAFB6AAD748F726D6107384F0C3(_thisAdjusted, ___direction0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Content.Interaction.XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mBC41FCEA0AA4690860AE97314638CE07A22C2372 (ValueChangeEvent_t0481CAE6722F3B57C58A7EFCB81AAFE9F6F30E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRLever::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRLever_get_handle_mCF7B3AE06DB26AF7F8E4D681D8225E18694E779C (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Handle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_handle(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_handle_mE5BAD09602B4EFD3AF101E6A3D82CF7E403E9B3B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Handle = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Handle_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_62), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_get_value_mC5E857376181178F64CCDE9D5C0DBA8B65372903 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		bool L_0 = __this->___m_Value_63;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_value_m2082393D4D4491A7C05E680F3DC38E8C11A75B5B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => SetValue(value, true);
		bool L_0 = ___value0;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRLever::get_lockToValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_get_lockToValue_m1DC8895C6D1F39B8AA3D7BE7471C72A7030D9BC7 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public bool lockToValue { get; set; }
		bool L_0 = __this->___U3ClockToValueU3Ek__BackingField_70;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_lockToValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_lockToValue_mE299BCBA0E8205E7874B946A39E6C1C9EF46311E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool lockToValue { get; set; }
		bool L_0 = ___value0;
		__this->___U3ClockToValueU3Ek__BackingField_70 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRLever::get_maxAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRLever_get_maxAngle_m08FC1610AE5A2DB59C982BAFCF5723932D2B013A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxAngle;
		float L_0 = __this->___m_MaxAngle_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_maxAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_maxAngle_m0D574192F2F3B9D4C716A20D5A1E3DAC29715B17 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxAngle = value;
		float L_0 = ___value0;
		__this->___m_MaxAngle_65 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRLever::get_minAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRLever_get_minAngle_m4BE047FF9E577DE3A778E303E8281EEC61A9893E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MinAngle;
		float L_0 = __this->___m_MinAngle_66;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::set_minAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_minAngle_m91F2D95580C056E33366B47AC937786BE8EFA11A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MinAngle = value;
		float L_0 = ___value0;
		__this->___m_MinAngle_66 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::get_onLeverActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRLever_get_onLeverActivate_m4F52F081278D0A80B0905BEB7ECBF85914066138 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onLeverActivate => m_OnLeverActivate;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnLeverActivate_67;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRLever::get_onLeverDeactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRLever_get_onLeverDeactivate_mFD732BB5033E3078BF393DD8A106B8915C0C2D1B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onLeverDeactivate => m_OnLeverDeactivate;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnLeverDeactivate_68;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_Start_m932E14A276B231886FDA59F07EF089121B26040A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value, true);
		bool L_0 = __this->___m_Value_63;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnEnable_m73A3D7AAFB7D2378B60BFC267815F6CEDEE05A79 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnDisable_mAA4D78C35CE78760B960A97743B983B7E24351C1 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_StartGrab_m3546A1894506795A821042FABC3328880357FB4A (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_69 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_69), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_EndGrab_m1B9DA5DD2083DBC832CF4BB25FC1739B52872021 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value, true);
		bool L_0 = __this->___m_Value_63;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_0, (bool)1, NULL);
		// m_Interactor = null;
		__this->___m_Interactor_69 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_69), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_ProcessInteractable_m8CCE4D0C01A198A3A54E3BBE40CB2DDF7B8D1D3C (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (isSelected)
		bool L_3;
		L_3 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// UpdateValue();
		XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA(__this, NULL);
	}

IL_0025:
	{
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Content.Interaction.XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = m_Interactor.GetAttachTransform(this).position - m_Handle.position;
		RuntimeObject* L_0 = __this->___m_Interactor_69;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0, __this);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_62;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// direction = transform.InverseTransformDirection(direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_6, L_7, NULL);
		V_0 = L_8;
		// direction.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// return direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		V_1 = L_9;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_UpdateValue_m9E36BF1D16C71BEADDAB1BC298C8580663F989FA (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// var lookDirection = GetLookDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = XRLever_GetLookDirection_m60D20489074AC4ADA156F2E6C6D58EA798D3A10B(__this, NULL);
		V_0 = L_0;
		// var lookAngle = Mathf.Atan2(lookDirection.z, lookDirection.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		float L_2 = L_1.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = atan2f(L_2, L_4);
		V_1 = ((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		// if (m_MinAngle < m_MaxAngle)
		float L_6 = __this->___m_MinAngle_66;
		float L_7 = __this->___m_MaxAngle_65;
		V_5 = (bool)((((float)L_6) < ((float)L_7))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// lookAngle = Mathf.Clamp(lookAngle, m_MinAngle, m_MaxAngle);
		float L_9 = V_1;
		float L_10 = __this->___m_MinAngle_66;
		float L_11 = __this->___m_MaxAngle_65;
		float L_12;
		L_12 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_9, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_005c;
	}

IL_0049:
	{
		// lookAngle = Mathf.Clamp(lookAngle, m_MaxAngle, m_MinAngle);
		float L_13 = V_1;
		float L_14 = __this->___m_MaxAngle_65;
		float L_15 = __this->___m_MinAngle_66;
		float L_16;
		L_16 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_13, L_14, L_15, NULL);
		V_1 = L_16;
	}

IL_005c:
	{
		// var maxAngleDistance = Mathf.Abs(m_MaxAngle - lookAngle);
		float L_17 = __this->___m_MaxAngle_65;
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract(L_17, L_18)));
		V_2 = L_19;
		// var minAngleDistance = Mathf.Abs(m_MinAngle - lookAngle);
		float L_20 = __this->___m_MinAngle_66;
		float L_21 = V_1;
		float L_22;
		L_22 = fabsf(((float)il2cpp_codegen_subtract(L_20, L_21)));
		V_3 = L_22;
		// if (m_Value)
		bool L_23 = __this->___m_Value_63;
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_008e;
		}
	}
	{
		// maxAngleDistance *= (1.0f - k_LeverDeadZone);
		float L_25 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_25, (0.899999976f)));
		goto IL_0096;
	}

IL_008e:
	{
		// minAngleDistance *= (1.0f - k_LeverDeadZone);
		float L_26 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_26, (0.899999976f)));
	}

IL_0096:
	{
		// var newValue = (maxAngleDistance < minAngleDistance);
		float L_27 = V_2;
		float L_28 = V_3;
		V_4 = (bool)((((float)L_27) < ((float)L_28))? 1 : 0);
		// SetHandleAngle(lookAngle);
		float L_29 = V_1;
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(__this, L_29, NULL);
		// SetValue(newValue);
		bool L_30 = V_4;
		XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9(__this, L_30, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetValue(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_mDC69CA731001115DB1D6B073EFD0ED859652DFB9 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, bool ___isOn0, bool ___forceRotation1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B4_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B5_1 = NULL;
	int32_t G_B13_0 = 0;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B16_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B15_0 = NULL;
	float G_B17_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B17_1 = NULL;
	{
		// if (m_Value == isOn)
		bool L_0 = __this->___m_Value_63;
		bool L_1 = ___isOn0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// if (forceRotation)
		bool L_3 = ___forceRotation1;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_5 = __this->___m_Value_63;
		G_B3_0 = __this;
		if (L_5)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		float L_6 = __this->___m_MinAngle_66;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_0025:
	{
		float L_7 = __this->___m_MaxAngle_65;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B5_1, G_B5_0, NULL);
	}

IL_0031:
	{
		// return;
		goto IL_0096;
	}

IL_0033:
	{
		// m_Value = isOn;
		bool L_8 = ___isOn0;
		__this->___m_Value_63 = L_8;
		// if (m_Value)
		bool L_9 = __this->___m_Value_63;
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// m_OnLeverActivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = __this->___m_OnLeverActivate_67;
		NullCheck(L_11);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_11, NULL);
		goto IL_0062;
	}

IL_0054:
	{
		// m_OnLeverDeactivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___m_OnLeverDeactivate_68;
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
	}

IL_0062:
	{
		// if (!isSelected && (m_LockToValue || forceRotation))
		bool L_13;
		L_13 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (L_13)
		{
			goto IL_0074;
		}
	}
	{
		bool L_14 = __this->___m_LockToValue_64;
		bool L_15 = ___forceRotation1;
		G_B13_0 = ((int32_t)((int32_t)L_14|(int32_t)L_15));
		goto IL_0075;
	}

IL_0074:
	{
		G_B13_0 = 0;
	}

IL_0075:
	{
		V_3 = (bool)G_B13_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_17 = __this->___m_Value_63;
		G_B15_0 = __this;
		if (L_17)
		{
			G_B16_0 = __this;
			goto IL_008a;
		}
	}
	{
		float L_18 = __this->___m_MinAngle_66;
		G_B17_0 = L_18;
		G_B17_1 = G_B15_0;
		goto IL_0090;
	}

IL_008a:
	{
		float L_19 = __this->___m_MaxAngle_65;
		G_B17_0 = L_19;
		G_B17_1 = G_B16_0;
	}

IL_0090:
	{
		NullCheck(G_B17_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B17_1, G_B17_0, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::SetHandleAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// m_Handle.localRotation = Quaternion.Euler(angle, 0.0f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_62;
		float L_4 = ___angle0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_4, (0.0f), (0.0f), NULL);
		NullCheck(L_3);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_3, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnDrawGizmosSelected_m4AEEE83ED7BE1CCDF1FD2B4C6F33ABB7D7DDA621 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// var angleStartPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// if (m_Handle != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Handle_62;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// angleStartPoint = m_Handle.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Handle_62;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_0 = L_6;
	}

IL_0029:
	{
		// var angleMaxPoint = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_MaxAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = __this->___m_MaxAngle_65;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_9, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_10, L_11, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_8, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_14, NULL);
		V_1 = L_15;
		// var angleMinPoint = angleStartPoint + transform.TransformDirection(Quaternion.Euler(m_MinAngle, 0.0f, 0.0f) * Vector3.up) * k_AngleLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_18 = __this->___m_MinAngle_66;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_18, (0.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_19, L_20, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_17, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_23, NULL);
		V_2 = L_24;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_25, NULL);
		// Gizmos.DrawLine(angleStartPoint, angleMaxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_26, L_27, NULL);
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_28, NULL);
		// Gizmos.DrawLine(angleStartPoint, angleMinPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_29, L_30, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnValidate_m033DF9CB5675C2270E73CF717BEF4B99BD55C770 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B2_0 = NULL;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* G_B3_1 = NULL;
	{
		// SetHandleAngle(m_Value ? m_MaxAngle : m_MinAngle);
		bool L_0 = __this->___m_Value_63;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		float L_1 = __this->___m_MinAngle_66;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		float L_2 = __this->___m_MaxAngle_65;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		XRLever_SetHandleAngle_m3717163640DE65E1A3456084C0F3A79C67E85D5E(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRLever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever__ctor_m95F423400F548FF5BB4A2FCC7F157A9047D08E51 (XRLever_t4B47F0D1FA640CD4039834A6E98DB3B6E3821510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Handle = null;
		__this->___m_Handle_62 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_62), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// bool m_Value = false;
		__this->___m_Value_63 = (bool)0;
		// float m_MaxAngle = 90.0f;
		__this->___m_MaxAngle_65 = (90.0f);
		// float m_MinAngle = -90.0f;
		__this->___m_MinAngle_66 = (-90.0f);
		// UnityEvent m_OnLeverActivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___m_OnLeverActivate_67 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnLeverActivate_67), (void*)L_0);
		// UnityEvent m_OnLeverDeactivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___m_OnLeverDeactivate_68 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnLeverDeactivate_68), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// UnityEngine.Transform UnityEngine.XR.Content.Interaction.XRPushButton::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRPushButton_get_button_m3AC0BBA87D91B9EE7CBDB5744A71C27D91B26694 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Button;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_button(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_button_mE5F8503A2C4DBEF54F302B3316225C2470DACB85 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Button = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_Button_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_61), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::get_pressDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPushButton_get_pressDistance_m04FD3DEFD22D628F5C5DA729D2F40A9CEF4DFB0C (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PressDistance;
		float L_0 = __this->___m_PressDistance_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_pressDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_pressDistance_mF7C54FEE2ED2735679ED6D6CE9404E000C9E05EA (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PressDistance = value;
		float L_0 = ___value0;
		__this->___m_PressDistance_62 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.Content.Interaction.XRPushButton::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPushButton_get_value_m345BB8EFF122A48A832AA377B60532777751A328 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public float value => m_Value;
		float L_0 = __this->___m_Value_72;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRPushButton_get_onPress_mBF0BE1B70DAFB6EC67934B1080FAD0C1B9B02AC0 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onPress => m_OnPress;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnPress_67;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* XRPushButton_get_onRelease_m7B6751EE5D5EC96F8D6F262FFA9A31DB42CFBE55 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent onRelease => m_OnRelease;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnRelease_68;
		return L_0;
	}
}
// UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRPushButton::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* XRPushButton_get_onValueChange_mC59782A7E7E98828029249D8C304C21F396621A7 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* L_0 = __this->___m_OnValueChange_69;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::get_toggleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPushButton_get_toggleValue_m037879BE9FB7D25D8CBD1FD4B7A810D1B38D7C09 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// get => m_ToggleButton && m_Toggled;
		bool L_0 = __this->___m_ToggleButton_66;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_Toggled_71;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::set_toggleValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_set_toggleValue_mFC816F2B6C597A72551E524BBEB03A106DEDB2F1 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!m_ToggleButton)
		bool L_0 = __this->___m_ToggleButton_66;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_003d;
	}

IL_0010:
	{
		// m_Toggled = value;
		bool L_2 = ___value0;
		__this->___m_Toggled_71 = L_2;
		// if (m_Toggled)
		bool L_3 = __this->___m_Toggled_71;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_5 = __this->___m_PressDistance_62;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_5)), NULL);
		goto IL_003d;
	}

IL_0031:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Content.Interaction.XRPushButton::IsHoverableBy(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPushButton_IsHoverableBy_mF317B49425423246D95911A45D1C821E295EC376 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (interactor is XRRayInteractor)
		RuntimeObject* L_0 = ___interactor0;
		V_0 = (bool)((!(((RuntimeObject*)(XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)((XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)IsInstClass((RuntimeObject*)L_0, XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_001c;
	}

IL_0012:
	{
		// return base.IsHoverableBy(interactor);
		RuntimeObject* L_2 = ___interactor0;
		bool L_3;
		L_3 = XRBaseInteractable_IsHoverableBy_mA746CF4F19A39315495C004ED35EF6AF75AA8429(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_Start_m223746CF20D6979F62B77951D69DD249B789FF44 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Button != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_BaseButtonPosition = m_Button.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Button_61;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___m_BaseButtonPosition_73 = L_4;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnEnable_mEAD16D16110DBF83BF6875C8992B22745DE3DFCA (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// if (m_Toggled)
		bool L_0 = __this->___m_Toggled_71;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_2 = __this->___m_PressDistance_62;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_2)), NULL);
		goto IL_002e;
	}

IL_0022:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_002e:
	{
		// hoverEntered.AddListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_3;
		L_3 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, __this, (intptr_t)((void*)XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_3, L_4, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// hoverExited.AddListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_5;
		L_5 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_6 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_6, __this, (intptr_t)((void*)XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_5, L_6, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnDisable_m5D35E3F3F91256002ACE66B0C4CD06ECE4FC960B (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hoverEntered.RemoveListener(StartHover);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0;
		L_0 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_1 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_1, __this, (intptr_t)((void*)XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_0, L_1, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// hoverExited.RemoveListener(EndHover);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_2;
		L_2 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_3 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_3, __this, (intptr_t)((void*)XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_2, L_3, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::StartHover(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_StartHover_m9483BD357F3CB7CA4380BFAA8CB7D42D0AEA2D44 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HoveringInteractors.Add(args.interactorObject, new PressInfo { m_Interactor = args.interactorObject });
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_0 = __this->___m_HoveringInteractors_74;
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_1 = ___args0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19(L_1, NULL);
		PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_3 = (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C*)il2cpp_codegen_object_new(PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15(L_3, NULL);
		PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_4 = L_3;
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19(L_5, NULL);
		NullCheck(L_4);
		L_4->___m_Interactor_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_Interactor_0), (void*)L_6);
		NullCheck(L_0);
		Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C(L_0, L_2, L_4, Dictionary_2_Add_mDE60E023087C042228D40A07287BE805F5445B6C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::EndHover(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_EndHover_mDE942B9C5F9E34BFA025F383C0DFFDF108868BAB (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// m_HoveringInteractors.Remove(args.interactorObject);
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_0 = __this->___m_HoveringInteractors_74;
		HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* L_1 = ___args0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = HoverExitEventArgs_get_interactorObject_m0018175DBF0540C147451C1E11B5EE5DA64CB150(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE(L_0, L_2, Dictionary_2_Remove_m86CB67BAD8B42AC3CA321DC66D8AF594F8693EDE_RuntimeMethod_var);
		// if (m_HoveringInteractors.Count == 0)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_4 = __this->___m_HoveringInteractors_74;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD(L_4, Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// if (m_ToggleButton && m_Toggled)
		bool L_7 = __this->___m_ToggleButton_66;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		bool L_8 = __this->___m_Toggled_71;
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0037;
	}

IL_0036:
	{
		G_B4_0 = 0;
	}

IL_0037:
	{
		V_1 = (bool)G_B4_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// SetButtonHeight(-m_PressDistance);
		float L_10 = __this->___m_PressDistance_62;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, ((-L_10)), NULL);
		goto IL_0057;
	}

IL_004b:
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_ProcessInteractable_m4C2CE6AA75532791DC9DBA9C88B96DD08B889799 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if (m_HoveringInteractors.Count > 0)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_3 = __this->___m_HoveringInteractors_74;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD(L_3, Dictionary_2_get_Count_mC8FB79F3EC3C89FCD55E73EEE51EB093F058E0BD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// UpdatePress();
		XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906(__this, NULL);
	}

IL_002d:
	{
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::UpdatePress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_UpdatePress_m3ED769AB20F6E97BFAFAD1D5E05114F3A7589906 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB V_4;
	memset((&V_4), 0, sizeof(V_4));
	PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* V_5 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// var minimumHeight = 0.0f;
		V_0 = (0.0f);
		// if (m_ToggleButton && m_Toggled)
		bool L_0 = __this->___m_ToggleButton_66;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->___m_Toggled_71;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_3 = (bool)G_B3_0;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// minimumHeight = -m_PressDistance;
		float L_3 = __this->___m_PressDistance_62;
		V_0 = ((-L_3));
	}

IL_0024:
	{
		// foreach (var pressInfo in m_HoveringInteractors.Values)
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_4 = __this->___m_HoveringInteractors_74;
		NullCheck(L_4);
		ValueCollection_t273ED87DC7817D2739CBA14EE77F17F33F78B511* L_5;
		L_5 = Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B(L_4, Dictionary_2_get_Values_mA89399B1E83FA8A54C9AC701F8E2D6C11ACAF68B_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t2B6E17F326D700E0F1BA537F5A36AAE4EB1CE8BB L_6;
		L_6 = ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6(L_5, ValueCollection_GetEnumerator_mB6EBFD4C49393524358EBA8D1776A6ADFFB814C6_RuntimeMethod_var);
		V_4 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC((&V_4), Enumerator_Dispose_m3022840D5F4E09DFA22C94D020DF1B1FFDCB95EC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0102_1;
			}

IL_003c_1:
			{
				// foreach (var pressInfo in m_HoveringInteractors.Values)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_7;
				L_7 = Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_inline((&V_4), Enumerator_get_Current_mAC466C0241DC56E461D88076BF64403B2EA15DE7_RuntimeMethod_var);
				V_5 = L_7;
				// var interactorTransform = pressInfo.m_Interactor.GetAttachTransform(this);
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_8 = V_5;
				NullCheck(L_8);
				RuntimeObject* L_9 = L_8->___m_Interactor_0;
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_9, __this);
				V_6 = L_10;
				// var localOffset = transform.InverseTransformVector(interactorTransform.position - m_BaseButtonPosition);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_6;
				NullCheck(L_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___m_BaseButtonPosition_73;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_14, NULL);
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_11, L_15, NULL);
				V_7 = L_16;
				// var withinButtonRegion = (Mathf.Abs(localOffset.x) < m_ButtonSize && Mathf.Abs(localOffset.z) < m_ButtonSize);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_7;
				float L_18 = L_17.___x_2;
				float L_19;
				L_19 = fabsf(L_18);
				float L_20 = __this->___m_ButtonSize_65;
				if ((!(((float)L_19) < ((float)L_20))))
				{
					goto IL_009e_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_7;
				float L_22 = L_21.___z_4;
				float L_23;
				L_23 = fabsf(L_22);
				float L_24 = __this->___m_ButtonSize_65;
				G_B10_0 = ((((float)L_23) < ((float)L_24))? 1 : 0);
				goto IL_009f_1;
			}

IL_009e_1:
			{
				G_B10_0 = 0;
			}

IL_009f_1:
			{
				V_8 = (bool)G_B10_0;
				// if (withinButtonRegion)
				bool L_25 = V_8;
				V_9 = L_25;
				bool L_26 = V_9;
				if (!L_26)
				{
					goto IL_00f8_1;
				}
			}
			{
				// if (!pressInfo.m_InPressRegion)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_27 = V_5;
				NullCheck(L_27);
				bool L_28 = L_27->___m_InPressRegion_1;
				V_10 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
				bool L_29 = V_10;
				if (!L_29)
				{
					goto IL_00d2_1;
				}
			}
			{
				// pressInfo.m_WrongSide = (localOffset.y < m_ButtonOffset);
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_30 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
				float L_32 = L_31.___y_3;
				float L_33 = __this->___m_ButtonOffset_64;
				NullCheck(L_30);
				L_30->___m_WrongSide_2 = (bool)((((float)L_32) < ((float)L_33))? 1 : 0);
			}

IL_00d2_1:
			{
				// if (!pressInfo.m_WrongSide)
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_34 = V_5;
				NullCheck(L_34);
				bool L_35 = L_34->___m_WrongSide_2;
				V_11 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_11;
				if (!L_36)
				{
					goto IL_00f7_1;
				}
			}
			{
				// minimumHeight = Mathf.Min(minimumHeight, localOffset.y - m_ButtonOffset);
				float L_37 = V_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_7;
				float L_39 = L_38.___y_3;
				float L_40 = __this->___m_ButtonOffset_64;
				float L_41;
				L_41 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_37, ((float)il2cpp_codegen_subtract(L_39, L_40)), NULL);
				V_0 = L_41;
			}

IL_00f7_1:
			{
			}

IL_00f8_1:
			{
				// pressInfo.m_InPressRegion = withinButtonRegion;
				PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* L_42 = V_5;
				bool L_43 = V_8;
				NullCheck(L_42);
				L_42->___m_InPressRegion_1 = L_43;
			}

IL_0102_1:
			{
				// foreach (var pressInfo in m_HoveringInteractors.Values)
				bool L_44;
				L_44 = Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885((&V_4), Enumerator_MoveNext_m7A1722FD044A8E6BD27ACCBFF53B0B4A7E632885_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_003c_1;
				}
			}
			{
				goto IL_011f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011f:
	{
		// minimumHeight = Mathf.Max(minimumHeight, -(m_PressDistance + m_PressBuffer));
		float L_45 = V_0;
		float L_46 = __this->___m_PressDistance_62;
		float L_47 = __this->___m_PressBuffer_63;
		float L_48;
		L_48 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_45, ((-((float)il2cpp_codegen_add(L_46, L_47)))), NULL);
		V_0 = L_48;
		// var pressed = m_ToggleButton ? (minimumHeight <= -(m_PressDistance + m_PressBuffer)) : (minimumHeight < -m_PressDistance);
		bool L_49 = __this->___m_ToggleButton_66;
		if (L_49)
		{
			goto IL_0148;
		}
	}
	{
		float L_50 = V_0;
		float L_51 = __this->___m_PressDistance_62;
		G_B23_0 = ((((float)L_50) < ((float)((-L_51))))? 1 : 0);
		goto IL_015c;
	}

IL_0148:
	{
		float L_52 = V_0;
		float L_53 = __this->___m_PressDistance_62;
		float L_54 = __this->___m_PressBuffer_63;
		G_B23_0 = ((((int32_t)((!(((float)L_52) <= ((float)((-((float)il2cpp_codegen_add(L_53, L_54)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_015c:
	{
		V_1 = (bool)G_B23_0;
		// var currentDistance = Mathf.Max(0f, -minimumHeight - m_PressBuffer);
		float L_55 = V_0;
		float L_56 = __this->___m_PressBuffer_63;
		float L_57;
		L_57 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), ((float)il2cpp_codegen_subtract(((-L_55)), L_56)), NULL);
		V_2 = L_57;
		// m_Value = currentDistance / m_PressDistance;
		float L_58 = V_2;
		float L_59 = __this->___m_PressDistance_62;
		__this->___m_Value_72 = ((float)(L_58/L_59));
		// if (m_ToggleButton)
		bool L_60 = __this->___m_ToggleButton_66;
		V_12 = L_60;
		bool L_61 = V_12;
		if (!L_61)
		{
			goto IL_01de;
		}
	}
	{
		// if (pressed)
		bool L_62 = V_1;
		V_13 = L_62;
		bool L_63 = V_13;
		if (!L_63)
		{
			goto IL_01db;
		}
	}
	{
		// if (!m_Pressed)
		bool L_64 = __this->___m_Pressed_70;
		V_14 = (bool)((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_14;
		if (!L_65)
		{
			goto IL_01da;
		}
	}
	{
		// m_Toggled = !m_Toggled;
		bool L_66 = __this->___m_Toggled_71;
		__this->___m_Toggled_71 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		// if (m_Toggled)
		bool L_67 = __this->___m_Toggled_71;
		V_15 = L_67;
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_01cd;
		}
	}
	{
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_69 = __this->___m_OnPress_67;
		NullCheck(L_69);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_69, NULL);
		goto IL_01d9;
	}

IL_01cd:
	{
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_70 = __this->___m_OnRelease_68;
		NullCheck(L_70);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_70, NULL);
	}

IL_01d9:
	{
	}

IL_01da:
	{
	}

IL_01db:
	{
		goto IL_0220;
	}

IL_01de:
	{
		// if (pressed)
		bool L_71 = V_1;
		V_16 = L_71;
		bool L_72 = V_16;
		if (!L_72)
		{
			goto IL_0205;
		}
	}
	{
		// if (!m_Pressed)
		bool L_73 = __this->___m_Pressed_70;
		V_17 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_17;
		if (!L_74)
		{
			goto IL_0202;
		}
	}
	{
		// m_OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_75 = __this->___m_OnPress_67;
		NullCheck(L_75);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_75, NULL);
	}

IL_0202:
	{
		goto IL_021f;
	}

IL_0205:
	{
		// if (m_Pressed)
		bool L_76 = __this->___m_Pressed_70;
		V_18 = L_76;
		bool L_77 = V_18;
		if (!L_77)
		{
			goto IL_021e;
		}
	}
	{
		// m_OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_78 = __this->___m_OnRelease_68;
		NullCheck(L_78);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_78, NULL);
	}

IL_021e:
	{
	}

IL_021f:
	{
	}

IL_0220:
	{
		// m_Pressed = pressed;
		bool L_79 = V_1;
		__this->___m_Pressed_70 = L_79;
		// if (m_Pressed)
		bool L_80 = __this->___m_Pressed_70;
		V_19 = L_80;
		bool L_81 = V_19;
		if (!L_81)
		{
			goto IL_0245;
		}
	}
	{
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* L_82 = __this->___m_OnValueChange_69;
		float L_83 = __this->___m_Value_72;
		NullCheck(L_82);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_82, L_83, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
	}

IL_0245:
	{
		// SetButtonHeight(minimumHeight);
		float L_84 = V_0;
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, L_84, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::SetButtonHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, float ___height0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (m_Button == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0013:
	{
		// Vector3 newPosition = m_Button.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Button_61;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// newPosition.y = height;
		float L_5 = ___height0;
		(&V_0)->___y_3 = L_5;
		// m_Button.localPosition = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_Button_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnDrawGizmosSelected_mC9E10B907162EBF3803EAD773A5EA581EF8D76D7 (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var pressStartPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_0;
		// if (m_Button != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Button_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// pressStartPoint = m_Button.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_Button_61;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		V_0 = L_5;
	}

IL_0025:
	{
		// pressStartPoint.y += m_ButtonOffset - (m_PressDistance * 0.5f);
		float* L_6 = (&(&V_0)->___y_3);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = __this->___m_ButtonOffset_64;
		float L_10 = __this->___m_PressDistance_62;
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_multiply(L_10, (0.5f)))))));
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_11, NULL);
		// Gizmos.matrix = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_12, NULL);
		Gizmos_set_matrix_m916F9A7A8ACC51F304BB5BB4536854A045EF844B(L_13, NULL);
		// Gizmos.DrawWireCube(pressStartPoint, new Vector3(m_ButtonSize, m_PressDistance, m_ButtonSize));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = __this->___m_ButtonSize_65;
		float L_16 = __this->___m_PressDistance_62;
		float L_17 = __this->___m_ButtonSize_65;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_15, L_16, L_17, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton_OnValidate_mE1307C6FFC39A82E1A3C9CA558F22D95AAE41A0C (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	{
		// SetButtonHeight(0.0f);
		XRPushButton_SetButtonHeight_mB6E99F952CB40DDF4A21BF999CBB74A6E7A9B0D6(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPushButton__ctor_m8DF438AA2D6C1AD0735FDF04F72D039F51EE02AF (XRPushButton_t7CB9021CB94F13079A4E33251ED2F2D6E66D8DF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Button = null;
		__this->___m_Button_61 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_61), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// float m_PressDistance = 0.1f;
		__this->___m_PressDistance_62 = (0.100000001f);
		// float m_PressBuffer = 0.01f;
		__this->___m_PressBuffer_63 = (0.00999999978f);
		// float m_ButtonOffset = 0.0f;
		__this->___m_ButtonOffset_64 = (0.0f);
		// float m_ButtonSize = 0.1f;
		__this->___m_ButtonSize_65 = (0.100000001f);
		// bool m_ToggleButton = false;
		__this->___m_ToggleButton_66 = (bool)0;
		// bool m_Pressed = false;
		__this->___m_Pressed_70 = (bool)0;
		// bool m_Toggled = false;
		__this->___m_Toggled_71 = (bool)0;
		// float m_Value = 0f;
		__this->___m_Value_72 = (0.0f);
		// Vector3 m_BaseButtonPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_BaseButtonPosition_73 = L_0;
		// Dictionary<IXRHoverInteractor, PressInfo> m_HoveringInteractors = new Dictionary<IXRHoverInteractor, PressInfo>();
		Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6* L_1 = (Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6*)il2cpp_codegen_object_new(Dictionary_2_t498B0175DACE25227D7797802E7144770FE39DE6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9(L_1, Dictionary_2__ctor_m6C9DD4CD4BED93B2CFF97A7DD954AA34D2E227A9_RuntimeMethod_var);
		__this->___m_HoveringInteractors_74 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HoveringInteractors_74), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/PressInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressInfo__ctor_m772C95227A64BD660EBF391384EED3B0BEFCFC15 (PressInfo_t4A65AE351F6D15B6D4CC343F6244021499EABF6C* __this, const RuntimeMethod* method) 
{
	{
		// internal bool m_InPressRegion = false;
		__this->___m_InPressRegion_1 = (bool)0;
		// internal bool m_WrongSide = false;
		__this->___m_WrongSide_2 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.XRPushButton/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mD835B61ABEA661F3D9E1532BA28B36DC4C11926B (ValueChangeEvent_t6ABB63D6EC8E3745851A79F2AA32B8550933F214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Single UnityEngine.XR.Content.Interaction.XRSlider::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSlider_get_value_m982492407CE6474075F5752970F18C3D9A9A6E03 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Value;
		float L_0 = __this->___m_Value_62;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_set_value_m4E443CBC1E64A2AEAB4B67E008B0DB565946E2D5 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// SetValue(value);
		float L_0 = ___value0;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_0, NULL);
		// SetSliderPosition(value);
		float L_1 = ___value0;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent UnityEngine.XR.Content.Interaction.XRSlider::get_onValueChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* XRSlider_get_onValueChange_m9EDED400A642BE1D728F58BAC0F9558315EB5B89 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// public ValueChangeEvent onValueChange => m_OnValueChange;
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_0 = __this->___m_OnValueChange_65;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_Start_m5B7EBA3A78BE69A9FBCD18443642F6E02FFB08F5 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// SetValue(m_Value);
		float L_0 = __this->___m_Value_62;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_0, NULL);
		// SetSliderPosition(m_Value);
		float L_1 = __this->___m_Value_62;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnEnable_mD5F09516D73D82B1F64915F3DDE786707151C999 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnDisable_mF0A6E46B79E603BDEA7085C8C35AF52953114F34 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_StartGrab_m48F19B86B4802EE3275548105AE49B7F3C5CEF0E (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = args.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___m_Interactor_66 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_66), (void*)L_1);
		// UpdateSliderPosition();
		XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_EndGrab_mA9D239E474FB31C0D6909D28B51FAA0A6F2147D1 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// m_Interactor = null;
		__this->___m_Interactor_66 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interactor_66), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_ProcessInteractable_m1A2C82A08D7AEE301698505D8144BD400E0C723E (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___updatePhase0;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___updatePhase0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (isSelected)
		bool L_3;
		L_3 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// UpdateSliderPosition();
		XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87(__this, NULL);
	}

IL_0025:
	{
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::UpdateSliderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_UpdateSliderPosition_m816CAAC7F9DAECFD0C0822B62B195B71680F4D87 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var localPosition = transform.InverseTransformPoint(m_Interactor.GetAttachTransform(this).position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1 = __this->___m_Interactor_66;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_1, __this);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_3, NULL);
		V_0 = L_4;
		// var sliderValue = Mathf.Clamp01((localPosition.z - m_MinPosition) / (m_MaxPosition - m_MinPosition));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___z_4;
		float L_7 = __this->___m_MinPosition_64;
		float L_8 = __this->___m_MaxPosition_63;
		float L_9 = __this->___m_MinPosition_64;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(((float)il2cpp_codegen_subtract(L_6, L_7))/((float)il2cpp_codegen_subtract(L_8, L_9)))), NULL);
		V_1 = L_10;
		// SetValue(sliderValue);
		float L_11 = V_1;
		XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465(__this, L_11, NULL);
		// SetSliderPosition(sliderValue);
		float L_12 = V_1;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetSliderPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (m_Handle == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Handle_61;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0045;
	}

IL_0013:
	{
		// var handlePos = m_Handle.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Handle_61;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// handlePos.z = Mathf.Lerp(m_MinPosition, m_MaxPosition, value);
		float L_5 = __this->___m_MinPosition_64;
		float L_6 = __this->___m_MaxPosition_63;
		float L_7 = ___value0;
		float L_8;
		L_8 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_5, L_6, L_7, NULL);
		(&V_0)->___z_4 = L_8;
		// m_Handle.localPosition = handlePos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___m_Handle_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetValue_mDCA5611C423F4ACC175FF9622C1BC5B07310C465 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_62 = L_0;
		// m_OnValueChange.Invoke(m_Value);
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_1 = __this->___m_OnValueChange_65;
		float L_2 = __this->___m_Value_62;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnDrawGizmosSelected_mC9D44438D48532214F4C8555CE756F8698B13B7D (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var sliderMinPoint = transform.TransformPoint(new Vector3(0.0f, 0.0f, m_MinPosition));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___m_MinPosition_64;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_2, NULL);
		V_0 = L_3;
		// var sliderMaxPoint = transform.TransformPoint(new Vector3(0.0f, 0.0f, m_MaxPosition));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = __this->___m_MaxPosition_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_6, NULL);
		V_1 = L_7;
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_8, NULL);
		// Gizmos.DrawLine(sliderMinPoint, sliderMaxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnValidate_mEBC5014B234B32BB1DE13EE5BBF3ABDAD6D0AD58 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	{
		// SetSliderPosition(m_Value);
		float L_0 = __this->___m_Value_62;
		XRSlider_SetSliderPosition_m868C3A5C8660AB80D6080F1C4B8CD26148070B02(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Content.Interaction.XRSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider__ctor_m4D5345C4FC15B61BA1008ADFB187BA8D9EA97E78 (XRSlider_t3AB802BD5E80A8534A5BF9D2F710238AF3213E51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform m_Handle = null;
		__this->___m_Handle_61 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handle_61), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// public float m_Value = 0.5f;
		__this->___m_Value_62 = (0.5f);
		// float m_MaxPosition = 0.5f;
		__this->___m_MaxPosition_63 = (0.5f);
		// float m_MinPosition = -0.5f;
		__this->___m_MinPosition_64 = (-0.5f);
		// ValueChangeEvent m_OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* L_0 = (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD*)il2cpp_codegen_object_new(ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4(L_0, NULL);
		__this->___m_OnValueChange_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnValueChange_65), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_il2cpp_TypeInfo_var);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void UnityEngine.XR.Content.Interaction.XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m36E0FB628F57A83BB57A575FD914FAA4C5CCABB4 (ValueChangeEvent_t97011904F6BAB13C48427F4EB2F7F1EB924E2ACD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectExitEventArgs_get_isCanceled_m4C9FCCB6A51201B8728DAF9BA356BB589A149FF7_inline (SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* __this, const RuntimeMethod* method) 
{
	{
		// public bool isCanceled { get; set; }
		bool L_0 = __this->___U3CisCanceledU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRInfiniteInteractable_get_active_m083472E89FF3DEFF2714DE4A5940C97AB5AFB0A6_inline (XRInfiniteInteractable_t7C6813EE7FE202567763FE9A676B9FCA6CB5F0DF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Active;
		bool L_0 = __this->___m_Active_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseInteractor_set_startingSelectedInteractable_m875C82466909DF095E03CE0F3E3376CFF7BF24C9_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_StartingSelectedInteractable = value;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_0 = ___value0;
		__this->___m_StartingSelectedInteractable_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StartingSelectedInteractable_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InteractionManager;
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_0 = __this->___m_InteractionManager_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSocketInteractor_set_socketActive_m63F82455B5998A4A68851C3CD6864147E6FDE95A_inline (XRSocketInteractor_t955B5778E5057E61463018DC1817B84363C54591* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SocketActive = value;
		bool L_0 = ___value0;
		__this->___m_SocketActive_62 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = ___a0;
		float L_7 = V_0;
		float L_8 = ___t2;
		float L_9;
		L_9 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_8, NULL);
		V_2 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverEntered;
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0 = __this->___m_HoverEntered_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverExited;
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_0 = __this->___m_HoverExited_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4E1DA076090EC56955724109B3EE12AA07548016_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___value2;
		float L_4 = ___a0;
		float L_5 = ___b1;
		float L_6 = ___a0;
		float L_7;
		L_7 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF5A9A9AC62D7BAD992CEAB2E5B6A49F5D2B87700_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
