#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	//short, int, long, float, double, char = ASCII, bool
	//set precision of floating point numbers
	double num = 5.5217367324;
	int newNumber = num;
	std::cout << std::fixed << std::setprecision(2) << num << std::endl;

	//check if digit of hundreds could be devided
	int number;
	std::cin >> number;
	std::cout << ((number / 100 % 10) % 3 == 0) << std::endl;


	//tern operator
	//(<condition>) ? <operator> : <operator>;
	number = 26;
	(number % 2 == 0) ? number += 6 : number--;

	// '\n' = endl
	do
	{
		std::cout << "Enter number... ";
		std::cin >> number;
	} while ((number < 0) || (number > 100));

	/*int i = 0, j = -100;  //nested loops
	while (i < 100)
	{
		while (j > 0)
		{

		}
	}*/

	//sum of digits
	number = 128977;
	int sum = 0;
	while (number)		// (number > 0)
	{
		sum += (number % 10);
		number /= 10;
	}
	std::cout << sum << std::endl;


	//pow() function
	int currNum = 5, power = 1;
	for (int i = 0; i < 5; i++)
	{
		power *= currNum;
	}
	std::cout << power << std::endl;

	//prime numbers
	int exampleNum = 289;
	bool isFound = 0;
	for (int i = 2; i < (exampleNum / 2), !isFound; i++)
	{
		if ((exampleNum % i) == 0)
		{
			isFound = 1;
			std::cout << "Number isn't prime\n";
			break;
		}
		//isFound = ((exampleNum % i) == 0) ? 1 : 0;
	}
	if (!isFound)
	{
		std::cout << "Number is prime!\n";
	}

	return 0;
}

