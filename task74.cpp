// task74.cpp : Задание 4, задача 11. 
//Вывести элементы массива, меньших среднего арифметического

#include <iostream>
void RandNums(int* a, int n);

int main()
{
    const int n = 10;
    int nums[n];
    RandNums(nums, n);
    std::cout << "Hello World!\n";
    int avg = 0;
    for (int i = 0; i < n; i++) {
        avg += nums[i];
    }
    avg /= n;
    for (int i = 0;i < n;i++) {
        if (nums[i] < avg)
            std::cout << nums[i] << "," << std::endl;
    }
}


void RandNums(int* a, int n) {
    srand(5);
    for (int i = 0; i < n;i++) {
        a[i] = rand() % 100;
    }
}
