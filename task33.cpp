// lesson33.cpp : Задание 3, задача 1-I
//y = 2x^2 - 3, если x > 7
//y = 0, если x = 7
//y = 2 * | x | +3, если x < 7

#define USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>

void Filewrite(float y);

int main()
{   
    setlocale(LC_ALL, "Russian");
    std::cout << "Ведите x:\n";
    float x, y;
    std::cin >> x;
    if (x > 7) {
        y = 2 * pow(x, 2) - 3;
    }
    else {
        if (x < 7) {
            y = 2 * abs(x) + 3;
        }
        else {
            y = 0;
        }
    }
    std::cout << "y=" << y << std::endl;
    Filewrite(y);
    std::getchar();
    std::getchar();
    return 0;
}

void Filewrite(float y){
    std::ofstream inFile;
    inFile.open("Answer33.txt");
    inFile << "y=" << y << std::endl;
    inFile.close();
}
