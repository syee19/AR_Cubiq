#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// MiniStage[]
struct MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Boolean[,,]
struct BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// BaseObjectManager
struct BaseObjectManager_tC273A1957D77694B4DE3B23A1A869597945A4AE2;
// BlockColor
struct BlockColor_t38F0E0CB162384C0CF66AD1C603C1E0B6A4CDE53;
// BlockPosition
struct BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D;
// BlockSnap
struct BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GrabObject
struct GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A;
// GrabObjectMouse
struct GrabObjectMouse_tEE17668100CDCCF2ABEF3A7BB84FC062252EFA4E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// MarkerBehavior
struct MarkerBehavior_t73EAB8991ACBB43C4701D548712C3DEE335A195C;
// MaskObject
struct MaskObject_t4E24B79E45FB06D58C98644FD3EE20265B87FC52;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// MiniStage
struct MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlaceGameBoard
struct PlaceGameBoard_t480BB8F4B3507F65E97AEDCF1D31050F31B07129;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Stage
struct Stage_tD58205F690D18C2F904AB6ADDA3B45189C4C3E04;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C7E2C1E4BBC9E9AF540A309A38663CA0B2F2039;
IL2CPP_EXTERN_C String_t* _stringLiteral451CA2A161C79651D40AB00BF3D3F88668728EE1;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral74CEC2234637B38BFA93F58793CA0C7412AB8AFF;
IL2CPP_EXTERN_C String_t* _stringLiteralA165E925A3C5F58F9CCF6B2C89B1DF0C1C0B36C0;
IL2CPP_EXTERN_C String_t* _stringLiteralBA7C1A8111920FC535E1F40384539D103E9A2532;
IL2CPP_EXTERN_C String_t* _stringLiteralC3E970842926B83E16266FB87EE21E7EF31BD033;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D54E52BE5783A857F4117AA3826FE3A7933041;
IL2CPP_EXTERN_C String_t* _stringLiteralE8D19204759E83699D8B1BDB12510593343DF9AF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mD45BCBB3C7B7CD495D81978BB377D04B701DF39E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D_mD55A04D9852DA1329A22496AB10D40C51C612451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_mFFA715D73EF1C3BFFAA0704B0374BC3507B13FE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// BaseObjectManager
struct BaseObjectManager_tC273A1957D77694B4DE3B23A1A869597945A4AE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform BaseObjectManager::Markers
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Markers_4;
	// System.Boolean BaseObjectManager::isDrawMarker
	bool ___isDrawMarker_5;
	// System.Boolean BaseObjectManager::markerFlag
	bool ___markerFlag_6;
};

// BlockColor
struct BlockColor_t38F0E0CB162384C0CF66AD1C603C1E0B6A4CDE53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BlockPosition
struct BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean[,,] BlockPosition::blockCollision
	BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE* ___blockCollision_4;
	// UnityEngine.Vector3[] BlockPosition::initPos
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___initPos_5;
};

// BlockSnap
struct BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BlockSnap::Markers
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Markers_4;
	// UnityEngine.GameObject BlockSnap::Planes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Planes_5;
	// UnityEngine.GameObject BlockSnap::BaseBlock
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BaseBlock_6;
	// UnityEngine.GameObject BlockSnap::BaseObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BaseObject_7;
	// System.Collections.Generic.List`1<UnityEngine.Transform> BlockSnap::MarkerTransforms
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___MarkerTransforms_8;
	// System.Collections.Generic.List`1<UnityEngine.Transform> BlockSnap::PlaneTransforms
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___PlaneTransforms_9;
	// System.Boolean BlockSnap::isInBound
	bool ___isInBound_10;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] GameManager::spawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoints_4;
	// UnityEngine.GameObject[] GameManager::blocks
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___blocks_5;
	// System.Collections.Generic.List`1<System.Int32> GameManager::list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___list_6;
};

// GrabObject
struct GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera GrabObject::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_4;
	// UnityEngine.LayerMask GrabObject::GrabMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GrabMask_5;
	// UnityEngine.LayerMask GrabObject::ArcBallMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ArcBallMask_6;
	// System.Single GrabObject::RayCastRange
	float ___RayCastRange_7;
	// UnityEngine.Transform GrabObject::<BlockAlign>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CBlockAlignU3Ek__BackingField_8;
	// UnityEngine.GameObject GrabObject::grabObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grabObject_9;
	// System.Boolean GrabObject::<IsGrab>k__BackingField
	bool ___U3CIsGrabU3Ek__BackingField_10;
	// UnityEngine.Vector2 GrabObject::ScreenCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenCenter_11;
	// UnityEngine.Vector2 GrabObject::prevTouchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___prevTouchPos_12;
	// UnityEngine.Vector3 GrabObject::relativePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativePos_13;
	// UnityEngine.Vector3 GrabObject::vStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vStart_14;
	// UnityEngine.Vector3 GrabObject::vEnd
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vEnd_15;
	// UnityEngine.Transform GrabObject::accumulatedRot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___accumulatedRot_16;
	// UnityEngine.Quaternion GrabObject::prevRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___prevRot_17;
};

// GrabObjectMouse
struct GrabObjectMouse_tEE17668100CDCCF2ABEF3A7BB84FC062252EFA4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera GrabObjectMouse::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_4;
	// UnityEngine.LayerMask GrabObjectMouse::GrabMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GrabMask_5;
	// UnityEngine.LayerMask GrabObjectMouse::ArcBallMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ArcBallMask_6;
	// System.Single GrabObjectMouse::RayCastRange
	float ___RayCastRange_7;
	// UnityEngine.Transform GrabObjectMouse::BlockAlign
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___BlockAlign_8;
	// UnityEngine.GameObject GrabObjectMouse::grabObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grabObject_9;
	// System.Boolean GrabObjectMouse::isGrab
	bool ___isGrab_10;
	// UnityEngine.Vector2 GrabObjectMouse::ScreenCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenCenter_11;
	// UnityEngine.Vector2 GrabObjectMouse::prevTouchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___prevTouchPos_12;
	// UnityEngine.Vector3 GrabObjectMouse::relativePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativePos_13;
	// UnityEngine.Vector3 GrabObjectMouse::vStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vStart_14;
	// UnityEngine.Vector3 GrabObjectMouse::vEnd
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vEnd_15;
	// UnityEngine.Transform GrabObjectMouse::accumulatedRot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___accumulatedRot_16;
	// UnityEngine.Quaternion GrabObjectMouse::prevRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___prevRot_17;
};

// MarkerBehavior
struct MarkerBehavior_t73EAB8991ACBB43C4701D548712C3DEE335A195C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BlockPosition MarkerBehavior::BP
	BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* ___BP_4;
	// System.Int32 MarkerBehavior::x
	int32_t ___x_5;
	// System.Int32 MarkerBehavior::y
	int32_t ___y_6;
	// System.Int32 MarkerBehavior::z
	int32_t ___z_7;
};

// MaskObject
struct MaskObject_t4E24B79E45FB06D58C98644FD3EE20265B87FC52  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MiniStage
struct MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MiniStage::baseObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseObject_4;
	// GrabObject MiniStage::grabObject
	GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* ___grabObject_5;
	// UnityEngine.GameObject MiniStage::stagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stagePrefab_6;
	// MiniStage[] MiniStage::miniStagePrefabs
	MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* ___miniStagePrefabs_7;
	// UnityEngine.Vector3 MiniStage::<GameBoardPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGameBoardPositionU3Ek__BackingField_8;
	// UnityEngine.Quaternion MiniStage::<GameBoardRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CGameBoardRotationU3Ek__BackingField_9;
};

// PlaceGameBoard
struct PlaceGameBoard_t480BB8F4B3507F65E97AEDCF1D31050F31B07129  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlaceGameBoard::gameBoardArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameBoardArea_4;
	// UnityEngine.GameObject PlaceGameBoard::baseObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseObject_5;
	// UnityEngine.GameObject PlaceGameBoard::baseObjectMask
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseObjectMask_6;
	// TMPro.TextMeshProUGUI PlaceGameBoard::uiText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___uiText_7;
	// UnityEngine.GameObject[] PlaceGameBoard::stagePrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___stagePrefabs_8;
	// UnityEngine.Vector3[] PlaceGameBoard::stagePrefabPos
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___stagePrefabPos_9;
	// UnityEngine.XR.ARFoundation.ARRaycastManager PlaceGameBoard::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_10;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> PlaceGameBoard::m_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___m_Hits_11;
	// UnityEngine.Vector2 PlaceGameBoard::ScreenCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenCenter_12;
};

// Stage
struct Stage_tD58205F690D18C2F904AB6ADDA3B45189C4C3E04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] Stage::spawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoints_4;
	// UnityEngine.GameObject[] Stage::blockPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___blockPrefabs_5;
	// System.Collections.Generic.List`1<System.Int32> Stage::list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___list_6;
	// GrabObject Stage::grabObject
	GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* ___grabObject_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[,,]
struct BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
	inline bool GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, bool value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, bool value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MiniStage[]
struct MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD  : public RuntimeArray
{
	ALIGN_FIELD (8) MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* m_Items[1];

	inline MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void BlockSnap::InitializeTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_InitializeTransforms_m1E3495861DE5D8AC5094F4D78712CC3268030BD8 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) ;
