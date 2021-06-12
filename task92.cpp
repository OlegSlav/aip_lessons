// task92.cpp : Задание 2, задача 10.
//Удалить из строки первые буквы слов. (Пример. Входная строка: Crystal Method. Результат: rystal ethod).

#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!\n";
    std::string text;
    std::getline(std::cin, text);
    if (text[0] != ' ') {
        text.erase(0, 1);
    }
    for (int i = 0; i < text.length(); i++) {
        if ((text[i] == ' ') & (text[i + 1] != ' ')) {
            text.erase(i + 1, 1);
        }
    }
    std::cout << std::endl << std::endl << text << std::endl;

    return 0;
}

