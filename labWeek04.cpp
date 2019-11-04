// labWeek04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{


	//Task 0
/*
	int productOfDigits = 1;
	int sumOfDigits = 0;
	int number;

	std::cin >> number;

	while (number > 0) {

		productOfDigits *= number % 10;
		sumOfDigits += number % 10;
		number /= 10;
	}

	if (productOfDigits >= 100 && productOfDigits <= 999){
		std::cout << "YES" << std::endl 
			<< (productOfDigits - sumOfDigits) << std::endl;
	}
	else {
		std::cout << "No " << std::endl
			<< productOfDigits << std::endl;
	}
*/
	//Task 1

	/*int keyboardNumber;

	std::cin >> keyboardNumber;

	int maxNumber = INT_MIN;
	bool flag = 0;
	int buffer;

	for (int i = 0; i < keyboardNumber; i++)
	{
		std::cin >> buffer;

		if (buffer >= maxNumber && buffer < 0) {
			maxNumber = buffer;
			flag = true;
		}

	}
	if (flag) {
		std::cout << maxNumber;
	}
	else {
		std::cout << "There is no number";
	}*/
	//(flag) ? &(std::cout << maxNumber) : 
	//	&(std::cout << std::boolalpha << flag);

	//Task 5
	int keyboardNumber;

	std::cin >> keyboardNumber;

	int fib1 = 0, fib2 = 1, result = 0;

	for (int i = 0; i < keyboardNumber - 1; i++)
	{
		result = fib1 + fib2;
		fib1 = fib2;
		fib2 = result;
	}

	std::cout << result ;


    return 0;
}

