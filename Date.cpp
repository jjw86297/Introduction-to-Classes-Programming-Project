#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

const int num_months = 12;
string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

Date::Date(int d, int m, int y)
{
	setDate(d, m, y);
}

bool Date::inputValid(int d, int m, int y)
{
	if (d < 1 || d > lastDay(m, y)) 
		return false;
	else if (m < 1 || m > 12)
		return false;
	else if (y < 1)
		return false;
	else
		return true;
}

void Date::setDate(int d, int m, int y)
{
	if (inputValid(d, m, y))
	{
		day = d;
		month = m;
		year = y;
	}
	else
	{
		day = 1;
		month = 1;
		year = 1900;
	}
}

bool Date::isLeapYear()
{
	return isLeapYear(year);
}

bool Date::isLeapYear(int y)
{
	return ((y % 4 == 0) && (y % 100 != 0 || y % 400 == 0));
}

int Date::lastDay()
{
	return lastDay(month, year);
}

int Date::lastDay(int m, int y)
{
	switch (m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
			return 31;
		case 4: case 6: case 9: case 11: 
			return 30;
		case 2:
		{
			if (isLeapYear(y))
				return 29;
			else
				return 28;
		}
		default:
			return 0;
	}
}

void Date::numberPrint()
{
	cout << month << "/" << day << "/" << year << endl;
}

void Date::commaPrint()
{
	cout << months[month - 1] << " " << day << ", " << year << endl;
}

void Date::dmyPrint()
{
	cout << day << " " << months[month - 1] << " " << year << endl;
}