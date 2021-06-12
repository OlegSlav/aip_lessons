// task95.cpp : Задание 5, задача 19.
//В данной строке вставить после каждого символа 'a' символ 'b'.

#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello World!\n";
    std::string text;
    std::getline(std::cin, text);
    std::string word = "b";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'a') {
            text = text.insert(i+1, word);
        }
    }
    std::cout << std::endl << std::endl << text;

    return 0;
}
