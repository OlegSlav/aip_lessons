// task77.cpp : Задание 7.1, задача 16 пункт a.
//Багаж пассажира характеризуется количеством вещей и общим весом.
//Ввести информацию об N пассажирах и определить есть ли среди пассажиров
//такой, у которого самый большой багаж по числу и по весу.

#include <iostream>
struct Bag {
    int clothes;
    int weight;
};
void RandNums(Bag* a, int n);

int main()
{
    std::cout << "Hello World!\n";
    const int n = 10;
    Bag homosap[n];
    RandNums(homosap, n);
    int MaxClothes = 0;
    int MaxWeight = 0;
    int YesNo = 0;
    for (int i = 0; i < n;i++) {
        if (homosap[i].clothes > MaxClothes)
            MaxClothes = homosap[i].clothes;
        if (homosap[i].weight > MaxWeight)
            MaxWeight = homosap[i].weight;
        }
    for (int i = 0; i < n;i++) {
        if ((homosap[i].clothes >= MaxClothes) && (homosap[i].weight >= MaxWeight)) {
            std::cout << "Yes, his number is - " << i << std::endl;
            YesNo += 1;
        }
    }
    if (YesNo == 0)
        std::cout << "No, there is no such person" << std::endl;
}

void RandNums(Bag* a, int n) {
    srand(6);
    for (int i = 0; i < n;i++) {
        a[i].clothes = rand() % 15;
        a[i].weight = rand() % 15 + 10;
    }
}
