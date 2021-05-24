// lesson85.cpp : Задание 5, задача 10.
//Реализовать сложение, вычитание, умножение, транспонирование матриц
//(разрешается фиксированный размер матриц).

#include <iostream>

int main()
{
    const int nline = 3;
    const int ncol = 3;
    int Acce[nline][ncol] =
    { 22, 0, 23,
    53, -15, 20,
    -4, 0, 10 };
    int Berre[nline][ncol] =
    { 10, 20, -4,
    15, -30, 14,
    5, 0, 3 };
    int Result[nline][ncol];
    //сложение
    int i, j;
    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            Result[i][j] = Acce[i][j] + Berre[i][j];
        }
    }
    //вычитание
    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            Result[i][j] = Acce[i][j] - Berre[i][j];
        }
    }
    //умножение
    if(ncol == nline)
    for (int t = 0;t < nline;t++) {
        i = 0;j = 0;
        Result[t][j] = Acce[t][j] * Berre[i][j] + Acce[t][j + 1] * Berre[i + 1][j] + Acce[t][j + 2] * Berre[i + 2][j];
        Result[t][j+1] = Acce[t][j] * Berre[i][j + 1] + Acce[t][j + 1] * Berre[i + 1][j + 1] + Acce[t][j + 2] * Berre[i + 2][j + 1];
        Result[t][j+2] = Acce[t][j] * Berre[i][j + 2] + Acce[t][j + 1] * Berre[i + 1][j + 2] + Acce[t][j + 2] * Berre[i + 2][j + 2];
    }
    //результат умножения, новая тарица; проверено.
    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << Result[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    //транспонирование матрицы Acce
    Result[0][1] = Acce[1][0]; Result[0][2] = Acce[2][0]; Result[1][2] = Acce[2][1];
    Result[1][0] = Acce[0][1]; Result[2][0] = Acce[0][2]; Result[2][1] = Acce[1][2];
    Result[0][0] = Acce[0][0]; Result[1][1] = Acce[1][1]; Result[2][2] = Acce[2][2];
    std::cout << "Acce:" << std::endl;
    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << Acce[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "Result:" << std::endl;
    for (i = 0;i < nline;i++) {
        for (j = 0;j < ncol;j++) {
            std::cout << Result[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}

