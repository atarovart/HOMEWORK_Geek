#include <iostream>

using namespace std;
int main()
{
    //char array[3][3] = { { empty, empty, empty },
                      //   { empty, empty, empty },
                         //{ empty, empty, empty } };
    //так выглядит массив данных.

    const int I = 30 % 27;

    cout << I << endl;

    const int K = (I > 1000) ? 10 : -20;

    cout << K << endl;
    
    char name[] = "artur";
    cout << name << endl;


    //Задание 1
    const int a = 32, b = 100;
    float c = static_cast <float> (b)/a;   //Тип переменной можно изменить, даже если мы инициализируем ее как константную? Или константность относится только к значению переменной?
    cout << c << endl;

    //Задание 2
    int C = 41;
    C = (C <= 21) ? (C - 21) : ((C - 21) * 2);
    cout << C << endl;

    //Задание 3
    int Massive[3][3][3];
    int* pMas = nullptr;
    pMas = & Massive[1][1][1];
    
    *pMas = 23;
    cout << *pMas << endl;
    cout << Massive[1][1][1] << endl;
//Немного опоздал, но очень старался( Надеюсь на пятерку...
    return 0;
}
