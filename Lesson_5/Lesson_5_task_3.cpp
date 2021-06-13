#include <iostream>

using namespace std;

void arrayprint(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

bool printarray(int arr[], size_t size)
{
	int num = 1;
	const int STEP = 3;

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = num;
		num += STEP;

	}
	return true;
}

int main()
{
	const int mysize = 8;
	int myarr[mysize];
	if (printarray(myarr, mysize))
	{
		arrayprint(myarr, mysize);
	}

	cout << endl;
	return 0;
}
