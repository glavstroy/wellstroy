#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Математическая функция, рассчитывающая значение a
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double z - константа, имеющая тип данных с плавающей точкой двойной точности
* \return значение a
**/
double GetA(const double x, const double y, const double z);

/**
* \brief Математическая функция, рассчитывающая значение b
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double z - константа, имеющая тип данных с плавающей точкой двойной точности
* \return значение b
**/
double GetB(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main() {
	const double x = -2.9;
	const double y = 15.5;
	const double z = 1.5;
	const auto a = GetA(x, y, z);
	const auto b = GetB(x, y, z);
	cout << " x = " << x << "\n y = " << y << "\n z = " << z << "\n a = " << a << "\n b = " << b;
	return 0;
}

double GetA(const double x, const double y, const double z) {
	return sqrt(pow(x, 2) + y) - pow(y, 2) * pow(sin((x + z) / x), 3);
}

double GetB(const double x, const double y, const double z) {
	return pow(cos(pow(x, 3)), 2) - x / sqrt(pow(z, 2) + pow(y, 2));
}