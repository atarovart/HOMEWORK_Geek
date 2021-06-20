#include <iostream>

using namespace std;

namespace MySpace
{
	float* myarrayinit(int size)
	{
		srand(time(NULL));
		float* farray = new float[size];
		if (farray != nullptr)
		{
			for (size_t i = 0; i < size; i++)
			{
				farray[i] = (float)rand() / (float)RAND_MAX * (1000.0 +1000.0) - 1000.0;  //(double)rand()/(double) RAND_MAX*(b-a)+a
			}
		}
		return farray;

	}

	void myarray(float* arr, int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

	}

	void PositivesandNegatives(float* arr, int size)
	{
		int positivenumber = 0, negativenumber = 0, nullnumber = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				positivenumber++;
			}
			else if(arr[i] < 0)
			{
				negativenumber++;
			}
			else if (arr[i] == 0.00)
			{
				nullnumber++;
			}

		}
			cout << "Positive count: " << positivenumber << endl << "Negative count: " << negativenumber << endl << "Zero numbers: " << nullnumber << endl;
	}
}
