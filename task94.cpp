// task94.cpp : Задание 4, задача 13.
//Составить алгоритм, исключающий все слова “плохо” из текста.

#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello World!\n";
    std::string text;
    std::getline(std::cin, text);
    std::string word = "badly";
    for (int i = 0; i < text.length(); i++) {
        if (word == text.substr(i, 5)) {
            text.erase(i, 5);
        }
    }
    std::cout << std::endl << std::endl << text;

    return 0;
}
