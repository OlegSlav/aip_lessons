// lesson81.cpp : Задание 1, задача 3.
//В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной диагонали.
#include <fstream>
#include <iostream>

void inFile();
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
    int sum = 0;
    int fuf[nlines][ncol];
    FillNums(nlines, fuf);

    for (int i = 0; i < nlines; i++) {
        for (int j = 0; j < ncol; j++)
            std::cout << fuf[i][j] << "\t";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < nlines; i++) {
        if (fuf[i][i] < 0)
            sum += fuf[i][i];
    }
    std::cout << "Sum = " << sum << std::endl;
    std::ofstream inFile;
    inFile.open("Answer.txt");
    inFile << "Sum = " << sum << std::endl;
    inFile.close();

    return 0;
}

