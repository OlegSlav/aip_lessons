// task93.cpp : Задание 3, задача 2.
//Составить алгоритм, находящий, сколько раз в тексте сочетание “мир”(peace) является
//отдельным словом(пробелы перед и после).

#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello World!\n";
    std::string text;
    std::getline(std::cin, text);
    std::string word = " peace ";
    std::string word1 = "peace";
    int sum = 0;
    if (word1 == text.substr(0, 6)) {
        sum += 1;
    }
    for (int i = 0; i < text.length(); i++) {
        if (word == text.substr(i,7)) {
            sum += 1;
        }
    }
    std::cout << std::endl << std::endl << sum;

    return 0;
}

