// task64.cpp : Задание 4, задача 8.
//Имеется информация о датчиках: диапазон измеряемых значений (min, max),
//погрешность, максимальная скорость.Вывести данные о датчике с наибольшим
//диапазоном значений
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
struct Sensor{
    float rangemin, rangemax, error, maxspeed;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Sensor Garry = { 1, 5, 20, 15 };
    Sensor Oleg = { 1, 8, 40, 15 };
    if ((Garry.rangemin <= Oleg.rangemin) && (Garry.rangemax >= Oleg.rangemax)) {
        std::cout << "Garry has the biggest range:\n";
        std::cout << Garry.rangemin << " m\n";
        std::cout << Garry.rangemax << " m\n";
        std::cout << Garry.error << " %\n";
        std::cout << Garry.maxspeed << " ms\n";
    }
    else {
        std::cout << "Oleg has the biggest range:\n";
        std::cout << Oleg.rangemin << " m\n";
        std::cout << Oleg.rangemax << " m\n";
        std::cout << Oleg.error << " %\n";
        std::cout << Oleg.maxspeed << " ms\n";
    }
    std::getchar();
    std::getchar();
    return 0;
}

