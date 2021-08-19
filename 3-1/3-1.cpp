#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/**
* \brief Расчёт функции
* \param x - аргумент функции
* \return значение функции
**/
double calcFunction(const double x);

/**
* \brief Точка входа в программу
* \return Код ошибки (0-успех)
**/
int main()
{
	const double LOW_BOUND = 1.0, UP_BOUND = 2.0, STEP = 0.1;

	cout << setw(3) << "X" << " | " << setw(3) << "Y\n";

	for (double x = LOW_BOUND; x < UP_BOUND; x += STEP)
	{
		cout << setw(3) << x << " | " << setw(3) << calcFunction(x) << "\n";
	}

	return 0;
}

double calcFunction(const double x)
{
	return cos(2 / x) - 2 * sin(1 / x) + 1 / x;
}