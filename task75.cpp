// task75.cpp : Задание 5, задача 5.
//Найти наибольший/наименьший элемент массива и его номер по порядку

#include <iostream>
void RandNums(int* a, int n);

int main()
{
    std::cout << "Hello World!\n";
    const int n = 10;
    int nums[n];
    RandNums(nums, n);
    int max = 0;
    int min = 101;
    int NumberMax = 0;
    int NumberMin = 0;
    for (int i = 0; i < n;i++) {
        if (nums[i] > max) {
            max = nums[i];
            NumberMax = i;
        }
        if (nums[i] < min) {
            min = nums[i];
            NumberMin = i;
        }
    }
    std::cout << "nums[n].Max - " << max << " n = " << NumberMax << std::endl;
    std::cout << "nums[n].Min - " << min << " n = " << NumberMin << std::endl;

    std::getchar();
    std::getchar();
    return 0;
}

void RandNums(int* a, int n) {
    srand(5);
    for (int i = 0; i < n;i++) {
        a[i] = rand() % 100;
    }
}