// System.Void BlockSnap::SnapTranslate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_SnapTranslate_m2CF7C7C02BC8A03810D6A3C277F6E174E785B565 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) ;
// System.Void BlockSnap::RefreshBaseBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_RefreshBaseBlock_m02D8422244D9F9514B29C31D2FE3A381ACB82E8F (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform BlockSnap::GetClosestMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BlockSnap_GetClosestMarker_mCC3807980EAC906CFA12F182470E62767C868F7E (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Transform BlockSnap::GetBaseBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BlockSnap_GetBaseBlock_mB879F7EB57E0F53467B2E91729E3E217864BA21D (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform GrabObject::get_BlockAlign()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GrabObject_get_BlockAlign_m08D02A1092E5E230E8F4A904CD004EDF5E16915B_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GrabObject::set_BlockAlign(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrabObject_set_BlockAlign_m4980D85168E43DC100735164D2FA33DCF749DCA7_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean GrabObject::get_IsGrab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GrabObject_get_IsGrab_m7DDD9275EBC89FF0C54D820C008ADAB7375E618E_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void GrabObject::set_IsGrab(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrabObject_set_IsGrab_m4128B46393DA634E1A5AFDEDF0CFDC86C7DF6746_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GrabObject::NearestWorldAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GrabObject_NearestWorldAxis_mA775A0BC54ED307FBF4B7A731AE1D943ADDF336A (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___input0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GrabObjectMouse::NearestWorldAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GrabObjectMouse_NearestWorldAxis_mA288FA63E2AC3BB20698C6AE566BC3682C9C6FB9 (GrabObjectMouse_tEE17668100CDCCF2ABEF3A7BB84FC062252EFA4E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___input0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BlockPosition>()
inline BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* GameObject_GetComponent_TisBlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D_mD55A04D9852DA1329A22496AB10D40C51C612451 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void BlockPosition::SetCollision(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockPosition_SetCollision_m8B6B554E0231E0693C496F213ACE7ECB16076F31 (BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* __this, int32_t ___i0, int32_t ___j1, int32_t ___k2, bool ___value3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GrabObject>()
inline GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5 (const RuntimeMethod* method)
{
	return ((  GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Component::GetComponent<GrabObject>()
inline GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<MiniStage>()
inline MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* Object_FindObjectsOfType_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_mFFA715D73EF1C3BFFAA0704B0374BC3507B13FE7 (const RuntimeMethod* method)
{
	return ((  MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MiniStage::get_GameBoardPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MiniStage_get_GameBoardPosition_m7CAB2505B9B2109ECC6F64B2FB1017EC995BADF3_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MiniStage::get_GameBoardRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MiniStage_get_GameBoardRotation_m18EDC536264C69FEBD274B070665103331182F25_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<GrabObject>()
inline GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* GameObject_GetComponentInChildren_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mD45BCBB3C7B7CD495D81978BB377D04B701DF39E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MiniStage>()
inline MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MiniStage::set_GameBoardPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MiniStage_set_GameBoardPosition_m6E850897A94C36BB7FAE8BB2A4E9EDE850F38D97_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void MiniStage::set_GameBoardRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MiniStage_set_GameBoardRotation_m8002C79BD1C79BBAEA02D888BBE188768289A081_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void MaskObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskObject_Start_m0064CC419526014BB973880D7EEB02DECC5F20FA (MaskObject_t4E24B79E45FB06D58C98644FD3EE20265B87FC52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshRenderer>().material.renderQueue = 3002;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		NullCheck(L_1);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_1, ((int32_t)3002), NULL);
		// }
		return;
	}
}
// System.Void MaskObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskObject__ctor_mF0592F37B96FF1395F0FECCCE9EE04F16EBD9747 (MaskObject_t4E24B79E45FB06D58C98644FD3EE20265B87FC52* __this, const RuntimeMethod* method) 
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
// System.Void BaseObjectManager::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObjectManager_OnDrawGizmos_mE6ECC34BD07D1B417296AB04729FD53CBA407104 (BaseObjectManager_tC273A1957D77694B4DE3B23A1A869597945A4AE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7E2C1E4BBC9E9AF540A309A38663CA0B2F2039);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// Markers = this.transform.Find("Markers");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral0C7E2C1E4BBC9E9AF540A309A38663CA0B2F2039, NULL);
		__this->___Markers_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Markers_4), (void*)L_1);
		// if (isDrawMarker && !markerFlag)
		bool L_2 = __this->___isDrawMarker_5;
		if (!L_2)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_3 = __this->___markerFlag_6;
		if (L_3)
		{
			goto IL_00a2;
		}
	}
	{
		// foreach (Transform layer in Markers.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___Markers_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_5, NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_8 = V_2;
					if (!L_8)
					{
						goto IL_009a;
					}
				}
				{
					RuntimeObject* L_9 = V_2;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_009a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_003c_1:
			{
				// foreach (Transform layer in Markers.transform)
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				// foreach (Transform marker in layer)
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				RuntimeObject* L_12;
				L_12 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				V_1 = L_12;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_006f_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_13 = V_1;
							V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_14 = V_2;
							if (!L_14)
							{
								goto IL_007f_1;
							}
						}
						{
							RuntimeObject* L_15 = V_2;
							NullCheck(L_15);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
						}

IL_007f_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0065_2;
					}

IL_004f_2:
					{
						// foreach (Transform marker in layer)
						RuntimeObject* L_16 = V_1;
						NullCheck(L_16);
						RuntimeObject* L_17;
						L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
						// marker.GetComponent<MeshRenderer>().enabled = true;
						NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_17, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
						MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_18;
						L_18 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_17, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
						NullCheck(L_18);
						Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_18, (bool)1, NULL);
					}

IL_0065_2:
					{
						// foreach (Transform marker in layer)
						RuntimeObject* L_19 = V_1;
						NullCheck(L_19);
						bool L_20;
						L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
						if (L_20)
						{
							goto IL_004f_2;
						}
					}
					{
						goto IL_0080_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0080_1:
			{
				// foreach (Transform layer in Markers.transform)
				RuntimeObject* L_21 = V_0;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_003c_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// markerFlag = true;
		__this->___markerFlag_6 = (bool)1;
	}

IL_00a2:
	{
		// if (!isDrawMarker && markerFlag)
		bool L_23 = __this->___isDrawMarker_5;
		if (L_23)
		{
			goto IL_012e;
		}
	}
	{
		bool L_24 = __this->___markerFlag_6;
		if (!L_24)
		{
			goto IL_012e;
		}
	}
	{
		// foreach (Transform layer in Markers.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___Markers_4;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_26, NULL);
		V_0 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0116:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_28, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_29 = V_2;
					if (!L_29)
					{
						goto IL_0126;
					}
				}
				{
					RuntimeObject* L_30 = V_2;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_0126:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010c_1;
			}

IL_00c8_1:
			{
				// foreach (Transform layer in Markers.transform)
				RuntimeObject* L_31 = V_0;
				NullCheck(L_31);
				RuntimeObject* L_32;
				L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				// foreach (Transform marker in layer)
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_32, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				RuntimeObject* L_33;
				L_33 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_32, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				V_1 = L_33;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00fb_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_34 = V_1;
							V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_35 = V_2;
							if (!L_35)
							{
								goto IL_010b_1;
							}
						}
						{
							RuntimeObject* L_36 = V_2;
							NullCheck(L_36);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
						}

IL_010b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00f1_2;
					}

IL_00db_2:
					{
						// foreach (Transform marker in layer)
						RuntimeObject* L_37 = V_1;
						NullCheck(L_37);
						RuntimeObject* L_38;
						L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_37);
						// marker.GetComponent<MeshRenderer>().enabled = false;
						NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_38, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
						MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_39;
						L_39 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_38, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
						NullCheck(L_39);
						Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_39, (bool)0, NULL);
					}

IL_00f1_2:
					{
						// foreach (Transform marker in layer)
						RuntimeObject* L_40 = V_1;
						NullCheck(L_40);
						bool L_41;
						L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
						if (L_41)
						{
							goto IL_00db_2;
						}
					}
					{
						goto IL_010c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_010c_1:
			{
				// foreach (Transform layer in Markers.transform)
				RuntimeObject* L_42 = V_0;
				NullCheck(L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_42);
				if (L_43)
				{
					goto IL_00c8_1;
				}
			}
			{
				goto IL_0127;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0127:
	{
		// markerFlag = false;
		__this->___markerFlag_6 = (bool)0;
	}

IL_012e:
	{
		// }
		return;
	}
}
// System.Void BaseObjectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObjectManager__ctor_mB284D8F5BAE6A107EC7AA755CE70C285FA3610C8 (BaseObjectManager_tC273A1957D77694B4DE3B23A1A869597945A4AE2* __this, const RuntimeMethod* method) 
{
	{
		// private bool markerFlag = true;
		__this->___markerFlag_6 = (bool)1;
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
// System.Void BlockColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockColor_Start_m633E5894727637F9F7502B15299CF385038F974E (BlockColor_t38F0E0CB162384C0CF66AD1C603C1E0B6A4CDE53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// Shader shader = this.transform.GetChild(0).GetComponent<MeshRenderer>().material.shader;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_1, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_3, NULL);
		// Material material = new Material(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_5, L_4, NULL);
		V_0 = L_5;
		// int blockIndex = -1;
		V_2 = (-1);
		// for (int i = 0; i < 8; i++)
		V_3 = 0;
		goto IL_0046;
	}

IL_0027:
	{
		// if (this.gameObject.name.Contains(i.ToString()))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		// blockIndex = i;
		int32_t L_10 = V_3;
		V_2 = L_10;
	}

IL_0042:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) < ((int32_t)8)))
		{
			goto IL_0027;
		}
	}
	{
		// color = blockIndex switch
		// {
		//     0 => new Color32(186, 79, 210, 255),
		//     1 => new Color32(95, 61, 148, 255),
		//     2 => new Color32(64, 108, 209, 255),
		//     3 => new Color32(74, 181, 209, 255),
		//     4 => new Color32(106, 192, 255, 255),
		//     5 => new Color32(204, 199, 111, 255),
		//     6 => new Color32(200, 151, 113, 255),
		//     7 => new Color32(182, 103, 114, 255),
		//     _ => new Color32(235, 235, 235, 255),
		// };
		int32_t L_13 = V_2;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_00ac;
			}
			case 3:
			{
				goto IL_00c6;
			}
			case 4:
			{
				goto IL_00e3;
			}
			case 5:
			{
				goto IL_00fd;
			}
			case 6:
			{
				goto IL_0117;
			}
			case 7:
			{
				goto IL_0131;
			}
		}
	}
	{
		goto IL_0148;
	}

IL_0075:
	{
		// 0 => new Color32(186, 79, 210, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), (uint8_t)((int32_t)186), (uint8_t)((int32_t)79), (uint8_t)((int32_t)210), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_14;
		goto IL_0163;
	}

IL_0092:
	{
		// 1 => new Color32(95, 61, 148, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_15), (uint8_t)((int32_t)95), (uint8_t)((int32_t)61), (uint8_t)((int32_t)148), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_15;
		goto IL_0163;
	}

IL_00ac:
	{
		// 2 => new Color32(64, 108, 209, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)((int32_t)64), (uint8_t)((int32_t)108), (uint8_t)((int32_t)209), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_16;
		goto IL_0163;
	}

IL_00c6:
	{
		// 3 => new Color32(74, 181, 209, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_17), (uint8_t)((int32_t)74), (uint8_t)((int32_t)181), (uint8_t)((int32_t)209), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_17;
		goto IL_0163;
	}

