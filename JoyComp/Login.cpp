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
#include "UnitTest.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace JoyCompiler;
[STAThreadAttribute]
int LogScreen() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	JoyCompiler::Login form;
	Application::Run(%form);
	return 0;
}

int tests_run = 0;
static char * all_tests();
static char * test_cmpDates();
static char * test_isGoodDate();
static char * test_getDate();
static char * test_convertDate();
static char * test_checkIfFileEmpty();
static char * test_currentDateTime();
static char * test_findAllContent();

int main() {
	char *result = all_tests();
	if (result != 0) {
		printf("%s\n", result);
	}
	else {
		printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);
	JoyCompiler::removeOutdatedEvents();
	LogScreen();
	system("pause");
	return 0;
}

static char * all_tests() {
	mu_run_test(test_cmpDates);
	mu_run_test(test_isGoodDate);
	mu_run_test(test_getDate);
	mu_run_test(test_convertDate);
	mu_run_test(test_checkIfFileEmpty);
	mu_run_test(test_currentDateTime);
	mu_run_test(test_findAllContent);
	return 0;
}

static char * test_cmpDates() {
	Date date1, date2;
	date1.day = 1;
	date1.month = 1;
	date1.year = 2000;
	date2.day = 1;
	date2.month = 1;
	date2.year = 2000;
	mu_assert("cmpDates func - unit test - BAD.", cmpDates(date1, date2) == 0 || cmpDates(date1, date2) == 1);
	return 0;
}

static char * test_isGoodDate() {
	mu_assert("isGoodDate func - unit test - BAD.", isGoodDate(24,11,1994) == true);
	return 0;
}

static char * test_getDate() {
	Date date;
	date.day = 4;
	date.month = 11;
	date.year = 1994;
	string a = "test test test 24.11.1994";
	mu_assert("getDate func - unit test - BAD.", cmpDates(getDate(a), date) == 0);
	return 0;
}

static char * test_convertDate() {
	Date date;
	date.day = 24;
	date.month = 11;
	date.year = 1994;
	string a = "24.11.1994";
	mu_assert("convertDate func - unit test - BAD.", cmpDates(convertDate(a), date) == 0);
	return 0;
}

static char * test_checkIfFileEmpty() {
	mu_assert("checkIfFileEmpty func - unit test - BAD.", checkIfFileEmpty("test.txt") == true);
	return 0;
}

static char * test_currentDateTime() {
	mu_assert("currentDateTime func - unit test - BAD.", checkIfString(currentDateTime()) == true);
	return 0;
}

static char * test_findAllContent() {
	mu_assert("findAllContent func - unit test - BAD.", checkIfString(findAllContent()) == false);
	return 0;
}
