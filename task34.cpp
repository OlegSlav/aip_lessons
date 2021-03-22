// lesson34.cpp :Задание 4, задача 2е.
//Напишите программу, которая принимает от пользователя координаты точки и
//определяет, попала ли точка в заштрихованную область.

#define USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите x и y:\n";
    float x, y;
    std::cin >> x >> y;
    if ((sqrt(x * x + y * y) <= 1) && ((y >= -x) || ((y <= -x) && (x >= 0)))) {
        std::cout << " Yeah, got it!";
    }
    else {
        std::cout << "Nope";
    };
    std::getchar();
    std::getchar();
    return 0;

}