IL_00e3:
	{
		// 4 => new Color32(106, 192, 255, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_18), (uint8_t)((int32_t)106), (uint8_t)((int32_t)192), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_18;
		goto IL_0163;
	}

IL_00fd:
	{
		// 5 => new Color32(204, 199, 111, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_19), (uint8_t)((int32_t)204), (uint8_t)((int32_t)199), (uint8_t)((int32_t)111), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_19;
		goto IL_0163;
	}

IL_0117:
	{
		// 6 => new Color32(200, 151, 113, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_20), (uint8_t)((int32_t)200), (uint8_t)((int32_t)151), (uint8_t)((int32_t)113), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_20;
		goto IL_0163;
	}

IL_0131:
	{
		// 7 => new Color32(182, 103, 114, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_21), (uint8_t)((int32_t)182), (uint8_t)((int32_t)103), (uint8_t)((int32_t)114), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_0163;
	}

IL_0148:
	{
		// _ => new Color32(235, 235, 235, 255),
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_22), (uint8_t)((int32_t)235), (uint8_t)((int32_t)235), (uint8_t)((int32_t)235), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		V_4 = L_22;
	}

IL_0163:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_23 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_23, NULL);
		V_1 = L_24;
		// material.SetColor("_Color", color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = V_1;
		NullCheck(L_25);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_25, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_26, NULL);
		// foreach (Transform block in this.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_27, NULL);
		V_5 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01a8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_5;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_30 = V_6;
					if (!L_30)
					{
						goto IL_01bc;
					}
				}
				{
					RuntimeObject* L_31 = V_6;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_01bc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_019d_1;
			}

IL_0186_1:
			{
				// foreach (Transform block in this.transform)
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				RuntimeObject* L_33;
				L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				// block.GetComponent<MeshRenderer>().material = material;
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_33, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_34;
				L_34 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_33, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = V_0;
				NullCheck(L_34);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_34, L_35, NULL);
			}

IL_019d_1:
			{
				// foreach (Transform block in this.transform)
				RuntimeObject* L_36 = V_5;
				NullCheck(L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_0186_1;
				}
			}
			{
				goto IL_01bd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01bd:
	{
		// }
		return;
	}
}
// System.Void BlockColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockColor__ctor_m71754055652C1BCD2EFE5138E575AC7F9785D4BD (BlockColor_t38F0E0CB162384C0CF66AD1C603C1E0B6A4CDE53* __this, const RuntimeMethod* method) 
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
// System.Void BlockPosition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockPosition_Start_m54AFC9878A732846750165DC784EAFD9918AA665 (BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// for (int j = 0; j < 4; j++)
		V_1 = 0;
		goto IL_0027;
	}

IL_0008:
	{
		// for (int k = 0; k < 4; k++)
		V_2 = 0;
		goto IL_001f;
	}

IL_000c:
	{
		// blockCollision[i, j, k] = false;
		BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE* L_0 = __this->___blockCollision_4;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_3, (bool)0);
		// for (int k = 0; k < 4; k++)
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001f:
	{
		// for (int k = 0; k < 4; k++)
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		// for (int j = 0; j < 4; j++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		// for (int j = 0; j < 4; j++)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		// foreach (var pos in initPos)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->___initPos_5;
		V_3 = L_10;
		V_4 = 0;
		goto IL_0073;
	}

IL_003f:
	{
		// foreach (var pos in initPos)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		// blockCollision[(int)pos.x, (int)pos.y, (int)pos.z] = true;
		BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE* L_15 = __this->___blockCollision_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_5;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_5;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_5;
		float L_21 = L_20.___z_4;
		NullCheck(L_15);
		(L_15)->SetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_17), il2cpp_codegen_cast_double_to_int<int32_t>(L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_21), (bool)1);
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0073:
	{
		// foreach (var pos in initPos)
		int32_t L_23 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BlockPosition::SetCollision(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockPosition_SetCollision_m8B6B554E0231E0693C496F213ACE7ECB16076F31 (BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* __this, int32_t ___i0, int32_t ___j1, int32_t ___k2, bool ___value3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74CEC2234637B38BFA93F58793CA0C7412AB8AFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// blockCollision[i, j, k] = value;
		BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE* L_0 = __this->___blockCollision_4;
		int32_t L_1 = ___i0;
		int32_t L_2 = ___j1;
		int32_t L_3 = ___k2;
		bool L_4 = ___value3;
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_3, L_4);
		// Debug.Log("collision");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral74CEC2234637B38BFA93F58793CA0C7412AB8AFF, NULL);
		// }
		return;
	}
}
// System.Void BlockPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockPosition__ctor_mA42C4AE50A492C223B1ED4F568BC219D4421B3B2 (BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool[,,] blockCollision = new bool[4, 4, 4];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)4, (il2cpp_array_size_t)4, (il2cpp_array_size_t)4 };
		BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE* L_0 = (BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE*)GenArrayNew(BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE_il2cpp_TypeInfo_var, L_1);
		__this->___blockCollision_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blockCollision_4), (void*)L_0);
		// private Vector3[] initPos = new Vector3[12];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___initPos_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initPos_5), (void*)L_2);
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
// System.Void BlockSnap::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_Start_mB29D2A98309AB5F94E9586C2B9949E84D3F3DF86 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7D54E52BE5783A857F4117AA3826FE3A7933041);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseObject = GameObject.Find("BaseObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC7D54E52BE5783A857F4117AA3826FE3A7933041, NULL);
		__this->___BaseObject_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BaseObject_7), (void*)L_0);
		// Planes = BaseObject.transform.GetChild(0).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___BaseObject_7;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		__this->___Planes_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Planes_5), (void*)L_4);
		// Markers = BaseObject.transform.GetChild(1).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___BaseObject_7;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, 1, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		__this->___Markers_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Markers_4), (void*)L_8);
		// BaseBlock = this.transform.GetChild(0).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, 0, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		__this->___BaseBlock_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BaseBlock_6), (void*)L_11);
		// InitializeTransforms();
		BlockSnap_InitializeTransforms_m1E3495861DE5D8AC5094F4D78712CC3268030BD8(__this, NULL);
		// }
		return;
	}
}
// System.Void BlockSnap::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_Update_m5567650D0E5D8B1F57FAE4BF73B6934B37492652 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
{
	{
		// if (isInBound)
		bool L_0 = __this->___isInBound_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// SnapTranslate();
		BlockSnap_SnapTranslate_m2CF7C7C02BC8A03810D6A3C277F6E174E785B565(__this, NULL);
		// RefreshBaseBlock();
		BlockSnap_RefreshBaseBlock_m02D8422244D9F9514B29C31D2FE3A381ACB82E8F(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void BlockSnap::SnapTranslate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_SnapTranslate_m2CF7C7C02BC8A03810D6A3C277F6E174E785B565 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// Transform closestMarker = GetClosestMarker();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = BlockSnap_GetClosestMarker_mCC3807980EAC906CFA12F182470E62767C868F7E(__this, NULL);
		V_0 = L_0;
		// if (closestMarker != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// this.gameObject.transform.Translate(closestMarker.position - BaseBlock.transform.position, Space.World);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___BaseBlock_6;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_9, NULL);
		NullCheck(L_4);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_4, L_10, 0, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void BlockSnap::RefreshBaseBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_RefreshBaseBlock_m02D8422244D9F9514B29C31D2FE3A381ACB82E8F (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// Transform _baseBlock = GetBaseBlock();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = BlockSnap_GetBaseBlock_mB879F7EB57E0F53467B2E91729E3E217864BA21D(__this, NULL);
		V_0 = L_0;
		// if (_baseBlock != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// BaseBlock = _baseBlock.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		__this->___BaseBlock_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BaseBlock_6), (void*)L_4);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void BlockSnap::InitializeTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_InitializeTransforms_m1E3495861DE5D8AC5094F4D78712CC3268030BD8 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	{
		// MarkerTransforms = new();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___MarkerTransforms_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MarkerTransforms_8), (void*)L_0);
		// PlaneTransforms = new();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_1, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___PlaneTransforms_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PlaneTransforms_9), (void*)L_1);
		// foreach (Transform layer in Markers.transform)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Markers_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_0089;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0089:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0029_1:
			{
				// foreach (Transform layer in Markers.transform)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				// foreach (Transform marker in layer)
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				RuntimeObject* L_10;
				L_10 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				V_1 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005e_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_11 = V_1;
							V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_12 = V_3;
							if (!L_12)
							{
								goto IL_006e_1;
							}
						}
						{
							RuntimeObject* L_13 = V_3;
							NullCheck(L_13);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
						}

IL_006e_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0054_2;
					}

IL_003c_2:
					{
						// foreach (Transform marker in layer)
						RuntimeObject* L_14 = V_1;
						NullCheck(L_14);
						RuntimeObject* L_15;
						L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
						V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_15, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
						// MarkerTransforms.Add(marker);
						List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_16 = __this->___MarkerTransforms_8;
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_2;
						NullCheck(L_16);
						List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_16, L_17, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
					}

IL_0054_2:
					{
						// foreach (Transform marker in layer)
						RuntimeObject* L_18 = V_1;
						NullCheck(L_18);
						bool L_19;
						L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
						if (L_19)
						{
							goto IL_003c_2;
						}
					}
					{
						goto IL_006f_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_006f_1:
			{
				// foreach (Transform layer in Markers.transform)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		// foreach (Transform plane in Planes.transform)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___Planes_5;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_23, NULL);
		V_0 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c1:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00d1;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00d1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b7_1;
			}

IL_009d_1:
			{
				// foreach (Transform plane in Planes.transform)
				RuntimeObject* L_28 = V_0;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				V_4 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_29, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// PlaneTransforms.Add(plane);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_30 = __this->___PlaneTransforms_9;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_4;
				NullCheck(L_30);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_30, L_31, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
			}

IL_00b7_1:
			{
				// foreach (Transform plane in Planes.transform)
				RuntimeObject* L_32 = V_0;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_009d_1;
				}
			}
			{
				goto IL_00d2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d2:
	{
		// }
		return;
	}
}
// UnityEngine.Transform BlockSnap::GetBaseBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BlockSnap_GetBaseBlock_mB879F7EB57E0F53467B2E91729E3E217864BA21D (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	float V_4 = 0.0f;
	RuntimeObject* V_5 = NULL;
	{
		// float closestDist = (float)int.MaxValue;
		V_0 = (2.14748365E+09f);
		// Transform closestBlock = null;
		V_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// foreach (Transform block in this.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_2;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_5;
					if (!L_3)
					{
						goto IL_0067;
					}
				}
				{
					RuntimeObject* L_4 = V_5;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0067:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0016_1:
			{
				// foreach (Transform block in this.transform)
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_3 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// float dist = Vector3.Distance(MarkerTransforms[0].position, block.position);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7 = __this->___MarkerTransforms_8;
				NullCheck(L_7);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_7, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_3;
				NullCheck(L_10);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
				float L_12;
				L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_11, NULL);
				V_4 = L_12;
				// if (closestDist > dist)
				float L_13 = V_0;
				float L_14 = V_4;
				if ((!(((float)L_13) > ((float)L_14))))
				{
					goto IL_004a_1;
				}
			}
			{
				// closestDist = dist;
				float L_15 = V_4;
				V_0 = L_15;
				// closestBlock = block;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_3;
				V_1 = L_16;
			}

IL_004a_1:
			{
				// foreach (Transform block in this.transform)
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// return closestBlock;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_1;
		return L_19;
	}
}
// UnityEngine.Transform BlockSnap::GetClosestMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BlockSnap_GetClosestMarker_mCC3807980EAC906CFA12F182470E62767C868F7E (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// float closestDist = (float)int.MaxValue;
		V_0 = (2.14748365E+09f);
		// Transform closestMarker = null;
		V_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// foreach (Transform marker in MarkerTransforms)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___MarkerTransforms_8;
		NullCheck(L_0);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_1;
		L_1 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_0, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_2), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0016_1:
			{
				// foreach (Transform marker in MarkerTransforms)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
				L_2 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_2), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				V_3 = L_2;
				// float dist = Vector3.Distance(BaseBlock.transform.position, marker.position);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___BaseBlock_6;
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
				L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
				NullCheck(L_4);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
				L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_3;
				NullCheck(L_6);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
				float L_8;
				L_8 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_5, L_7, NULL);
				V_4 = L_8;
				// if (closestDist > dist)
				float L_9 = V_0;
				float L_10 = V_4;
				if ((!(((float)L_9) > ((float)L_10))))
				{
					goto IL_0045_1;
				}
			}
			{
				// closestDist = dist;
				float L_11 = V_4;
				V_0 = L_11;
				// closestMarker = marker;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_3;
				V_1 = L_12;
			}

