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
	const double base = 5.5;
	const double height = 20.7;
	const double area = 0.5 * base * height;
	std::cout <<"Triangle's Base: ";
	std::cout <<base << std::endl;
	std::cout <<"Triangle's Height: ";
	std::cout <<height <<std::endl;
	std::cout <<"Triangle's Area: ";
	std::cout <<area <<std::endl;
return(0);
}
