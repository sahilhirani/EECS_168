#include <iostream>

void print2DArray(int ** array, int rows, int cols)
{
	for(int i = 0; i<rows; i++)
	{
		for(int j = 0; j<cols-1; j++)
		{
			std::cout <<array[i][j]<<", ";
		}
		std::cout <<array[i][cols-1]<<"\n";
	}
}

int arraySum(int* array, int size)
{
	int sum = 0;
	for(int i =0; i<size; i++)
	{
		sum = sum + array[i];
	}
	return(sum);
}

double arrayAvg(int* array, int size)
{
	double avg= 0;
	double a= 0.0;
	for(int i =0; i<size; i++)
	{
		a++;
		avg = avg + array[i];
	}
	avg = avg/a;
	return(avg);
}

int arraySum2D(int** array, int rows, int cols)
{
	int sum = 0;
	for(int i = 0; i<rows;i++)
	{
		for(int j=0; j<cols;j++)
		{
			sum = sum + array[i][j];
		}
	}
	return(sum);
}

double arrayAvg2D(int** array, int rows, int cols)
{
	double avg = 0;
	int divisor = 0;
	for(int i = 0; i < rows; i++)
	{
		for(int j =0; j<cols; j++)
		{
			avg = avg + array[i][j];
			divisor++;
		}
	}
	avg = avg/divisor;
	return(avg);
}

int arrayMax2D(int** array, int rows, int cols)
{
	int max = array[0][0];
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if(max < array[i][j])
			{
				max = array[i][j];
			}
		}
	}
	return(max);
}

int main()
{
	int** twod = nullptr; //sets a pointer to a pointer for use later when we create the 2d array
	int rows = 0;  //Takes in number of rows for 2d array
	int cols = 0; //Takes in number of columns for the 2d array
	std::cout <<"How many rows?: ";
	std::cin >> rows;
	std::cout <<"How many cols?: ";
	std::cin >> cols;
	twod = new int*[rows]; //New Array Using rows
	for(int a = 0; a < rows; a++)
	{
		twod[a] = new int[cols];//Uses cols to create a 1d array for each row
	}
	for(int i=0; i<rows ; i++)
	{
		for(int j = 0; j<cols; j++)
		{
			std::cout << "Enter a value for position ("<<i<<","<<j<<"):";
			std::cin >> twod[i][j]; // Gets a Value from the user for the 2d array
		}
	}
	std::cout << "Here is your array\n";
	print2DArray(twod, rows, cols);
	for(int q = 0; q<rows; q++)
	{
		std::cout <<"row "<<q<<" sum= " << arraySum(twod[q], cols) << ", avg= " << arrayAvg(twod[q], cols) << "\n";
	}
	std::cout <<"The largest value in the array is = " << arrayMax2D(twod, rows, cols) << "\n";
	std::cout <<"The sum for the entire array is = " << arraySum2D(twod, rows, cols) << "\n";
	std::cout <<"The average value for the entire array is = " << arrayAvg2D(twod, rows, cols) << "\n";
	for(int b =0; b<rows; b++)
	{
		delete[] twod[b];
	}
	delete[] twod;
	return(0);
}