IL_0045_1:
			{
				// foreach (Transform marker in MarkerTransforms)
				bool L_13;
				L_13 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_2), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// return closestMarker;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
		return L_14;
	}
}
// System.Void BlockSnap::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_OnTriggerStay_m722A5E8CCA74E0FD7470F71A823DDFF734DD7769 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (other.gameObject.layer.Equals(8))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), 8, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// isInBound = true;
		__this->___isInBound_10 = (bool)1;
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void BlockSnap::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap_OnTriggerExit_mBE2BF35672A894F0381EEE2E4CD40363F7451403 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (other.gameObject.layer.Equals(8))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), 8, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// isInBound = false;
		__this->___isInBound_10 = (bool)0;
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void BlockSnap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSnap__ctor_mE5697EC53E6A478C313AD41BD26216A9A531E8A0 (BlockSnap_tACD4E54526B72D3C73F57218CB61C38EDE6797E6* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int i = 0; i < 13; i++)
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// list.Add(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___list_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_0, L_1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < 13; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0014:
	{
		// for (int i = 0; i < 13; i++)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)13))))
		{
			goto IL_0004;
		}
	}
	{
		// foreach (var block in blocks)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___blocks_5;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0061;
	}

IL_0024:
	{
		// foreach (var block in blocks)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// int ran = Random.Range(0, list.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___list_6;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_9, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_10, NULL);
		V_3 = L_11;
		// Instantiate(block, spawnPoints[ran].position, Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = __this->___spawnPoints_4;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// list.RemoveAt(ran);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = __this->___list_6;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_19, L_20, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0061:
	{
		// foreach (var block in blocks)
		int32_t L_22 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> list = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___list_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_6), (void*)L_0);
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
// UnityEngine.Transform GrabObject::get_BlockAlign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GrabObject_get_BlockAlign_m08D02A1092E5E230E8F4A904CD004EDF5E16915B (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform BlockAlign { get; set; }      // block? ??? ?? => ?? ??
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CBlockAlignU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GrabObject::set_BlockAlign(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_set_BlockAlign_m4980D85168E43DC100735164D2FA33DCF749DCA7 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform BlockAlign { get; set; }      // block? ??? ?? => ?? ??
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___U3CBlockAlignU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBlockAlignU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean GrabObject::get_IsGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GrabObject_get_IsGrab_m7DDD9275EBC89FF0C54D820C008ADAB7375E618E (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrab { get; set; } = false;
		bool L_0 = __this->___U3CIsGrabU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void GrabObject::set_IsGrab(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_set_IsGrab_m4128B46393DA634E1A5AFDEDF0CFDC86C7DF6746 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsGrab { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsGrabU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void GrabObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_Start_m9D6E8A3B8B447EFEDA147364273A544CB5DD81FD (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScreenCenter = new Vector2(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)((int32_t)(L_1/2))), ((float)((int32_t)(L_3/2))), /*hidden argument*/NULL);
		__this->___ScreenCenter_11 = L_4;
		// if (!BlockAlign)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GrabObject_get_BlockAlign_m08D02A1092E5E230E8F4A904CD004EDF5E16915B_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		// BlockAlign = new GameObject().GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_7, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_7, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		GrabObject_set_BlockAlign_m4980D85168E43DC100735164D2FA33DCF749DCA7_inline(__this, L_8, NULL);
		// BlockAlign.rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GrabObject_get_BlockAlign_m08D02A1092E5E230E8F4A904CD004EDF5E16915B_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
	}

IL_0058:
	{
		// if (!accumulatedRot)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___accumulatedRot_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (L_13)
		{
			goto IL_0075;
		}
	}
	{
		// accumulatedRot = new GameObject().GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_14, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_14, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		__this->___accumulatedRot_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accumulatedRot_16), (void*)L_15);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void GrabObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_Update_mB3C6BE714FAEAF21D011037D58A1F8954CF0BC03 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA7C1A8111920FC535E1F40384539D103E9A2532);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (IsGrab)
		bool L_2;
		L_2 = GrabObject_get_IsGrab_m7DDD9275EBC89FF0C54D820C008ADAB7375E618E_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// grabObject.transform.position = arCamera.transform.rotation * relativePos + arCamera.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___grabObject_9;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___arCamera_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___relativePos_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_7, L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___arCamera_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_12, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_13, NULL);
	}

IL_0057:
	{
		// if (touch.phase == TouchPhase.Began)
		int32_t L_14;
		L_14 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_14)
		{
			goto IL_016f;
		}
	}
	{
		// Ray ray = arCamera.ScreenPointToRay(ScreenCenter);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___arCamera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___ScreenCenter_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_16, NULL);
		NullCheck(L_15);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_18;
		L_18 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_15, L_17, NULL);
		// if (Physics.Raycast(ray, out RaycastHit hit, RayCastRange, GrabMask))
		float L_19 = __this->___RayCastRange_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_20 = __this->___GrabMask_5;
		int32_t L_21;
		L_21 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_20, NULL);
		bool L_22;
		L_22 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_18, (&V_1), L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_035d;
		}
	}
	{
		// if (hit.collider.gameObject.transform.parent != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23;
		L_23 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00d7;
		}
	}
	{
		// grabObject = hit.collider.gameObject.transform.parent.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28;
		L_28 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_30, NULL);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		__this->___grabObject_9 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabObject_9), (void*)L_32);
		goto IL_00e9;
	}

IL_00d7:
	{
		// grabObject = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33;
		L_33 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		__this->___grabObject_9 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabObject_9), (void*)L_34);
	}

IL_00e9:
	{
		// relativePos = Quaternion.Inverse(arCamera.transform.rotation) * (grabObject.transform.position - arCamera.transform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = __this->___arCamera_4;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_36, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___grabObject_9;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = __this->___arCamera_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_41, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_38, L_45, NULL);
		__this->___relativePos_13 = L_46;
		// accumulatedRot.rotation = grabObject.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___accumulatedRot_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___grabObject_9;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		NullCheck(L_49);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_49, NULL);
		NullCheck(L_47);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_47, L_50, NULL);
		// prevRot = accumulatedRot.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___accumulatedRot_16;
		NullCheck(L_51);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_51, NULL);
		__this->___prevRot_17 = L_52;
		// prevTouchPos = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___prevTouchPos_12 = L_53;
		// IsGrab = true;
		GrabObject_set_IsGrab_m4128B46393DA634E1A5AFDEDF0CFDC86C7DF6746_inline(__this, (bool)1, NULL);
		return;
	}

IL_016f:
	{
		// else if (touch.phase == TouchPhase.Ended)
		int32_t L_54;
		L_54 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_54) == ((uint32_t)3))))
		{
			goto IL_0181;
		}
	}
	{
		// IsGrab = false;
		GrabObject_set_IsGrab_m4128B46393DA634E1A5AFDEDF0CFDC86C7DF6746_inline(__this, (bool)0, NULL);
		return;
	}

IL_0181:
	{
		// else if (touch.phase != TouchPhase.Canceled) // Moved? Stationary? ??
		int32_t L_55;
		L_55 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_035d;
		}
	}
	{
		// if (!grabObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___grabObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_56, NULL);
		if (L_57)
		{
			goto IL_01a2;
		}
	}
	{
		// IsGrab = false;
		GrabObject_set_IsGrab_m4128B46393DA634E1A5AFDEDF0CFDC86C7DF6746_inline(__this, (bool)0, NULL);
	}

IL_01a2:
	{
		// if (IsGrab && !grabObject.name.Contains("Stage")) // grab???? object? ?? ?? ?? ??
		bool L_58;
		L_58 = GrabObject_get_IsGrab_m7DDD9275EBC89FF0C54D820C008ADAB7375E618E_inline(__this, NULL);
		if (!L_58)
		{
			goto IL_035d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___grabObject_9;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_59, NULL);
		NullCheck(L_60);
		bool L_61;
		L_61 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_60, _stringLiteralBA7C1A8111920FC535E1F40384539D103E9A2532, NULL);
		if (L_61)
		{
			goto IL_035d;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(ScreenCenter);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_62;
		L_62 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = __this->___ScreenCenter_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_63, NULL);
		NullCheck(L_62);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_65;
		L_65 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_62, L_64, NULL);
		// if (Physics.Raycast(ray, out RaycastHit hit, RayCastRange, ArcBallMask))
		float L_66 = __this->___RayCastRange_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_67 = __this->___ArcBallMask_6;
		int32_t L_68;
		L_68 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_67, NULL);
		bool L_69;
		L_69 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_65, (&V_2), L_66, L_68, NULL);
		if (!L_69)
		{
			goto IL_0213;
		}
	}
	{
		// vStart = hit.point - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_2), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_70, L_72, NULL);
		__this->___vStart_14 = L_73;
	}

