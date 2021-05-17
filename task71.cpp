// task71.cpp : Задание 1, задача 1.b Сгенерировать массив со случайными числами в диапазоне:
//[10,20]

#include <iostream>
#include <fstream>
void RandNums(int *a, int n);
void Filewrite(int *a, int n);

int main()
{
    std::cout << "Hello World!\n";
    const int n = 10;
    int nums[n];
    RandNums(nums,10);
    for (int i = 0; i < n;i++) {
        std::cout << nums[i] << "," << std::endl;
    }
    Filewrite(nums, 10);

    std::getchar();
    std::getchar();
    return 0;
}

void RandNums(int *a, int n) {
    srand(2);
    for (int i = 0; i < n;i++) {
        a[i] = rand() % 10 + 10;
    }
}

void Filewrite(int *a, int n) {
    std::ofstream inFile;
    inFile.open("Answer.txt");
    for (int i = 0; i < n;i++) {
        inFile << a[i] << "," << std::endl;
    }
    inFile.close();
}