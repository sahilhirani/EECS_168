#include <iostream>

int addDigits(int x)
{
	int a = 10;
	int add = 0;
	if(x%10 == 0)
	{
		while(x != 0)
		{
			x = x/10;
			a = x%10;
			add = add + a;
		}
	}
	else
	{
		while(a != 0)
		{	
			a = x%10;
			x = x/10;
			add = add + a;
		}
	}
	return(add);
}

int main()
{
	int num = 0;
	int stop = 1;	
	while(stop != 0)
	{
		std::cout <<"\nPlease enter a Number: \n";
		std::cin >> num;
		std::cout <<"The sum of the digits is: " << addDigits(num) <<"\n";
		std::cout <<"\n";
		std::cout <<"Want to try again?(y=1 / n=0):\n";
		std::cin>>stop;
	}
	std::cout <<"Thank You!\n";
	
return(0);
}
	


	
