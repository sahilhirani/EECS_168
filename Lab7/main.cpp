#include <iostream>

void printArray(double* arr, int size)
{
	std::cout <<"[";
	for(int a = 0; a<size-1 ; a++)
	{
		std::cout <<arr[a]<<", ";
	}
	std::cout <<arr[size-1];
	std::cout <<"]";
	std::cout <<"\n";
}

double* arrayResize(double* oldArray, int oldSize, int newSize)
{
	double* arrayNewsize = new double[newSize];
	for(int i = 0; i<oldSize; i++)
	{
		arrayNewsize[i] = oldArray[i];
	}
	for(int j = oldSize; j< newSize; j++)
	{
		arrayNewsize[j] = 0.0;
	}
	delete[] oldArray;
	return(arrayNewsize);
}

double max(double* arr, int size)
{
	double big = arr[0];
	for(int d = 0; d<size; d++)
	{
		if(big < arr[d])
		{
			big = arr[d];
		}
	}
	return(big);
}

double min(double* arr, int size)
{
	double small = arr[0];
	for(int e = 0; e<size; e++)
	{
		if(small > arr[e])
		{
			small = arr[e];
		}
	}
	return(small);
}

int count(double* arr, int size, double value)
{
	int counterb = 0;
	for(int b = 0; b<size; b++)
	{
		if(arr[b] == value)
		{
			counterb++;
		}
	}
	return(counterb);
}

void reverse(double* arr, int size)
{
	int i = (size-1);
	int size2 = size;
	double* arr2 = new double[size2];
	for(int b = 0; b < size; b++)
	{
		arr2[b] = arr[i];
		--i;
	}
	printArray(arr2, size2);
	delete[] arr2;
}

int main()
{
	int size = 0;
	int size2 = 0;
	double value = 0;
	int counter = 0;
	double* array = nullptr;
	while(size <= 0)	
	{	
		std::cout <<"Input an array size: ";
		std::cin >> size;
	}
	std::cout <<"\n";
	array = new double[size];
	std::cout <<"Now please enter "<<size<< " numbers\n";
	for(int i=0; i<size;i++)
	{
		std::cout <<"Input a number into your array: ";
		std::cin >> array[i];
	}
	std::cout <<"Here are all the numbers in your array:\n";
	printArray(array,size);
	std::cout <<"\n";
	std::cout <<"Input a new size: ";
	std::cin >> size2;
	double* newarray  = arrayResize(array, size, size2);
	std::cout <<"You need to add "<<size2-size<<" numbers.\n";
	for(int a = size; a<size2; a++)
	{
		std::cout <<"Input a number to add to your array: ";
		std::cin >> newarray[a];
	}
	std::cout <<"Here are all the numbers in your new array:\n";
	printArray(newarray, size2);
	std::cout <<"\n";
	std::cout <<"Enter a value to count: ";
	std::cin >> value;
	counter = count(newarray, size2, value);
	if(counter == 0 ||  counter>1)
	{
		std::cout <<value<< " occurs "<< counter << " times in the array.\n";
	}
	else if(counter == 1)
	{
		std::cout <<value<<" occurs "<< counter << " time in the array.\n";
	}
	std::cout <<"Min value in array: "<<min(newarray, size2)<<"\n";
	std::cout <<"Max value in array: "<<max(newarray, size2)<<"\n";
	std::cout <<"The array is now reversed:\n";
	reverse(newarray, size2);
	delete[] newarray;
	return(0);
}
