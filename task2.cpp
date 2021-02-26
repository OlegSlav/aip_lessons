// lesson12.cpp 
//Задание 2. Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:f. Салинон

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{   
    float r1, r2;
    std::cout << "Please enter values of radiuses r1 and r2\nto find Square and Perimeter of Salinon:";
    std::cin >> r1 >> r2;
    float S = .25 * M_PI * (r1 + r2) * (r1 + r2);
    float P = .5 * S;          //не нашел формулу
    std::cout << "The Square is:" << S << "\nThe Perimeter is:" << P << std::endl;
    std::getchar();
    std::getchar();

    return 0;
}
