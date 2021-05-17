// task72.cpp : Задание 2, задача 2а. Вычислить сумму элементов массива:
//больших 5, меньших 7, больших 3,

#include <iostream>
#include <fstream>
void RandNums(int* a, int n);

int main()
{
    std::cout << "Hello World!\n";
    const int n = 10;
    int nums[n];
    RandNums(nums, n);
    int count5 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 5)
            count5 += nums[i];
    }
    int count7 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] < 7)
            count7 += nums[i];
    }
    int count3 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 3)
            count3 += nums[i];
    }
    std::ofstream inFile;
    inFile.open("Answer.txt");
    inFile << count5 << std::endl;
    inFile << count7 << std::endl;
    inFile << count3 << std::endl;
    inFile.close();

    std::getchar();
    std::getchar();
    return 0;
}

void RandNums(int* a, int n) {
    srand(2);
    for (int i = 0; i < n;i++) {
        a[i] = rand() % 10;
    }
}