IL_0213:
	{
		// ray = Camera.main.ScreenPointToRay(ScreenCenter + touch.position - prevTouchPos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_74;
		L_74 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = __this->___ScreenCenter_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76;
		L_76 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		L_77 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_75, L_76, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = __this->___prevTouchPos_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		L_79 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_77, L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_79, NULL);
		NullCheck(L_74);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_81;
		L_81 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_74, L_80, NULL);
		// if (Physics.Raycast(ray, out hit, RayCastRange, ArcBallMask))
		float L_82 = __this->___RayCastRange_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_83 = __this->___ArcBallMask_6;
		int32_t L_84;
		L_84 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_83, NULL);
		bool L_85;
		L_85 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_81, (&V_2), L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_0276;
		}
	}
	{
		// vEnd = hit.point - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_2), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_86, L_88, NULL);
		__this->___vEnd_15 = L_89;
	}

IL_0276:
	{
		// if (Quaternion.Angle(Quaternion.LookRotation(vStart), Quaternion.LookRotation(vEnd)) > 5) // ? ????? 5? ?? ?? ???? ??
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = __this->___vStart_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91;
		L_91 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = __this->___vEnd_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_92, NULL);
		float L_94;
		L_94 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_91, L_93, NULL);
		if ((!(((float)L_94) > ((float)(5.0f)))))
		{
			goto IL_02d7;
		}
	}
	{
		// Quaternion temp = Quaternion.LookRotation(vEnd) * Quaternion.Inverse(Quaternion.LookRotation(vStart));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = __this->___vEnd_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_96;
		L_96 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = __this->___vStart_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98;
		L_98 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_97, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		L_99 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_98, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100;
		L_100 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_96, L_99, NULL);
		V_5 = L_100;
		// accumulatedRot.rotation = temp * accumulatedRot.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = __this->___accumulatedRot_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_102 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = __this->___accumulatedRot_16;
		NullCheck(L_103);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_104;
		L_104 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_103, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_105;
		L_105 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_102, L_104, NULL);
		NullCheck(L_101);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_101, L_105, NULL);
	}

IL_02d7:
	{
		// Vector3 alignedForward = NearestWorldAxis(accumulatedRot.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_106 = __this->___accumulatedRot_16;
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = GrabObject_NearestWorldAxis_mA775A0BC54ED307FBF4B7A731AE1D943ADDF336A(__this, L_107, NULL);
		V_3 = L_108;
		// Vector3 alignedUp = NearestWorldAxis(accumulatedRot.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109 = __this->___accumulatedRot_16;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_109, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = GrabObject_NearestWorldAxis_mA775A0BC54ED307FBF4B7A731AE1D943ADDF336A(__this, L_110, NULL);
		V_4 = L_111;
		// if (prevRot != Quaternion.LookRotation(alignedForward, alignedUp))
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_112 = __this->___prevRot_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_115;
		L_115 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_113, L_114, NULL);
		bool L_116;
		L_116 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_112, L_115, NULL);
		if (!L_116)
		{
			goto IL_0350;
		}
	}
	{
		// grabObject.transform.rotation = Quaternion.LookRotation(alignedForward, alignedUp);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = __this->___grabObject_9;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_121;
		L_121 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_119, L_120, NULL);
		NullCheck(L_118);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_118, L_121, NULL);
		// prevRot = grabObject.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___grabObject_9;
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		NullCheck(L_123);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_124;
		L_124 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_123, NULL);
		__this->___prevRot_17 = L_124;
		// accumulatedRot.rotation = prevRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125 = __this->___accumulatedRot_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_126 = __this->___prevRot_17;
		NullCheck(L_125);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_125, L_126, NULL);
	}

IL_0350:
	{
		// prevTouchPos = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127;
		L_127 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___prevTouchPos_12 = L_127;
	}

IL_035d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 GrabObject::NearestWorldAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GrabObject_NearestWorldAxis_mA775A0BC54ED307FBF4B7A731AE1D943ADDF336A (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___input0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = Quaternion.Inverse(BlockAlign.rotation) * input;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = GrabObject_get_BlockAlign_m08D02A1092E5E230E8F4A904CD004EDF5E16915B_inline(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___input0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		V_0 = L_4;
		// if (Mathf.Abs(v.x) < Mathf.Abs(v.y))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		float L_7;
		L_7 = fabsf(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = fabsf(L_9);
		if ((!(((float)L_7) < ((float)L_10))))
		{
			goto IL_006f;
		}
	}
	{
		// v.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// if (Mathf.Abs(v.y) < Mathf.Abs(v.z))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = fabsf(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___z_4;
		float L_16;
		L_16 = fabsf(L_15);
		if ((!(((float)L_13) < ((float)L_16))))
		{
			goto IL_0061;
		}
	}
	{
		// v.y = 0;
		(&V_0)->___y_3 = (0.0f);
		goto IL_00ad;
	}

IL_0061:
	{
		// v.z = 0;
		(&V_0)->___z_4 = (0.0f);
		goto IL_00ad;
	}

IL_006f:
	{
		// v.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// if (Mathf.Abs(v.x) < Mathf.Abs(v.z))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		float L_18 = L_17.___x_2;
		float L_19;
		L_19 = fabsf(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		float L_21 = L_20.___z_4;
		float L_22;
		L_22 = fabsf(L_21);
		if ((!(((float)L_19) < ((float)L_22))))
		{
			goto IL_00a1;
		}
	}
	{
		// v.x = 0;
		(&V_0)->___x_2 = (0.0f);
		goto IL_00ad;
	}

IL_00a1:
	{
		// v.z = 0;
		(&V_0)->___z_4 = (0.0f);
	}

IL_00ad:
	{
		// return BlockAlign.rotation * v;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GrabObject_get_BlockAlign_m08D02A1092E5E230E8F4A904CD004EDF5E16915B_inline(__this, NULL);
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_24, L_25, NULL);
		return L_26;
	}
}
// System.Void GrabObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject__ctor_m265AD0802B6FD0A9D273A386A69EAFB7286D7485 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
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
// System.Void GrabObjectMouse::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObjectMouse_Start_m75CCD303E6AEB6733662D131CC64CF6D907DB0C7 (GrabObjectMouse_tEE17668100CDCCF2ABEF3A7BB84FC062252EFA4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScreenCenter = new Vector2(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)((int32_t)(L_1/2))), ((float)((int32_t)(L_3/2))), /*hidden argument*/NULL);
		__this->___ScreenCenter_11 = L_4;
		// if (!BlockAlign)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___BlockAlign_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		// BlockAlign = new GameObject().GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_7, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_7, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		__this->___BlockAlign_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BlockAlign_8), (void*)L_8);
		// BlockAlign.rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___BlockAlign_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
	}

IL_0058:
	{
		// if (!accumulatedRot)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___accumulatedRot_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (L_13)
		{
			goto IL_0075;
		}
	}
	{
		// accumulatedRot = new GameObject().GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_14, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_14, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		__this->___accumulatedRot_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accumulatedRot_16), (void*)L_15);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void GrabObjectMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObjectMouse_Update_mAB5B86263AF5A170A08679BB1C2D23B50B63F2BE (GrabObjectMouse_tEE17668100CDCCF2ABEF3A7BB84FC062252EFA4E* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector2 touchPos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_0, NULL);
		V_0 = L_1;
		// ScreenCenter = new Vector2(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)((int32_t)(L_3/2))), ((float)((int32_t)(L_5/2))), /*hidden argument*/NULL);
		__this->___ScreenCenter_11 = L_6;
		// if (isGrab)
		bool L_7 = __this->___isGrab_10;
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		// grabObject.transform.position = arCamera.transform.rotation * relativePos + arCamera.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___grabObject_9;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___arCamera_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___relativePos_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_12, L_13, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___arCamera_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_17, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_18, NULL);
	}

IL_0078:
	{
		// if (Input.GetMouseButtonDown(0)) //(touch.phase == TouchPhase.Began)
		bool L_19;
		L_19 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_19)
		{
			goto IL_0157;
		}
	}
	{
		// Ray ray = arCamera.ScreenPointToRay(ScreenCenter);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->___arCamera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___ScreenCenter_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_21, NULL);
		NullCheck(L_20);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_23;
		L_23 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_20, L_22, NULL);
		// if (Physics.Raycast(ray, out RaycastHit hit, RayCastRange, GrabMask))
		float L_24 = __this->___RayCastRange_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_25 = __this->___GrabMask_5;
		int32_t L_26;
		L_26 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_25, NULL);
		bool L_27;
		L_27 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_23, (&V_1), L_24, L_26, NULL);
		if (!L_27)
		{
			goto IL_0307;
		}
	}
	{
		// grabObject = hit.collider.gameObject.transform.parent.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28;
		L_28 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_30, NULL);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		__this->___grabObject_9 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabObject_9), (void*)L_32);
		// relativePos = Quaternion.Inverse(arCamera.transform.rotation) * (grabObject.transform.position - arCamera.transform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33 = __this->___arCamera_4;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___grabObject_9;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40 = __this->___arCamera_4;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_39, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_36, L_43, NULL);
		__this->___relativePos_13 = L_44;
		// accumulatedRot.rotation = grabObject.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___accumulatedRot_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___grabObject_9;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		NullCheck(L_47);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_47, NULL);
		NullCheck(L_45);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_45, L_48, NULL);
		// prevRot = accumulatedRot.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = __this->___accumulatedRot_16;
		NullCheck(L_49);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_49, NULL);
		__this->___prevRot_17 = L_50;
		// prevTouchPos = touchPos; // touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_0;
		__this->___prevTouchPos_12 = L_51;
		// isGrab = true;
		__this->___isGrab_10 = (bool)1;
		return;
	}

