﻿#pragma once
#include <stdint.h>
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t391;
// System.Net.IWebProxy
struct IWebProxy_t413;
// System.Object
struct Object_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Net.Security.AuthenticationLevel
#include "System_System_Net_Security_AuthenticationLevel.h"
// System.Net.WebRequest
struct  WebRequest_t415  : public MarshalByRefObject_t438
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;
};
struct WebRequest_t415_StaticFields{
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t391 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	Object_t * ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	Object_t * ___lockobj_5;
};
