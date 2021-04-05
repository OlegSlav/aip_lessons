// task44.cpp :Задание 5, задача 10 
//Составить алгоритм (возможно, не самый оптимальный), находящий три
//натуральных числа X, Y, Z, удовлетворяющих условию : 15x + 20y + 30z = 270

#include <iostream>

int main()
{   
    int x = rand() % 5 + 1;
    int y = rand() % 5 + 1;
    int z = (270 - 15 * x - 20 * y) / 30;
    std::cout << "Z =" << z << "\nX=" << x << "\nY=" << y;

    std::getchar();
    std::getchar();
    return 0;
}