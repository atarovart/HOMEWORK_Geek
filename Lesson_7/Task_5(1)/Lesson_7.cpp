#include <iostream>
#include "Mylib.h"

using namespace std;
int main()
{
	const int size = 5;
	float pull[size] = { -2, -1, 0, 1, 2 };
	myspace::printarray(pull, size); 
	return 0;
}