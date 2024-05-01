// Программа Menu Chooser
// Демонстрирует работу с инсрукцией switch
#include <iostream>
using namespace std;
int main()
{
    cout << "Difficulty Levels\n\n";
    cout << "0 - Novice\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n";
    cout << "4 - Unbeatable\n\n";
    int choice;
    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    cout << "Choice: ";
    cin >> choice;
    switch (choice)
    {
        case NOVICE:
            cout << "You picked Novice.\n";
            break;
        case EASY:
            cout << "You picked Easy.\n";
            break;
        case NORMAL:
            cout << "You picked Normal.\n";
            break;
        case HARD:
            cout << "You picked Hard.\n";
            break;
        case UNBEATABLE:
            cout << "You picked Unbeateble.\n";
            break;
        default:
            cout << "You made illegal choice.\n";
    }
    return 0;
}