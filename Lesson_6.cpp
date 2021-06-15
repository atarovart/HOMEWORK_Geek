#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int* ptrarray;
	int n; 
	cout << "Enter size of your array: ";
	cin >> n;
	
	ptrarray = new int[n];
	for (int i = 0; i < n; i++)
	{
		ptrarray[i] = pow(2, i);
		cout << ptrarray[i] << " ";
	}
	delete[] ptrarray; 
	cout << std::endl;


	return 0;
}
