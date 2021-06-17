#include <iostream>

namespace myspace
{
	void printarray(float pull[], int size)
	{
		for (int i = 0; i < size; i++)
			std::cout << pull[i] << " ";
	}
}