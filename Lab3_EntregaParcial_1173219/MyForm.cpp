#include "MyForm.h"
#include "clase.h"

using namespace System;
using namespace System::Windows::Forms;

[MTAThreadAttribute]
int main(array<String^>^args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lab3EntregaParcial1173219::MyForm mainForm;
	Application::Run(% mainForm);
	return 0;
}
