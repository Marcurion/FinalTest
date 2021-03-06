﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1584;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t1862;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t301;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t1588;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t1592;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t1581;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t1867;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t1868;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t1869;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9921_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9921(__this, method) (( void (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2__ctor_m9921_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9923_gshared (Dictionary_2_t1584 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9923(__this, ___comparer, method) (( void (*) (Dictionary_2_t1584 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9923_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9925_gshared (Dictionary_2_t1584 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9925(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1584 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9925_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9927_gshared (Dictionary_2_t1584 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9927(__this, ___capacity, method) (( void (*) (Dictionary_2_t1584 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9927_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9929_gshared (Dictionary_2_t1584 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9929(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1584 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9929_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9931_gshared (Dictionary_2_t1584 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9931(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1584 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2__ctor_m9931_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9933_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9933(__this, method) (( Object_t* (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9933_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9935_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9935(__this, method) (( Object_t* (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9935_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9937_gshared (Dictionary_2_t1584 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9937(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1584 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9937_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9939_gshared (Dictionary_2_t1584 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9939(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1584 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9939_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9941_gshared (Dictionary_2_t1584 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9941(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1584 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9941_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9943_gshared (Dictionary_2_t1584 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9943(__this, ___key, method) (( bool (*) (Dictionary_2_t1584 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9943_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9945_gshared (Dictionary_2_t1584 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9945(__this, ___key, method) (( void (*) (Dictionary_2_t1584 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9945_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9947_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9947(__this, method) (( Object_t * (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9947_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9949_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9949(__this, method) (( bool (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9949_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9951_gshared (Dictionary_2_t1584 * __this, KeyValuePair_2_t1585  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9951(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1584 *, KeyValuePair_2_t1585 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9951_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9953_gshared (Dictionary_2_t1584 * __this, KeyValuePair_2_t1585  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9953(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1584 *, KeyValuePair_2_t1585 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9953_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9955_gshared (Dictionary_2_t1584 * __this, KeyValuePair_2U5BU5D_t1868* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9955(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1584 *, KeyValuePair_2U5BU5D_t1868*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9955_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9957_gshared (Dictionary_2_t1584 * __this, KeyValuePair_2_t1585  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9957(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1584 *, KeyValuePair_2_t1585 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9957_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9959_gshared (Dictionary_2_t1584 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9959(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1584 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9959_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9961_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9961(__this, method) (( Object_t * (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9961_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9963_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9963(__this, method) (( Object_t* (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9963_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9965_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9965(__this, method) (( Object_t * (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9965_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9967_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9967(__this, method) (( int32_t (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_get_Count_m9967_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9969_gshared (Dictionary_2_t1584 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9969(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1584 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m9969_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9971_gshared (Dictionary_2_t1584 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9971(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1584 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9971_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9973_gshared (Dictionary_2_t1584 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9973(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1584 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9973_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9975_gshared (Dictionary_2_t1584 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9975(__this, ___size, method) (( void (*) (Dictionary_2_t1584 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9975_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9977_gshared (Dictionary_2_t1584 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9977(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1584 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9977_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1585  Dictionary_2_make_pair_m9979_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9979(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1585  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9979_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m9981_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9981(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9981_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9983_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9983(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9983_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9985_gshared (Dictionary_2_t1584 * __this, KeyValuePair_2U5BU5D_t1868* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9985(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1584 *, KeyValuePair_2U5BU5D_t1868*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9985_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9987_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9987(__this, method) (( void (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_Resize_m9987_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9989_gshared (Dictionary_2_t1584 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9989(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1584 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9989_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9991_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9991(__this, method) (( void (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_Clear_m9991_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9993_gshared (Dictionary_2_t1584 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9993(__this, ___key, method) (( bool (*) (Dictionary_2_t1584 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m9993_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9995_gshared (Dictionary_2_t1584 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9995(__this, ___value, method) (( bool (*) (Dictionary_2_t1584 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9995_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9997_gshared (Dictionary_2_t1584 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9997(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1584 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2_GetObjectData_m9997_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9999_gshared (Dictionary_2_t1584 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9999(__this, ___sender, method) (( void (*) (Dictionary_2_t1584 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9999_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10001_gshared (Dictionary_2_t1584 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10001(__this, ___key, method) (( bool (*) (Dictionary_2_t1584 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m10001_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10003_gshared (Dictionary_2_t1584 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10003(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1584 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10003_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t1588 * Dictionary_2_get_Keys_m10005_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10005(__this, method) (( KeyCollection_t1588 * (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_get_Keys_m10005_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t1592 * Dictionary_2_get_Values_m10007_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10007(__this, method) (( ValueCollection_t1592 * (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_get_Values_m10007_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m10009_gshared (Dictionary_2_t1584 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10009(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t1584 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10009_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10011_gshared (Dictionary_2_t1584 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10011(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1584 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10011_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10013_gshared (Dictionary_2_t1584 * __this, KeyValuePair_2_t1585  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10013(__this, ___pair, method) (( bool (*) (Dictionary_2_t1584 *, KeyValuePair_2_t1585 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10013_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t1590  Dictionary_2_GetEnumerator_m10015_gshared (Dictionary_2_t1584 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10015(__this, method) (( Enumerator_t1590  (*) (Dictionary_2_t1584 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10015_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m10017_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10017(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10017_gshared)(__this /* static, unused */, ___key, ___value, method)
