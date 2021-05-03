// task63.cpp : Задание 3, задача 3.
//Имеется информация о роботах: габариты, вес, максимальная скорость. 
//Вывести данные о самом маленьком роботе
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
struct Robot {
    float volume, weight, maxspeed;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Robot Garry = { 4, 5, 30 };
    Robot Oleg = { 10, 20, 50 };
    if (Garry.volume > Oleg.volume) {
        std::cout << "Oleg is the smallest robot, his statistics:\n";
        std::cout << Oleg.volume << "m^3\n";
        std::cout << Oleg.weight << "kg\n";
        std::cout << Oleg.maxspeed << "km/h\n";
    }
    else {
        std::cout << "Garry is the smallest robot, his statistics:\n";
        std::cout << Garry.volume << " m^3\n";
        std::cout << Garry.weight << " kg\n";
        std::cout << Garry.maxspeed << " km/h\n";
    }
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
