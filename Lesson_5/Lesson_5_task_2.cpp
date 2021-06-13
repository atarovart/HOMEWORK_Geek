#include <iostream>

using namespace std;

void arrayprint(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int arrayzeroone(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (arr[i] == 1) ? 0 : 1;
	}
	return 0;
}
int main()
{
	const int mysize = 5;
	int myarr[] = { 1, 0, 1, 1, 0, 1 };
	arrayprint(myarr, mysize);
	arrayzeroone(myarr, mysize);
	cout << endl;
	return 0;
}


