#include "NumberArray.h"
#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()
{
    cout << "Test constructors" << endl;

    NumberArray array1;
    cout << "From default constructor: Array of size 10" << endl;
    array1.print();
    cout << endl;

    NumberArray array2(15);
    cout << "From constructor with parameters: Array of size 15" << endl;
    array2.print();
    cout << endl << endl;


    cout << "Test mutator" << endl;

    random_device myEngine;
    uniform_real_distribution<double> randomReal(0.0, 100.0);

    for (int count = 0; count < 15; count++)
    {
        array2.setNumber(count, randomReal(myEngine));
    }

    cout << "Array filled with numbers: " << endl;
    array2.print();
    cout << endl;

    cout << "Trying to set a number with an out of bounds index (20): " << endl;
    array2.setNumber(20, 74.8);
    cout << endl << endl;


    cout << "Test accessors" << endl;

    cout << "Access item at index 5: " << array2.getNumber(5) << endl << endl;
    cout << "Access item at index 20 (out of bounds): " << array2.getNumber(20) << endl << endl;

    cout << "The minimum value in the array is: " << array2.getMin() << endl;
    cout << "The maximum value in the array is: " << array2.getMax() << endl;
    cout << "The average of the values in the array is: " << fixed << setprecision(1) << array2.getAverage() << endl << endl;

    return 0;
}