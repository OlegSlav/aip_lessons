// task73.cpp : Задание 3, задача 12. 
//Увеличить все нечётные элементы массива на 3, а чётные в 2 раза

#include <fstream>
#include <iostream>
void Filewrite(int* a,int n);
void RandNums(int* a, int n);

int main()
{   
    std::cout << "Hello World!\n";
    const int n = 10;
    int nums[n];
    RandNums(nums, n);
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 1) {
            nums[i] += 3;
        }
        else {
            nums[i] *= 2;
        }
    }
    Filewrite(nums, n);

    std::getchar();
    std::getchar();
    return 0;
}

void Filewrite(int* a,int n) {
    std::ofstream inFile;
    inFile.open("Answer.txt");
    for (int i = 0;i < n;i++) {
        inFile << a[i] << "," << std::endl;
    }
    inFile.close();
}
void RandNums(int* a, int n) {
    srand(5);
    for (int i = 0; i < n;i++) {
        a[i] = rand() % 100;
    }
}
