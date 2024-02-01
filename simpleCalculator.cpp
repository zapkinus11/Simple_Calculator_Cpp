#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	string choice;
	int result = 0;
	string answer;
	do
	{
		cout << "Enter the first number: ";
		cin >> number1;

		cout << "Enter the second number: ";
		cin >> number2;

		cout << "Choose the operation you want to perform: " << "\n";
		cout << "(1- Gather)" << "\n";
		cout << "(2- Subtraction)" << "\n";
		cout << "(3- Multiplication)" << "\n";
		cout << "(4- Division)" << "\n";
		cin >> choice;

		if (choice == "1" || choice == "Gather" || choice == "gather")
		{
			result = number1 + number2;
			cout << number1 << " + " << number2 << " = " << result << "\n";
		}
		else if (choice == "2" || choice == "Subtraction" || choice == "subtraction")
		{
			result = number1 - number2;
			cout << number1 << " - " << number2 << " = " << result << "\n";
		}
		else if (choice == "3" || choice == "Multiplication" || choice == "multiplication")
		{
			result = number1 * number2;
			cout << number1 << " * " << number2 << " = " << result << "\n";
		}
		else if (choice == "4" || choice == "Division" || choice == "division")
		{
			result = number1 / number2;
			cout << number1 << " / " << number2 << " = " << result << "\n";
		}
		else
		{
			cout << "Please choose an operation according to the instructions!" << "\n";
		}

		cout << "Do you want to continue? (Y/N): ";
		cin >> answer;

	} while (answer == "y" || answer == "Y");
}
