// lesson87.cpp : Задание 7, задача 1. Преобразовать матрицу: элементы строки, 
//в которой находится минимальный элемент матрицы, заменить нулями.

#include <iostream>

int main()
{
    const int nline = 3;
    const int ncol = 3;
    int Acce[nline][ncol] =
    { 3,5,8,
    0,6,1,
    7,4,9 };
    int i, j, tf;
    int min = 10000;
    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            if (Acce[i][j] < min) {
                min = Acce[i][j];
                tf = i;
            }
        }
    }
    for (i = tf; i == tf; i++) {
        for (j = 0;j < ncol;j++)
            Acce[i][j] = 0;
    }

    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << Acce[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

