// task79.cpp : Задание 7.3, задача 16 пункт с.
//Ввести информацию об N пассажирах и определить есть ли среди пассажиров
//такой, у которого самый маленький багаж по числу и по весу.

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
    int MinClothes = 100;
    int MinWeight = 100;
    int YesNo = 0;
    for (int i = 0; i < n;i++) {
        if (homosap[i].clothes < MinClothes)
            MinClothes = homosap[i].clothes;
        if (homosap[i].weight < MinWeight)
            MinWeight = homosap[i].weight;
    }
    for (int i = 0; i < n;i++) {
        if ((homosap[i].clothes <= MinClothes) && (homosap[i].weight <= MinWeight)) {
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
