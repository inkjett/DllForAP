// Dll1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
 __declspec(dllexport) bool __stdcall AP(bool ValueIn) // __stdcall -- экспортирование функций
{  
	 return !ValueIn;
}