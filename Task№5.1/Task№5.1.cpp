#include <iostream> // Библиотека ввода-вывода
#include <string>
#include <iostream>
#include<windows.h>
using namespace std; // Позволяет не писать ::std в коде программы

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); // Активация поддержки кириллицы в консоли

    string word1;
    string word2;
    cout << "Введите первое слово: ";
    getline(cin, word1);
    cout << "Введите второе слово: ";
    getline(cin, word2);
    for (int a = 0; a < word1.length(); a++)
    {
        for (int b = 0; b < word2.length(); b++)
        {
            if (word1.at(word1.length() - 2) == word2.at(word2.length() - 2) && (word1.at(word1.length() - 1) == word2.at(word2.length() - 1))) // Ф-ция at() возвращает ссылку на символ по заданному индексу
                if (word1 == word2)
                    cout << "Слова повторяются! " << endl;
                else
                    cout << "Слова " << word1 << " и " << word2 << " рифмуются!" << endl;
            else
                cout << "Слова " << word1 << " и " << word2 << " не рифмуются." << endl;
            break;
        }
        break;
    }
    system("pause");
}