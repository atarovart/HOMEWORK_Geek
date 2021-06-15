#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void file_1()
{
	string a;
	cout << "Enter filename #1: ";
	cin >> a;
	a += ".txt";
	ofstream fout(a);
	fout << "All the world’s a stage, and all the men and women merely players." << endl << "They have their exits and their entrances;" << endl << "And one man in his time plays many parts." << endl;
}

void file_2()
{
	string b;
	cout << "Enter filename #2: ";
	cin >> b;
	b += ".txt";
	ofstream fout(b);
	fout << "Love looks not with the eyes, but with the mind; and therefore is winged Cupid painted blind" << endl;
}


int main()
{
	file_1();
	file_2();
	
	return 0;
}
