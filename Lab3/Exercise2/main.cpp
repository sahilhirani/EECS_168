#include <iostream>

int main()
{
	int start = 0;
	int end = 0;
	std::cout <<"Insert a start value (included): ";
	std::cin >> start;
	std::cout <<"Insert an ending value (excluded): ";
	std::cin >> end;
	if(start<end)
	{
		for(int lcv = start; lcv<=end; lcv = lcv + 1)
		{
			std::cout <<lcv << std::endl;
		}
	}
	else if(start>=end)
	{
		std::cout <<"Invalid Input." << std::endl;
	}
return(0);
}
