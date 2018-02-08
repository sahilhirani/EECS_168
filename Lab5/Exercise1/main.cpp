#include <iostream>
#include <string>

int max(int a, int b)
{
	if(a>b)
	{
		return(a);
	}
	else if(b>a)
	{
		return(b);
	}
}

double sphereArea(double radius)
{
	double area=0.0;	
	if(radius<=0)
	{
		return(0.0);
	}
	else if(radius>0)
	{
		area = (4.0 * (3.14159)) * (radius * radius);
		std::cout.setf(std::ios::fixed);
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(5);
		return(area);
	}
}

void printWord(std::string word, int timesToPrint)
{
	if(timesToPrint <=0)
	{
		std::cout <<"\n";
	}
	else
	{	
		for(int num=0; num<=timesToPrint; num++)
		{
			std::cout <<word<<"\n";
		}
	}
}

int main()
{
	int c = 0;
	int d = 0;
	double r = 0.0;
	int e = 0;
	std::string word2;
	std::cout <<"Input two numbers:\n";
	std::cin >>c;
	std::cin >>d;
	std::cout <<"The max of " <<c<< " and " <<d<< " is: " << max(c,d)<<"\n";
	std::cout <<"\n";
	std::cout <<"Input a radius: ";
	std::cin >> r;
	std::cout <<"The area of a sphere with this radius is: " << sphereArea(r) << "\n";
	std::cout <<"\n";
	std::cout <<"Input a string:\n";
	std::cin >> word2;
	std::cout <<"\n";
	std::cout <<"How many times do you want to print it?: ";
	std::cin >> e;
	printWord(word2,e);
return(0);
}
