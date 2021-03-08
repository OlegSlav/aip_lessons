// lesson13.cpp 
//Задание 3. Задача №4. Пользователь вводит два числа. Необходимо поменять значения переменных так,
//чтобы значение первой оказалось во второй, а второй - в первой.
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>

void Filewrite(float a, float c);

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
    Filewrite(a,c);
    std::getchar();
    std::getchar();

    return 0;
}

void Filewrite(float a, float c) {
    std::ofstream inFile;
    inFile.open("Answer3.txt");
    inFile << "a=" << a << "\nc=" << c << std::endl;
    inFile.close();
}
