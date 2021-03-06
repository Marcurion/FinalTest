﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t828;
// Mono.Math.BigInteger
struct BigInteger_t827;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4371 (ModulusRing_t828 * __this, BigInteger_t827 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4372 (ModulusRing_t828 * __this, BigInteger_t827 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t827 * ModulusRing_Multiply_m4373 (ModulusRing_t828 * __this, BigInteger_t827 * ___a, BigInteger_t827 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t827 * ModulusRing_Difference_m4374 (ModulusRing_t828 * __this, BigInteger_t827 * ___a, BigInteger_t827 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t827 * ModulusRing_Pow_m4375 (ModulusRing_t828 * __this, BigInteger_t827 * ___a, BigInteger_t827 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t827 * ModulusRing_Pow_m4376 (ModulusRing_t828 * __this, uint32_t ___b, BigInteger_t827 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
