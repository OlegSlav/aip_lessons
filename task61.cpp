// task61.cpp :Задание 1.
//FROM :: lesson32.cpp :Задание 2, задача 1F
//Дана функция graph.y=f(x). Найти значение функции по x:
//graph.y = 2x^2 + 10, если x > 5
//graph.y = 0, если x = 0
//graph.y = 2 * | x + 6 | -x^2, если x < 5

#define USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>
struct Points {
    float x, y;
};

void Filewrite(Points a);

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите x:\n";
    Points graph;
    std::cin >> graph.x;
    if (graph.x > 5) {
        graph.y = 2 * pow(graph.x, 2 / 1) + 10;
    }
    else {
        if ((graph.x < 5) && (graph.x != 0)) {
            graph.y = 2 * abs(graph.x + 6) - pow(graph.x, 2 / 1);
        }
        else {
            if (graph.x == 0) {
                graph.y = 0;
            }
        }
    }
    std::cout << "y=" << graph.y;
    Filewrite(graph);

    std::getchar();
    std::getchar();
    return 0;
}

void Filewrite(Points a) {
    std::ofstream inFile;
    inFile.open("Answer32.txt");
    inFile << "The y=" << a.y << std::endl;
    inFile.close();
}