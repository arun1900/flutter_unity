﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[25] = 
{
	{ 0, 0 } /* 0x06000001 UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableDirector::get_state() */,
	{ 0, 0 } /* 0x06000002 UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableDirector::get_extrapolationMode() */,
	{ 0, 0 } /* 0x06000003 UnityEngine.Playables.PlayableAsset UnityEngine.Playables.PlayableDirector::get_playableAsset() */,
	{ 0, 0 } /* 0x06000004 UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableDirector::get_playableGraph() */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Playables.PlayableDirector::Play(UnityEngine.Playables.FrameRate) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.Playables.PlayableDirector::set_time(System.Double) */,
	{ 0, 0 } /* 0x06000007 System.Double UnityEngine.Playables.PlayableDirector::get_time() */,
	{ 0, 0 } /* 0x06000008 System.Double UnityEngine.Playables.PlayableDirector::get_duration() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.Playables.PlayableDirector::Evaluate() */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.Playables.PlayableDirector::PlayOnFrame(UnityEngine.Playables.FrameRate) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.Playables.PlayableDirector::Play() */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.Playables.PlayableDirector::Stop() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.Playables.PlayableDirector::Pause() */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetReferenceValue(UnityEngine.PropertyName,System.Boolean&) */,
	{ 0, 0 } /* 0x0600000F UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetGenericBinding(UnityEngine.Object) */,
	{ 0, 0 } /* 0x06000010 UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableDirector::GetPlayState() */,
	{ 0, 0 } /* 0x06000011 UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableDirector::GetWrapMode() */,
	{ 0, 0 } /* 0x06000012 UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableDirector::GetGraphHandle() */,
	{ 0, 0 } /* 0x06000013 UnityEngine.ScriptableObject UnityEngine.Playables.PlayableDirector::Internal_GetPlayableAsset() */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.Playables.PlayableDirector::SendOnPlayableDirectorPlay() */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.Playables.PlayableDirector::SendOnPlayableDirectorPause() */,
	{ 0, 0 } /* 0x06000016 System.Void UnityEngine.Playables.PlayableDirector::SendOnPlayableDirectorStop() */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.Playables.PlayableDirector::PlayOnFrame_Injected(UnityEngine.Playables.FrameRate&) */,
	{ 0, 0 } /* 0x06000018 UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetReferenceValue_Injected(UnityEngine.PropertyName&,System.Boolean&) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Playables.PlayableDirector::GetGraphHandle_Injected(UnityEngine.Playables.PlayableGraph&) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_DirectorModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_DirectorModule[52] = 
{
	{ 61609, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 61609, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 61609, 1, 16, 16, 17, 18, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 61609, 1, 16, 16, 19, 41, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 61609, 1, 16, 16, 19, 41, 2, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 61609, 1, 16, 16, 42, 43, 10, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 61610, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 61610, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 61610, 1, 22, 22, 17, 18, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 61610, 1, 22, 22, 19, 40, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 61610, 1, 22, 22, 19, 40, 2, kSequencePointKind_StepOut, 0, 10 } /* seqPointIndex: 10 */,
	{ 61610, 1, 22, 22, 41, 42, 10, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 61611, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 61611, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 61611, 1, 27, 27, 17, 18, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 61611, 1, 27, 27, 19, 71, 1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 61611, 1, 27, 27, 19, 71, 2, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 61611, 1, 27, 27, 72, 73, 15, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 61612, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 61612, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 61612, 1, 33, 33, 17, 18, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 61612, 1, 33, 33, 19, 43, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 61612, 1, 33, 33, 19, 43, 2, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 61612, 1, 33, 33, 44, 45, 10, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 61613, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 61613, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 61613, 1, 47, 47, 52, 74, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 61613, 1, 47, 47, 52, 74, 2, kSequencePointKind_StepOut, 0, 27 } /* seqPointIndex: 27 */,
	{ 61628, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 61628, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 61628, 1, 128, 128, 9, 10, 0, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 61628, 1, 129, 129, 13, 32, 1, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 61628, 1, 129, 129, 0, 0, 11, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 61628, 1, 130, 130, 17, 30, 14, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 61628, 1, 130, 130, 17, 30, 21, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 61628, 1, 131, 131, 9, 10, 27, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 61629, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 61629, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 61629, 1, 135, 135, 9, 10, 0, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 61629, 1, 136, 136, 13, 32, 1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 61629, 1, 136, 136, 0, 0, 11, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 61629, 1, 137, 137, 17, 30, 14, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 61629, 1, 137, 137, 17, 30, 21, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 61629, 1, 138, 138, 9, 10, 27, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 61630, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 61630, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 61630, 1, 142, 142, 9, 10, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 61630, 1, 143, 143, 13, 33, 1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 61630, 1, 143, 143, 0, 0, 11, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 61630, 1, 144, 144, 17, 31, 14, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 61630, 1, 144, 144, 17, 31, 21, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 61630, 1, 145, 145, 9, 10, 27, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_DirectorModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_DirectorModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Director\\ScriptBindings\\PlayableDirector.bindings.cs", { 86, 182, 85, 14, 191, 248, 32, 219, 9, 244, 255, 75, 19, 226, 168, 204} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 8447, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[7] = 
{
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 17 },
	{ 0, 12 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 28 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[25] = 
{
	{ 12, 0, 1 } /* UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableDirector::get_state() */,
	{ 12, 1, 1 } /* UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableDirector::get_extrapolationMode() */,
	{ 17, 2, 1 } /* UnityEngine.Playables.PlayableAsset UnityEngine.Playables.PlayableDirector::get_playableAsset() */,
	{ 12, 3, 1 } /* UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableDirector::get_playableGraph() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::Play(UnityEngine.Playables.FrameRate) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::set_time(System.Double) */,
	{ 0, 0, 0 } /* System.Double UnityEngine.Playables.PlayableDirector::get_time() */,
	{ 0, 0, 0 } /* System.Double UnityEngine.Playables.PlayableDirector::get_duration() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::Evaluate() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::PlayOnFrame(UnityEngine.Playables.FrameRate) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::Play() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::Stop() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::Pause() */,
	{ 0, 0, 0 } /* UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetReferenceValue(UnityEngine.PropertyName,System.Boolean&) */,
	{ 0, 0, 0 } /* UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetGenericBinding(UnityEngine.Object) */,
	{ 0, 0, 0 } /* UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableDirector::GetPlayState() */,
	{ 0, 0, 0 } /* UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableDirector::GetWrapMode() */,
	{ 0, 0, 0 } /* UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableDirector::GetGraphHandle() */,
	{ 0, 0, 0 } /* UnityEngine.ScriptableObject UnityEngine.Playables.PlayableDirector::Internal_GetPlayableAsset() */,
	{ 28, 4, 1 } /* System.Void UnityEngine.Playables.PlayableDirector::SendOnPlayableDirectorPlay() */,
	{ 28, 5, 1 } /* System.Void UnityEngine.Playables.PlayableDirector::SendOnPlayableDirectorPause() */,
	{ 28, 6, 1 } /* System.Void UnityEngine.Playables.PlayableDirector::SendOnPlayableDirectorStop() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::PlayOnFrame_Injected(UnityEngine.Playables.FrameRate&) */,
	{ 0, 0, 0 } /* UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetReferenceValue_Injected(UnityEngine.PropertyName&,System.Boolean&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Playables.PlayableDirector::GetGraphHandle_Injected(UnityEngine.Playables.PlayableGraph&) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_DirectorModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_DirectorModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	52,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_DirectorModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
