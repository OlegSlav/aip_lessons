// task91.cpp : Задание 1, задача 6.
//Составить алгоритм, подсчитывающий количество слов в тексте.
#include <string>
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::string text;
    int sum = 0;
    std::getline(std::cin,text);
    for (int i = 0; i < text.length();i++) {
        if (text[i + 1] == ' ' || text[i + 1] == '\0')
            sum += 1;
    }
    std::cout << std::endl << std::endl;
    std::cout << sum << std::endl;

    return 0;
}
