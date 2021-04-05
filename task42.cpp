// task42.cpp :Задание 2, задача 2f
//Протабулировать функцию (шаг и диапазон задаёт пользователь):
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{   
    setlocale(LC_ALL, "Russian");
    float step, x1, xn, f;
    std::cout << "Введите шаг:";
    std::cin >> step;
    std::cout << "Введите диапазон, от - до:";
    std::cin >> x1 >> xn;
    std::cout << "\t x\t\ty\n";
    while (x1 <= xn) {
        f = pow(-(1 + 3 * x1) / 2, 1/2) + 3 * x1;
        std::cout << "\t"   << x1
                  << "\t\t" << f
                  << std::endl;
        x1 += step;
    }

    std::getchar();
    std::getchar();
    return 0;
}

