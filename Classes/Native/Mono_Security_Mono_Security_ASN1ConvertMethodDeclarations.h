﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t636;
// Mono.Security.ASN1
struct ASN1_t567;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
extern "C" ASN1_t567 * ASN1Convert_FromInt32_m2332 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
extern "C" ASN1_t567 * ASN1Convert_FromOid_m2577 (Object_t * __this /* static, unused */, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C" int32_t ASN1Convert_ToInt32_m2328 (Object_t * __this /* static, unused */, ASN1_t567 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" String_t* ASN1Convert_ToOid_m2381 (Object_t * __this /* static, unused */, ASN1_t567 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" DateTime_t60  ASN1Convert_ToDateTime_m2578 (Object_t * __this /* static, unused */, ASN1_t567 * ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
