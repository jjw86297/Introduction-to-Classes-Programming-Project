#include "Date.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Test default constructor: ";
	Date date1;
	date1.numberPrint();

	cout << "Test constructor with valid date: ";
	Date date2(2, 28, 2009);
	date2.numberPrint();

	cout << "Test constructor with invalid day (2/29/2009): ";
	Date date3(2, 29, 2009);
	date3.numberPrint();

	cout << "Test constructor with invalid month (45/2/2009): ";
	Date date4(45, 2, 2009);
	date4.numberPrint();

	cout << "Test setDate with bad day (4/31/2009): ";
	date4.setDate(4, 31, 2009);
	date4.numberPrint();

	cout << "Test setDate with bad month (13): ";
	date4.setDate(13, 3, 2006);
	date4.numberPrint();

	cout << "Test for leap year with bad date (2/29/2009): ";
	date4.setDate(2, 29, 2009);
	date4.numberPrint();

	cout << "Test for leap year with good date (2/29/2008): ";
	date4.setDate(2, 29, 2008);
	date4.numberPrint();

	cout << "Test the print formats: " << endl;
	date4.commaPrint();
	date4.dmyPrint();

	return 0;
}