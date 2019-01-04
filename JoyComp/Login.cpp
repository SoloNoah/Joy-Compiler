#include "Menus.h"
#include "Content.h"
#include "Login.h"
#include "functions.h"
#include "TechSupport.h"
#include "PermissionEdit.h"
#include "SearchResult.h"
#include "WatchList.h"
#include "Ads.h"
#include "AdsReport.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int LogScreen() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	JoyCompiler::Login form;
	Application::Run(%form);
	return 0;
}
int main() {
	JoyCompiler::removeOutdatedEvents();
	LogScreen();
	return 0;
}