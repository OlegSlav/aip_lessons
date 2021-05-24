// lesson82.cpp : Задание 2, задача 5. В квадратной матрице для каждой строки найти 
//минимальный элемент и переставить его с элементом, стоящим в этой строке на главной диагонали.

#include <fstream>
#include <iostream>

void FillNums(int nlines, int a[][8]) {
    srand(0);
    int i, j;
    for (i = 0; i < nlines;i++) {
        for (j = 0; j < 8;j++) {
            a[i][j] = rand() % 10 - 5;
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";
    const int nlines = 8;
    const int ncol = 8;
    int juk[nlines][ncol];
    FillNums(8, juk);

    int i, j;
    for (i = 0;i < nlines;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << juk[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (i = 0;i < nlines;i++) {
        int min = 9999;
        for (j = 0;j < ncol;j++) {
            if (juk[i][j] < min)
                min = juk[i][j];
        }
        juk[i][i] = min;
    }
    //answer check
    for (i = 0;i < nlines;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << juk[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}

