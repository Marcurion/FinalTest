﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t692;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t453;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t424;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m3302 (CertificateSelectionCallback_t692 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t453 * CertificateSelectionCallback_Invoke_m3303 (CertificateSelectionCallback_t692 * __this, X509CertificateCollection_t424 * ___clientCertificates, X509Certificate_t453 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t424 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" X509Certificate_t453 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t692(Il2CppObject* delegate, X509CertificateCollection_t424 * ___clientCertificates, X509Certificate_t453 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t424 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m3304 (CertificateSelectionCallback_t692 * __this, X509CertificateCollection_t424 * ___clientCertificates, X509Certificate_t453 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t424 * ___serverRequestedCertificates, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t453 * CertificateSelectionCallback_EndInvoke_m3305 (CertificateSelectionCallback_t692 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
