// task62.cpp : Задание 2, задача 2b.
//Напишите функцию, которая будет возвращать комплексно-сопряжённое число
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
struct ComplexNumbs {
    float a, b;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    ComplexNumbs Ze;
    std::cout << "Введите последовательно действительную часть комплексного числа, затем мнимую:\n";
    std::cin >> Ze.a >> Ze.b;
    if (Ze.b >= 0) {
        std::cout << "Z=" << Ze.a << " + j*" << Ze.b << std::endl;
    }
    else {
        std::cout << "Z=" << Ze.a << " - j*" << 0-Ze.b << std::endl;
    }
    if (Ze.b >= 0) {
        std::cout << "Комплексно сопряженное _Z=" << Ze.a << " - j*" << Ze.b << std::endl;
    }
    else {
        std::cout << "Комплексно сопряженное _Z=" << Ze.a << " + j*" << 0-Ze.b << std::endl;
    }
    std::getchar();
    std::getchar();
    return 0;
}
