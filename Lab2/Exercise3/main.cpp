/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Sahil Hirani s679h568@ku.edu
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will compute the area of a triangle with hard coded values.
 * Date: 2/3/2016
 *
 ---------------------------------------------------------------------------- */
#include <iostream>

int main()
{
	double f;
	double c;
	std::cout << "Enter the temperature in Fahrenheit: ";
	std::cin >> f;
	c = (f-32.0) * (5.0/9.0);
	std::cout << f;
	std::cout << " degrees Fahrenheit = ";
	std::cout << c;
	std::cout << " degrees Celsius." << "\n";
return(0);
}
