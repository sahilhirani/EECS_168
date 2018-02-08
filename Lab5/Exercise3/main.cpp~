#include <iostream>

int lengthOfNumber(int x)
{
	int length = 0;	
	for(; x != 0; x /= 10, length++);
	return(length);
}

int reverse(int x)
{
	int reverse = 0;
	while(x != 0)
	{
		reverse = reverse * 10;
		reverse = reverse + x%10;
		x = x/10;
	}
	return(reverse);
}

bool isPalindrome(int x)
{
	int a = x;
	if(x == reverse(a))
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

int main()
{
	int num = 12345;
	int cont = 1;
	while(cont != 0)
	{
		std::cout <<"Please enter a Number:\n";
		std::cin >> num;
		std::cout <<"The Length of the number is: ";
		std::cout << lengthOfNumber(num) <<"\n";
		std::cout <<"The Reverse of the number is: " << reverse(num) << "\n";
		if(isPalindrome(num) == true)
		{
			std::cout <<"The Number is a Palindrome.\n";
		}
		else
		{
			std::cout <<"The Number is not a Palindrome.\n";
		}
		std::cout <<"\n";
		std::cout <<"Want to try again?(y=1/n=0):\n";
		std::cin >> cont;
	}
	std::cout <<"Thank You!\n";
	return(0);
}
