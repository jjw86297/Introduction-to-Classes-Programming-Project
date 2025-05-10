#ifndef DATE_H
#define DATE_H

class Date
{
	private:
		int day;
		int month;
		int year;

		bool inputValid(int, int, int);

	public:
		Date(int = 1, int = 1, int = 1900);

		void setDate(int d, int m, int y);

		int getDay() const
			{ return day; }
		int getMonth() const
			{ return month; }
		int getYear() const
			{ return year; }

		bool isLeapYear();
		bool isLeapYear(int year);

		int lastDay();
		int lastDay(int month, int year);

		void numberPrint();
		void commaPrint();
		void dmyPrint();
};

#endif
