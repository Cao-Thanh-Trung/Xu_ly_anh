#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace xulyanhopencv; //DemoWinForm is your project name
[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
}