IL_0157:
	{
		// else if (Input.GetMouseButtonUp(0)) //(touch.phase == TouchPhase.Ended)
		bool L_52;
		L_52 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_52)
		{
			goto IL_0167;
		}
	}
	{
		// isGrab = false;
		__this->___isGrab_10 = (bool)0;
		return;
	}

IL_0167:
	{
		// else if (Input.GetMouseButton(0)) //(touch.phase != TouchPhase.Canceled) // Moved? Stationary? ??
		bool L_53;
		L_53 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_53)
		{
			goto IL_0307;
		}
	}
	{
		// if (isGrab) // grab???? object? ?? ?? ?? ??
		bool L_54 = __this->___isGrab_10;
		if (!L_54)
		{
			goto IL_0307;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(ScreenCenter);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_55;
		L_55 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = __this->___ScreenCenter_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_56, NULL);
		NullCheck(L_55);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_58;
		L_58 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_55, L_57, NULL);
		// if (Physics.Raycast(ray, out RaycastHit hit, RayCastRange, ArcBallMask))
		float L_59 = __this->___RayCastRange_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_60 = __this->___ArcBallMask_6;
		int32_t L_61;
		L_61 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_60, NULL);
		bool L_62;
		L_62 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_58, (&V_2), L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01c9;
		}
	}
	{
		// vStart = hit.point - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_2), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_63, L_65, NULL);
		__this->___vStart_14 = L_66;
	}

IL_01c9:
	{
		// ray = Camera.main.ScreenPointToRay(ScreenCenter + touchPos /*touch.position*/ - prevTouchPos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_67;
		L_67 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = __this->___ScreenCenter_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_68, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = __this->___prevTouchPos_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_70, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_72, NULL);
		NullCheck(L_67);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_74;
		L_74 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_67, L_73, NULL);
		// if (Physics.Raycast(ray, out hit, RayCastRange, ArcBallMask))
		float L_75 = __this->___RayCastRange_7;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_76 = __this->___ArcBallMask_6;
		int32_t L_77;
		L_77 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_76, NULL);
		bool L_78;
		L_78 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_74, (&V_2), L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_0226;
		}
	}
	{
		// vEnd = hit.point - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_2), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_79, L_81, NULL);
		__this->___vEnd_15 = L_82;
	}

IL_0226:
	{
		// if (Quaternion.Angle(Quaternion.LookRotation(vStart), Quaternion.LookRotation(vEnd)) > 1) // ? ????? 5? ?? ?? ???? ??
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = __this->___vStart_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
		L_84 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = __this->___vEnd_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86;
		L_86 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_85, NULL);
		float L_87;
		L_87 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_84, L_86, NULL);
		if ((!(((float)L_87) > ((float)(1.0f)))))
		{
			goto IL_0287;
		}
	}
	{
		// Quaternion temp = Quaternion.LookRotation(vEnd) * Quaternion.Inverse(Quaternion.LookRotation(vStart));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = __this->___vEnd_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89;
		L_89 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = __this->___vStart_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91;
		L_91 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_90, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_92;
		L_92 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_91, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_89, L_92, NULL);
		V_5 = L_93;
		// accumulatedRot.rotation = temp * accumulatedRot.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94 = __this->___accumulatedRot_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = __this->___accumulatedRot_16;
		NullCheck(L_96);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_97;
		L_97 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_96, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98;
		L_98 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_95, L_97, NULL);
		NullCheck(L_94);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_94, L_98, NULL);
	}

IL_0287:
	{
		// Vector3 alignedForward = NearestWorldAxis(accumulatedRot.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = __this->___accumulatedRot_16;
		NullCheck(L_99);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = GrabObjectMouse_NearestWorldAxis_mA288FA63E2AC3BB20698C6AE566BC3682C9C6FB9(__this, L_100, NULL);
		V_3 = L_101;
		// Vector3 alignedUp = NearestWorldAxis(accumulatedRot.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = __this->___accumulatedRot_16;
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_102, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = GrabObjectMouse_NearestWorldAxis_mA288FA63E2AC3BB20698C6AE566BC3682C9C6FB9(__this, L_103, NULL);
		V_4 = L_104;
		// if (prevRot != Quaternion.LookRotation(alignedForward, alignedUp))
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_105 = __this->___prevRot_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_108;
		L_108 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_106, L_107, NULL);
		bool L_109;
		L_109 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_105, L_108, NULL);
		if (!L_109)
		{
			goto IL_0300;
		}
	}
	{
		// grabObject.transform.rotation = Quaternion.LookRotation(alignedForward, alignedUp);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = __this->___grabObject_9;
		NullCheck(L_110);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
		L_111 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_114;
		L_114 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_112, L_113, NULL);
		NullCheck(L_111);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_111, L_114, NULL);
		// prevRot = grabObject.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = __this->___grabObject_9;
		NullCheck(L_115);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_115, NULL);
		NullCheck(L_116);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_117;
		L_117 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_116, NULL);
		__this->___prevRot_17 = L_117;
		// accumulatedRot.rotation = prevRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118 = __this->___accumulatedRot_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_119 = __this->___prevRot_17;
		NullCheck(L_118);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_118, L_119, NULL);
	}

IL_0300:
	{
		// prevTouchPos = touchPos; //touch.position.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120 = V_0;
		__this->___prevTouchPos_12 = L_120;
	}

IL_0307:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 GrabObjectMouse::NearestWorldAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GrabObjectMouse_NearestWorldAxis_mA288FA63E2AC3BB20698C6AE566BC3682C9C6FB9 (GrabObjectMouse_tEE17668100CDCCF2ABEF3A7BB84FC062252EFA4E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___input0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = Quaternion.Inverse(BlockAlign.rotation) * input;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___BlockAlign_8;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___input0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		V_0 = L_4;
		// if (Mathf.Abs(v.x) < Mathf.Abs(v.y))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		float L_7;
		L_7 = fabsf(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = fabsf(L_9);
		if ((!(((float)L_7) < ((float)L_10))))
		{
			goto IL_006f;
		}
	}
	{
		// v.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// if (Mathf.Abs(v.y) < Mathf.Abs(v.z))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = fabsf(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___z_4;
		float L_16;
		L_16 = fabsf(L_15);
		if ((!(((float)L_13) < ((float)L_16))))
		{
			goto IL_0061;
		}
	}
	{
		// v.y = 0;
		(&V_0)->___y_3 = (0.0f);
		goto IL_00ad;
	}

IL_0061:
	{
		// v.z = 0;
		(&V_0)->___z_4 = (0.0f);
		goto IL_00ad;
	}

IL_006f:
	{
		// v.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// if (Mathf.Abs(v.x) < Mathf.Abs(v.z))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		float L_18 = L_17.___x_2;
		float L_19;
		L_19 = fabsf(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		float L_21 = L_20.___z_4;
		float L_22;
		L_22 = fabsf(L_21);
		if ((!(((float)L_19) < ((float)L_22))))
		{
			goto IL_00a1;
		}
	}
	{
		// v.x = 0;
		(&V_0)->___x_2 = (0.0f);
		goto IL_00ad;
	}

IL_00a1:
	{
		// v.z = 0;
		(&V_0)->___z_4 = (0.0f);
	}

IL_00ad:
	{
		// return BlockAlign.rotation * v;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___BlockAlign_8;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_24, L_25, NULL);
		return L_26;
	}
}
// System.Void GrabObjectMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObjectMouse__ctor_mE33C65A98A267B9A3B85FE235CFFF0C2CA5ABBF9 (GrabObjectMouse_tEE17668100CDCCF2ABEF3A7BB84FC062252EFA4E* __this, const RuntimeMethod* method) 
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
// System.Void MarkerBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerBehavior_Start_m8AD579270452B983405C2CFA0B18AA8EBF19DC45 (MarkerBehavior_t73EAB8991ACBB43C4701D548712C3DEE335A195C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D_mD55A04D9852DA1329A22496AB10D40C51C612451_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// BP = this.transform.parent.parent.gameObject.GetComponent<BlockPosition>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* L_4;
		L_4 = GameObject_GetComponent_TisBlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D_mD55A04D9852DA1329A22496AB10D40C51C612451(L_3, GameObject_GetComponent_TisBlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D_mD55A04D9852DA1329A22496AB10D40C51C612451_RuntimeMethod_var);
		__this->___BP_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BP_4), (void*)L_4);
		// x = transform.parent.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_6, NULL);
		__this->___x_5 = L_7;
		// int temp = this.transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_8, NULL);
		V_0 = L_9;
		// y = temp % 4;
		int32_t L_10 = V_0;
		__this->___y_6 = ((int32_t)(L_10%4));
		// z = temp / 4;
		int32_t L_11 = V_0;
		__this->___z_7 = ((int32_t)(L_11/4));
		// }
		return;
	}
}
// System.Void MarkerBehavior::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerBehavior_OnTriggerStay_mF961A932C235F215F486DE928758819DC6B0B994 (MarkerBehavior_t73EAB8991ACBB43C4701D548712C3DEE335A195C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!BP.blockCollision[x, y, z])
		BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* L_0 = __this->___BP_4;
		NullCheck(L_0);
		BooleanU5BU2CU2CU5D_t158A85E775ED13F2ADBB561CF46B22775F4A3AAE* L_1 = L_0->___blockCollision_4;
		int32_t L_2 = __this->___x_5;
		int32_t L_3 = __this->___y_6;
		int32_t L_4 = __this->___z_7;
		NullCheck(L_1);
		bool L_5;
		L_5 = (L_1)->GetAt(L_2, L_3, L_4);
		if (L_5)
		{
			goto IL_0061;
		}
	}
	{
		// BP.SetCollision(x, y, z, true);
		BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* L_6 = __this->___BP_4;
		int32_t L_7 = __this->___x_5;
		int32_t L_8 = __this->___y_6;
		int32_t L_9 = __this->___z_7;
		NullCheck(L_6);
		BlockPosition_SetCollision_m8B6B554E0231E0693C496F213ACE7ECB16076F31(L_6, L_7, L_8, L_9, (bool)1, NULL);
		// this.gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11;
		L_11 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_10, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_12);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_12, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_13, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void MarkerBehavior::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerBehavior_OnTriggerExit_mB61F05A8627740A5C0F81073507BD48748346024 (MarkerBehavior_t73EAB8991ACBB43C4701D548712C3DEE335A195C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BP.SetCollision(x, y, z, false);
		BlockPosition_tC2E0F4ECF95F0C74D097DFFFB490A20D9257727D* L_0 = __this->___BP_4;
		int32_t L_1 = __this->___x_5;
		int32_t L_2 = __this->___y_6;
		int32_t L_3 = __this->___z_7;
		NullCheck(L_0);
		BlockPosition_SetCollision_m8B6B554E0231E0693C496F213ACE7ECB16076F31(L_0, L_1, L_2, L_3, (bool)0, NULL);
		// this.gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_4, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_6);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_6, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_7, NULL);
		// }
		return;
	}
}
// System.Void MarkerBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerBehavior__ctor_mCA62A0FECD2B55B09566636D775AD6D59567773F (MarkerBehavior_t73EAB8991ACBB43C4701D548712C3DEE335A195C* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector3 MiniStage::get_GameBoardPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MiniStage_get_GameBoardPosition_m7CAB2505B9B2109ECC6F64B2FB1017EC995BADF3 (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GameBoardPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGameBoardPositionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void MiniStage::set_GameBoardPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniStage_set_GameBoardPosition_m6E850897A94C36BB7FAE8BB2A4E9EDE850F38D97 (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 GameBoardPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGameBoardPositionU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.Quaternion MiniStage::get_GameBoardRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MiniStage_get_GameBoardRotation_m18EDC536264C69FEBD274B070665103331182F25 (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion GameBoardRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CGameBoardRotationU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void MiniStage::set_GameBoardRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniStage_set_GameBoardRotation_m8002C79BD1C79BBAEA02D888BBE188768289A081 (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion GameBoardRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CGameBoardRotationU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void MiniStage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniStage_Start_mC9B0DAE4F67D4AF8241527D6D5E3925E4B15AB9F (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_mFFA715D73EF1C3BFFAA0704B0374BC3507B13FE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E970842926B83E16266FB87EE21E7EF31BD033);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseObject = GameObject.Find("MiniBaseObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralC3E970842926B83E16266FB87EE21E7EF31BD033, NULL);
		__this->___baseObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseObject_4), (void*)L_0);
		// grabObject = GameObject.FindObjectOfType<GrabObject>().GetComponent<GrabObject>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_1;
		L_1 = Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5(Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5_RuntimeMethod_var);
		NullCheck(L_1);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_2;
		L_2 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(L_1, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		__this->___grabObject_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabObject_5), (void*)L_2);
		// miniStagePrefabs = GameObject.FindObjectsOfType<MiniStage>();
		MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* L_3;
		L_3 = Object_FindObjectsOfType_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_mFFA715D73EF1C3BFFAA0704B0374BC3507B13FE7(Object_FindObjectsOfType_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_mFFA715D73EF1C3BFFAA0704B0374BC3507B13FE7_RuntimeMethod_var);
		__this->___miniStagePrefabs_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___miniStagePrefabs_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void MiniStage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniStage_Update_mBE277178981C8CBC0BFD2335EDAD8C7FDA2A1122 (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (baseObject == null) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___baseObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (baseObject == null) return;
		return;
	}

