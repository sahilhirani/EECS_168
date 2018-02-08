#include <iostream>

bool isLeapYear(int year)
{
	if(year %10 == 0)	
	{
		if((year %100) == 0 && (year %400) == 0)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
	else
	{
		if(year %4 ==0)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

int main()
{
	int in = 0;
	char cont = 'n';
	std::cout <<"Welcome!\n";
	while(cont != 'y')
	{
		std::cout <<"Input a year: ";
		std::cin >> in;
		if(isLeapYear(in) == true)
		{
			std::cout <<in<<" is a leap year!\n";
		}
		else
		{
			std::cout <<in<<" is not a leap year!\n";
		}
		std::cout <<"Quit (y/n): ";
		std::cin >>cont;
		std::cout <<"\n";
	}
	std::cout <<"Goodbye.\n";
	return(0);
}
