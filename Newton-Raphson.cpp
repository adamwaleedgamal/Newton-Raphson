#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x)
{
	return x + sin(x) - 1;
}

double f_prime(double x)
{
	return 1 + cos(x);
}

int main()
{
	double inti_value = 0.01;
	double error_rate = 0.05;
	double final_value = 0.01;

	for (int i = 0;i < 10;i++)
	{
		double f1 = f(inti_value);
		double f2 = f_prime(inti_value);

		inti_value = inti_value - f1 / f2;
		final_value = inti_value;
	}
	cout << fixed << setprecision(6) << "Final value is : "<< final_value << endl;
	return 0;
}
