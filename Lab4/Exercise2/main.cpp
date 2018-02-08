#include <iostream>

int main()
{
	const int num = 73;
	int guess = 0;
	std::cout << "Welcome to the number guessing game.\n";
	do
	{
		std::cout << "Guess a Number: ";
		std::cin >>guess;
		if(guess<num)
		{
			std::cout <<"Sorry, your guess is too low.\n";
		}
		else if(guess>num)
		{
			std::cout <<"Sorry, your guess is too high.\n";
		}
	}while(guess != num);
	std::cout << "You Win!!!\n";
	return(0);
}
