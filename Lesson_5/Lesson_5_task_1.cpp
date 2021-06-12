#include <iostream>

using namespace std;

//task_1
void PrintArray(double arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " " ;
	}
}

int main()
{
	const int mysize = 3;
	double myarr[] = { 1.2, 3.3, 5.9 };
	PrintArray(myarr, mysize);
	return 0;
}