IL_000f:
	{
		// if (Vector3.Distance(transform.position, baseObject.transform.position) <= 0.05f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseObject_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_6, NULL);
		if ((!(((float)L_7) <= ((float)(0.0500000007f)))))
		{
			goto IL_00d3;
		}
	}
	{
		// Destroy(baseObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___baseObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// var go = Instantiate(stagePrefab, GameBoardPosition, GameBoardRotation * Quaternion.Euler(-45, 0, 45));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___stagePrefab_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = MiniStage_get_GameBoardPosition_m7CAB2505B9B2109ECC6F64B2FB1017EC995BADF3_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = MiniStage_get_GameBoardRotation_m18EDC536264C69FEBD274B070665103331182F25_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_11, L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_9, L_10, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_14;
		// go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0299999993f), (0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		// grabObject.IsGrab = false;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_18 = __this->___grabObject_5;
		NullCheck(L_18);
		GrabObject_set_IsGrab_m4128B46393DA634E1A5AFDEDF0CFDC86C7DF6746_inline(L_18, (bool)0, NULL);
		// grabObject.BlockAlign = go.transform;
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_19 = __this->___grabObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_19);
		GrabObject_set_BlockAlign_m4980D85168E43DC100735164D2FA33DCF749DCA7_inline(L_19, L_21, NULL);
		// foreach (var miniStagePrefab in miniStagePrefabs)
		MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* L_22 = __this->___miniStagePrefabs_7;
		V_1 = L_22;
		V_2 = 0;
		goto IL_00cd;
	}

IL_00bc:
	{
		// foreach (var miniStagePrefab in miniStagePrefabs)
		MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		// Destroy(miniStagePrefab.gameObject);
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_27, NULL);
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00cd:
	{
		// foreach (var miniStagePrefab in miniStagePrefabs)
		int32_t L_29 = V_2;
		MiniStageU5BU5D_t3D48AECAE130152978C43FAAF02B391036F195CD* L_30 = V_1;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00bc;
		}
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void MiniStage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniStage__ctor_m5244EA53E2E737BCF434E2A24DCE74E06E16EDED (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) 
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
// System.Void PlaceGameBoard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceGameBoard_Start_mA0020978CD3F1ED08CAB16958178C823AC9CD302 (PlaceGameBoard_t480BB8F4B3507F65E97AEDCF1D31050F31B07129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA165E925A3C5F58F9CCF6B2C89B1DF0C1C0B36C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScreenCenter = new Vector2(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)((int32_t)(L_1/2))), ((float)((int32_t)(L_3/2))), /*hidden argument*/NULL);
		__this->___ScreenCenter_12 = L_4;
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_5;
		L_5 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_10), (void*)L_5);
		// gameBoardArea.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___gameBoardArea_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// uiText.text = "?? ?? ?????.\n? ?? ??? ?????.";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___uiText_7;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteralA165E925A3C5F58F9CCF6B2C89B1DF0C1C0B36C0);
		// }
		return;
	}
}
// System.Void PlaceGameBoard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceGameBoard_Update_mC61CACFD0DF9627D3F9C14DCB14BD4DFB0BFD1F2 (PlaceGameBoard_t480BB8F4B3507F65E97AEDCF1D31050F31B07129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mD45BCBB3C7B7CD495D81978BB377D04B701DF39E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral451CA2A161C79651D40AB00BF3D3F88668728EE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E970842926B83E16266FB87EE21E7EF31BD033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D19204759E83699D8B1BDB12510593343DF9AF);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_RaycastManager.Raycast(ScreenCenter, m_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0 = __this->___m_RaycastManager_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___ScreenCenter_12;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_2 = __this->___m_Hits_11;
		NullCheck(L_0);
		bool L_3;
		L_3 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_0, L_1, L_2, 1, NULL);
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		// if (!gameBoardArea.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gameBoardArea_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		// gameBoardArea.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___gameBoardArea_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// uiText.text = "??? ??? ????\n??? ?????.";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___uiText_7;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral451CA2A161C79651D40AB00BF3D3F88668728EE1);
	}

IL_0043:
	{
		// Pose hitPose = m_Hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = __this->___m_Hits_11;
		NullCheck(L_8);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_9;
		L_9 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_8, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		V_1 = L_10;
		// gameBoardArea.transform.SetPositionAndRotation(hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___gameBoardArea_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15.___rotation_1;
		NullCheck(L_12);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_12, L_14, L_16, NULL);
	}

IL_0074:
	{
		// Debug.Log(gameBoardArea.transform.localScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___gameBoardArea_4;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19;
		RuntimeObject* L_21 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
		// if (Input.touchCount == 0)
		int32_t L_22;
		L_22 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (L_22)
		{
			goto IL_0096;
		}
	}
	{
		// return;
		return;
	}

