//---------------------------------------------------------------------------

#ifndef exported_functionsH
#define exported_functionsH
//---------------------------------------------------------------------------

#ifdef __DLL__
 #define DLLEXP __declspec(dllexport) __stdcall
#else
 #define DLLEXP __declspec(dllimport) __stdcall
#endif

extern "C"
{
  int DLLEXP mod_ShowPopup(wchar_t* Message);
};

#endif