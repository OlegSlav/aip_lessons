// task76.cpp : Задание 6, задача 14b.
//Создать новый массив из двух других массивов путём вычитания.

#include <iostream>
void RandNums(int* a, int n);

int main()
{
    std::cout << "Hello World!\n";
    const int n = 10;
    int nums1[n];
    int nums2[n];
    int nums12[n];
    RandNums(nums1, n);
    RandNums(nums2, n);
    for (int i = 0;i < n;i++) {
        nums2[i] += 2;         //чтобы отличался от nums1

        nums12[i] = nums2[i] - nums1[i];
        std::cout << nums12[i] << "," << std::endl;
    }

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
