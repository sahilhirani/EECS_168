#include <iostream>

int main()
{
	int pattern = 0;
	int n = 0;
	std::cout <<"Choose one of the following patterns by typing the corresponding number: \n";
	std::cout <<"1) Stripes\n";
	std::cout <<"2) Checker Board\n";
	std::cout <<"3) Double Diagonal\n";
	std::cout <<"4) Two Islands\n";
	std::cin >> pattern;
	if(pattern < 1 || pattern > 4)
	{
		std::cout <<"Error.\n";
		return(0);
	}
	std::cout <<"\n";
	std::cout <<"Input a size (must be bigger than 1):\n";
	std::cin >> n;
	if(n <= 1)
	{
		std::cout <<"Error.\n";
		return(0);
	}
	std::cout <<"\n";
	if(pattern == 1)
	{
		for(int i = 0;i<n;i++)
		{
			std::cout <<i<<" ";
			for(int j = 0; j < n; j++)
			{
				if(((j)%2) == 0)
				{
					std::cout <<"*";
				}
				else if(((j)%2) == 1)
				{
					std::cout <<" ";
				}
			}
			std::cout <<"\n";
		}
	}
	else if(pattern == 2)
	{
		for(int i = 0; i<n;i++)
		{
			std::cout <<i<< " ";
			for(int j = 0; j<n;j++)
			{
				if(((i+j)%2) == 0)
				{
					std::cout <<"*";
				}
				else if(((i+j)%2) == 1)
				{
					std::cout <<" ";
				}
			}
			std::cout <<"\n";
		}
	}
	else if(pattern == 3)
	{
		for(int i = 0; i<n; i++)
		{
			std::cout <<i<<" ";
			for(int j = 0; j<n;j++)
			{
				if(j==i)
				{
					std::cout <<"*";
				}
				else if((j+i) == (n-1))
				{
					std::cout <<"*";
				}
				else if(j != i)
				{
					std::cout <<" ";
				}
			}	
			std::cout <<"\n";
		}
	}
	else if(pattern == 4)
	{
		for(int i = 0; i<n;i++)
		{
			std::cout <<i<<" ";
			for(int j = 0; j<n;j++)
			{
				double mid = n/2;
				if((n%2) == 1)
				{
					if((j+i) == (n-1))
					{
						std::cout <<"*";
					}
					else if(j< mid && i< mid)
					{
						std::cout <<"!";
					}
					else if((j> (mid) && i> (mid)))
					{
						std::cout <<"?";
					}
					else
					{
						std::cout <<"~";
					}
				}
				else if((n%2) == 0)
				{
					if((j+i) == (n-1))
					{
						std::cout <<"*";
					}
					else if(j< mid && i< mid)
					{
						std::cout <<"!";
					}
					else if((j> (mid-1) && i> (mid-1)))
					{
						std::cout <<"?";
					}
					else
					{
						std::cout <<"~";
					}
				}
			}
			std::cout <<"\n";
		}
	}	
return(0);
}
