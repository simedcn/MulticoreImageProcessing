// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#include "Parameters.h"
#include "Routine.h"

#include <string>
#include <sstream>

#ifdef UNICODE
#define tstring std::wstring
#define tostringstream std::wostringstream
#else
#define tstring std::string                      
#define tostringstream std::ostringstream
#endif

#define FMTDBGSTR(stream)  ((tostringstream&)(tostringstream() << tstring() << stream)).str().c_str() 
