#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray
{
	private:
		int size;
		double* array;

		static const int MAX_SIZE = 10;
		static const double return_value;

	public:
		NumberArray(int size = MAX_SIZE);

		~NumberArray();

		void setNumber(int index, double value);

		double getNumber(int index) const;

		double getMax() const;
		double getMin() const;
		double getAverage() const;

		void print();
};

#endif