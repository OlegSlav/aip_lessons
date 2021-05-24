// lesson86.cpp : Задание 6, задача 6. Дана матрица. Составить массив, 
//каждый элемент строки которого равен максимальному элементу соответствующей строки матрица.

#include <iostream>

int main()
{
    const int nline = 3;
    const int ncol = 3;
    int Acce[nline][ncol] =
    { 3,5,8,
    0,6,1,
    7,4,9 };
    int Berre[nline][ncol];
    int i, j;
    for (i = 0;i < nline;i++) {
        int max = 0;
        for (j = 0;j < ncol;j++) {
            if (Acce[i][j] > max)
                max = Acce[i][j];
        }
        for(j=0;j<ncol;j++)
            Berre[i][j] = max;
    }

    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << Berre[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
