#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
177,
182,
183,
184,
185,
186,
187,
188,
189,
190,
193,
194,
293,
294,
296,
324,
325,
326,
346,
347,
348,
349,
350,
441,
442,
443,
446,
483,
484,
486,
488,
490,
492,
497,
505,
506,
507,
508,
509,
510,
511,
512,
513,
514,
644,
645,
652,
655,
657,
662,
663,
665,
666,
670,
671,
672,
673,
675,
676,
677,
680,
681,
684,
685,
686,
754,
755,
757,
765,
766,
767,
768,
769,
773,
774,
775,
776,
777,
778,
780,
781,
782,
784,
785,
786,
790,
791,
792,
1060,
1235,
1236,
5927,
5928,
5930,
5931,
5932,
5933,
5934,
5936,
5938,
5940,
5941,
5949,
5951,
5955,
5956,
5958,
5960,
5962,
5974,
5983,
5984,
5986,
5987,
5988,
5989,
5990,
5992,
5994,
6912,
6916,
6918,
6919,
6920,
6921,
6965,
6966,
6967,
6984,
6985,
6986,
6987,
7019,
7062,
7065,
7074,
7075,
7076,
7331,
7333,
7334,
7359,
7360,
7361,
7376,
7382,
7389,
7399,
7403,
7474,
7480,
7481,
7482,
7483,
7489,
7502,
7522,
7523,
7531,
7533,
7540,
7541,
7544,
7546,
7551,
7557,
7558,
7565,
7567,
7577,
7580,
7581,
7582,
7592,
7603,
7609,
7610,
7611,
7613,
7614,
7624,
7642,
7655,
7674,
7704,
7705,
8061,
8197,
8434,
8435,
8442,
8443,
8444,
8449,
8509,
8668,
8669,
9802,
9821,
9828,
9829,
9831,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 177,
ves_icall_System_Array_InternalCreate,
// token 182,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 183,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 184,
ves_icall_System_Array_CanChangePrimitive,
// token 185,
ves_icall_System_Array_FastCopy_raw,
// token 186,
ves_icall_System_Array_GetLength_raw,
// token 187,
ves_icall_System_Array_GetLowerBound_raw,
// token 188,
ves_icall_System_Array_GetGenericValue_icall,
// token 189,
ves_icall_System_Array_GetValueImpl_raw,
// token 190,
ves_icall_System_Array_SetGenericValue_icall,
// token 193,
ves_icall_System_Array_SetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 293,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 294,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 296,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 324,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 325,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 326,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 346,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 347,
ves_icall_System_Enum_ToObject_raw,
// token 348,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 349,
ves_icall_System_Enum_get_underlying_type_raw,
// token 350,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 441,
ves_icall_System_Environment_get_ProcessorCount,
// token 442,
ves_icall_System_Environment_get_TickCount,
// token 443,
ves_icall_System_Environment_get_TickCount64,
// token 446,
ves_icall_System_Environment_FailFast_raw,
// token 483,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 484,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 486,
ves_icall_System_GC_SuppressFinalize_raw,
// token 488,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 490,
ves_icall_System_GC_GetGCMemoryInfo,
// token 492,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 497,
ves_icall_System_Object_MemberwiseClone_raw,
// token 505,
ves_icall_System_Math_Abs_double,
// token 506,
ves_icall_System_Math_Ceiling,
// token 507,
ves_icall_System_Math_Cos,
// token 508,
ves_icall_System_Math_Floor,
// token 509,
ves_icall_System_Math_Log10,
// token 510,
ves_icall_System_Math_Pow,
// token 511,
ves_icall_System_Math_Sin,
// token 512,
ves_icall_System_Math_Sqrt,
// token 513,
ves_icall_System_Math_Tan,
// token 514,
ves_icall_System_Math_ModF,
// token 644,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 645,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 652,
ves_icall_RuntimeType_make_array_type_raw,
// token 655,
ves_icall_RuntimeType_make_byref_type_raw,
// token 657,
ves_icall_RuntimeType_MakePointerType_raw,
// token 662,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 663,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 665,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 666,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 670,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 671,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 672,
ves_icall_System_RuntimeType_getFullName_raw,
// token 673,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 675,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 676,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 677,
ves_icall_RuntimeType_GetFields_native_raw,
// token 680,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 681,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 684,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 685,
ves_icall_RuntimeType_get_Name_raw,
// token 686,
ves_icall_RuntimeType_get_Namespace_raw,
// token 754,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 755,
ves_icall_reflection_get_token_raw,
// token 757,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 765,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 766,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 767,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 768,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 769,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 773,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 774,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 775,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 776,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 777,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 778,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 780,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 781,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 782,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 784,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 785,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 786,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 790,
ves_icall_System_String_FastAllocateString_raw,
// token 791,
ves_icall_System_String_InternalIsInterned_raw,
// token 792,
ves_icall_System_String_InternalIntern_raw,
// token 1060,
ves_icall_System_Type_internal_from_handle_raw,
// token 1235,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1236,
ves_icall_System_ValueType_Equals_raw,
// token 5927,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5928,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5930,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5931,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5932,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5933,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5934,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5936,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5938,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5940,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5941,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5949,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5951,
mono_monitor_exit_icall_raw,
// token 5955,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5956,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5958,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5960,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5962,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5974,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5983,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5984,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5986,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5987,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5988,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5989,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5990,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5992,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5994,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6912,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6916,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6918,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6919,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6920,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6921,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6965,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6966,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6967,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6984,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6985,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6986,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6987,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 7019,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7062,
mono_object_hash_icall_raw,
// token 7065,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 7074,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7075,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7076,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7331,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7333,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7334,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7359,
mono_digest_get_public_token,
// token 7360,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7361,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 7376,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7382,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7389,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7399,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7403,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7474,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7480,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 7481,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 7482,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 7483,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7489,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7502,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7522,
ves_icall_reflection_get_token_raw,
// token 7523,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7531,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7533,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7540,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7541,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7544,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7546,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7551,
ves_icall_reflection_get_token_raw,
// token 7557,
ves_icall_get_method_info_raw,
// token 7558,
ves_icall_get_method_attributes,
// token 7565,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7567,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7577,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7580,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7581,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7582,
ves_icall_reflection_get_token_raw,
// token 7592,
ves_icall_InternalInvoke_raw,
// token 7603,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7609,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7610,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7611,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7613,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7614,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7624,
ves_icall_InternalInvoke_raw,
// token 7642,
ves_icall_reflection_get_token_raw,
// token 7655,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7674,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7704,
ves_icall_reflection_get_token_raw,
// token 7705,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8061,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8197,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8434,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8435,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8442,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8443,
ves_icall_ModuleBuilder_getToken_raw,
// token 8444,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8449,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8509,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8668,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8669,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9802,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9821,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9828,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9829,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9831,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
