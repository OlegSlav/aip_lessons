//Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
//на экран матрицу, описывающую следующие сущности.
// lesson84.cpp : Задание 4, задача 9b. Состояние робота на шахматной доске. 
//Робот характеризуется уровнем заряда, скоростью движения.

#include <fstream>
#include <iostream>
struct Robo {
    float chargelvl, momentspeed;
};
//проверил на меньшем поле(2x2), работает.
int main()
{
    const int nlines = 8;
    const int ncol = 8;
    Robo juk[nlines][ncol];

    int i, j;
    for (i = 0;i < nlines;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << "Charge level[" << i << "][" << j << "] = ";
            std::cin >> juk[i][j].chargelvl;
            std::cout << "Moment speed[" << i << "][" << j << "] = ";
            std::cin >> juk[i][j].momentspeed;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "Robo statisics on a chess board:" << std::endl;

    for (i = 0;i < nlines;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << juk[i][j].chargelvl << "," << juk[i][j].momentspeed << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}

