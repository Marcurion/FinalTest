﻿#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t860;
// System.Collections.Stack
struct Stack_t276;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t861  : public SmallXmlParser_t862
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t860 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t860 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t276 * ___stack_15;
};
