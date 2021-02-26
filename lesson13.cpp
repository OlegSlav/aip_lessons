// lesson13.cpp 
//Задание 3. Задача №4. Пользователь вводит два числа. Необходимо поменять значения переменных так,
//чтобы значение первой оказалось во второй, а второй - в первой.
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{
    double a, c, ac;
    std::cout << "Enter two values of variables:\n";
    std::cout << "a=";
    std::cin >> a;
    std::cout << "c=";
    std::cin >> c;
    ac = a;
    a = c;
    c = ac;
    std::cout << "a=" << a << "\nc=" << c << std::endl;
    std::getchar();
    std::getchar();

    return 0;
}
