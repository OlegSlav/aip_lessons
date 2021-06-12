// task97.cpp : Задание 7, задача 23.Составить программу-тест: на экране по очереди появляются вопросы
//и варианты ответов.В конце работы программа выдает количество заработанных баллов по
//результатам ответа.(минимум 5 вопросов)

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Greetings traveller!\n";
    std::cout << "In here, we are asking the questions!!(slaps your face)\n";
    int points = 0;
    int Answer;
    std::string quest;
    std::ifstream File;
    File.open("C:\\VSprojects\\task97\\Questions.txt");
    if (File.is_open()) {
        getline(File, quest);
        std::cout << quest << std::endl;
        getline(File, quest);
        std::cout << quest << std::endl;
        std::cin >> Answer;
            if (Answer == 1)
                points += 1;
        getline(File, quest);
        std::cout << quest << std::endl;
        getline(File, quest);
        std::cout << quest << std::endl;
        std::cin >> Answer;
            if (Answer == 3)
                points += 1;
        getline(File, quest);
        std::cout << quest << std::endl;
        getline(File, quest);
        std::cout << quest << std::endl;
        std::cin >> Answer;
            if (Answer == 3)
                points += 1;
        getline(File, quest);
        std::cout << quest << std::endl;
        getline(File, quest);
        std::cout << quest << std::endl;
        std::cin >> Answer;
            if (Answer == 1)
                points += 1;
        getline(File, quest);
        std::cout << quest << std::endl;
        getline(File, quest);
        std::cout << quest << std::endl;
        std::cin >> Answer;
            if (Answer == 3)
                points += 1;
    }
    else
        std::cout << "File wasn't opened";
    File.close();
    std::cout << std::endl << "Your score: " << points << std::endl;

    return 0;
}

