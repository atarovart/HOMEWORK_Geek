#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define IN_RANGE(a, b) ((a >= 0 && a < b) ? "true" : "false")
using namespace std;
int main()
{
	int number;
	char q = 'q';
	for (; ;)
	{
		cout << "Enter a number: " << endl;
		cin >> number;
		cout << IN_RANGE(number, 10) << endl;
	}
	return 0;
}
