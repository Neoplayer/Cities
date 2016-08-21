
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Cities_1_0::MyForm form;
	Application::Run(%form);
}
