//---------------------------------------------------------------------------
#include <fmx.h>
#include <memory>
#pragma hdrstop

#include "exported_functions.h"
#include "message_form.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
int DLLEXP mod_ShowPopup(wchar_t* Message)
{
	try
	{
		std::auto_ptr<TMyForm> myForm (new TMyForm(NULL));
		myForm->SetMessage(Message);
		myForm->ShowModal();
	}
	catch ( ... )
	{
		return -1;
	}
	return 0;
}
