#include "MyForm.h"
#include <string>
#include <msclr/marshal.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    lab2form::MyForm form;
    Application::Run(% form);
}


