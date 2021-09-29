#include <iostream>
#include <cmath>
using namespace std;

class Power
{
public:
	void setPower(int a, int b)
	{
		m_a = a;
		m_b = b;
		m_c = pow(a, b);
	}
	int calculate()
	{
		cout << m_c << endl;
		return m_c;
	}

private:
	int m_a;
	int m_b;
	int m_c;
};

int main()
{
	Power power;
	power.setPower(4, 3);
	power.calculate();
	return 0;
}
