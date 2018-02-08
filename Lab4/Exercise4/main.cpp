#include <iostream>

int main()
{
	int base;
	int num;
	std::cout <<"Enter the number of asterisks for the base of the triangle: ";
	std::cin >>base;
	for(int a = 0; a<=base; a++)
	{
		for(int b = 0; b<a ;b++)
		{
			std::cout <<"*";
		}
		std::cout <<"\n";
	}
	return(0);
}
