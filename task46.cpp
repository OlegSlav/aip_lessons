// task46.cpp :Задание 6, задача 3j
//Пользователь задаёт число Ч и Х. Посчитать y:

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите Ч и х:";
    int end;
    float x;
    std::cin >> end >> x;
    float y = x;
    for (int f = 2; f <= end; f++) {
        y += pow(x, f) / (f + 1);
    }
    std::cout << "y=" << y;

    std::getchar();
    std::getchar();
    return 0;
}