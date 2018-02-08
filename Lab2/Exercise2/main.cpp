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
	double base;
	double height;
	double area;
	std::cout << "Input the base: ";
	std::cin >> base;
	std::cout << "Input the height: ";
	std::cin >> height;
	std::cout <<"Triangle's Base: ";
	std::cout <<base << "\n";
	std::cout <<"Triangle's Height: ";
	std::cout <<height << "\n";
	std::cout <<"Triangle's Area: ";
	area = 0.5 * base * height;
	std::cout <<area << "\n";
return(0);
}

