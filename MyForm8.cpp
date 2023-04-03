#include "MyForm8.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CONVERTERSYSTEM::MyForm8 form;
	Application::Run(% form);
}


