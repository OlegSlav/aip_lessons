// lesson 15.cpp : Задание 5, Задача 9F. Сделать конвертер величин Формат ввода: Направление_Перевода Величина.
//Давление (паскаль, бар, фунт на квадратный дюйм)
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>

void Filewrite(float start);

int main()
{
    int f = 0;
    while (f < 1000)
        {
            int L;
            float start;
            std::cout << "Input number of wanted operation\t\n!Pasc->Bar  '1'!!Bar  ->Pasc'2'!\t" << std::endl
                << "!Pasc->Funtd'3'!!Funtd->Pasc'4'!\t\n!Bar ->Funtd'5'!!FuntD->Bar '6'!\t" << std::endl
                << "Input '7' to exit proramm" << std::endl;
            std::cin >> L;
            switch (L) {
            case 1:
                std::cout << "Enter start units:";
                std::cin >> start;
                start *= 0.00001;
                std::cout << "\nNew units:" << start << std::endl << std::endl;
                Filewrite(start);
                break;
            case 2:
                std::cout << "Enter start units:";
                std::cin >> start;
                start *= 100000;
                std::cout << "\nNew units:" << start << std::endl << std::endl;
                Filewrite(start);
                break;
            case 3:
                std::cout << "Enter start units:";
                std::cin >> start;
                start *= 0.000145;
                std::cout << "\nNew units:" << start << std::endl << std::endl;
                Filewrite(start);
                break;
            case 4:
                std::cout << "Enter start units:";
                std::cin >> start;
                start *= 6894.76;
                std::cout << "\nNew units:" << start << std::endl << std::endl;
                Filewrite(start);
                break;
            case 5:
                std::cout << "Enter start units:";
                std::cin >> start;
                start *= 14.5038;
                std::cout << "\nNew units:" << start << std::endl << std::endl;
                Filewrite(start);
                break;
            case 6:
                std::cout << "Enter start units:";
                std::cin >> start;
                start *= 0.068947;
                std::cout << "\nNew units:" << start << std::endl << std::endl;
                Filewrite(start);
                break;
            case 7:
                return 0;
            default:
                std::cout << "There is no way\nTry better luck\n";
                std::ofstream inFile;
                inFile.open("Answer5.txt");
                inFile << "There is no way\nTry better luck\n";
                inFile.close();
                break;
            }
        }

    return 0;

}

void Filewrite(float start) {
    std::ofstream inFile;
    inFile.open("Answer5.txt");
    inFile << "\nNew units:" << start << std::endl << std::endl;
    inFile.close();
}