// task45.cpp :Задание 6, задача 3f
//Пользователь задаёт число Ч и Х. Посчитать y:

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    float x;
    float y = 0;
    int end;
    std::cout << "Введите Ч и х:";
    std::cin >> end >> x;
    for (int f = 1; f <= end; f++) {
        if (f % 2 == 1) {
            y += f * x;
        }
        else {
            y -= f * x;
        }
    }
    std::cout << "y=" << y;

    std::getchar();
    std::getchar();
    return 0;
}