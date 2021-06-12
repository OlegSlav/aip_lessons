// task96.cpp : Задание 6, задача 15.
//Дана строка. Если ее длина больше 10, то оставить в строке только первые 6
//символов, иначе дополнить строку символами 'o' до длины 12.

#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello World!\n";
    std::string text;
    std::getline(std::cin, text);
    std::string litter = "o";
    if (text.length() > 10) {
        text.erase(6, 100);
    }
    else
        while (text.length() < 13)
            text += litter;

    std::cout << std::endl << std::endl << text;

    return 0;
}
