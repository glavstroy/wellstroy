#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Метод, считающий периметр прямоугольника
* \param a первая сторона
* \param b вторая сторона
* \return значение периметра
**/
double calcPerimeter(double const a, double const b);

/**
* \brief Метод, считающий площадь прямоугольника
* \param a первая сторона
* \param b вторая сторона
* \return значение площади
**/
double calcArea(double const a, double const b);

/**
* \brief Метод, считающий диагональ прямоугольника
* \param a первая сторона
* \param b вторая сторона
* \param с искомая диагональ
* \return значение диагонали
**/
double calcdiagonal(double const a, double const b);

/**
 * \brief Пользовательский выбор расчета или периметра прямоугольника (0),
 * или площади прямоугольника (1) или диагонали (2)
 */
enum class ActionChoice { volume, surface, diago };

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

    cout << "Введите действие над прямоугольником (периметр прямоугольника = 0, площадь прямоугольника = 1, диагональ прямоугольника = 2) ";
    int input;
    cin >> input;

    const auto choice = static_cast<ActionChoice>(input);

    switch (choice)
    {
    case ActionChoice::volume:
    {
        const auto volume = calcPerimeter(a , b);
        cout << "Периметр = " << volume;
        break;
    }
    case ActionChoice::surface:
    {
        const auto surfaceArea = calcArea(a , b);
        cout << "Площадь = " << surfaceArea;
        break;
    }
    case ActionChoice::diago:
    {
        const auto diago = calcdiagonal(a , b);
        cout << "Диагональ = " << diago;
        break;
    }
    }
    cout << endl;
    return 0;
}

double calcPerimeter(double const a, double const b)
{
	return (a + b) * 2;
}

double calcArea(double const a, double const b)
{
	return a * b;
}

double calcdiagonal(double const a, double const b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}