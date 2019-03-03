#include <iostream>
#include <cstdarg>
#include <cmath>
#include "hw7.h"
using namespace std;

double stddev(int n, ...){
    va_list args;
    va_start(args, n);  // Receiving how many arguments there will be
    int numbers[n];
    for (int i = 0; i < n; i++)
    	{
    		int num = va_arg(args, int);
        numbers[i]  = num;  // Putting the numbers into the array
    	}

    double total = 0;
    for (int i = 0; i < n ; i++)
      {
        total += numbers[i];  // Adding the total up
      }
      cout << "The total is: " << total << endl;

    	double mean = total / n; // Finding the mean of the data
      cout << "The mean is: " << mean << endl;

    	double stddev = 0;
    	for(size_t i = 0; i <= n -1; i++){
    		stddev = stddev + (numbers[i] - mean) * (numbers[i] - mean);  // Std Dev step subtracting each number by mean and squaring
    	}
    	stddev /= n; // Divide by the number of elements

    	if( stddev == 0){
    		std::cout << "Sigma is zero." << std::endl; // Edge case if it is zero
    	}
      return sqrt(stddev);

    va_end(args);
}

int main()
{
    cout << "The standard deviation is: " << stddev(4,10,20,21,24) << endl;
}
