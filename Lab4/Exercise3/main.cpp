#include <iostream>
#include <string>

int main()
{
	std::string word;
	word = "valentine";
	std::string guess;
	std::cout <<"Welcome to the word guessing game.\n";
	std::cout <<"Guess a word: valentine.\n";
	while(guess != word)
	{
		std::cout <<"Incorrect. Guess a Word: ";
		std::cin >> guess;
	}
	std::cout << "You Win!\n";	
return(0);
}
		