IL_0096:
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_23;
		L_23 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_23;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_24;
		L_24 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_24)
		{
			goto IL_0465;
		}
	}
	{
		// GameObject newbase = Instantiate(baseObject, gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___baseObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___gameBoardArea_4;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___gameBoardArea_4;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_31, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_28, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// newbase.transform.localScale = new Vector3(.03f, .03f, .03f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), (0.0299999993f), (0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_36, L_37, NULL);
		// newbase.name = "MiniBaseObject";
		NullCheck(L_35);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_35, _stringLiteralC3E970842926B83E16266FB87EE21E7EF31BD033, NULL);
		// Instantiate(baseObjectMask, gameBoardArea.transform.position, gameBoardArea.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___baseObjectMask_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___gameBoardArea_4;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___gameBoardArea_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		NullCheck(L_43);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_43, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_38, L_41, L_44, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// gameObject.GetComponentInChildren<GrabObject>().BlockAlign = baseObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_46);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_47;
		L_47 = GameObject_GetComponentInChildren_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mD45BCBB3C7B7CD495D81978BB377D04B701DF39E(L_46, GameObject_GetComponentInChildren_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mD45BCBB3C7B7CD495D81978BB377D04B701DF39E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___baseObject_5;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		NullCheck(L_47);
		GrabObject_set_BlockAlign_m4980D85168E43DC100735164D2FA33DCF749DCA7_inline(L_47, L_49, NULL);
		// var go = Instantiate(stagePrefabs[0], gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_50 = __this->___stagePrefabs_8;
		NullCheck(L_50);
		int32_t L_51 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___gameBoardArea_4;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_53, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___gameBoardArea_4;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		NullCheck(L_57);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_57, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_58, L_59, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_52, L_55, L_60, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// go.transform.position += Quaternion.Euler(-45, 0, 45) * (gameBoardArea.transform.forward * 0.2f + gameBoardArea.transform.right * 0.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = L_63;
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_64, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
		L_66 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___gameBoardArea_4;
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_69, (0.200000003f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___gameBoardArea_4;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, (0.200000003f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_70, L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_66, L_75, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_76, NULL);
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_77, NULL);
		// go.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = L_62;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_80), (0.00999999978f), (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_79, L_80, NULL);
		// go.GetComponent<MiniStage>().GameBoardPosition = gameBoardArea.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = L_78;
		NullCheck(L_81);
		MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* L_82;
		L_82 = GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD(L_81, GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___gameBoardArea_4;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		NullCheck(L_82);
		MiniStage_set_GameBoardPosition_m6E850897A94C36BB7FAE8BB2A4E9EDE850F38D97_inline(L_82, L_85, NULL);
		// go.GetComponent<MiniStage>().GameBoardRotation = gameBoardArea.transform.rotation;
		NullCheck(L_81);
		MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* L_86;
		L_86 = GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD(L_81, GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___gameBoardArea_4;
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_87, NULL);
		NullCheck(L_88);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89;
		L_89 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_88, NULL);
		NullCheck(L_86);
		MiniStage_set_GameBoardRotation_m8002C79BD1C79BBAEA02D888BBE188768289A081_inline(L_86, L_89, NULL);
		// go = Instantiate(stagePrefabs[1], gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_90 = __this->___stagePrefabs_8;
		NullCheck(L_90);
		int32_t L_91 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = __this->___gameBoardArea_4;
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___gameBoardArea_4;
		NullCheck(L_96);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_96, NULL);
		NullCheck(L_97);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98;
		L_98 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_97, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		L_99 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100;
		L_100 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_98, L_99, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101;
		L_101 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_92, L_95, L_100, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// go.transform.position += Quaternion.Euler(-45, 0, 45) * gameBoardArea.transform.forward * 0.3f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = L_101;
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104 = L_103;
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_104, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_106;
		L_106 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = __this->___gameBoardArea_4;
		NullCheck(L_107);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_107, NULL);
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_108, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_106, L_109, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_110, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_105, L_111, NULL);
		NullCheck(L_104);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_104, L_112, NULL);
		// go.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = L_102;
		NullCheck(L_113);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114;
		L_114 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_113, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_115), (0.00999999978f), (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_114);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_114, L_115, NULL);
		// go.GetComponent<MiniStage>().GameBoardPosition = gameBoardArea.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = L_113;
		NullCheck(L_116);
		MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* L_117;
		L_117 = GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD(L_116, GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = __this->___gameBoardArea_4;
		NullCheck(L_118);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119;
		L_119 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_118, NULL);
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_119, NULL);
		NullCheck(L_117);
		MiniStage_set_GameBoardPosition_m6E850897A94C36BB7FAE8BB2A4E9EDE850F38D97_inline(L_117, L_120, NULL);
		// go.GetComponent<MiniStage>().GameBoardRotation = gameBoardArea.transform.rotation;
		NullCheck(L_116);
		MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* L_121;
		L_121 = GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD(L_116, GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___gameBoardArea_4;
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		NullCheck(L_123);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_124;
		L_124 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_123, NULL);
		NullCheck(L_121);
		MiniStage_set_GameBoardRotation_m8002C79BD1C79BBAEA02D888BBE188768289A081_inline(L_121, L_124, NULL);
		// go = Instantiate(stagePrefabs[2], gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_125 = __this->___stagePrefabs_8;
		NullCheck(L_125);
		int32_t L_126 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = __this->___gameBoardArea_4;
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_128, NULL);
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_129, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131 = __this->___gameBoardArea_4;
		NullCheck(L_131);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132;
		L_132 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_131, NULL);
		NullCheck(L_132);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_133;
		L_133 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_132, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_134;
		L_134 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_135;
		L_135 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_133, L_134, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136;
		L_136 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_127, L_130, L_135, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// go.transform.position += Quaternion.Euler(-45, 0, 45) * (gameBoardArea.transform.forward * 0.2f - gameBoardArea.transform.right * 0.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = L_136;
		NullCheck(L_137);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138;
		L_138 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_137, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139 = L_138;
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_139, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_141;
		L_141 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-45.0f), (0.0f), (45.0f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142 = __this->___gameBoardArea_4;
		NullCheck(L_142);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_142, NULL);
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_143, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_144, (0.200000003f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_146 = __this->___gameBoardArea_4;
		NullCheck(L_146);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147;
		L_147 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_146, NULL);
		NullCheck(L_147);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_147, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_148, (0.200000003f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_145, L_149, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_141, L_150, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_140, L_151, NULL);
		NullCheck(L_139);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_139, L_152, NULL);
		// go.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = L_137;
		NullCheck(L_153);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_154;
		L_154 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_153, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_155), (0.00999999978f), (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_154);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_154, L_155, NULL);
		// go.GetComponent<MiniStage>().GameBoardPosition = gameBoardArea.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156 = L_153;
		NullCheck(L_156);
		MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* L_157;
		L_157 = GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD(L_156, GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = __this->___gameBoardArea_4;
		NullCheck(L_158);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
		L_159 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_158, NULL);
		NullCheck(L_159);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_159, NULL);
		NullCheck(L_157);
		MiniStage_set_GameBoardPosition_m6E850897A94C36BB7FAE8BB2A4E9EDE850F38D97_inline(L_157, L_160, NULL);
		// go.GetComponent<MiniStage>().GameBoardRotation = gameBoardArea.transform.rotation;
		NullCheck(L_156);
		MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* L_161;
		L_161 = GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD(L_156, GameObject_GetComponent_TisMiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F_m429EEA6D1AD957EEAA6D5BDAF2D7821F033B17FD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162 = __this->___gameBoardArea_4;
		NullCheck(L_162);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163;
		L_163 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_162, NULL);
		NullCheck(L_163);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_164;
		L_164 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_163, NULL);
		NullCheck(L_161);
		MiniStage_set_GameBoardRotation_m8002C79BD1C79BBAEA02D888BBE188768289A081_inline(L_161, L_164, NULL);
		// uiText.text = "?? ??? ??? ?? ? ???.\n??? ???? ?? ??\n??? ?????.";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_165 = __this->___uiText_7;
		NullCheck(L_165);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_165, _stringLiteralE8D19204759E83699D8B1BDB12510593343DF9AF);
		// Destroy(gameBoardArea);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_166 = __this->___gameBoardArea_4;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_166, NULL);
		// Destroy(this);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0465:
	{
		// }
		return;
	}
}
// System.Void PlaceGameBoard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceGameBoard__ctor_m4ACC212BD24B8959E0119A1F89AA185CF439A273 (PlaceGameBoard_t480BB8F4B3507F65E97AEDCF1D31050F31B07129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3[] stagePrefabPos = new[] { new Vector3(0.3f, 0.3f, 0f), new Vector3(0.3f, 0.3f, 0.3f), new Vector3(0f, 0.3f, 0.3f) };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.300000012f), (0.300000012f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.300000012f), (0.300000012f), (0.300000012f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.300000012f), (0.300000012f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		__this->___stagePrefabPos_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stagePrefabPos_9), (void*)L_5);
		// List<ARRaycastHit> m_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_7, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		__this->___m_Hits_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Hits_11), (void*)L_7);
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
// System.Void Stage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage_Start_m27980F66F6CEB16E4DA5040BCDB509592D6D0A2B (Stage_tD58205F690D18C2F904AB6ADDA3B45189C4C3E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// grabObject = GameObject.FindObjectOfType<GrabObject>().GetComponent<GrabObject>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_0;
		L_0 = Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5(Object_FindObjectOfType_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_m01D313666277319F34A1869A96AB3C1597FA87A5_RuntimeMethod_var);
		NullCheck(L_0);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_1;
		L_1 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(L_0, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		__this->___grabObject_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabObject_7), (void*)L_1);
		// for (int i = 0; i < 13; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_0014:
	{
		// list.Add(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___list_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_2, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < 13; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < 13; i++)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)13))))
		{
			goto IL_0014;
		}
	}
	{
		// foreach (var blockPrefab in blockPrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___blockPrefabs_5;
		V_1 = L_6;
		V_2 = 0;
		goto IL_00dc;
	}

IL_0037:
	{
		// foreach (var blockPrefab in blockPrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// int ran = Random.Range(0, list.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = __this->___list_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_11, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_13;
		L_13 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_12, NULL);
		V_3 = L_13;
		// var go = Instantiate(blockPrefab, spawnPoints[ran].position, Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = __this->___spawnPoints_4;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_4 = L_20;
		// go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0299999993f), (0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
		// Vector3 alignedForward = grabObject.NearestWorldAxis(go.transform.forward);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_24 = __this->___grabObject_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_4;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_26, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = GrabObject_NearestWorldAxis_mA775A0BC54ED307FBF4B7A731AE1D943ADDF336A(L_24, L_27, NULL);
		V_5 = L_28;
		// Vector3 alignedUp = grabObject.NearestWorldAxis(go.transform.up);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_29 = __this->___grabObject_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_4;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_31, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = GrabObject_NearestWorldAxis_mA775A0BC54ED307FBF4B7A731AE1D943ADDF336A(L_29, L_32, NULL);
		V_6 = L_33;
		// go.transform.rotation = Quaternion.LookRotation(alignedForward, alignedUp);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_4;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_36, L_37, NULL);
		NullCheck(L_35);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_35, L_38, NULL);
		// list.RemoveAt(ran);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_39 = __this->___list_6;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_39, L_40, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00dc:
	{
		// foreach (var blockPrefab in blockPrefabs)
		int32_t L_42 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_43 = V_1;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Stage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage__ctor_m33DA4FF521C0FF66D6D4C7E171937743DF133EE2 (Stage_tD58205F690D18C2F904AB6ADDA3B45189C4C3E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> list = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___list_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GrabObject_get_BlockAlign_m08D02A1092E5E230E8F4A904CD004EDF5E16915B_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform BlockAlign { get; set; }      // block? ??? ?? => ?? ??
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CBlockAlignU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrabObject_set_BlockAlign_m4980D85168E43DC100735164D2FA33DCF749DCA7_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform BlockAlign { get; set; }      // block? ??? ?? => ?? ??
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___U3CBlockAlignU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBlockAlignU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GrabObject_get_IsGrab_m7DDD9275EBC89FF0C54D820C008ADAB7375E618E_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrab { get; set; } = false;
		bool L_0 = __this->___U3CIsGrabU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrabObject_set_IsGrab_m4128B46393DA634E1A5AFDEDF0CFDC86C7DF6746_inline (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsGrab { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsGrabU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MiniStage_get_GameBoardPosition_m7CAB2505B9B2109ECC6F64B2FB1017EC995BADF3_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GameBoardPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGameBoardPositionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MiniStage_get_GameBoardRotation_m18EDC536264C69FEBD274B070665103331182F25_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion GameBoardRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CGameBoardRotationU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
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
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MiniStage_set_GameBoardPosition_m6E850897A94C36BB7FAE8BB2A4E9EDE850F38D97_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 GameBoardPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGameBoardPositionU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MiniStage_set_GameBoardRotation_m8002C79BD1C79BBAEA02D888BBE188768289A081_inline (MiniStage_tCF4202F6A1A09DD7C02E04A1126F79B81202D92F* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion GameBoardRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CGameBoardRotationU3Ek__BackingField_9 = L_0;
		return;
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
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
