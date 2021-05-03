// task65.cpp : Задание 5, задача 11.
//Робот-автомобиль описывается как структура с полями: скорость, 
//длительность движения и номер.Напишите функцию для расчёта пройденного расстояния.

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
struct Robocar {
    int number;
    float avgspeed, time;
};
float Distance (Robocar a);

int main()
{   setlocale(LC_ALL, "Russian");
    Robocar Oleg = { 1, 5, 10};

    std::cout << "Distance is:\n" << Distance(Oleg) << " meters";
    std::getchar();
    std::getchar();
    return 0;
}

float Distance(Robocar a) {
    return (a.avgspeed*a.time);
}