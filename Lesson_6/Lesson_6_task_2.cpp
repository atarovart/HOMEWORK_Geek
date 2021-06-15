#include <iostream>

using namespace std;

int** ptrarray;
const size_t m = 4; //Не понятно почему некоторые переменные инициализируем через size_t, а не просто int..
const size_t n = 4;

int main()
{
	srand(time(NULL));
	ptrarray = new int* [m];
	for (size_t i = 0; i < m; i++)

	{
		ptrarray[i] = new int[n];
	}

	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			ptrarray[i][j] = rand() % 50 + 100;
			cout << ptrarray[i][j] << " ";
		}
	}

	for (size_t i = 0; i < m; i++)
	{
		delete[] ptrarray[i];
	}

	delete[] ptrarray;
	ptrarray = nullptr;
	cout << endl;

	return 0;
}

