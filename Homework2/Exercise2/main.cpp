#include <iostream>

int main()
{
	int size = 0;
	int num = 0;
	int tran = 1;
	int v = 0;
	std::cout <<"Enter the Size of the Square Matrix:\n";
	std::cin >>size;
	std::cout <<"Square Matrix:\n";
	for(int i =  0; i<size;i++)
	{
		for(int j = 0; j<size;j++)
		{
			num = num +1;
			std::cout <<num<<" ";
		}
		std::cout <<"\n";
	}
	std::cout <<"Transpose:\n";
	for(int a = 0; a<size;a++)
	{
		for(int b = 0; b<size;b++)
		{
			v = tran + (size*b);
			std::cout <<v<<" ";
		}
		std::cout <<"\n";
		tran = tran + 1;
	}
	return(0);
}
