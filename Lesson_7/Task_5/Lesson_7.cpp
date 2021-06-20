#include <iostream>
#include "Mylib.h"

using namespace std;

int main()
{
	system("color 2");
	const int size = 1000;
	float* myarray = MySpace::myarrayinit(size);
	if (myarray != nullptr)
	{
		MySpace::myarray(myarray, size);
		MySpace::PositivesandNegatives(myarray, size);
		delete[] myarray;
	}
	
	system("pause");
	return 0;
}
