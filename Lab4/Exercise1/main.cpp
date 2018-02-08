#include <iostream>

int main()
{
	int mult;
	int integer;
	int s=0;
	int lcv=1;
	int a=0;
	std::cout <<"Please input a multiple larger than 1: ";
	std::cin >> mult;
	std::cout <<"Please input a positive integer as the end value: ";
	std::cin >> integer;
	if(mult<=1)
	{
		std::cout <<"ERROR\n";
	}
	else if(integer<=1)
	{
		std::cout <<"ERROR\n";
	}
	else
	{
		while(a<=integer)
		{
			s += (mult*lcv);			
			lcv = lcv+1;
			a = (lcv*mult);
		}
		std::cout <<"The summation is: ";
		std::cout << s << std::endl;
	}
	return(0);
}
