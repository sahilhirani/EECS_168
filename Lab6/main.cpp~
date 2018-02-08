#include <iostream>

int main()
{
	int size = 0;
	int* array = nullptr;
	int a = 0;
	std::cout <<"Input an Array size: ";
	std::cin >> size;
	array = new int[size];
	std::cout <<"Now please enter "<<size<<" numbers\n";
	for(int i = 0;i<size;i++)
	{
		std::cout <<"Input a number into your array: ";
		std::cin >> array[i];
	}
	std::cout <<"Here are all the numbers in your array:\n";
	for(int x = 0; x<size;x++)
	{
		std::cout <<array[x]<<"\n";
	}
	for(int j = 0; j<size;j++)
	{
		a = a + array[j];
	}
	std::cout <<"The sum of all the values is: "<<a<<"\n";
	std::cout <<"The average of all the values is: "<<(a/size)<<"\n";
	int big = array[0];
	int small = array[0];
	for(int w = 0; w<size;w++)
	{
		if(big<array[w])
		{
			big = array[w];
		}
	}
	std::cout <<"The largest valuse is : "<<big<<"\n";
	for(int e = 0; e<size;e++)
	{
		if(small>array[e])
		{
			small = array[e];
		}
	}
	std::cout <<"The smallest value is : "<<small<<"\n";
	delete[] array;
	return(0);
}
