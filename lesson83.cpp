// lesson83.cpp : Задание 3, задача 8. Дана матрица. Элементы первой строки — мощность электромотора,
//второй строки — категория мотора(число от 1 до 3).Найти самый мощный мотор категории 3.

#include <fstream>
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    const int nlines = 2;
    const int ncol = 4;
    int juk[nlines][ncol] = 
    {23,34,56,75,
    1, 2, 3, 3};

    int i, j;
    for (i = 0;i < nlines;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << juk[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    int max = 0;
    for (i = 0;i < nlines;i++) {
        for (j = 0;j < ncol;j++) {
            if (juk[i + 1][j] == 3)
                max = juk[i][j];
        }
    }
    std::cout << "Max 3'd category motor's power = " << max << std::endl;

    return 0;
}

