// lesson 51.cpp : Задание 5, Задача 9F. Сделать конвертер величин Формат ввода: Направление_Перевода Величина.
//Давление (паскаль, бар, фунт на квадратный дюйм)
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>

void exChange(float multiplier);

int main()
{
    int f = 0;
    while (f < 1000)
    {
        int L;
        std::cout << "Input number of wanted operation\t\n!Pasc->Bar  '1'!!Bar  ->Pasc'2'!\t" << std::endl
            << "!Pasc->Funtd'3'!!Funtd->Pasc'4'!\t\n!Bar ->Funtd'5'!!FuntD->Bar '6'!\t" << std::endl
            << "Input '7' to exit programm" << std::endl;
        std::cin >> L;
        switch (L) {
        case 1:
            exChange(0.00001);
            break;
        case 2:
            exChange(100000);
            break;
        case 3:
            exChange(0.000145);
           break;
        case 4:
            exChange(6894.76);
            break;
        case 5:
            exChange(14.5038);
            break;
        case 6:
            exChange(0.068947);
            break;
        case 7:
            return 0;
        default:
            std::cout << "There is no way\nTry better luck\n";
            break;
        }
    }

    return 0;

}

void exChange(float multiplier) {
    float start;
    std::cout << "Enter start units:";
    std::cin >> start;
    start *= multiplier;
    std::cout << "\nNew units:" << start << std::endl << std::endl;
}