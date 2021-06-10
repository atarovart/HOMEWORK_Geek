#include <iostream>

using namespace std;
int main()
{
	{
		//Задание 1
		cout << "TASK 1" << endl;
		int number1, number2;
		cout << "enter number 1: " << endl;
		cin >> number1;
		cout << "enter number 2: " << endl;
		cin >> number2;

		const int SUM = number1 + number2;
		const int LIMIT1 = 10;
		const int LIMIT2 = 20;

		if ((SUM >= LIMIT1) && (SUM <= LIMIT2))
		{
			cout << "TRUE" << endl;
		}
		else
		{
			cout << "FALSE" << endl;
		}
	}

	{
		//Задание 2
		cout << "TASK 2" << endl;
		int number1, number2;
		cout << "enter number 1: " << endl;
		cin >> number1;
		cout << "enter number 2: " << endl;
		cin >> number2;

		const int NUM_CHECK = 10;
		if ((number1 == NUM_CHECK && number2 == NUM_CHECK) || (number1 + number2 == NUM_CHECK))
		{
			cout << "TRUE" << endl;
		}
		else
		{
			cout << "FALSE" << endl;
		}
	}

	{
		//Задание 3
		cout << "TASK 3" << endl << "Numbers I need: " << endl;
		for (size_t a = 1; a <= 50; a += 2) //a = a + 2 иначе 
		{
			cout << a << endl;
		}
	}
	//К сожалению, не успеваю сделать в срок все задания, очень интересно. Займусь этим обязательно в свободное время.
}