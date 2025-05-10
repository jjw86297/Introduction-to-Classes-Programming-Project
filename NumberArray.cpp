#include "NumberArray.h"
#include <iostream>
#include <iomanip>

using namespace std;

const double NumberArray::return_value = 10000.0;

NumberArray::NumberArray(int size1)
{
	if (size1 <= 0)
	{
		cout << "Size must be positive; using default size: " << size;
	}
	else
	{
		size = size1;
	}

	array = new double[size];
	for (int count = 0; count < size; count++)
	{
		array[count] = 0.0;
	}
}

NumberArray::~NumberArray()
{
	delete[] array;

	cout << "The destructor has run." << endl;
}

void NumberArray::setNumber(int index, double value)
{
	if (index < 0 || index >= size)
	{
		cout << "Index has gone out of bounds; the value will not be stored." << endl;
	}
	else
	{
		array[index] = value;
	}
}

double NumberArray::getNumber(int index) const
{
	if (index < 0 || index >= size)
	{
		cout << "Index has gone out of bounds; the default value will be returned." << endl;
		return return_value;
	}
	else
	{
		return array[index];
	}
}

double NumberArray::getMax() const
{
	double max = array[0];

	for (int count = 1; count < size; count++)
	{
		if (array[count] > max)
			max = array[count];
	}

	return max;
}

double NumberArray::getMin() const
{
	double min = array[0];

	for (int count = 1; count < size; count++)
	{
		if (array[count] < min)
			min = array[count];
	}

	return min;
}

double NumberArray::getAverage() const
{
	double total = 0.0;

	for (int count = 0; count < size; count++)
	{
		total += array[count];
	}

	return total / size;
}

void NumberArray::print()
{
	for (int count = 0; count < size; count++)
	{
		cout << fixed << setprecision(1) << array[count] << " ";
	}

	cout << endl;
}
