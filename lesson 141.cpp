//lesson 141. Задание 4, Задача 8F. Вычислить значение выражения.
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{
	float a, b, x, L;
	a = 0.1;
	b = 0.2;
	x = 1;
	L = sqrt(x * x + b) - (b * b * sin(x + a) * sin(x + a) * sin(x + a)) / x;
	std::cout << "The L=" << L << std::endl;
	std::getchar();
	std::getchar();

	return 0;
}