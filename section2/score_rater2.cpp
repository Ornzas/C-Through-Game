// Программа Score Rater 2.0
// Демонструет работу с условием else
#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if(score >= 1000)
    {
        cout << "Your scored 1000 or more. Impressive!\n";
    }
    else
    {
        cout << "You scored less than 1000.\n";
    }
    return 0;
}