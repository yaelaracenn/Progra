#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


void Main(void)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	OperacionesConPuntos::MyForm form;
	Application::Run(%form);
}